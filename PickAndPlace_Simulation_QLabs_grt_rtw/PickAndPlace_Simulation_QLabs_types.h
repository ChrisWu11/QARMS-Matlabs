/*
 * PickAndPlace_Simulation_QLabs_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PickAndPlace_Simulation_QLabs".
 *
 * Model version              : 8.0
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Mar  5 21:02:28 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PickAndPlace_Simulation_QLabs_types_h_
#define PickAndPlace_Simulation_QLabs_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_sdAmwXbnJnEmimT0NaJRtAD
#define struct_tag_sdAmwXbnJnEmimT0NaJRtAD

struct tag_sdAmwXbnJnEmimT0NaJRtAD
{
  real_T tv_sec;
  real_T tv_nsec;
};

#endif                                 /* struct_tag_sdAmwXbnJnEmimT0NaJRtAD */

#ifndef typedef_sdAmwXbnJnEmimT0NaJRtAD_PickA_T
#define typedef_sdAmwXbnJnEmimT0NaJRtAD_PickA_T

typedef struct tag_sdAmwXbnJnEmimT0NaJRtAD sdAmwXbnJnEmimT0NaJRtAD_PickA_T;

#endif                             /* typedef_sdAmwXbnJnEmimT0NaJRtAD_PickA_T */

/* Custom Type definition for MATLABSystem: '<S2>/MATLAB System' */
#include "coder_posix_time.h"
#ifndef struct_tag_201zDtIG0hHUWmsDCIW8cE
#define struct_tag_201zDtIG0hHUWmsDCIW8cE

struct tag_201zDtIG0hHUWmsDCIW8cE
{
  int32_T __dummy;
};

#endif                                 /* struct_tag_201zDtIG0hHUWmsDCIW8cE */

#ifndef typedef_e_robotics_manip_internal_Fas_T
#define typedef_e_robotics_manip_internal_Fas_T

typedef struct tag_201zDtIG0hHUWmsDCIW8cE e_robotics_manip_internal_Fas_T;

#endif                             /* typedef_e_robotics_manip_internal_Fas_T */

#ifndef struct_tag_Waee0GhIG0liB2qTtz3HrE
#define struct_tag_Waee0GhIG0liB2qTtz3HrE

struct tag_Waee0GhIG0liB2qTtz3HrE
{
  sdAmwXbnJnEmimT0NaJRtAD_PickA_T StartTime;
};

#endif                                 /* struct_tag_Waee0GhIG0liB2qTtz3HrE */

#ifndef typedef_e_robotics_core_internal_Syst_T
#define typedef_e_robotics_core_internal_Syst_T

typedef struct tag_Waee0GhIG0liB2qTtz3HrE e_robotics_core_internal_Syst_T;

#endif                             /* typedef_e_robotics_core_internal_Syst_T */

#ifndef struct_tag_3BSkcDv2LER5BCV49FILBD
#define struct_tag_3BSkcDv2LER5BCV49FILBD

struct tag_3BSkcDv2LER5BCV49FILBD
{
  void *CollisionPrimitive;
};

#endif                                 /* struct_tag_3BSkcDv2LER5BCV49FILBD */

#ifndef typedef_f_robotics_manip_internal_Col_T
#define typedef_f_robotics_manip_internal_Col_T

typedef struct tag_3BSkcDv2LER5BCV49FILBD f_robotics_manip_internal_Col_T;

#endif                             /* typedef_f_robotics_manip_internal_Col_T */

#ifndef struct_tag_4JsrFHKaAew6w7N5GrPwAE
#define struct_tag_4JsrFHKaAew6w7N5GrPwAE

struct tag_4JsrFHKaAew6w7N5GrPwAE
{
  real_T Length;
  char_T Vector[200];
};

#endif                                 /* struct_tag_4JsrFHKaAew6w7N5GrPwAE */

#ifndef typedef_e_robotics_manip_internal_Cha_T
#define typedef_e_robotics_manip_internal_Cha_T

typedef struct tag_4JsrFHKaAew6w7N5GrPwAE e_robotics_manip_internal_Cha_T;

