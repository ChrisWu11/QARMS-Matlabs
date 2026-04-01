function [pos, grip] = manual_wrapper()

coder.extrinsic('py.manual_control.get_control');

pos = [0;0;0];
grip = 0;

data = py.manual_control.get_control

% ✅ 一次性转换（核心）
arr = double(data);

% ✅ 拆 MATLAB 数组（不是 Python）
pos = arr(1:3)';
grip = arr(4);

end