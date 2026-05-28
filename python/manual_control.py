import threading
import time

import keyboard
import numpy as np


current_target = np.array([0.65, 0.0, 0.29], dtype=float)
gripper = 0

STEP = 0.01
MIN_BOUND = np.array([0.4, -0.4, 0.15])
MAX_BOUND = np.array([0.9, 0.4, 0.6])

thread_started = False
debug_started = False
running = True


def on_key(event):
    global current_target, gripper, running

    key = event.name

    if key == "i":
        current_target[0] += STEP
    elif key == "k":
        current_target[0] -= STEP
    elif key == "a":
        current_target[1] += STEP
    elif key == "d":
        current_target[1] -= STEP
    elif key == "w":
        current_target[2] += STEP
    elif key == "s":
        current_target[2] -= STEP
    elif key == "q":
        gripper = 1
    elif key == "e":
        gripper = 0
    elif key == "esc":
        print("[EXIT] ESC pressed, shutting down...")
        running = False
        keyboard.unhook_all()

    current_target = np.clip(current_target, MIN_BOUND, MAX_BOUND)
    print(f"[STATE] target={current_target}, gripper={gripper}")


def start_keyboard():
    global thread_started

    if not thread_started:
        print("[INIT] Keyboard listener started")
        keyboard.on_press(on_key)
        thread_started = True


def debug_loop():
    global running

    while running:
        print(f"[LOOP] current_target={current_target}, gripper={gripper}")
        time.sleep(2)
    print("[DEBUG] loop stopped")


def start_debug():
    global debug_started

    if not debug_started:
        thread = threading.Thread(target=debug_loop, daemon=True)
        thread.start()
        debug_started = True


def get_control():
    if not running:
        print("[INFO] System stopped")
        return [0.0, 0.0, 0.0, 0.0]

    start_keyboard()
    start_debug()

    return [
        float(current_target[0]),
        float(current_target[1]),
        float(current_target[2]),
        float(gripper),
    ]