#endif                             /* typedef_e_robotics_manip_internal_Cha_T */

#ifndef struct_tag_4FlUjor1v5IQoc0Aw4qb9F
#define struct_tag_4FlUjor1v5IQoc0Aw4qb9F

struct tag_4FlUjor1v5IQoc0Aw4qb9F
{
  real_T VelocityNumber;
  real_T PositionNumber;
  boolean_T InTree;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  e_robotics_manip_internal_Cha_T NameInternal;
  real_T PositionLimitsInternal[14];
  real_T HomePositionInternal[7];
  real_T JointAxisInternal[3];
  real_T MotionSubspaceInternal[36];
  e_robotics_manip_internal_Cha_T TypeInternal;
};

#endif                                 /* struct_tag_4FlUjor1v5IQoc0Aw4qb9F */

#ifndef typedef_b_rigidBodyJoint_PickAndPlace_T
#define typedef_b_rigidBodyJoint_PickAndPlace_T

typedef struct tag_4FlUjor1v5IQoc0Aw4qb9F b_rigidBodyJoint_PickAndPlace_T;

#endif                             /* typedef_b_rigidBodyJoint_PickAndPlace_T */

#ifndef struct_tag_08JLLqocEnL0nOsC9NipeC
#define struct_tag_08JLLqocEnL0nOsC9NipeC

struct tag_08JLLqocEnL0nOsC9NipeC
{
  void *CollisionPrimitive;
  real_T LocalPose[16];
  real_T WorldPose[16];
  real_T MeshScale[3];
};

#endif                                 /* struct_tag_08JLLqocEnL0nOsC9NipeC */

#ifndef typedef_f_robotics_manip_internal_C_o_T
#define typedef_f_robotics_manip_internal_C_o_T

typedef struct tag_08JLLqocEnL0nOsC9NipeC f_robotics_manip_internal_C_o_T;

#endif                             /* typedef_f_robotics_manip_internal_C_o_T */

#ifndef struct_tag_I7lxy6BEal0s7MBxygd9JE
#define struct_tag_I7lxy6BEal0s7MBxygd9JE

struct tag_I7lxy6BEal0s7MBxygd9JE
{
  real_T f1[16];
};

#endif                                 /* struct_tag_I7lxy6BEal0s7MBxygd9JE */

#ifndef typedef_h_cell_wrap_PickAndPlace_Simu_T
#define typedef_h_cell_wrap_PickAndPlace_Simu_T

typedef struct tag_I7lxy6BEal0s7MBxygd9JE h_cell_wrap_PickAndPlace_Simu_T;

#endif                             /* typedef_h_cell_wrap_PickAndPlace_Simu_T */

#ifndef struct_tag_0wAA6tLoej0zPuTCXXY0HG
#define struct_tag_0wAA6tLoej0zPuTCXXY0HG

struct tag_0wAA6tLoej0zPuTCXXY0HG
{
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  e_robotics_manip_internal_Cha_T NameInternal;
  real_T JointAxisInternal[3];
  real_T MotionSubspaceInternal[36];
  e_robotics_manip_internal_Cha_T TypeInternal;
};

#endif                                 /* struct_tag_0wAA6tLoej0zPuTCXXY0HG */

#ifndef typedef_b_rigidBodyJoint_PickAndPla_o_T
#define typedef_b_rigidBodyJoint_PickAndPla_o_T

typedef struct tag_0wAA6tLoej0zPuTCXXY0HG b_rigidBodyJoint_PickAndPla_o_T;

#endif                             /* typedef_b_rigidBodyJoint_PickAndPla_o_T */

#ifndef struct_emxArray_tag_08JLLqocEnL0nOsC9N
#define struct_emxArray_tag_08JLLqocEnL0nOsC9N

