import os
import threading

import cv2
from ultralytics import YOLO


BASE_DIR = os.path.dirname(os.path.dirname(__file__))
MODEL_PATH = os.path.join(BASE_DIR, "models", "fruit_yolo_best.pt")
CONF_THRESHOLD = 0.75
CAMERA_INDEX = 2

model = YOLO(MODEL_PATH)

latest_result = 0
running = False
thread_started = False
cap = None


def _label_to_code(label: str) -> int:
    normalized = label.lower()
    if normalized == "strawberry":
        return 1
    if normalized == "banana":
        return 2
    if normalized == "tomato":
        return 3
    return 0


def camera_loop():
    global latest_result, running, cap, thread_started

    cap = cv2.VideoCapture(CAMERA_INDEX)

    if not cap.isOpened():
        print("[ERROR] Camera not opened")
        thread_started = False
        running = False
        return

    cv2.namedWindow("YOLO Detection", cv2.WINDOW_NORMAL)

    while running:
        ret, frame = cap.read()
        if not ret:
            continue

        results = model(frame)
        annotated_frame = results[0].plot()
        cv2.imshow("YOLO Detection", annotated_frame)

        key = cv2.waitKey(1) & 0xFF
        if key == 27 or key == ord("q"):
            print("[INFO] Closing camera...")
            running = False
            break

        boxes = results[0].boxes
        if boxes is None or len(boxes) == 0:
            latest_result = 0
            continue

        confs = boxes.conf.cpu().numpy()
        best_idx = confs.argmax()
        best_conf = confs[best_idx]

        if best_conf < CONF_THRESHOLD:
            latest_result = 0
            continue

        cls = int(boxes.cls[best_idx])
        label = results[0].names[cls]
        latest_result = _label_to_code(label)
        print(f"[YOLO] Detected: {label} ({best_conf:.2f})")

    if cap is not None:
        cap.release()

    cv2.destroyAllWindows()
    thread_started = False
    running = False
    print("[INFO] Camera fully released.")


def start_camera():
    global thread_started, running

    if not thread_started:
        running = True
        thread = threading.Thread(target=camera_loop, daemon=True)
        thread.start()
        thread_started = True


def detect_fruit(dummy=0):
    start_camera()
    return latest_result
