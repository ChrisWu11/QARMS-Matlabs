function out = detect_fruit_matlab()
% detect_fruit_matlab
% 输出: 分类结果 (double)

    persistent isInit;

    try
        % ===== 初始化（只执行一次）=====
        if isempty(isInit)
            disp("Initializing Python environment...");

            if count(py.sys.path, 'D:\project\yolo') == 0
                insert(py.sys.path, int32(0), 'D:\project\yolo');
            end

            py.importlib.import_module('yolo_simulink');

            isInit = true;
            disp("Python module loaded successfully.");
        end

        % ===== 调用 Python YOLO =====
        result = py.yolo_simulink.detect_fruit();

        % ===== 转 MATLAB 类型 =====
        out = double(result);

        switch int32(out)
            case 1
                fprintf('[YOLO] 识别: strawberry\n');
            case 2
                fprintf('[YOLO] 识别: banana\n');
            case 3
                fprintf('[YOLO] 识别: tomato\n');
            case 0
                fprintf('[YOLO] 未检测到\n');
        end

    catch ME
        disp("==== ERROR in detect_fruit_matlab ====");
        disp(ME.message);
        out = 0;
    end

end