# QArm Fruit Sorting Robot

MATLAB/Simulink project for an applied robotics coursework task: a Quanser QArm
pick-and-place system that sorts fruit using camera-based YOLO detection, manual
keyboard control, gesture control, and a custom gripper model.

## Project Highlights

- Simulink models for QArm hardware and simulation workflows.
- Python bridge modules callable from MATLAB Function blocks.
- YOLO fruit classifier for banana, tomato, and strawberry detection.
- Hand-gesture and keyboard target-position control modes.
- Custom quad fruit gripper CAD/mesh assets.

## Repository Layout

```text
.
|-- PickAndPlace_Hardware.slx
|-- PickAndPlace_Simulation_QLabs.slx
|-- PickAndPlace_Simulation_Simscape.slx
|-- detect_fruit_matlab.m
|-- gesture_control_wrapper.m
|-- manual_wrapper.m
|-- startup.m
|-- python/
|   |-- yolo_simulink.py
|   |-- gesture_control.py
|   |-- manual_control.py
|   |-- camera_detection.py
|   `-- data.yaml
|-- models/
|   `-- fruit_yolo_best.pt
|-- resources/
|   `-- qarm/
|-- AP/
|   |-- QARM_quad_fruit_gripper.stl
|   |-- gripper_design_sheet.png
|   `-- gripper_render.png
`-- requirements.txt
```

Generated Simulink caches and build outputs are intentionally ignored by git.

## Requirements

- MATLAB with Simulink.
- Quanser Interactive Labs / QArm support packages.
- Python 3.10 or newer.
- A webcam for YOLO or gesture-control modes.

Install Python dependencies:

```powershell
python -m pip install -r requirements.txt
```

## Setup

1. Open MATLAB in this folder.
2. Run:

   ```matlab
   startup
   ```

3. Open one of the Simulink models:

   ```matlab
   open_system("PickAndPlace_Simulation_QLabs.slx")
   open_system("PickAndPlace_Simulation_Simscape.slx")
   open_system("PickAndPlace_Hardware.slx")
   ```

4. Run the model. The MATLAB wrapper files call the Python modules in
   `python/` using the relative path configured by `startup.m`.

## Controls

Manual keyboard control:

- `i` / `k`: move X forward/back.
- `a` / `d`: move Y left/right.
- `w` / `s`: move Z up/down.
- `q`: close gripper.
- `e`: open gripper.
- `esc`: stop the keyboard listener.

Gesture control:

- Move the detected hand outside the center circle to command X/Y movement.
- Move the hand closer/farther from the camera to adjust Z.
- Open/close hand shape controls the gripper.

YOLO detection output mapping:

- `0`: no fruit detected.
- `1`: strawberry.
- `2`: banana.
- `3`: tomato.

## Notes

The model file `models/fruit_yolo_best.pt` is the trained fruit detector used by
`python/yolo_simulink.py`. Training runs, caches, generated C code, executable
files, and Simulink build folders are not committed because they can be
regenerated and make the repository harder to review.
