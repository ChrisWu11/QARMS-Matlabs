FILES
1. soft_gripper_visual.stl
2. soft_gripper_design.png
3. urdf_snippet_add_soft_gripper.xml

INSTALL
1. Copy STL to:
E:\Applied Robotics\project-ar\QARMS-Matlabs-main\resources\qarm\meshes\

2. Open:
E:\Applied Robotics\project-ar\QARMS-Matlabs-main\resources\qarm\urdf\QARM.urdf

3. Paste XML snippet immediately before </robot>

4. In MATLAB run:
clear all
bdclose('all')
rehash toolboxcache
cd('E:\Applied Robotics\project-ar\QARMS-Matlabs-main')
qarmRigidBodyTree = importrobot('Resources/qarm/urdf/QARM.urdf');
show(qarmRigidBodyTree);

5. Then open:
open_system('PickAndPlace_Simulation_Simscape')

6. Run and inspect Mechanics Explorer.
