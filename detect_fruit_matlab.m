function out = detect_fruit_matlab()
%DETECT_FRUIT_MATLAB Return fruit class detected by the Python YOLO bridge.
% Output mapping: 0 = none, 1 = strawberry, 2 = banana, 3 = tomato.

    persistent isInit;

    try
        if isempty(isInit)
            disp('Initializing Python environment...');
            ensure_python_path();
            py.importlib.import_module('yolo_simulink');
            isInit = true;
            disp('Python module loaded successfully.');
        end

        result = py.yolo_simulink.detect_fruit();
        out = double(result);

        switch int32(out)
            case 1
                fprintf('[YOLO] Detected: strawberry\n');
            case 2
                fprintf('[YOLO] Detected: banana\n');
            case 3
                fprintf('[YOLO] Detected: tomato\n');
            case 0
                fprintf('[YOLO] No fruit detected\n');
        end

    catch ME
        disp('==== ERROR in detect_fruit_matlab ====');
        disp(ME.message);
        out = 0;
    end
end
