function [pos, grip] = gesture_control_wrapper()
%GESTURE_CONTROL_WRAPPER Return target pose and gripper command from Python.

coder.extrinsic('ensure_python_path', 'py.gesture_control.get_control');

pos = [0; 0; 0];
grip = 0;

ensure_python_path();
data = py.gesture_control.get_control();

arr = double(data);

pos = arr(1:3)';
grip = arr(4);
end
