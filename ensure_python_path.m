function ensure_python_path()
repoRoot = fileparts(mfilename('fullpath'));
pythonDir = fullfile(repoRoot, 'python');

if count(py.sys.path, pythonDir) == 0
    insert(py.sys.path, int32(0), pythonDir);
end
end
