import threading
import time

import cv2
import mediapipe as mp
import numpy as np


current_target = np.array([0.65, 0.0, 0.29], dtype=float)
gripper = 0
running = True
thread_started = False

RADIUS = 150
STEP_XY = 0.02
Z_DEADZONE = 0.01
Z_SCALE = 5.0
Z_STEP = 0.02

OPEN_THRESHOLD = 3
CLOSE_THRESHOLD = 3

MIN_BOUND = np.array([0.4, -0.4, 0.15])
MAX_BOUND = np.array([0.9, 0.4, 0.6])

mp_hands = mp.solutions.hands
mp_draw = mp.solutions.drawing_utils


def is_hand_open(hand_landmarks):
    tips = [8, 12, 16, 20]
    open_count = 0
    for tip in tips:
        if hand_landmarks.landmark[tip].y < hand_landmarks.landmark[tip - 2].y:
            open_count += 1
    return open_count >= 2


def get_hand_size(hand_landmarks):
    x1 = hand_landmarks.landmark[5].x
    y1 = hand_landmarks.landmark[5].y
    x2 = hand_landmarks.landmark[17].x
    y2 = hand_landmarks.landmark[17].y
    return np.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)


def camera_loop():
    global current_target, gripper, running, thread_started

    cap = cv2.VideoCapture(0, cv2.CAP_DSHOW)

    if not cap.isOpened():
        print("[ERROR] Camera failed")
        thread_started = False
        return

    hands = mp_hands.Hands(max_num_hands=1)
    open_counter = 0
    close_counter = 0
    base_hand_size = None

    print("[INIT] Gesture thread started")

    while running:
        ret, frame = cap.read()
        if not ret:
            continue

        frame = cv2.flip(frame, 1)
        h, w, _ = frame.shape
        center = (w // 2, h // 2)

        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = hands.process(rgb)

        if results.multi_hand_landmarks:
            for hand_landmarks in results.multi_hand_landmarks:
                mp_draw.draw_landmarks(frame, hand_landmarks, mp_hands.HAND_CONNECTIONS)

                cx = int(hand_landmarks.landmark[0].x * w)
                cy = int(hand_landmarks.landmark[0].y * h)

                if is_hand_open(hand_landmarks):
                    open_counter += 1
                    close_counter = 0
                else:
                    close_counter += 1
                    open_counter = 0

                if gripper == 1:
                    if open_counter >= OPEN_THRESHOLD:
                        gripper = 0
                elif close_counter >= CLOSE_THRESHOLD:
                    gripper = 1

                dx = cx - center[0]
                dy = cy - center[1]
                dist = np.sqrt(dx ** 2 + dy ** 2)

                move_xy = np.array([0.0, 0.0, 0.0])
                if dist > RADIUS:
                    if abs(dx) > abs(dy):
                        move_xy[0] = STEP_XY if dx > 0 else -STEP_XY
                    else:
                        move_xy[1] = STEP_XY if dy > 0 else -STEP_XY

                hand_size = get_hand_size(hand_landmarks)
                if base_hand_size is None:
                    base_hand_size = hand_size

                dz = hand_size - base_hand_size
                dz = 0 if abs(dz) < Z_DEADZONE else dz * Z_SCALE
                dz = np.clip(dz, -1, 1)
                move_z = np.array([0.0, 0.0, dz * Z_STEP])

                current_target += move_xy + move_z
                current_target = np.clip(current_target, MIN_BOUND, MAX_BOUND)
                base_hand_size = 0.95 * base_hand_size + 0.05 * hand_size

        cv2.circle(frame, center, RADIUS, (0, 255, 0), 2)
        cv2.putText(
            frame,
            f"XYZ: {np.round(current_target, 3)}",
            (20, 40),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.6,
            (255, 255, 255),
            2,
        )
        cv2.putText(
            frame,
            f"Gripper: {gripper}",
            (20, 70),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.6,
            (0, 200, 255),
            2,
        )

        z_norm = (current_target[2] - MIN_BOUND[2]) / (MAX_BOUND[2] - MIN_BOUND[2])
        bar_x = int(20 + z_norm * 200)
        cv2.rectangle(frame, (20, 100), (220, 120), (100, 100, 100), 2)
        cv2.rectangle(frame, (20, 100), (bar_x, 120), (0, 255, 255), -1)
        cv2.putText(frame, "Z", (230, 115), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 1)

        cv2.imshow("Gesture Control", frame)
        if cv2.waitKey(1) & 0xFF == 27:
            break

        time.sleep(0.01)

    print("[STOP] Camera stopped")
    cap.release()
    cv2.destroyAllWindows()
    thread_started = False


def start_thread():
    global thread_started

    if not thread_started:
        thread = threading.Thread(target=camera_loop, daemon=True)
        thread.start()
        thread_started = True


def get_control():
    start_thread()
    return [
        float(current_target[0]),
        float(current_target[1]),
        float(current_target[2]),
        float(gripper),
    ]