struct emxArray_tag_08JLLqocEnL0nOsC9N
{
  f_robotics_manip_internal_C_o_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                              /* struct_emxArray_tag_08JLLqocEnL0nOsC9N */

#ifndef typedef_emxArray_f_robotics_manip_int_T
#define typedef_emxArray_f_robotics_manip_int_T

typedef struct emxArray_tag_08JLLqocEnL0nOsC9N emxArray_f_robotics_manip_int_T;

#endif                             /* typedef_emxArray_f_robotics_manip_int_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_real_T */

#ifndef typedef_emxArray_real_T_PickAndPlace__T
#define typedef_emxArray_real_T_PickAndPlace__T

typedef struct emxArray_real_T emxArray_real_T_PickAndPlace__T;

#endif                             /* typedef_emxArray_real_T_PickAndPlace__T */

#ifndef struct_emxArray_tag_3BSkcDv2LER5BCV49F
#define struct_emxArray_tag_3BSkcDv2LER5BCV49F

struct emxArray_tag_3BSkcDv2LER5BCV49F
{
  f_robotics_manip_internal_Col_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                              /* struct_emxArray_tag_3BSkcDv2LER5BCV49F */

#ifndef typedef_emxArray_f_robotics_manip_i_o_T
#define typedef_emxArray_f_robotics_manip_i_o_T

typedef struct emxArray_tag_3BSkcDv2LER5BCV49F emxArray_f_robotics_manip_i_o_T;

#endif                             /* typedef_emxArray_f_robotics_manip_i_o_T */

#ifndef struct_tag_u8YYD3p7O6nMC3eMQHUgpF
#define struct_tag_u8YYD3p7O6nMC3eMQHUgpF

struct tag_u8YYD3p7O6nMC3eMQHUgpF
{
  boolean_T matlabCodegenIsDeleted;
  emxArray_f_robotics_manip_i_o_T *CollisionGeometries;
  real_T MaxElements;
  real_T Size;
};

#endif                                 /* struct_tag_u8YYD3p7O6nMC3eMQHUgpF */

#ifndef typedef_g_robotics_manip_internal_Col_T
#define typedef_g_robotics_manip_internal_Col_T

typedef struct tag_u8YYD3p7O6nMC3eMQHUgpF g_robotics_manip_internal_Col_T;

#endif                             /* typedef_g_robotics_manip_internal_Col_T */

#ifndef struct_tag_SmqPnyswO7ChBsixKhsQpC
#define struct_tag_SmqPnyswO7ChBsixKhsQpC

struct tag_SmqPnyswO7ChBsixKhsQpC
{
  boolean_T matlabCodegenIsDeleted;
  e_robotics_manip_internal_Cha_T NameInternal;
  b_rigidBodyJoint_PickAndPla_o_T JointInternal;
  real_T ParentIndex;
  g_robotics_manip_internal_Col_T CollisionsInternal;
};

#endif                                 /* struct_tag_SmqPnyswO7ChBsixKhsQpC */

#ifndef typedef_e_robotics_manip_internal_Rig_T
#define typedef_e_robotics_manip_internal_Rig_T

typedef struct tag_SmqPnyswO7ChBsixKhsQpC e_robotics_manip_internal_Rig_T;

#endif                             /* typedef_e_robotics_manip_internal_Rig_T */

#ifndef struct_tag_kEhfpS3i7lrRPqg2128b5
#define struct_tag_kEhfpS3i7lrRPqg2128b5

struct tag_kEhfpS3i7lrRPqg2128b5
{
  boolean_T matlabCodegenIsDeleted;
  real_T NumBodies;
  e_robotics_manip_internal_Rig_T Base;
  e_robotics_manip_internal_Rig_T *Bodies[5];
  real_T PositionNumber;
  e_robotics_manip_internal_Rig_T _pobj0[10];
};

#endif                                 /* struct_tag_kEhfpS3i7lrRPqg2128b5 */

#ifndef typedef_f_robotics_manip_internal_Rig_T
#define typedef_f_robotics_manip_internal_Rig_T

typedef struct tag_kEhfpS3i7lrRPqg2128b5 f_robotics_manip_internal_Rig_T;

#endif                             /* typedef_f_robotics_manip_internal_Rig_T */

#ifndef struct_tag_JSvAYUjCafqjB8kn3jCrZF
#define struct_tag_JSvAYUjCafqjB8kn3jCrZF

struct tag_JSvAYUjCafqjB8kn3jCrZF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  f_robotics_manip_internal_Rig_T TreeInternal;
};

#endif                                 /* struct_tag_JSvAYUjCafqjB8kn3jCrZF */

#ifndef typedef_robotics_slmanip_internal_blo_T
#define typedef_robotics_slmanip_internal_blo_T

typedef struct tag_JSvAYUjCafqjB8kn3jCrZF robotics_slmanip_internal_blo_T;

#endif                             /* typedef_robotics_slmanip_internal_blo_T */

#ifndef struct_emxArray_real_T_7x2
#define struct_emxArray_real_T_7x2

struct emxArray_real_T_7x2
{
  real_T data[14];
  int32_T size[2];
};

#endif                                 /* struct_emxArray_real_T_7x2 */

#ifndef typedef_emxArray_real_T_7x2_PickAndPl_T
#define typedef_emxArray_real_T_7x2_PickAndPl_T

typedef struct emxArray_real_T_7x2 emxArray_real_T_7x2_PickAndPl_T;

#endif                             /* typedef_emxArray_real_T_7x2_PickAndPl_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_boolean_T */

#ifndef typedef_emxArray_boolean_T_PickAndPla_T
#define typedef_emxArray_boolean_T_PickAndPla_T

typedef struct emxArray_boolean_T emxArray_boolean_T_PickAndPla_T;

#endif                             /* typedef_emxArray_boolean_T_PickAndPla_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_int32_T */

#ifndef typedef_emxArray_int32_T_PickAndPlace_T
#define typedef_emxArray_int32_T_PickAndPlace_T

typedef struct emxArray_int32_T emxArray_int32_T_PickAndPlace_T;

#endif                             /* typedef_emxArray_int32_T_PickAndPlace_T */

#ifndef struct_tag_njgMijsxb9dK8Az3nVsuPF
#define struct_tag_njgMijsxb9dK8Az3nVsuPF

struct tag_njgMijsxb9dK8Az3nVsuPF
{
  boolean_T matlabCodegenIsDeleted;
  emxArray_f_robotics_manip_int_T *CollisionGeometries;
  real_T MaxElements;
  real_T Size;
};

#endif                                 /* struct_tag_njgMijsxb9dK8Az3nVsuPF */

#ifndef typedef_g_robotics_manip_internal_C_o_T
#define typedef_g_robotics_manip_internal_C_o_T

typedef struct tag_njgMijsxb9dK8Az3nVsuPF g_robotics_manip_internal_C_o_T;

#endif                             /* typedef_g_robotics_manip_internal_C_o_T */

#ifndef struct_tag_1HuK0MXPpfff5Kyc0VNHlF
#define struct_tag_1HuK0MXPpfff5Kyc0VNHlF

struct tag_1HuK0MXPpfff5Kyc0VNHlF
{
  boolean_T matlabCodegenIsDeleted;
  e_robotics_manip_internal_Cha_T NameInternal;
  real_T Index;
  b_rigidBodyJoint_PickAndPlace_T *JointInternal;
  real_T ParentIndex;
  real_T MassInternal;
  real_T CenterOfMassInternal[3];
  real_T InertiaInternal[9];
  real_T SpatialInertia[36];
  g_robotics_manip_internal_C_o_T *CollisionsInternal;
};

#endif                                 /* struct_tag_1HuK0MXPpfff5Kyc0VNHlF */

#ifndef typedef_f_robotics_manip_internal_R_o_T
#define typedef_f_robotics_manip_internal_R_o_T

typedef struct tag_1HuK0MXPpfff5Kyc0VNHlF f_robotics_manip_internal_R_o_T;

#endif                             /* typedef_f_robotics_manip_internal_R_o_T */

#ifndef struct_tag_39WUDiqWLcguFyzjiM0Q8D
#define struct_tag_39WUDiqWLcguFyzjiM0Q8D

struct tag_39WUDiqWLcguFyzjiM0Q8D
{
  boolean_T matlabCodegenIsDeleted;
  real_T NumBodies;
  f_robotics_manip_internal_R_o_T Base;
  real_T Gravity[3];
  f_robotics_manip_internal_R_o_T *Bodies[5];
  g_robotics_manip_internal_C_o_T _pobj0[11];
  b_rigidBodyJoint_PickAndPlace_T _pobj1[11];
  f_robotics_manip_internal_R_o_T _pobj2[10];
};

#endif                                 /* struct_tag_39WUDiqWLcguFyzjiM0Q8D */

#ifndef typedef_g_robotics_manip_internal_Rig_T
#define typedef_g_robotics_manip_internal_Rig_T

typedef struct tag_39WUDiqWLcguFyzjiM0Q8D g_robotics_manip_internal_Rig_T;

#endif                             /* typedef_g_robotics_manip_internal_Rig_T */

#ifndef struct_tag_wz6gQ4RlbUE90RNFVfcOLG
#define struct_tag_wz6gQ4RlbUE90RNFVfcOLG

struct tag_wz6gQ4RlbUE90RNFVfcOLG
{
  boolean_T matlabCodegenIsDeleted;
  real_T NumBodies;
  f_robotics_manip_internal_R_o_T Base;
  e_robotics_manip_internal_Fas_T FastVisualizationHelper;
  f_robotics_manip_internal_R_o_T *Bodies[5];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[10];
  real_T VelocityDoFMap[10];
  f_robotics_manip_internal_R_o_T _pobj0[5];
  g_robotics_manip_internal_C_o_T _pobj1[6];
  b_rigidBodyJoint_PickAndPlace_T _pobj2[6];
};

#endif                                 /* struct_tag_wz6gQ4RlbUE90RNFVfcOLG */

#ifndef typedef_h_robotics_manip_internal_Rig_T
#define typedef_h_robotics_manip_internal_Rig_T

typedef struct tag_wz6gQ4RlbUE90RNFVfcOLG h_robotics_manip_internal_Rig_T;

#endif                             /* typedef_h_robotics_manip_internal_Rig_T */

#ifndef struct_tag_Hn5J7DDqJCu5ZUjovdRv1
#define struct_tag_Hn5J7DDqJCu5ZUjovdRv1

struct tag_Hn5J7DDqJCu5ZUjovdRv1
{
  boolean_T matlabCodegenIsDeleted;
  h_robotics_manip_internal_Rig_T *Robot;
  real_T WeightMatrix[36];
  emxArray_real_T_PickAndPlace__T *Limits;
  real_T Tform[16];
  emxArray_real_T_PickAndPlace__T *ErrTemp;
  real_T CostTemp;
  emxArray_real_T_PickAndPlace__T *GradTemp;
  real_T BodyIndex;
  real_T KinematicModel;
};

#endif                                 /* struct_tag_Hn5J7DDqJCu5ZUjovdRv1 */

#ifndef typedef_d_robotics_manip_internal_IKE_T
#define typedef_d_robotics_manip_internal_IKE_T

typedef struct tag_Hn5J7DDqJCu5ZUjovdRv1 d_robotics_manip_internal_IKE_T;

#endif                             /* typedef_d_robotics_manip_internal_IKE_T */

#ifndef struct_tag_qpxbtZ88h6FV8jkTwLUV6F
#define struct_tag_qpxbtZ88h6FV8jkTwLUV6F

struct tag_qpxbtZ88h6FV8jkTwLUV6F
{
  boolean_T matlabCodegenIsDeleted;
  char_T Name[18];
  boolean_T ConstraintsOn;
  real_T SolutionTolerance;
  boolean_T RandomRestart;
  d_robotics_manip_internal_IKE_T *ExtraArgs;
  real_T MaxNumIteration;
  real_T MaxTime;
  real_T SeedInternal[4];
  real_T MaxTimeInternal;
  real_T MaxNumIterationInternal;
  real_T StepTolerance;
  e_robotics_core_internal_Syst_T TimeObj;
  real_T GradientTolerance;
  real_T ErrorChangeTolerance;
  real_T DampingBias;
  boolean_T UseErrorDamping;
  e_robotics_core_internal_Syst_T TimeObjInternal;
};

#endif                                 /* struct_tag_qpxbtZ88h6FV8jkTwLUV6F */

#ifndef typedef_d_robotics_core_internal_Erro_T
#define typedef_d_robotics_core_internal_Erro_T

typedef struct tag_qpxbtZ88h6FV8jkTwLUV6F d_robotics_core_internal_Erro_T;

#endif                             /* typedef_d_robotics_core_internal_Erro_T */

#ifndef struct_tag_6ZnDL3Z2BiXsXZDF1yBK1G
#define struct_tag_6ZnDL3Z2BiXsXZDF1yBK1G

struct tag_6ZnDL3Z2BiXsXZDF1yBK1G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T RigidBodyTreeKinematicModel;
  d_robotics_core_internal_Erro_T *Solver;
  emxArray_real_T_PickAndPlace__T *Limits;
  h_robotics_manip_internal_Rig_T *RigidBodyTreeInternal;
  d_robotics_manip_internal_IKE_T _pobj0;
  b_rigidBodyJoint_PickAndPlace_T _pobj1[10];
  f_robotics_manip_internal_R_o_T _pobj2[5];
  g_robotics_manip_internal_C_o_T _pobj3[11];
  h_robotics_manip_internal_Rig_T _pobj4;
  d_robotics_core_internal_Erro_T _pobj5;
};

