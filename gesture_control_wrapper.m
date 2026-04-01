function [pos, grip] = gesture_control_wrapper()

coder.extrinsic('py.gesture_control.get_control');

pos = [0;0;0];
grip = 0;

data = py.gesture_control.get_control();

% 转 MATLAB
arr = double(data);

pos = arr(1:3)';
grip = arr(4);

end