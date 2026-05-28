function [pos, grip] = manual_wrapper()
%MANUAL_WRAPPER Return target pose and gripper command from keyboard input.

coder.extrinsic('ensure_python_path', 'py.manual_control.get_control');

pos = [0; 0; 0];
grip = 0;

ensure_python_path();
data = py.manual_control.get_control();

arr = double(data);

pos = arr(1:3)';
grip = arr(4);
end