#endif                                 /* struct_tag_6ZnDL3Z2BiXsXZDF1yBK1G */

#ifndef typedef_b_inverseKinematics_PickAndPl_T
#define typedef_b_inverseKinematics_PickAndPl_T

typedef struct tag_6ZnDL3Z2BiXsXZDF1yBK1G b_inverseKinematics_PickAndPl_T;

#endif                             /* typedef_b_inverseKinematics_PickAndPl_T */

#ifndef struct_tag_1YL3RkrbPHulLhripAHUMD
#define struct_tag_1YL3RkrbPHulLhripAHUMD

struct tag_1YL3RkrbPHulLhripAHUMD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  g_robotics_manip_internal_Rig_T TreeInternal;
  b_inverseKinematics_PickAndPl_T IKInternal;
};

#endif                                 /* struct_tag_1YL3RkrbPHulLhripAHUMD */

#ifndef typedef_robotics_slmanip_internal_b_o_T
#define typedef_robotics_slmanip_internal_b_o_T

typedef struct tag_1YL3RkrbPHulLhripAHUMD robotics_slmanip_internal_b_o_T;

#endif                             /* typedef_robotics_slmanip_internal_b_o_T */

#ifndef typedef_c_robotics_core_internal_NLPS_T
#define typedef_c_robotics_core_internal_NLPS_T

typedef int32_T c_robotics_core_internal_NLPS_T;

#endif                             /* typedef_c_robotics_core_internal_NLPS_T */

#ifndef robotics_core_internal_NLPSolverExitFlags_constants
#define robotics_core_internal_NLPSolverExitFlags_constants

/* enum robotics_core_internal_NLPSolverExitFlags */
#define LocalMinimumFound              (1)
#define IterationLimitExceeded         (2)
#define TimeLimitExceeded              (3)
#define StepSizeBelowMinimum           (4)
#define ChangeInErrorBelowMinimum      (5)
#define SearchDirectionInvalid         (6)
#define HessianNotPositiveSemidefinite (7)
#define TrustRegionRadiusBelowMinimum  (8)
#endif                 /* robotics_core_internal_NLPSolverExitFlags_constants */

/* Parameters for system: '<S1>/closeEnough' */
typedef struct P_closeEnough_PickAndPlace_Si_T_ P_closeEnough_PickAndPlace_Si_T;

/* Parameters (default storage) */
typedef struct P_PickAndPlace_Simulation_QLa_T_ P_PickAndPlace_Simulation_QLa_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_PickAndPlace_Simulati_T RT_MODEL_PickAndPlace_Simulat_T;

#endif                              /* PickAndPlace_Simulation_QLabs_types_h_ */
