/*
 * PickAndPlace_Simulation_QLabs.c
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

#include "PickAndPlace_Simulation_QLabs.h"
#include "rtwtypes.h"
#include "PickAndPlace_Simulation_QLabs_types.h"
#include "PickAndPlace_Simulation_QLabs_private.h"
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "coder_posix_time.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include "rt_defines.h"

/* Named constants for Chart: '<Root>/Chart' */
#define PickAndPlace_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define PickAndPlace_Si_IN_CloseGripper ((uint8_T)1U)
#define PickAndPlace_Sim_IN_OpenGripper ((uint8_T)5U)
#define PickAndPlace_Simul_IN_GotoPlace ((uint8_T)4U)
#define PickAndPlace_Simula_IN_GotoHome ((uint8_T)2U)
#define PickAndPlace_Simula_IN_GotoPick ((uint8_T)3U)
#define PickAndPlace_Simulation_IN_Wait ((uint8_T)6U)

/* Block signals (default storage) */
B_PickAndPlace_Simulation_QLa_T PickAndPlace_Simulation_QLabs_B;

/* Block states (default storage) */
DW_PickAndPlace_Simulation_QL_T PickAndPlace_Simulation_QLab_DW;

/* Real-time model */
static RT_MODEL_PickAndPlace_Simulat_T PickAndPlace_Simulation_QLab_M_;
RT_MODEL_PickAndPlace_Simulat_T *const PickAndPlace_Simulation_QLab_M =
  &PickAndPlace_Simulation_QLab_M_;

/* Forward declaration for local functions */
static void emxInit_f_robotics_manip_intern(emxArray_f_robotics_manip_i_o_T
  **pEmxArray, int32_T numDimensions);
static void emxInitStruct_g_robotics_manip_(g_robotics_manip_internal_Col_T
  *pStruct);
static void emxInitStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitMatrix_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  pMatrix[10]);
static void emxInitStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void PickAndPlace_Simulatio_rand_ogw(real_T r[5]);
static void rigidBodyJoint_set_MotionSubs_o(b_rigidBodyJoint_PickAndPla_o_T *obj,
  const real_T msubspace_data[]);
static void emxEnsureCapacity_f_robotics__o(emxArray_f_robotics_manip_i_o_T
  *emxArray, int32_T oldNumel);
static g_robotics_manip_internal_Col_T *Pic_CollisionSet_CollisionSet_o
  (g_robotics_manip_internal_Col_T *obj);
static e_robotics_manip_internal_Rig_T *PickA_RigidBody_RigidBody_ogwo1
  (e_robotics_manip_internal_Rig_T *obj, const char_T bodyInput[10]);
static void rigidBodyJoint_get_MotionSubs_o(const
  b_rigidBodyJoint_PickAndPla_o_T *obj, real_T msubspace_data[], int32_T
  msubspace_size[2]);
static e_robotics_manip_internal_Rig_T *Pick_RigidBody_RigidBody_ogwo1x
  (e_robotics_manip_internal_Rig_T *obj);
static e_robotics_manip_internal_Rig_T *Pic_RigidBody_RigidBody_ogwo1xx
  (e_robotics_manip_internal_Rig_T *obj);
static e_robotics_manip_internal_Rig_T *Pi_RigidBody_RigidBody_ogwo1xxy
  (e_robotics_manip_internal_Rig_T *obj);
static e_robotics_manip_internal_Rig_T *P_RigidBody_RigidBody_ogwo1xxyk
  (e_robotics_manip_internal_Rig_T *obj);
static e_robotics_manip_internal_Rig_T *RigidBody_RigidBody_ogwo1xxyks
  (e_robotics_manip_internal_Rig_T *obj);
static void Pic_GetTransformBlock_setupImpl(robotics_slmanip_internal_blo_T *obj);
static void emxInit_f_robotics_manip_inte_o(emxArray_f_robotics_manip_int_T
  **pEmxArray, int32_T numDimensions);
static void emxInitStruct_g_robotics_man_og(g_robotics_manip_internal_C_o_T
  *pStruct);
static void emxInitMatrix_g_robotics_manip_(g_robotics_manip_internal_C_o_T
  pMatrix[11]);
static void emxInitStruct_g_robotics_mani_o(g_robotics_manip_internal_Rig_T
  *pStruct);
static void PickAndPlace_Sim_emxInit_real_T(emxArray_real_T_PickAndPlace__T
  **pEmxArray, int32_T numDimensions);
static void emxInitStruct_d_robotics_manip_(d_robotics_manip_internal_IKE_T
  *pStruct);
static void emxInitMatrix_g_robotics_mani_o(g_robotics_manip_internal_C_o_T
  pMatrix[6]);
static void emxInitStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_b_inverseKinemati(b_inverseKinematics_PickAndPl_T
  *pStruct);
static void emxInitStruct_robotics_slmani_o(robotics_slmanip_internal_b_o_T
  *pStruct);
static void PickAndPl_genrand_uint32_vector(uint32_T mt[625], uint32_T u[2]);
static boolean_T PickAndPlace_Sim_is_valid_state(const uint32_T mt[625]);
static void PickAndPlace_Simulation_QL_rand(real_T r[5]);
static void rigidBodyJoint_set_MotionSubspa(b_rigidBodyJoint_PickAndPlace_T *obj,
  const real_T msubspace_data[]);
static void emxEnsureCapacity_f_robotics_ma(emxArray_f_robotics_manip_int_T
  *emxArray, int32_T oldNumel);
static g_robotics_manip_internal_C_o_T *PickA_CollisionSet_CollisionSet
  (g_robotics_manip_internal_C_o_T *obj, real_T maxElements);
static f_robotics_manip_internal_R_o_T *PickAndPlac_RigidBody_RigidBody
  (f_robotics_manip_internal_R_o_T *obj, const char_T bodyInput[10],
   g_robotics_manip_internal_C_o_T *iobj_0, b_rigidBodyJoint_PickAndPlace_T
   *iobj_1);
static void rigidBodyJoint_get_MotionSubspa(const
  b_rigidBodyJoint_PickAndPlace_T *obj, real_T msubspace_data[], int32_T
  msubspace_size[2]);
static f_robotics_manip_internal_R_o_T *PickAndPl_RigidBody_RigidBody_o
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1);
static f_robotics_manip_internal_R_o_T *PickAndP_RigidBody_RigidBody_og
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1);
static f_robotics_manip_internal_R_o_T *PickAnd_RigidBody_RigidBody_ogw
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1);
static f_robotics_manip_internal_R_o_T *PickAn_RigidBody_RigidBody_ogwo
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1);
static void PickA_CharacterVector_setVector(e_robotics_manip_internal_Cha_T *obj,
  const char_T vec_data[], const int32_T vec_size[2]);
static b_rigidBodyJoint_PickAndPlace_T *P_rigidBodyJoint_rigidBodyJoint
  (b_rigidBodyJoint_PickAndPlace_T *obj, const char_T jname_data[], const
   int32_T jname_size[2]);
static g_robotics_manip_internal_Rig_T *Pic_RigidBodyTree_RigidBodyTree
  (g_robotics_manip_internal_Rig_T *obj);
static h_robotics_manip_internal_Rig_T *P_RigidBodyTree_RigidBodyTree_o
  (h_robotics_manip_internal_Rig_T *obj);
static boolean_T PickAndPlace_Simulation__strcmp(const char_T a_data[], const
  int32_T a_size[2], const char_T b_data[], const int32_T b_size[2]);
static real_T RigidBodyTree_findBodyIndexByNa(h_robotics_manip_internal_Rig_T
  *obj, const char_T bodyname_data[], const int32_T bodyname_size[2]);
static void PickAndPlace_Sim_validatestring(const char_T str_data[], const
  int32_T str_size[2], char_T out_data[], int32_T out_size[2]);
static f_robotics_manip_internal_R_o_T *PickAndPlace_Sim_RigidBody_copy
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1, f_robotics_manip_internal_R_o_T
   *iobj_2);
static void PickAndPl_RigidBodyTree_addBody(h_robotics_manip_internal_Rig_T *obj,
  f_robotics_manip_internal_R_o_T *bodyin, const char_T parentName_data[], const
  int32_T parentName_size[2], g_robotics_manip_internal_C_o_T *iobj_0,
  b_rigidBodyJoint_PickAndPlace_T *iobj_1, f_robotics_manip_internal_R_o_T
  *iobj_2);
static void PickAndPlace__IKBlock_setupImpl(robotics_slmanip_internal_b_o_T *obj);
static void rigidBodyJoint_get_JointAxis_o(const b_rigidBodyJoint_PickAndPla_o_T
  *obj, real_T ax[3]);
static void RigidBodyTree_forwardKinematics(f_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[4], h_cell_wrap_PickAndPlace_Simu_T Ttree_data[], int32_T
  Ttree_size[2]);
static void rigidBodyJoint_get_PositionLimi(const
  b_rigidBodyJoint_PickAndPlace_T *obj, real_T lims_data[], int32_T lims_size[2]);
static void PickAn_emxEnsureCapacity_real_T(emxArray_real_T_PickAndPlace__T
  *emxArray, int32_T oldNumel);
static void RigidBodyTree_get_JointPosition(h_robotics_manip_internal_Rig_T *obj,
  emxArray_real_T_PickAndPlace__T *limits);
static void PickAndPlace_Sim_emxFree_real_T(emxArray_real_T_PickAndPlace__T
  **pEmxArray);
static void PickAndPlace_binary_expand_op_6(boolean_T in1[4], const real_T in2[4],
  const emxArray_real_T_PickAndPlace__T *in3);
static void PickAndPlace_binary_expand_op_5(boolean_T in1[4], const real_T in2[4],
  const emxArray_real_T_PickAndPlace__T *in3);
static void PickAndPlace_Simulatio_eml_find(const boolean_T x[4], int32_T
  i_data[], int32_T *i_size);
static void PickAndPlace_Simulation_QLa_tic(real_T *tstart_tv_sec, real_T
  *tstart_tv_nsec);
static void P_RigidBodyTree_ancestorIndices(h_robotics_manip_internal_Rig_T *obj,
  f_robotics_manip_internal_R_o_T *body, emxArray_real_T_PickAndPlace__T
  *indices);
static void Pi_rigidBodyJoint_get_JointAxis(const
  b_rigidBodyJoint_PickAndPlace_T *obj, real_T ax[3]);
static void PickAndPlace_Simulation_QLa_cat(real_T varargin_1, real_T varargin_2,
  real_T varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6,
  real_T varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyToP(const
  b_rigidBodyJoint_PickAndPlace_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16]);
static void RigidBodyTree_efficientFKAndJac(h_robotics_manip_internal_Rig_T *obj,
  const real_T qv[4], real_T bid1, real_T T_data[], int32_T T_size[2],
  emxArray_real_T_PickAndPlace__T *Jac);
static creal_T PickAndPlace_Simulation_QL_sqrt(const creal_T x);
static real_T PickAndPlace_Simulatio_xzlangeM(const real_T x[9]);
static void PickAndPlace_Simulation_xzlascl(real_T cfrom, real_T cto, real_T A[9]);
static real_T PickAndPlace_Simulation_Q_xnrm2(int32_T n, const real_T x[9],
  int32_T ix0);
static real_T PickAndPlace_Simulation_Q_xdotc(int32_T n, const real_T x[9],
  int32_T ix0, const real_T y[9], int32_T iy0);
static void PickAndPlace_Simulation_Q_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[9], int32_T iy0);
static real_T PickAndPlace_Simulation_xnrm2_o(const real_T x[3], int32_T ix0);
static void PickAndPlace_Simulation_xaxpy_o(int32_T n, real_T a, const real_T x
  [9], int32_T ix0, real_T y[3], int32_T iy0);
static void PickAndPlace_Simulatio_xaxpy_og(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[9], int32_T iy0);
static void PickAndPlace_Simulati_xzlascl_o(real_T cfrom, real_T cto, real_T A[3]);
static void PickAndPlace_Simulation_xswap_o(real_T x[9], int32_T ix0, int32_T
  iy0);
static void PickAndPlace_Simulation_Q_xrotg(real_T a, real_T b, real_T *b_a,
  real_T *b_b, real_T *c, real_T *s);
static void PickAndPlace_Simulation__xrot_o(real_T x[9], int32_T ix0, int32_T
  iy0, real_T c, real_T s);
static void PickAndPlace_Simulation_QLa_svd(const real_T A[9], real_T U[9],
  real_T s[3], real_T V[9]);
static void PickAndPlac_IKHelpers_poseError(const real_T Td[16], const real_T
  T_data[], const int32_T T_size[2], real_T errorvec[6]);
static void PickAndPlace_Simulation__mtimes(const real_T A[6], const
  emxArray_real_T_PickAndPlace__T *B, emxArray_real_T_PickAndPlace__T *C);
static void PickAndPlace__emxInit_boolean_T(emxArray_boolean_T_PickAndPla_T
  **pEmxArray, int32_T numDimensions);
static real_T PickAndPlace_Simulation_QL_norm(const real_T x[6]);
static void PickAndPlace_Simulation_Q_minus(emxArray_real_T_PickAndPlace__T *in1,
  const emxArray_real_T_PickAndPlace__T *in2);
static void Pic_emxEnsureCapacity_boolean_T(emxArray_boolean_T_PickAndPla_T
  *emxArray, int32_T oldNumel);
static real_T PickAndPlace_Simulation_QLa_toc(real_T tstart_tv_sec, real_T
  tstart_tv_nsec);
static void PickAndPlace_Simulatio_mldivide(const real_T A[16], const
  emxArray_real_T_PickAndPlace__T *B, real_T Y_data[], int32_T *Y_size);
static void PickAndPlace_S_binary_expand_op(real_T in1_data[], int32_T *in1_size,
  const emxArray_real_T_PickAndPlace__T *in2, real_T in3, const real_T in4[16],
  const emxArray_real_T_PickAndPlace__T *in5);
static void PickAndPlace_Simulat_expand_max(const
  emxArray_real_T_PickAndPlace__T *a, const real_T b[4], real_T c[4]);
static void PickAndPlace_Simulat_expand_min(const
  emxArray_real_T_PickAndPlace__T *a, const real_T b[4], real_T c[4]);
static void PickAndPlace__emxFree_boolean_T(emxArray_boolean_T_PickAndPla_T
  **pEmxArray);
static void ErrorDampedLevenbergMarquardt_s(d_robotics_core_internal_Erro_T *obj,
  real_T xSol[4], c_robotics_core_internal_NLPS_T *exitFlag, real_T *en, real_T *
  iter);
static boolean_T PickAndPlace_Simulation_Q_any_o(const boolean_T x_data[], const
  int32_T *x_size);
static real_T PickAndPla_eml_rand_mt19937ar_o(uint32_T state[625]);
static void PickAndPlace_Simulatio_randn_og(const real_T varargin_1[2], real_T
  r_data[], int32_T *r_size);
static void PickAndPlace_binary_expand_op_4(emxArray_real_T_PickAndPlace__T *in1,
  const b_rigidBodyJoint_PickAndPlace_T *in2, int32_T in3);
static void PickAndPlace_binary_expand_op_3(emxArray_real_T_PickAndPlace__T *in1,
  const b_rigidBodyJoint_PickAndPlace_T *in2, int32_T in3);
static void PickAndPlace_Simulation_rand_og(real_T varargin_1, real_T r_data[],
  int32_T *r_size);
static void PickAndPlace_binary_expand_op_2(emxArray_real_T_PickAndPlace__T *in1,
  const b_rigidBodyJoint_PickAndPlace_T *in2, int32_T in3, const real_T
  in4_data[], const int32_T *in4_size, const real_T in5_data[], const int32_T
  in5_size[2]);
static void PickAndPlace_Simulation_Q_randn(real_T r[4]);
static boolean_T PickAndPlace_Simulation_QLa_any(const boolean_T x[3]);
static void PickAndPlace_Simulation_randn_o(real_T r[3]);
static void PickAndPlace_Simulation__rand_o(real_T r[3]);
static void P_rigidBodyJoint_randomPosition(const
  b_rigidBodyJoint_PickAndPlace_T *obj, emxArray_real_T_PickAndPlace__T *qv);
static void PickAndPlace_Si_emxInit_int32_T(emxArray_int32_T_PickAndPlace_T
  **pEmxArray, int32_T numDimensions);
static void PickA_emxEnsureCapacity_int32_T(emxArray_int32_T_PickAndPlace_T
  *emxArray, int32_T oldNumel);
static void PickAndPlace_Si_emxFree_int32_T(emxArray_int32_T_PickAndPlace_T
  **pEmxArray);
static void PickA_inverseKinematics_solve_o(b_inverseKinematics_PickAndPl_T *obj,
  real_T initialGuess[4], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void Pick_inverseKinematics_stepImpl(b_inverseKinematics_PickAndPl_T *obj,
  const real_T tform[16], const real_T weights[6], const real_T initialGuess[4],
  real_T QSol[4]);
static void emxFree_f_robotics_manip_intern(emxArray_f_robotics_manip_i_o_T
  **pEmxArray);
static void emxFreeStruct_g_robotics_manip_(g_robotics_manip_internal_Col_T
  *pStruct);
static void emxFreeStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeMatrix_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  pMatrix[10]);
static void emxFreeStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFree_f_robotics_manip_inte_o(emxArray_f_robotics_manip_int_T
  **pEmxArray);
static void emxFreeStruct_g_robotics_mani_o(g_robotics_manip_internal_C_o_T
  *pStruct);
static void emxFreeMatrix_g_robotics_manip_(g_robotics_manip_internal_C_o_T
  pMatrix[11]);
static void emxFreeStruct_g_robotics_man_og(g_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_d_robotics_manip_(d_robotics_manip_internal_IKE_T
  *pStruct);
static void emxFreeMatrix_g_robotics_mani_o(g_robotics_manip_internal_C_o_T
  pMatrix[6]);
static void emxFreeStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_b_inverseKinemati(b_inverseKinematics_PickAndPl_T
  *pStruct);
static void emxFreeStruct_robotics_slmani_o(robotics_slmanip_internal_b_o_T
  *pStruct);
int32_T div_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    uint32_T tempAbsQuotient;
    tempAbsQuotient = (numerator < 0 ? ~(uint32_T)numerator + 1U : (uint32_T)
                       numerator) / (denominator < 0 ? ~(uint32_T)denominator +
      1U : (uint32_T)denominator);
    quotient = (numerator < 0) != (denominator < 0) ? -(int32_T)tempAbsQuotient :
      (int32_T)tempAbsQuotient;
  }

  return quotient;
}

/* System initialize for function-call system: '<S1>/closeEnough' */
void PickAndPlace_S_closeEnough_Init(B_closeEnough_PickAndPlace_Si_T *localB,
  P_closeEnough_PickAndPlace_Si_T *localP)
{
  /* SystemInitialize for RelationalOperator: '<S7>/LessThanOrEqual' incorporates:
   *  Outport: '<S7>/flag'
   */
  localB->LessThanOrEqual = localP->flag_Y0;
}

/* Output and update for function-call system: '<S1>/closeEnough' */
void PickAndPlace_Simula_closeEnough(const real_T rtu_a[3], const real_T rtu_b[3],
  real_T rtu_t, B_closeEnough_PickAndPlace_Si_T *localB)
{
  real_T rtb_Sum_0;
  real_T rtb_Sum_1;

  /* Sum: '<S7>/Sum' */
  rtb_Sum_1 = rtu_a[0] - rtu_b[0];

  /* DotProduct: '<S9>/Dot Product' incorporates:
   *  Sum: '<S7>/Sum'
   */
  rtb_Sum_0 = rtb_Sum_1 * rtb_Sum_1;

  /* Sum: '<S7>/Sum' */
  rtb_Sum_1 = rtu_a[1] - rtu_b[1];

  /* DotProduct: '<S9>/Dot Product' incorporates:
   *  Sum: '<S7>/Sum'
   */
  rtb_Sum_0 += rtb_Sum_1 * rtb_Sum_1;

  /* Sum: '<S7>/Sum' */
  rtb_Sum_1 = rtu_a[2] - rtu_b[2];

  /* RelationalOperator: '<S7>/LessThanOrEqual' incorporates:
   *  DotProduct: '<S9>/Dot Product'
   *  Sqrt: '<S8>/Sqrt'
   *  Sum: '<S7>/Sum'
   */
  localB->LessThanOrEqual = (sqrt(rtb_Sum_1 * rtb_Sum_1 + rtb_Sum_0) <= rtu_t);
}

static void emxInit_f_robotics_manip_intern(emxArray_f_robotics_manip_i_o_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_robotics_manip_i_o_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_f_robotics_manip_i_o_T *)malloc(sizeof
    (emxArray_f_robotics_manip_i_o_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_robotics_manip_internal_Col_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_g_robotics_manip_(g_robotics_manip_internal_Col_T
  *pStruct)
{
  emxInit_f_robotics_manip_intern(&pStruct->CollisionGeometries, 2);
}

static void emxInitStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_g_robotics_manip_(&pStruct->CollisionsInternal);
}

static void emxInitMatrix_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  pMatrix[10])
{
  int32_T i;
  for (i = 0; i < 10; i++) {
    emxInitStruct_e_robotics_manip_(&pMatrix[i]);
  }
}

static void emxInitStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_e_robotics_manip_(&pStruct->Base);
  emxInitMatrix_e_robotics_manip_(pStruct->_pobj0);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_f_robotics_manip_(&pStruct->TreeInternal);
}

static void PickAndPlace_Simulatio_rand_ogw(real_T r[5])
{
  int32_T b_k;
  int32_T b_kk;
  int32_T k;
  uint32_T b_u[2];
  for (b_k = 0; b_k < 5; b_k++) {
    uint32_T mti;
    uint32_T y;

    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on: */
    /*  */
    /*  A C-program for MT19937, with initialization improved 2002/1/26. */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
    /*  */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
    /*  All rights reserved. */
    /*  */
    /*  Redistribution and use in source and binary forms, with or without */
    /*  modification, are permitted provided that the following conditions */
    /*  are met: */
    /*  */
    /*    1. Redistributions of source code must retain the above copyright */
    /*       notice, this list of conditions and the following disclaimer. */
    /*  */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer */
    /*       in the documentation and/or other materials provided with the */
    /*       distribution. */
    /*  */
    /*    3. The names of its contributors may not be used to endorse or */
    /*       promote products derived from this software without specific */
    /*       prior written permission. */
    /*  */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
    /*  */
    /* =============================   END   ================================= */
    int32_T exitg1;
    do {
      exitg1 = 0;
      for (k = 0; k < 2; k++) {
        mti = PickAndPlace_Simulation_QLab_DW.state_k[624] + 1U;
        if (PickAndPlace_Simulation_QLab_DW.state_k[624] + 1U >= 625U) {
          for (b_kk = 0; b_kk < 227; b_kk++) {
            y = (PickAndPlace_Simulation_QLab_DW.state_k[b_kk + 1] & 2147483647U)
              | (PickAndPlace_Simulation_QLab_DW.state_k[b_kk] & 2147483648U);
            if ((y & 1U) == 0U) {
              mti = y >> 1U;
            } else {
              mti = y >> 1U ^ 2567483615U;
            }

            PickAndPlace_Simulation_QLab_DW.state_k[b_kk] =
              PickAndPlace_Simulation_QLab_DW.state_k[b_kk + 397] ^ mti;
          }

          for (b_kk = 0; b_kk < 396; b_kk++) {
            y = (PickAndPlace_Simulation_QLab_DW.state_k[b_kk + 227] &
                 2147483648U) | (PickAndPlace_Simulation_QLab_DW.state_k[b_kk +
                                 228] & 2147483647U);
            if ((y & 1U) == 0U) {
              mti = y >> 1U;
            } else {
              mti = y >> 1U ^ 2567483615U;
            }

            PickAndPlace_Simulation_QLab_DW.state_k[b_kk + 227] =
              PickAndPlace_Simulation_QLab_DW.state_k[b_kk] ^ mti;
          }

          y = (PickAndPlace_Simulation_QLab_DW.state_k[623] & 2147483648U) |
            (PickAndPlace_Simulation_QLab_DW.state_k[0] & 2147483647U);
          if ((y & 1U) == 0U) {
            mti = y >> 1U;
          } else {
            mti = y >> 1U ^ 2567483615U;
          }

          PickAndPlace_Simulation_QLab_DW.state_k[623] =
            PickAndPlace_Simulation_QLab_DW.state_k[396] ^ mti;
          mti = 1U;
        }

        y = PickAndPlace_Simulation_QLab_DW.state_k[(int32_T)mti - 1];
        PickAndPlace_Simulation_QLab_DW.state_k[624] = mti;
        y ^= y >> 11U;
        y ^= y << 7U & 2636928640U;
        y ^= y << 15U & 4022730752U;
        b_u[k] = y >> 18U ^ y;
      }

      mti = b_u[0] >> 5U;
      y = b_u[1] >> 6U;
      if ((mti == 0U) && (y == 0U)) {
        boolean_T b_isvalid;
        if ((PickAndPlace_Simulation_QLab_DW.state_k[624] >= 1U) &&
            (PickAndPlace_Simulation_QLab_DW.state_k[624] < 625U)) {
          boolean_T exitg2;
          b_isvalid = false;
          k = 0;
          exitg2 = false;
          while ((!exitg2) && (k + 1 < 625)) {
            if (PickAndPlace_Simulation_QLab_DW.state_k[k] == 0U) {
              k++;
            } else {
              b_isvalid = true;
              exitg2 = true;
            }
          }
        } else {
          b_isvalid = false;
        }

        if (!b_isvalid) {
          PickAndPlace_Simulation_QLab_DW.state_k[0] = 5489U;
          PickAndPlace_Simulation_QLab_DW.state_k[624] = 624U;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    r[b_k] = ((real_T)mti * 6.7108864E+7 + (real_T)y) * 1.1102230246251565E-16;
  }
}

static void rigidBodyJoint_set_MotionSubs_o(b_rigidBodyJoint_PickAndPla_o_T *obj,
  const real_T msubspace_data[])
{
  int32_T b_kstr;
  int32_T i;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  b_bool = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    b_kstr = 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    int32_T c;

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    if (obj->VelocityNumber < 1.0) {
      c = 0;
    } else {
      c = (int32_T)obj->VelocityNumber;
    }

    for (b_kstr = 0; b_kstr < c; b_kstr++) {
      for (i = 0; i < 6; i++) {
        obj->MotionSubspaceInternal[i + 6 * b_kstr] = msubspace_data[6 * b_kstr
          + i];
      }
    }
  } else {
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      obj->MotionSubspaceInternal[b_kstr] = 0.0;
    }
  }
}

static void emxEnsureCapacity_f_robotics__o(emxArray_f_robotics_manip_i_o_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(f_robotics_manip_internal_Col_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_robotics_manip_internal_Col_T)
             * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_robotics_manip_internal_Col_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static g_robotics_manip_internal_Col_T *Pic_CollisionSet_CollisionSet_o
  (g_robotics_manip_internal_Col_T *obj)
{
  static const void *t2_GeometryInternal = NULL;
  g_robotics_manip_internal_Col_T *b_obj;
  real_T c;
  int32_T b_i;
  int32_T d;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->Size = 0.0;
  b_obj = obj;
  obj->MaxElements = 0.0;
  b_i = (int32_T)obj->MaxElements;
  d = obj->CollisionGeometries->size[0] * obj->CollisionGeometries->size[1];
  obj->CollisionGeometries->size[0] = 1;
  obj->CollisionGeometries->size[1] = b_i;
  emxEnsureCapacity_f_robotics__o(obj->CollisionGeometries, d);
  c = obj->MaxElements;
  d = (int32_T)c;
  for (b_i = 0; b_i < d; b_i++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->CollisionGeometries->data[b_i].CollisionPrimitive = (void *)
      t2_GeometryInternal;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static e_robotics_manip_internal_Rig_T *PickA_RigidBody_RigidBody_ogwo1
  (e_robotics_manip_internal_Rig_T *obj, const char_T bodyInput[10])
{
  e_robotics_manip_internal_Cha_T s;
  e_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  boolean_T result;
  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_1[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_2[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_3[6] = { 0, 0, 0, 0, 0, 1 };

  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 10.0;
  for (c = 0; c < 10; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = bodyInput[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.NameInternal;
  s.Length = 14.0;
  for (c = 0; c < 10; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = bodyInput[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  s.Vector[10] = '_';
  s.Vector[11] = 'j';
  s.Vector[12] = 'n';
  s.Vector[13] = 't';
  obj->JointInternal.NameInternal = s;
  s = obj->JointInternal.TypeInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = b[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_0[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_2[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_3[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 6.0;
    obj->JointInternal.PositionNumber = 7.0;
    obj->JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 0.0;
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  obj->ParentIndex = -1.0;
  Pic_CollisionSet_CollisionSet_o(&obj->CollisionsInternal);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void rigidBodyJoint_get_MotionSubs_o(const
  b_rigidBodyJoint_PickAndPla_o_T *obj, real_T msubspace_data[], int32_T
  msubspace_size[2])
{
  int32_T b_kstr;
  int32_T i;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  b_bool = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    b_kstr = 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    int32_T loop_ub;

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    if (obj->VelocityNumber < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj->VelocityNumber;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = loop_ub;
    for (b_kstr = 0; b_kstr < loop_ub; b_kstr++) {
      for (i = 0; i < 6; i++) {
        msubspace_data[i + 6 * b_kstr] = obj->MotionSubspaceInternal[6 * b_kstr
          + i];
      }
    }
  } else {
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }
  }
}

static e_robotics_manip_internal_Rig_T *Pick_RigidBody_RigidBody_ogwo1x
  (e_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  e_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  boolean_T result;
  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_0[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_1[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_2[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  int32_T msubspace_size[2];
  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 3.0;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  s.Vector[0] = 'Y';
  s.Vector[1] = 'A';
  s.Vector[2] = 'W';
  obj->NameInternal = s;
  obj->ParentIndex = 1.0;
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.NameInternal;
  s.Length = 3.0;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  s.Vector[0] = 'Y';
  s.Vector[1] = 'A';
  s.Vector[2] = 'W';
  obj->JointInternal.NameInternal = s;
  s = obj->JointInternal.TypeInternal;
  s.Length = 8.0;
  for (c = 0; c < 8; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = a[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_0[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_1[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_2[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 6.0;
    obj->JointInternal.PositionNumber = 7.0;
    obj->JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 0.0;
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.JointToParentTransform[c] = tmp_3[c];
  }

  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.ChildToJointTransform[c] = tmp_3[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_get_MotionSubs_o(&obj->JointInternal, msubspace_data,
    msubspace_size);
  for (c = 0; c < 6; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    msubspace_data[c] = tmp_1[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  Pic_CollisionSet_CollisionSet_o(&obj->CollisionsInternal);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static e_robotics_manip_internal_Rig_T *Pic_RigidBody_RigidBody_ogwo1xx
  (e_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  e_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  boolean_T result;
  static const char_T tmp[5] = { 'B', 'I', 'C', 'E', 'P' };

  static const char_T tmp_0[8] = { 'S', 'H', 'O', 'U', 'L', 'D', 'E', 'R' };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_3[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_4[6] = { 0, 0, 0, 0, 0, 1 };

  static const real_T tmp_5[16] = { 1.0, 0.0, -0.0, 0.0, 0.0,
    -3.4914813388431334E-15, -1.0, 0.0, -0.0, 1.0, -3.4914813388431334E-15, 0.0,
    0.0, 0.0, 0.1397714, 1.0 };

  static const int8_T tmp_6[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  int32_T msubspace_size[2];
  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = 2.0;
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.NameInternal;
  s.Length = 8.0;
  for (c = 0; c < 8; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp_0[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s = obj->JointInternal.TypeInternal;
  s.Length = 8.0;
  for (c = 0; c < 8; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = a[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_2[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_3[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_4[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 6.0;
    obj->JointInternal.PositionNumber = 7.0;
    obj->JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 0.0;
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.JointToParentTransform[c] = tmp_5[c];
  }

  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.ChildToJointTransform[c] = tmp_6[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_get_MotionSubs_o(&obj->JointInternal, msubspace_data,
    msubspace_size);
  for (c = 0; c < 6; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    msubspace_data[c] = tmp_3[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  Pic_CollisionSet_CollisionSet_o(&obj->CollisionsInternal);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static e_robotics_manip_internal_Rig_T *Pi_RigidBody_RigidBody_ogwo1xxy
  (e_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  e_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  boolean_T result;
  static const char_T tmp[7] = { 'F', 'O', 'R', 'E', 'A', 'R', 'M' };

  static const char_T tmp_0[5] = { 'E', 'L', 'B', 'O', 'W' };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_3[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_4[6] = { 0, 0, 0, 0, 0, 1 };

  static const real_T tmp_5[16] = { 0.14142135623730218, -0.98994949366116758,
    -0.0, 0.0, 0.98994949366116758, 0.14142135623730218, 0.0, 0.0, 0.0, -0.0,
    1.0, 0.0, 0.0500000000000004, -0.350000000000015, 0.0, 1.0 };

  static const int8_T tmp_6[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  int32_T msubspace_size[2];
  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 7.0;
  for (c = 0; c < 7; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = 3.0;
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.NameInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp_0[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s = obj->JointInternal.TypeInternal;
  s.Length = 8.0;
  for (c = 0; c < 8; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = a[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_2[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_3[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_4[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 6.0;
    obj->JointInternal.PositionNumber = 7.0;
    obj->JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 0.0;
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.JointToParentTransform[c] = tmp_5[c];
  }

  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.ChildToJointTransform[c] = tmp_6[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_get_MotionSubs_o(&obj->JointInternal, msubspace_data,
    msubspace_size);
  for (c = 0; c < 6; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    msubspace_data[c] = tmp_3[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  Pic_CollisionSet_CollisionSet_o(&obj->CollisionsInternal);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static e_robotics_manip_internal_Rig_T *P_RigidBody_RigidBody_ogwo1xxyk
  (e_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  e_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  boolean_T result;
  static const char_T tmp[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C',
    'T', 'O', 'R' };

  static const char_T tmp_0[5] = { 'W', 'R', 'I', 'S', 'T' };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_3[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_4[6] = { 0, 0, 0, 0, 0, 1 };

  static const real_T tmp_5[16] = { 0.98994949366116725, -0.14142135623730462,
    -0.0, 0.0, -4.9377002621643607E-16, -3.4563901835151742E-15, -1.0, 0.0,
    0.14142135623730462, 0.98994949366116725, -3.4914813388431334E-15, 0.0,
    0.0336611536380097, 0.235607569369425, 0.0, 1.0 };

  static const int8_T tmp_6[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  int32_T msubspace_size[2];
  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 12.0;
  for (c = 0; c < 12; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = 4.0;
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.NameInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp_0[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s = obj->JointInternal.TypeInternal;
  s.Length = 8.0;
  for (c = 0; c < 8; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = a[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_2[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_3[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_4[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 6.0;
    obj->JointInternal.PositionNumber = 7.0;
    obj->JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 0.0;
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.JointToParentTransform[c] = tmp_5[c];
  }

  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.ChildToJointTransform[c] = tmp_6[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_get_MotionSubs_o(&obj->JointInternal, msubspace_data,
    msubspace_size);
  for (c = 0; c < 6; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    msubspace_data[c] = tmp_3[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  Pic_CollisionSet_CollisionSet_o(&obj->CollisionsInternal);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static e_robotics_manip_internal_Rig_T *RigidBody_RigidBody_ogwo1xxyks
  (e_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  e_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  int32_T c;
  int32_T loop_ub;
  char_T jname_data[204];
  int8_T b_I[36];
  boolean_T result;
  static const char_T tmp[5] = { 'w', 'o', 'r', 'l', 'd' };

  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_3[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_4[6] = { 0, 0, 0, 0, 0, 1 };

  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = -1.0;
  s = obj->NameInternal;
  if (s.Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)s.Length;
  }

  if (loop_ub - 1 >= 0) {
    memcpy(&jname_data[0], &s.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
  }

  jname_data[loop_ub] = '_';
  jname_data[loop_ub + 1] = 'j';
  jname_data[loop_ub + 2] = 'n';
  jname_data[loop_ub + 3] = 't';
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.NameInternal;
  s.Length = loop_ub + 4;
  if ((loop_ub + 4) - 1 >= 0) {
    memcpy(&s.Vector[0], &jname_data[0], (uint32_T)(loop_ub + 4) * sizeof(char_T));
  }

  obj->JointInternal.NameInternal = s;
  s = obj->JointInternal.TypeInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = b[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->JointInternal.TypeInternal = s;
  s = obj->JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    loop_ub = 1;
    do {
      exitg1 = 0;
      if (loop_ub - 1 < 8) {
        if (tmp_0[loop_ub - 1] != s.Vector[loop_ub - 1]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      loop_ub = 1;
      do {
        exitg1 = 0;
        if (loop_ub - 1 < 9) {
          if (tmp_1[loop_ub - 1] != s.Vector[loop_ub - 1]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        loop_ub = 1;
        do {
          exitg1 = 0;
          if (loop_ub - 1 < 8) {
            if (tmp_2[loop_ub - 1] != s.Vector[loop_ub - 1]) {
              exitg1 = 1;
            } else {
              loop_ub++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_3[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_4[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 1.0;
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 6.0;
    obj->JointInternal.PositionNumber = 7.0;
    obj->JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->JointInternal.VelocityNumber = 0.0;
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->JointInternal, msubspace_data);
  Pic_CollisionSet_CollisionSet_o(&obj->CollisionsInternal);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void Pic_GetTransformBlock_setupImpl(robotics_slmanip_internal_blo_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  real_T msubspace_data[36];
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  boolean_T result;
  static const char_T tmp[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '1' };

  static const char_T tmp_0[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '2' };

  static const char_T tmp_1[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '3' };

  static const char_T tmp_2[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '4' };

  static const char_T tmp_3[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '5' };

  static const char_T tmp_4[9] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_5[16] = { 'w', 'o', 'r', 'l', 'd', '_', 'b', 'a', 's',
    'e', '_', 'j', 'o', 'i', 'n', 't' };

  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_6[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_7[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_8[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_9[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_a[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_b[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  real_T unusedExpr[5];
  int32_T msubspace_size[2];
  int32_T exitg1;
  PickAndPlace_Simulatio_rand_ogw(unusedExpr);

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal.NumBodies = 5.0;
  obj->TreeInternal.Bodies[0] = PickA_RigidBody_RigidBody_ogwo1
    (&obj->TreeInternal._pobj0[0], tmp);
  obj->TreeInternal.Bodies[1] = PickA_RigidBody_RigidBody_ogwo1
    (&obj->TreeInternal._pobj0[1], tmp_0);
  obj->TreeInternal.Bodies[2] = PickA_RigidBody_RigidBody_ogwo1
    (&obj->TreeInternal._pobj0[2], tmp_1);
  obj->TreeInternal.Bodies[3] = PickA_RigidBody_RigidBody_ogwo1
    (&obj->TreeInternal._pobj0[3], tmp_2);
  obj->TreeInternal.Bodies[4] = PickA_RigidBody_RigidBody_ogwo1
    (&obj->TreeInternal._pobj0[4], tmp_3);
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal._pobj0[5].NameInternal = s;
  s = obj->TreeInternal._pobj0[5].NameInternal;
  s.Length = 9.0;
  for (c = 0; c < 9; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp_4[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal._pobj0[5].NameInternal = s;
  obj->TreeInternal._pobj0[5].ParentIndex = 0.0;
  for (c = 0; c < 36; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.MotionSubspaceInternal[c] = 0.0;
  }

  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal._pobj0[5].JointInternal.NameInternal = s;
  s.Length = 200.0;
  for (c = 0; c < 200; c++) {
    s.Vector[c] = ' ';
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal._pobj0[5].JointInternal.TypeInternal = s;
  s = obj->TreeInternal._pobj0[5].JointInternal.NameInternal;
  s.Length = 16.0;
  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = tmp_5[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal._pobj0[5].JointInternal.NameInternal = s;
  s = obj->TreeInternal._pobj0[5].JointInternal.TypeInternal;
  s.Length = 5.0;
  for (c = 0; c < 5; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    s.Vector[c] = b[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  obj->TreeInternal._pobj0[5].JointInternal.TypeInternal = s;
  s = obj->TreeInternal._pobj0[5].JointInternal.TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp_6[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    c = 0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_7[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      c = 1;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S5>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_8[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        c = 2;
      } else {
        c = -1;
      }
    }
  }

  switch (c) {
   case 0:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_9[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.VelocityNumber = 1.0;
    obj->TreeInternal._pobj0[5].JointInternal.PositionNumber = 1.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[0] = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[1] = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (c = 0; c < 6; c++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      msubspace_data[c] = tmp_a[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.VelocityNumber = 1.0;
    obj->TreeInternal._pobj0[5].JointInternal.PositionNumber = 1.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[0] = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[1] = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (c = 0; c < 36; c++) {
      b_I[c] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (c = 0; c < 36; c++) {
      msubspace_data[c] = b_I[c];
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.VelocityNumber = 6.0;
    obj->TreeInternal._pobj0[5].JointInternal.PositionNumber = 7.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[0] = (rtNaN);
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[1] = (rtNaN);
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (c = 0; c < 6; c++) {
      msubspace_data[c] = 0.0;
    }

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.VelocityNumber = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.PositionNumber = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[0] = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[1] = 0.0;
    obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->TreeInternal._pobj0[5].JointInternal,
    msubspace_data);
  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.JointToParentTransform[c] =
      tmp_b[c];
  }

  for (c = 0; c < 16; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    obj->TreeInternal._pobj0[5].JointInternal.ChildToJointTransform[c] = tmp_b[c];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_get_MotionSubs_o(&obj->TreeInternal._pobj0[5].JointInternal,
    msubspace_data, msubspace_size);
  for (c = 0; c < 6; c++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    msubspace_data[c] = 0.0;
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  rigidBodyJoint_set_MotionSubs_o(&obj->TreeInternal._pobj0[5].JointInternal,
    msubspace_data);
  obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[0] = 0.0;
  obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[1] = 0.0;
  obj->TreeInternal._pobj0[5].JointInternal.JointAxisInternal[2] = 0.0;
  Pic_CollisionSet_CollisionSet_o(&obj->TreeInternal._pobj0[5].
    CollisionsInternal);
  obj->TreeInternal._pobj0[5].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[0] = &obj->TreeInternal._pobj0[5];
  obj->TreeInternal.Bodies[1] = Pick_RigidBody_RigidBody_ogwo1x
    (&obj->TreeInternal._pobj0[6]);
  obj->TreeInternal.Bodies[2] = Pic_RigidBody_RigidBody_ogwo1xx
    (&obj->TreeInternal._pobj0[7]);
  obj->TreeInternal.Bodies[3] = Pi_RigidBody_RigidBody_ogwo1xxy
    (&obj->TreeInternal._pobj0[8]);
  obj->TreeInternal.Bodies[4] = P_RigidBody_RigidBody_ogwo1xxyk
    (&obj->TreeInternal._pobj0[9]);
  obj->TreeInternal.PositionNumber = 4.0;
  RigidBody_RigidBody_ogwo1xxyks(&obj->TreeInternal.Base);
  obj->TreeInternal.matlabCodegenIsDeleted = false;
}

static void emxInit_f_robotics_manip_inte_o(emxArray_f_robotics_manip_int_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_robotics_manip_int_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_f_robotics_manip_int_T *)malloc(sizeof
    (emxArray_f_robotics_manip_int_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_robotics_manip_internal_C_o_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_g_robotics_man_og(g_robotics_manip_internal_C_o_T
  *pStruct)
{
  emxInit_f_robotics_manip_inte_o(&pStruct->CollisionGeometries, 2);
}

static void emxInitMatrix_g_robotics_manip_(g_robotics_manip_internal_C_o_T
  pMatrix[11])
{
  int32_T i;
  for (i = 0; i < 11; i++) {
    emxInitStruct_g_robotics_man_og(&pMatrix[i]);
  }
}

static void emxInitStruct_g_robotics_mani_o(g_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitMatrix_g_robotics_manip_(pStruct->_pobj0);
}

static void PickAndPlace_Sim_emxInit_real_T(emxArray_real_T_PickAndPlace__T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_PickAndPlace__T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_PickAndPlace__T *)malloc(sizeof
    (emxArray_real_T_PickAndPlace__T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_d_robotics_manip_(d_robotics_manip_internal_IKE_T
  *pStruct)
{
  PickAndPlace_Sim_emxInit_real_T(&pStruct->Limits, 2);
  PickAndPlace_Sim_emxInit_real_T(&pStruct->ErrTemp, 1);
  PickAndPlace_Sim_emxInit_real_T(&pStruct->GradTemp, 1);
}

static void emxInitMatrix_g_robotics_mani_o(g_robotics_manip_internal_C_o_T
  pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    emxInitStruct_g_robotics_man_og(&pMatrix[i]);
  }
}

static void emxInitStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitMatrix_g_robotics_mani_o(pStruct->_pobj1);
}

static void emxInitStruct_b_inverseKinemati(b_inverseKinematics_PickAndPl_T
  *pStruct)
{
  PickAndPlace_Sim_emxInit_real_T(&pStruct->Limits, 2);
  emxInitStruct_d_robotics_manip_(&pStruct->_pobj0);
  emxInitMatrix_g_robotics_manip_(pStruct->_pobj3);
  emxInitStruct_h_robotics_manip_(&pStruct->_pobj4);
}

static void emxInitStruct_robotics_slmani_o(robotics_slmanip_internal_b_o_T
  *pStruct)
{
  emxInitStruct_g_robotics_mani_o(&pStruct->TreeInternal);
  emxInitStruct_b_inverseKinemati(&pStruct->IKInternal);
}

static void PickAndPl_genrand_uint32_vector(uint32_T mt[625], uint32_T u[2])
{
  int32_T b_j;
  int32_T b_kk;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  for (b_j = 0; b_j < 2; b_j++) {
    uint32_T mti;
    uint32_T y;
    mti = mt[624] + 1U;
    if (mt[624] + 1U >= 625U) {
      for (b_kk = 0; b_kk < 227; b_kk++) {
        y = (mt[b_kk + 1] & 2147483647U) | (mt[b_kk] & 2147483648U);
        if ((y & 1U) == 0U) {
          mti = y >> 1U;
        } else {
          mti = y >> 1U ^ 2567483615U;
        }

        mt[b_kk] = mt[b_kk + 397] ^ mti;
      }

      for (b_kk = 0; b_kk < 396; b_kk++) {
        y = (mt[b_kk + 227] & 2147483648U) | (mt[b_kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          mti = y >> 1U;
        } else {
          mti = y >> 1U ^ 2567483615U;
        }

        mt[b_kk + 227] = mt[b_kk] ^ mti;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        mti = y >> 1U;
      } else {
        mti = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ mti;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    u[b_j] = y >> 18U ^ y;
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static boolean_T PickAndPlace_Sim_is_valid_state(const uint32_T mt[625])
{
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    int32_T k;
    boolean_T exitg1;
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  } else {
    isvalid = false;
  }

  return isvalid;
}

static void PickAndPlace_Simulation_QL_rand(real_T r[5])
{
  int32_T b_k;
  int32_T exitg1;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;
  for (b_k = 0; b_k < 5; b_k++) {
    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on: */
    /*  */
    /*  A C-program for MT19937, with initialization improved 2002/1/26. */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
    /*  */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
    /*  All rights reserved. */
    /*  */
    /*  Redistribution and use in source and binary forms, with or without */
    /*  modification, are permitted provided that the following conditions */
    /*  are met: */
    /*  */
    /*    1. Redistributions of source code must retain the above copyright */
    /*       notice, this list of conditions and the following disclaimer. */
    /*  */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer */
    /*       in the documentation and/or other materials provided with the */
    /*       distribution. */
    /*  */
    /*    3. The names of its contributors may not be used to endorse or */
    /*       promote products derived from this software without specific */
    /*       prior written permission. */
    /*  */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
    /*  */
    /* =============================   END   ================================= */
    do {
      exitg1 = 0;
      PickAndPl_genrand_uint32_vector(PickAndPlace_Simulation_QLab_DW.state_i,
        b_u);
      u_idx_0 = b_u[0] >> 5U;
      u_idx_1 = b_u[1] >> 6U;
      if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
        if (!PickAndPlace_Sim_is_valid_state
            (PickAndPlace_Simulation_QLab_DW.state_i)) {
          PickAndPlace_Simulation_QLab_DW.state_i[0] = 5489U;
          PickAndPlace_Simulation_QLab_DW.state_i[624] = 624U;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    r[b_k] = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
      1.1102230246251565E-16;
  }
}

static void rigidBodyJoint_set_MotionSubspa(b_rigidBodyJoint_PickAndPlace_T *obj,
  const real_T msubspace_data[])
{
  int32_T b_kstr;
  int32_T i;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    int32_T c;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (obj->VelocityNumber < 1.0) {
      c = 0;
    } else {
      c = (int32_T)obj->VelocityNumber;
    }

    for (b_kstr = 0; b_kstr < c; b_kstr++) {
      for (i = 0; i < 6; i++) {
        obj->MotionSubspaceInternal[i + 6 * b_kstr] = msubspace_data[6 * b_kstr
          + i];
      }
    }
  } else {
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      obj->MotionSubspaceInternal[b_kstr] = 0.0;
    }
  }
}

static void emxEnsureCapacity_f_robotics_ma(emxArray_f_robotics_manip_int_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(f_robotics_manip_internal_C_o_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_robotics_manip_internal_C_o_T)
             * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_robotics_manip_internal_C_o_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static g_robotics_manip_internal_C_o_T *PickA_CollisionSet_CollisionSet
  (g_robotics_manip_internal_C_o_T *obj, real_T maxElements)
{
  static const void *t0_GeometryInternal = NULL;
  g_robotics_manip_internal_C_o_T *b_obj;
  real_T c;
  int32_T b_i;
  int32_T d;
  int32_T i;
  static const int8_T localPose[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 1 };

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Size = 0.0;
  b_obj = obj;
  obj->MaxElements = maxElements;
  i = (int32_T)obj->MaxElements;
  b_i = obj->CollisionGeometries->size[0] * obj->CollisionGeometries->size[1];
  obj->CollisionGeometries->size[0] = 1;
  obj->CollisionGeometries->size[1] = i;
  emxEnsureCapacity_f_robotics_ma(obj->CollisionGeometries, b_i);
  c = obj->MaxElements;
  d = (int32_T)c;
  for (b_i = 0; b_i < d; b_i++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->CollisionGeometries->data[b_i].CollisionPrimitive = (void *)
      t0_GeometryInternal;
    for (i = 0; i < 16; i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      obj->CollisionGeometries->data[b_i].LocalPose[i] = localPose[i];
    }

    for (i = 0; i < 16; i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      obj->CollisionGeometries->data[b_i].WorldPose[i] = localPose[i];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->CollisionGeometries->data[b_i].MeshScale[0] = 1.0;
    obj->CollisionGeometries->data[b_i].MeshScale[1] = 1.0;
    obj->CollisionGeometries->data[b_i].MeshScale[2] = 1.0;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static f_robotics_manip_internal_R_o_T *PickAndPlac_RigidBody_RigidBody
  (f_robotics_manip_internal_R_o_T *obj, const char_T bodyInput[10],
   g_robotics_manip_internal_C_o_T *iobj_0, b_rigidBodyJoint_PickAndPlace_T
   *iobj_1)
{
  e_robotics_manip_internal_Cha_T s;
  f_robotics_manip_internal_R_o_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I_0[36];
  int8_T b_I[9];
  int8_T homepos_data[7];
  int8_T tmp;
  boolean_T result;
  static const int8_T tmp_0[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_4[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_5[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 10.0;
  for (b_kstr = 0; b_kstr < 10; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = bodyInput[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  iobj_1->InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    tmp = tmp_0[b_kstr];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->JointToParentTransform[b_kstr] = tmp;
    iobj_1->ChildToJointTransform[b_kstr] = tmp;
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->NameInternal;
  s.Length = 14.0;
  for (b_kstr = 0; b_kstr < 10; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = bodyInput[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  s.Vector[10] = '_';
  s.Vector[11] = 'j';
  s.Vector[12] = 'n';
  s.Vector[13] = 't';
  iobj_1->NameInternal = s;
  s = iobj_1->TypeInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = b[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_2[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_3[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_4[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_5[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I_0[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I_0[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I_0[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_6[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    iobj_1->JointAxisInternal[0] = (rtNaN);
    iobj_1->JointAxisInternal[1] = (rtNaN);
    iobj_1->JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(iobj_1, msubspace_data);
  s = iobj_1->TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != b[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = iobj_1->PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        iobj_1->PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iobj_1->HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[0] = poslim_data[0];
    iobj_1->PositionLimitsInternal[7] = poslim_data[1];
    iobj_1->HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->JointInternal = iobj_1;
  obj->Index = -1.0;
  obj->ParentIndex = -1.0;
  obj->MassInternal = 1.0;
  obj->CenterOfMassInternal[0] = 0.0;
  obj->CenterOfMassInternal[1] = 0.0;
  obj->CenterOfMassInternal[2] = 0.0;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    b_I[b_kstr] = 0;
  }

  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->InertiaInternal[b_kstr] = b_I[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    b_I_0[b_kstr] = 0;
  }

  for (c = 0; c < 6; c++) {
    b_I_0[c + 6 * c] = 1;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->SpatialInertia[b_kstr] = b_I_0[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->CollisionsInternal = PickA_CollisionSet_CollisionSet(iobj_0, 0.0);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void rigidBodyJoint_get_MotionSubspa(const
  b_rigidBodyJoint_PickAndPlace_T *obj, real_T msubspace_data[], int32_T
  msubspace_size[2])
{
  int32_T b_kstr;
  int32_T i;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    int32_T loop_ub;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (obj->VelocityNumber < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj->VelocityNumber;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = loop_ub;
    for (b_kstr = 0; b_kstr < loop_ub; b_kstr++) {
      for (i = 0; i < 6; i++) {
        msubspace_data[i + 6 * b_kstr] = obj->MotionSubspaceInternal[6 * b_kstr
          + i];
      }
    }
  } else {
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }
  }
}

static f_robotics_manip_internal_R_o_T *PickAndPl_RigidBody_RigidBody_o
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1)
{
  e_robotics_manip_internal_Cha_T s;
  f_robotics_manip_internal_R_o_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T tmp;
  boolean_T result;
  static const real_T tmp_0[9] = { 0.0098883618076915317, 3.491520440311153E-12,
    -7.0807706907914012E-10, 3.491520440311153E-12, 0.0098602125072737353,
    3.7559333579963049E-10, -7.0807706907914012E-10, 3.7559333579963049E-10,
    0.00062506753263199318 };

  static const real_T tmp_1[36] = { 0.0098883618076915317, 3.491520440311153E-12,
    -7.0807706907914012E-10, 0.0, -0.081245648020186481, -2.4469721682934774E-9,
    3.491520440311153E-12, 0.0098602125072737353, 3.7559333579963049E-10,
    0.081245648020186481, 0.0, -6.576165478270739E-9, -7.0807706907914012E-10,
    3.7559333579963049E-10, 0.00062506753263199318, 2.4469721682934774E-9,
    6.576165478270739E-9, 0.0, 0.0, 0.081245648020186481, 2.4469721682934774E-9,
    0.701518504018672, 0.0, 0.0, -0.081245648020186481, 0.0,
    6.576165478270739E-9, 0.0, 0.701518504018672, 0.0, -2.4469721682934774E-9,
    -6.576165478270739E-9, 0.0, 0.0, 0.0, 0.701518504018672 };

  static const int8_T tmp_2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_3[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_4[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_5[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_6[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_7[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_8[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T msubspace_size[2];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 3.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  s.Vector[0] = 'Y';
  s.Vector[1] = 'A';
  s.Vector[2] = 'W';
  obj->NameInternal = s;
  obj->ParentIndex = 1.0;
  obj->MassInternal = 0.701518504018672;
  obj->CenterOfMassInternal[0] = 9.37418676855843E-9;
  obj->CenterOfMassInternal[1] = -3.48810780368004E-9;
  obj->CenterOfMassInternal[2] = 0.115813977186301;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->InertiaInternal[b_kstr] = tmp_0[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->SpatialInertia[b_kstr] = tmp_1[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    tmp = tmp_2[b_kstr];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->JointToParentTransform[b_kstr] = tmp;
    iobj_1->ChildToJointTransform[b_kstr] = tmp;
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->NameInternal;
  s.Length = 3.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  s.Vector[0] = 'Y';
  s.Vector[1] = 'A';
  s.Vector[2] = 'W';
  iobj_1->NameInternal = s;
  s = iobj_1->TypeInternal;
  s.Length = 8.0;
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = a[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_3[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_4[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_5[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_6[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_7[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    iobj_1->JointAxisInternal[0] = (rtNaN);
    iobj_1->JointAxisInternal[1] = (rtNaN);
    iobj_1->JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(iobj_1, msubspace_data);
  s = iobj_1->TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != tmp_8[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = iobj_1->PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        iobj_1->PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iobj_1->HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[0] = poslim_data[0];
    iobj_1->PositionLimitsInternal[7] = poslim_data[1];
    iobj_1->HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->JointInternal = iobj_1;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->ChildToJointTransform[b_kstr] = tmp_2[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_get_MotionSubspa(obj->JointInternal, msubspace_data,
    msubspace_size);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    msubspace_data[b_kstr] = tmp_5[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(obj->JointInternal, msubspace_data);
  obj->JointInternal->InTree = true;
  obj->JointInternal->PositionLimitsInternal[0] = -2.967;
  obj->JointInternal->PositionLimitsInternal[7] = 2.967;
  obj->JointInternal->JointAxisInternal[0] = 0.0;
  obj->JointInternal->JointAxisInternal[1] = 0.0;
  obj->JointInternal->JointAxisInternal[2] = 1.0;
  obj->JointInternal->HomePositionInternal[0] = 0.0;
  obj->CollisionsInternal = PickA_CollisionSet_CollisionSet(iobj_0, 0.0);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static f_robotics_manip_internal_R_o_T *PickAndP_RigidBody_RigidBody_og
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1)
{
  e_robotics_manip_internal_Cha_T s;
  f_robotics_manip_internal_R_o_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T tmp;
  boolean_T result;
  static const char_T tmp_0[5] = { 'B', 'I', 'C', 'E', 'P' };

  static const real_T tmp_1[9] = { 0.041343998418695183, 0.0022665991316712631,
    5.4154653500840718E-8, 0.0022665991316712631, 0.00040606585858177875,
    -1.0006210903442956E-5, 5.4154653500840718E-8, -1.0006210903442956E-5,
    0.041519005205512126 };

  static const real_T tmp_2[36] = { 0.041343998418695183, 0.0022665991316712631,
    5.4154653500840718E-8, 0.0, 4.98489140592527E-5, -0.165771096295436,
    0.0022665991316712631, 0.00040606585858177875, -1.0006210903442956E-5,
    -4.98489140592527E-5, 0.0, -0.0096438506814792869, 5.4154653500840718E-8,
    -1.0006210903442956E-5, 0.041519005205512126, 0.165771096295436,
    0.0096438506814792869, 0.0, 0.0, -4.98489140592527E-5, 0.165771096295436,
    0.706073338310231, 0.0, 0.0, 4.98489140592527E-5, 0.0, 0.0096438506814792869,
    0.0, 0.706073338310231, 0.0, -0.165771096295436, -0.0096438506814792869, 0.0,
    0.0, 0.0, 0.706073338310231 };

  static const int8_T tmp_3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T tmp_4[8] = { 'S', 'H', 'O', 'U', 'L', 'D', 'E', 'R' };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_5[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_6[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_7[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_8[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_9[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_a[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const real_T tmp_b[16] = { 1.0, 0.0, -0.0, 0.0, 0.0,
    -3.4914813388431334E-15, -1.0, 0.0, -0.0, 1.0, -3.4914813388431334E-15, 0.0,
    0.0, 0.0, 0.1397714, 1.0 };

  int32_T msubspace_size[2];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_0[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = 2.0;
  obj->MassInternal = 0.706073338310231;
  obj->CenterOfMassInternal[0] = 0.0136584263393359;
  obj->CenterOfMassInternal[1] = -0.234778864037209;
  obj->CenterOfMassInternal[2] = -7.06001931450219E-5;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->InertiaInternal[b_kstr] = tmp_1[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->SpatialInertia[b_kstr] = tmp_2[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    tmp = tmp_3[b_kstr];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->JointToParentTransform[b_kstr] = tmp;
    iobj_1->ChildToJointTransform[b_kstr] = tmp;
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->NameInternal;
  s.Length = 8.0;
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_4[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s = iobj_1->TypeInternal;
  s.Length = 8.0;
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = a[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_5[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_6[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_7[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_8[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_9[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    iobj_1->JointAxisInternal[0] = (rtNaN);
    iobj_1->JointAxisInternal[1] = (rtNaN);
    iobj_1->JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(iobj_1, msubspace_data);
  s = iobj_1->TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != tmp_a[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = iobj_1->PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        iobj_1->PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iobj_1->HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[0] = poslim_data[0];
    iobj_1->PositionLimitsInternal[7] = poslim_data[1];
    iobj_1->HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->JointInternal = iobj_1;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->JointToParentTransform[b_kstr] = tmp_b[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_get_MotionSubspa(obj->JointInternal, msubspace_data,
    msubspace_size);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    msubspace_data[b_kstr] = tmp_7[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(obj->JointInternal, msubspace_data);
  obj->JointInternal->InTree = true;
  obj->JointInternal->PositionLimitsInternal[0] = -0.78539816339744828;
  obj->JointInternal->PositionLimitsInternal[7] = 1.483;
  obj->JointInternal->JointAxisInternal[0] = 0.0;
  obj->JointInternal->JointAxisInternal[1] = 0.0;
  obj->JointInternal->JointAxisInternal[2] = 1.0;
  obj->JointInternal->HomePositionInternal[0] = 0.0;
  obj->CollisionsInternal = PickA_CollisionSet_CollisionSet(iobj_0, 0.0);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static f_robotics_manip_internal_R_o_T *PickAnd_RigidBody_RigidBody_ogw
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1)
{
  e_robotics_manip_internal_Cha_T s;
  f_robotics_manip_internal_R_o_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T tmp;
  boolean_T result;
  static const char_T tmp_0[7] = { 'F', 'O', 'R', 'E', 'A', 'R', 'M' };

  static const real_T tmp_1[9] = { 0.010714902352115131, -0.0025168761378282847,
    -3.8533065563211014E-6, -0.0025168761378282847, 0.00074659743266776088,
    -1.5164818091056276E-5, -3.8533065563211014E-6, -1.5164818091056276E-5,
    0.011264971358460269 };

  static const real_T tmp_2[36] = { 0.010714902352115131, -0.0025168761378282847,
    -3.8533065563211014E-6, 0.0, -0.000116750789591703, 0.066751857775336626,
    -0.0025168761378282847, 0.00074659743266776088, -1.5164818091056276E-5,
    0.000116750789591703, 0.0, -0.0160142250451979, -3.8533065563211014E-6,
    -1.5164818091056276E-5, 0.011264971358460269, -0.066751857775336626,
    0.0160142250451979, 0.0, 0.0, 0.000116750789591703, -0.066751857775336626,
    0.4296669212638, 0.0, 0.0, -0.000116750789591703, 0.0, 0.0160142250451979,
    0.0, 0.4296669212638, 0.0, 0.066751857775336626, -0.0160142250451979, 0.0,
    0.0, 0.0, 0.4296669212638 };

  static const int8_T tmp_3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T tmp_4[5] = { 'E', 'L', 'B', 'O', 'W' };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_5[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_6[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_7[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_8[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_9[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_a[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const real_T tmp_b[16] = { 0.14142135623730218, -0.98994949366116758,
    -0.0, 0.0, 0.98994949366116758, 0.14142135623730218, 0.0, 0.0, 0.0, -0.0,
    1.0, 0.0, 0.0500000000000004, -0.350000000000015, 0.0, 1.0 };

  int32_T msubspace_size[2];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 7.0;
  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_0[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = 3.0;
  obj->MassInternal = 0.4296669212638;
  obj->CenterOfMassInternal[0] = 0.0372712542033594;
  obj->CenterOfMassInternal[1] = 0.155357218514742;
  obj->CenterOfMassInternal[2] = 0.000271723941997439;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->InertiaInternal[b_kstr] = tmp_1[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->SpatialInertia[b_kstr] = tmp_2[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    tmp = tmp_3[b_kstr];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->JointToParentTransform[b_kstr] = tmp;
    iobj_1->ChildToJointTransform[b_kstr] = tmp;
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->NameInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_4[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s = iobj_1->TypeInternal;
  s.Length = 8.0;
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = a[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_5[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_6[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_7[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_8[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_9[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    iobj_1->JointAxisInternal[0] = (rtNaN);
    iobj_1->JointAxisInternal[1] = (rtNaN);
    iobj_1->JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(iobj_1, msubspace_data);
  s = iobj_1->TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != tmp_a[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = iobj_1->PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        iobj_1->PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iobj_1->HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[0] = poslim_data[0];
    iobj_1->PositionLimitsInternal[7] = poslim_data[1];
    iobj_1->HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->JointInternal = iobj_1;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->JointToParentTransform[b_kstr] = tmp_b[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_get_MotionSubspa(obj->JointInternal, msubspace_data,
    msubspace_size);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    msubspace_data[b_kstr] = tmp_7[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(obj->JointInternal, msubspace_data);
  obj->JointInternal->InTree = true;
  obj->JointInternal->PositionLimitsInternal[0] = -1.658;
  obj->JointInternal->PositionLimitsInternal[7] = 1.309;
  obj->JointInternal->JointAxisInternal[0] = 0.0;
  obj->JointInternal->JointAxisInternal[1] = 0.0;
  obj->JointInternal->JointAxisInternal[2] = 1.0;
  obj->JointInternal->HomePositionInternal[0] = 0.0;
  obj->CollisionsInternal = PickA_CollisionSet_CollisionSet(iobj_0, 0.0);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static f_robotics_manip_internal_R_o_T *PickAn_RigidBody_RigidBody_ogwo
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1)
{
  e_robotics_manip_internal_Cha_T s;
  f_robotics_manip_internal_R_o_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T tmp;
  boolean_T result;
  static const char_T tmp_0[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C',
    'T', 'O', 'R' };

  static const real_T tmp_1[9] = { 3.0980034913892174E-6, 7.9139298237574491E-9,
    2.1215216355265991E-8, 7.9139298237574491E-9, 3.059322121353783E-6,
    3.9179207849492555E-10, 2.1215216355265991E-8, 3.9179207849492555E-10,
    4.0061985137306217E-6 };

  static const real_T tmp_2[36] = { 3.0980034913892174E-6, 7.9139298237574491E-9,
    2.1215216355265991E-8, 0.0, -0.00014499073172338651, -1.0291773640103424E-6,
    7.9139298237574491E-9, 3.059322121353783E-6, 3.9179207849492555E-10,
    0.00014499073172338651, 0.0, 1.8086873928019055E-6, 2.1215216355265991E-8,
    3.9179207849492555E-10, 4.0061985137306217E-6, 1.0291773640103424E-6,
    -1.8086873928019055E-6, 0.0, 0.0, 0.00014499073172338651,
    1.0291773640103424E-6, 0.025331269641348, 0.0, 0.0, -0.00014499073172338651,
    0.0, -1.8086873928019055E-6, 0.0, 0.025331269641348, 0.0,
    -1.0291773640103424E-6, 1.8086873928019055E-6, 0.0, 0.0, 0.0,
    0.025331269641348 };

  static const int8_T tmp_3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T tmp_4[5] = { 'W', 'R', 'I', 'S', 'T' };

  static const char_T a[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_5[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_6[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_7[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_8[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_9[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_a[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const real_T tmp_b[16] = { 0.98994949366116725, -0.14142135623730462,
    -0.0, 0.0, -4.9377002621643607E-16, -3.4563901835151742E-15, -1.0, 0.0,
    0.14142135623730462, 0.98994949366116725, -3.4914813388431334E-15, 0.0,
    0.0336611536380097, 0.235607569369425, 0.0, 1.0 };

  int32_T msubspace_size[2];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  s = obj->NameInternal;
  s.Length = 12.0;
  for (b_kstr = 0; b_kstr < 12; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_0[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  obj->ParentIndex = 4.0;
  obj->MassInternal = 0.025331269641348;
  obj->CenterOfMassInternal[0] = -7.14013714436801E-5;
  obj->CenterOfMassInternal[1] = -4.06287319420589E-5;
  obj->CenterOfMassInternal[2] = 0.0057237846257307;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->InertiaInternal[b_kstr] = tmp_1[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->SpatialInertia[b_kstr] = tmp_2[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    tmp = tmp_3[b_kstr];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->JointToParentTransform[b_kstr] = tmp;
    iobj_1->ChildToJointTransform[b_kstr] = tmp;
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->NameInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_4[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->NameInternal = s;
  s = iobj_1->TypeInternal;
  s.Length = 8.0;
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = a[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1->TypeInternal = s;
  s = iobj_1->TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_5[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_6[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_7[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_8[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_9[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    iobj_1->JointAxisInternal[0] = (rtNaN);
    iobj_1->JointAxisInternal[1] = (rtNaN);
    iobj_1->JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    iobj_1->JointAxisInternal[0] = 0.0;
    iobj_1->JointAxisInternal[1] = 0.0;
    iobj_1->JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(iobj_1, msubspace_data);
  s = iobj_1->TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != tmp_a[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = iobj_1->PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        iobj_1->PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iobj_1->HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1->PositionLimitsInternal[0] = poslim_data[0];
    iobj_1->PositionLimitsInternal[7] = poslim_data[1];
    iobj_1->HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->JointInternal = iobj_1;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->JointToParentTransform[b_kstr] = tmp_b[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointInternal->ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_get_MotionSubspa(obj->JointInternal, msubspace_data,
    msubspace_size);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    msubspace_data[b_kstr] = tmp_7[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(obj->JointInternal, msubspace_data);
  obj->JointInternal->InTree = true;
  obj->JointInternal->PositionLimitsInternal[0] = -3.01;
  obj->JointInternal->PositionLimitsInternal[7] = 3.01;
  obj->JointInternal->JointAxisInternal[0] = 0.0;
  obj->JointInternal->JointAxisInternal[1] = 0.0;
  obj->JointInternal->JointAxisInternal[2] = 1.0;
  obj->JointInternal->HomePositionInternal[0] = 0.0;
  obj->CollisionsInternal = PickA_CollisionSet_CollisionSet(iobj_0, 0.0);
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void PickA_CharacterVector_setVector(e_robotics_manip_internal_Cha_T *obj,
  const char_T vec_data[], const int32_T vec_size[2])
{
  int32_T tmp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Length = vec_size[1];
  tmp = vec_size[1];
  if (tmp - 1 >= 0) {
    memcpy(&obj->Vector[0], &vec_data[0], (uint32_T)tmp * sizeof(char_T));
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static b_rigidBodyJoint_PickAndPlace_T *P_rigidBodyJoint_rigidBodyJoint
  (b_rigidBodyJoint_PickAndPlace_T *obj, const char_T jname_data[], const
   int32_T jname_size[2])
{
  b_rigidBodyJoint_PickAndPlace_T *b_obj;
  e_robotics_manip_internal_Cha_T s;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T tmp;
  boolean_T result;
  static const int8_T tmp_0[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_4[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_5[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    tmp = tmp_0[b_kstr];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->JointToParentTransform[b_kstr] = tmp;
    obj->ChildToJointTransform[b_kstr] = tmp;
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->MotionSubspaceInternal[b_kstr] = 0.0;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->TypeInternal = s;
  s = obj->NameInternal;
  PickA_CharacterVector_setVector(&s, jname_data, jname_size);
  obj->NameInternal = s;
  s = obj->TypeInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = b[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->TypeInternal = s;
  s = obj->TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_2[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_3[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_4[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->VelocityNumber = 1.0;
    obj->PositionNumber = 1.0;
    obj->JointAxisInternal[0] = 0.0;
    obj->JointAxisInternal[1] = 0.0;
    obj->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_5[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->VelocityNumber = 1.0;
    obj->PositionNumber = 1.0;
    obj->JointAxisInternal[0] = 0.0;
    obj->JointAxisInternal[1] = 0.0;
    obj->JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_6[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->VelocityNumber = 6.0;
    obj->PositionNumber = 7.0;
    obj->JointAxisInternal[0] = (rtNaN);
    obj->JointAxisInternal[1] = (rtNaN);
    obj->JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->VelocityNumber = 0.0;
    obj->PositionNumber = 0.0;
    obj->JointAxisInternal[0] = 0.0;
    obj->JointAxisInternal[1] = 0.0;
    obj->JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(obj, msubspace_data);
  s = obj->TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != b[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = obj->PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        obj->PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      obj->HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->PositionLimitsInternal[0] = poslim_data[0];
    obj->PositionLimitsInternal[7] = poslim_data[1];
    obj->HomePositionInternal[0] = homepos_data[0];
  }

  return b_obj;
}

static g_robotics_manip_internal_Rig_T *Pic_RigidBodyTree_RigidBodyTree
  (g_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  g_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  char_T s_data[204];
  int8_T b_I[36];
  int8_T homepos_data[7];
  boolean_T result;
  static const char_T tmp[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '1' };

  static const char_T tmp_0[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '2' };

  static const char_T tmp_1[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '3' };

  static const char_T tmp_2[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '4' };

  static const char_T tmp_3[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '5' };

  static const char_T tmp_4[9] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k' };

  static const real_T tmp_5[9] = { 0.028768757108327443, 7.4631381442683291E-7,
    -5.5352035432538354E-5, 7.4631381442683291E-7, 0.026539874468044112,
    2.3325033125477598E-7, -5.5352035432538354E-5, 2.3325033125477598E-7,
    0.048731110220704144 };

  static const real_T tmp_6[36] = { 0.028768757108327443, 7.4631381442683291E-7,
    -5.5352035432538354E-5, 0.0, -0.10442166007653277, -8.7055726677321662E-6,
    7.4631381442683291E-7, 0.026539874468044112, 2.3325033125477598E-7,
    0.10442166007653277, 0.0, -0.0020630727627134028, -5.5352035432538354E-5,
    2.3325033125477598E-7, 0.048731110220704144, 8.7055726677321662E-6,
    0.0020630727627134028, 0.0, 0.0, 0.10442166007653277, 8.7055726677321662E-6,
    3.89847036294307, 0.0, 0.0, -0.10442166007653277, 0.0, 0.0020630727627134028,
    0.0, 3.89847036294307, 0.0, -8.7055726677321662E-6, -0.0020630727627134028,
    0.0, 0.0, 0.0, 3.89847036294307 };

  static const int8_T tmp_7[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T tmp_8[16] = { 'w', 'o', 'r', 'l', 'd', '_', 'b', 'a', 's',
    'e', '_', 'j', 'o', 'i', 'n', 't' };

  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_9[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_a[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_b[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_c[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_d[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_e[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_f[5] = { 'w', 'o', 'r', 'l', 'd' };

  real_T unusedExpr[5];
  int32_T msubspace_size[2];
  int32_T s_size[2];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  PickAndPlace_Simulation_QL_rand(unusedExpr);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->NumBodies = 5.0;
  obj->Bodies[0] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj2[0], tmp,
    &obj->_pobj0[0], &obj->_pobj1[0]);
  obj->Bodies[1] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj2[1], tmp_0,
    &obj->_pobj0[1], &obj->_pobj1[1]);
  obj->Bodies[2] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj2[2], tmp_1,
    &obj->_pobj0[2], &obj->_pobj1[2]);
  obj->Bodies[3] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj2[3], tmp_2,
    &obj->_pobj0[3], &obj->_pobj1[3]);
  obj->Bodies[4] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj2[4], tmp_3,
    &obj->_pobj0[4], &obj->_pobj1[4]);
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[5].NameInternal = s;
  s = obj->_pobj2[5].NameInternal;
  s.Length = 9.0;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_4[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[5].NameInternal = s;
  obj->_pobj2[5].ParentIndex = 0.0;
  obj->_pobj2[5].MassInternal = 3.89847036294307;
  obj->_pobj2[5].CenterOfMassInternal[0] = 0.000529200576288575;
  obj->_pobj2[5].CenterOfMassInternal[1] = -2.23307396420992E-6;
  obj->_pobj2[5].CenterOfMassInternal[2] = 0.0267852902177001;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[5].InertiaInternal[b_kstr] = tmp_5[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[5].SpatialInertia[b_kstr] = tmp_6[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj1[5].InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].JointToParentTransform[b_kstr] = tmp_7[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].ChildToJointTransform[b_kstr] = tmp_7[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj1[5].NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj1[5].TypeInternal = s;
  s = obj->_pobj1[5].NameInternal;
  s.Length = 16.0;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_8[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj1[5].NameInternal = s;
  s = obj->_pobj1[5].TypeInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = b[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj1[5].TypeInternal = s;
  s = obj->_pobj1[5].TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp_9[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_a[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_b[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_c[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].VelocityNumber = 1.0;
    obj->_pobj1[5].PositionNumber = 1.0;
    obj->_pobj1[5].JointAxisInternal[0] = 0.0;
    obj->_pobj1[5].JointAxisInternal[1] = 0.0;
    obj->_pobj1[5].JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_d[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].VelocityNumber = 1.0;
    obj->_pobj1[5].PositionNumber = 1.0;
    obj->_pobj1[5].JointAxisInternal[0] = 0.0;
    obj->_pobj1[5].JointAxisInternal[1] = 0.0;
    obj->_pobj1[5].JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_e[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].VelocityNumber = 6.0;
    obj->_pobj1[5].PositionNumber = 7.0;
    obj->_pobj1[5].JointAxisInternal[0] = (rtNaN);
    obj->_pobj1[5].JointAxisInternal[1] = (rtNaN);
    obj->_pobj1[5].JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].VelocityNumber = 0.0;
    obj->_pobj1[5].PositionNumber = 0.0;
    obj->_pobj1[5].JointAxisInternal[0] = 0.0;
    obj->_pobj1[5].JointAxisInternal[1] = 0.0;
    obj->_pobj1[5].JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(&obj->_pobj1[5], msubspace_data);
  s = obj->_pobj1[5].TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != b[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = obj->_pobj1[5].PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        obj->_pobj1[5].PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      obj->_pobj1[5].HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj1[5].PositionLimitsInternal[0] = poslim_data[0];
    obj->_pobj1[5].PositionLimitsInternal[7] = poslim_data[1];
    obj->_pobj1[5].HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[5].JointInternal = &obj->_pobj1[5];
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[5].JointInternal->JointToParentTransform[b_kstr] = tmp_7[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[5].JointInternal->ChildToJointTransform[b_kstr] = tmp_7[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_get_MotionSubspa(obj->_pobj2[5].JointInternal, msubspace_data,
    msubspace_size);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    msubspace_data[b_kstr] = 0.0;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(obj->_pobj2[5].JointInternal, msubspace_data);
  obj->_pobj2[5].JointInternal->InTree = true;
  obj->_pobj2[5].JointInternal->PositionLimitsInternal[0] = 0.0;
  obj->_pobj2[5].JointInternal->PositionLimitsInternal[7] = 0.0;
  obj->_pobj2[5].JointInternal->JointAxisInternal[0] = 0.0;
  obj->_pobj2[5].JointInternal->JointAxisInternal[1] = 0.0;
  obj->_pobj2[5].JointInternal->JointAxisInternal[2] = 0.0;
  obj->_pobj2[5].JointInternal->HomePositionInternal[0] = 0.0;
  obj->_pobj2[5].CollisionsInternal = PickA_CollisionSet_CollisionSet
    (&obj->_pobj0[5], 0.0);
  obj->_pobj2[5].matlabCodegenIsDeleted = false;
  obj->Bodies[0] = &obj->_pobj2[5];
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = PickAndPl_RigidBody_RigidBody_o(&obj->_pobj2[6], &obj->
    _pobj0[6], &obj->_pobj1[6]);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = PickAndP_RigidBody_RigidBody_og(&obj->_pobj2[7], &obj->
    _pobj0[7], &obj->_pobj1[7]);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = PickAnd_RigidBody_RigidBody_ogw(&obj->_pobj2[8], &obj->
    _pobj0[8], &obj->_pobj1[8]);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = PickAn_RigidBody_RigidBody_ogwo(&obj->_pobj2[9], &obj->
    _pobj0[9], &obj->_pobj1[9]);
  obj->Bodies[4]->Index = 5.0;
  obj->Gravity[0] = 0.0;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = 0.0;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Base.NameInternal = s;
  s = obj->Base.NameInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_f[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Base.NameInternal = s;
  obj->Base.ParentIndex = -1.0;
  obj->Base.MassInternal = 0.0;
  obj->Base.CenterOfMassInternal[0] = 0.0;
  obj->Base.CenterOfMassInternal[1] = 0.0;
  obj->Base.CenterOfMassInternal[2] = 0.0;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->Base.InertiaInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->Base.SpatialInertia[b_kstr] = 0.0;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  s = obj->Base.NameInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  s_size[0] = 1;
  s_size[1] = c + 4;
  if (c - 1 >= 0) {
    memcpy(&s_data[0], &s.Vector[0], (uint32_T)c * sizeof(char_T));
  }

  s_data[c] = '_';
  s_data[c + 1] = 'j';
  s_data[c + 2] = 'n';
  s_data[c + 3] = 't';
  obj->Base.JointInternal = P_rigidBodyJoint_rigidBodyJoint(&obj->_pobj1[10],
    s_data, s_size);
  obj->Base.CollisionsInternal = PickA_CollisionSet_CollisionSet(&obj->_pobj0[10],
    0.0);
  obj->Base.matlabCodegenIsDeleted = false;
  obj->Base.Index = 0.0;
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static h_robotics_manip_internal_Rig_T *P_RigidBodyTree_RigidBodyTree_o
  (h_robotics_manip_internal_Rig_T *obj)
{
  e_robotics_manip_internal_Cha_T s;
  h_robotics_manip_internal_Rig_T *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T b_index;
  int32_T b_kstr;
  int32_T c;
  int8_T b_I_0[36];
  int8_T b_I[9];
  int8_T homepos_data[7];
  boolean_T result;
  static const int8_T tmp[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  static const char_T tmp_0[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_3[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_4[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_5[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_7[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '1' };

  static const char_T tmp_8[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '2' };

  static const char_T tmp_9[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '3' };

  static const char_T tmp_a[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '4' };

  static const char_T tmp_b[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '5' };

  static const int8_T tmp_c[10] = { 0, 0, 0, 0, 0, -1, -1, -1, -1, -1 };

  real_T unusedExpr[5];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_data_tmp;
  int32_T poslim_size_idx_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_obj = obj;
  PickAndPlace_Simulation_QL_rand(unusedExpr);
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Base.NameInternal = s;
  s = obj->Base.NameInternal;
  s.Length = 4.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  s.Vector[0] = 'b';
  s.Vector[1] = 'a';
  s.Vector[2] = 's';
  s.Vector[3] = 'e';
  obj->Base.NameInternal = s;
  obj->_pobj2[0].InTree = false;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].JointToParentTransform[b_kstr] = tmp[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].ChildToJointTransform[b_kstr] = tmp[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].PositionLimitsInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 7; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].HomePositionInternal[b_kstr] = 0.0;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].MotionSubspaceInternal[b_kstr] = 0.0;
  }

  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[0].NameInternal = s;
  s.Length = 200.0;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    s.Vector[b_kstr] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[0].TypeInternal = s;
  s = obj->_pobj2[0].NameInternal;
  s.Length = 8.0;
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = tmp_0[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[0].NameInternal = s;
  s = obj->_pobj2[0].TypeInternal;
  s.Length = 5.0;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    s.Vector[b_kstr] = b[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->_pobj2[0].TypeInternal = s;
  s = obj->_pobj2[0].TypeInternal;
  if (s.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)s.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp_1[b_kstr - 1] != s.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    b_index = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_2[b_kstr - 1] != s.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      b_index = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_3[b_kstr - 1] != s.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        b_index = 2.0;
      } else {
        b_index = -1.0;
      }
    }
  }

  switch ((int32_T)b_index) {
   case 0:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_4[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].VelocityNumber = 1.0;
    obj->_pobj2[0].PositionNumber = 1.0;
    obj->_pobj2[0].JointAxisInternal[0] = 0.0;
    obj->_pobj2[0].JointAxisInternal[1] = 0.0;
    obj->_pobj2[0].JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_kstr] = tmp_5[b_kstr];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].VelocityNumber = 1.0;
    obj->_pobj2[0].PositionNumber = 1.0;
    obj->_pobj2[0].JointAxisInternal[0] = 0.0;
    obj->_pobj2[0].JointAxisInternal[1] = 0.0;
    obj->_pobj2[0].JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      b_I_0[b_kstr] = 0;
    }

    for (c = 0; c < 6; c++) {
      b_I_0[c + 6 * c] = 1;
    }

    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      msubspace_data[b_kstr] = b_I_0[b_kstr];
    }

    poslim_size_idx_0 = 7;
    for (c = 0; c < 2; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 10 * c - 5;
      poslim_data_tmp = 7 * c;
      poslim_data[poslim_data_tmp] = (rtNaN);
      poslim_data[1 + poslim_data_tmp] = (rtNaN);
      poslim_data[2 + poslim_data_tmp] = (rtNaN);
      poslim_data[3 + poslim_data_tmp] = (rtNaN);
      poslim_data[4 + poslim_data_tmp] = b_kstr;
      poslim_data[5 + poslim_data_tmp] = b_kstr;
      poslim_data[6 + poslim_data_tmp] = b_kstr;
    }

    homepos_size_idx_1 = 7;
    for (b_kstr = 0; b_kstr < 7; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_kstr] = tmp_6[b_kstr];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].VelocityNumber = 6.0;
    obj->_pobj2[0].PositionNumber = 7.0;
    obj->_pobj2[0].JointAxisInternal[0] = (rtNaN);
    obj->_pobj2[0].JointAxisInternal[1] = (rtNaN);
    obj->_pobj2[0].JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].VelocityNumber = 0.0;
    obj->_pobj2[0].PositionNumber = 0.0;
    obj->_pobj2[0].JointAxisInternal[0] = 0.0;
    obj->_pobj2[0].JointAxisInternal[1] = 0.0;
    obj->_pobj2[0].JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(&obj->_pobj2[0], msubspace_data);
  s = obj->_pobj2[0].TypeInternal;
  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (s.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)s.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (s.Vector[b_kstr - 1] != b[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_index = obj->_pobj2[0].PositionNumber;
    if (b_index < 1.0) {
      c = 0;
    } else {
      c = (int32_T)b_index;
    }

    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (poslim_data_tmp = 0; poslim_data_tmp < c; poslim_data_tmp++) {
        obj->_pobj2[0].PositionLimitsInternal[poslim_data_tmp + 7 * b_kstr] =
          poslim_data[poslim_size_idx_0 * b_kstr + poslim_data_tmp];
      }
    }

    for (b_kstr = 0; b_kstr < homepos_size_idx_1; b_kstr++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      obj->_pobj2[0].HomePositionInternal[b_kstr] = homepos_data[b_kstr];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->_pobj2[0].PositionLimitsInternal[0] = poslim_data[0];
    obj->_pobj2[0].PositionLimitsInternal[7] = poslim_data[1];
    obj->_pobj2[0].HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Base.JointInternal = &obj->_pobj2[0];
  obj->Base.Index = -1.0;
  obj->Base.ParentIndex = -1.0;
  obj->Base.MassInternal = 1.0;
  obj->Base.CenterOfMassInternal[0] = 0.0;
  obj->Base.CenterOfMassInternal[1] = 0.0;
  obj->Base.CenterOfMassInternal[2] = 0.0;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    b_I[b_kstr] = 0;
  }

  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->Base.InertiaInternal[b_kstr] = b_I[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    b_I_0[b_kstr] = 0;
  }

  for (c = 0; c < 6; c++) {
    b_I_0[c + 6 * c] = 1;
  }

  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->Base.SpatialInertia[b_kstr] = b_I_0[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->Base.CollisionsInternal = PickA_CollisionSet_CollisionSet(&obj->_pobj1[0],
    0.0);
  obj->Base.matlabCodegenIsDeleted = false;
  obj->Base.Index = 0.0;
  obj->Bodies[0] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj0[0], tmp_7,
    &obj->_pobj1[1], &obj->_pobj2[1]);
  obj->Bodies[1] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj0[1], tmp_8,
    &obj->_pobj1[2], &obj->_pobj2[2]);
  obj->Bodies[2] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj0[2], tmp_9,
    &obj->_pobj1[3], &obj->_pobj2[3]);
  obj->Bodies[3] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj0[3], tmp_a,
    &obj->_pobj1[4], &obj->_pobj2[4]);
  obj->Bodies[4] = PickAndPlac_RigidBody_RigidBody(&obj->_pobj0[4], tmp_b,
    &obj->_pobj1[5], &obj->_pobj2[5]);
  obj->NumBodies = 0.0;
  obj->NumNonFixedBodies = 0.0;
  obj->PositionNumber = 0.0;
  obj->VelocityNumber = 0.0;
  PickAndPlace_Simulation_QL_rand(unusedExpr);
  for (b_kstr = 0; b_kstr < 10; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->PositionDoFMap[b_kstr] = tmp_c[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 10; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->VelocityDoFMap[b_kstr] = tmp_c[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static boolean_T PickAndPlace_Simulation__strcmp(const char_T a_data[], const
  int32_T a_size[2], const char_T b_data[], const int32_T b_size[2])
{
  boolean_T b_bool;
  boolean_T e;
  b_bool = false;
  e = (a_size[1] == 0);
  if (e && (b_size[1] == 0)) {
    b_bool = true;
  } else if (a_size[1] != b_size[1]) {
  } else {
    int32_T b_kstr;
    b_kstr = 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 <= b_size[1] - 1) {
        if (a_data[b_kstr - 1] != b_data[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static real_T RigidBodyTree_findBodyIndexByNa(h_robotics_manip_internal_Rig_T
  *obj, const char_T bodyname_data[], const int32_T bodyname_size[2])
{
  f_robotics_manip_internal_R_o_T *obj_0;
  real_T b;
  real_T bid;
  real_T obj_Length;
  int32_T obj_Vector_size[2];
  int32_T b_i;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  boolean_T exitg1;
  bid = -1.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_Length = obj->Base.NameInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[loop_ub] = obj->Base.NameInternal.Vector[loop_ub];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)obj_Length;
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (PickAndPlace_Simulation__strcmp(obj_Vector_data, obj_Vector_size,
       bodyname_data, bodyname_size)) {
    bid = 0.0;
  } else {
    b = obj->NumBodies;
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b - 1)) {
      obj_0 = obj->Bodies[b_i];
      obj_Length = obj_0->NameInternal.Length;
      for (loop_ub = 0; loop_ub < 200; loop_ub++) {
        obj_Vector[loop_ub] = obj_0->NameInternal.Vector[loop_ub];
      }

      if (obj_Length < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = (int32_T)obj_Length;
      }

      obj_Vector_size[0] = 1;
      obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (PickAndPlace_Simulation__strcmp(obj_Vector_data, obj_Vector_size,
           bodyname_data, bodyname_size)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  return bid;
}

static void PickAndPlace_Sim_validatestring(const char_T str_data[], const
  int32_T str_size[2], char_T out_data[], int32_T out_size[2])
{
  int32_T minnanb;
  int32_T nmatched;
  int32_T y_tmp;
  boolean_T b_bool;
  boolean_T matched;
  static const char_T tmp[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  static const char_T vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c'
  };

  static const char_T c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T vstr_0[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  int32_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  boolean_T guard4;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  out_size[0] = 1;
  out_size[1] = 8;
  for (minnanb = 0; minnanb < 8; minnanb++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    out_data[minnanb] = ' ';
  }

  nmatched = 0;
  matched = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (str_size[1] <= 8) {
    b_bool = false;
    minnanb = str_size[1];
    y_tmp = 1;
    do {
      exitg1 = 0;
      if (y_tmp - 1 <= minnanb - 1) {
        if (tmp[(int32_T)((uint8_T)str_data[y_tmp - 1] & 127U)] != tmp[(int32_T)
            vstr[y_tmp - 1]]) {
          exitg1 = 1;
        } else {
          y_tmp++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (b_bool) {
      if (str_size[1] == 8) {
        nmatched = 1;
        out_size[0] = 1;
        out_size[1] = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          out_data[minnanb] = vstr[minnanb];
        }
      } else {
        out_size[0] = 1;
        out_size[1] = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          out_data[minnanb] = vstr[minnanb];
        }

        matched = true;
        nmatched = 1;
        guard4 = true;
      }
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if (str_size[1] <= 9) {
      b_bool = false;
      minnanb = str_size[1];
      y_tmp = 1;
      do {
        exitg1 = 0;
        if (y_tmp - 1 <= minnanb - 1) {
          if (tmp[(int32_T)((uint8_T)str_data[y_tmp - 1] & 127U)] != tmp
              [(int32_T)b_vstr[y_tmp - 1]]) {
            exitg1 = 1;
          } else {
            y_tmp++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (b_bool) {
        if (str_size[1] == 9) {
          nmatched = 1;
          out_size[0] = 1;
          out_size[1] = 9;
          for (minnanb = 0; minnanb < 9; minnanb++) {
            out_data[minnanb] = b_vstr[minnanb];
          }
        } else {
          if (!matched) {
            out_size[0] = 1;
            out_size[1] = 9;
            for (minnanb = 0; minnanb < 9; minnanb++) {
              out_data[minnanb] = b_vstr[minnanb];
            }
          }

          matched = true;
          nmatched++;
          guard3 = true;
        }
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if (str_size[1] <= 5) {
      b_bool = false;
      minnanb = str_size[1];
      y_tmp = 1;
      do {
        exitg1 = 0;
        if (y_tmp - 1 <= minnanb - 1) {
          if (tmp[(int32_T)((uint8_T)str_data[y_tmp - 1] & 127U)] != tmp
              [(int32_T)c_vstr[y_tmp - 1]]) {
            exitg1 = 1;
          } else {
            y_tmp++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (b_bool) {
        if (str_size[1] == 5) {
          nmatched = 1;
          out_size[0] = 1;
          out_size[1] = 5;
          for (minnanb = 0; minnanb < 5; minnanb++) {
            out_data[minnanb] = c_vstr[minnanb];
          }
        } else {
          if (!matched) {
            out_size[0] = 1;
            out_size[1] = 5;
            for (minnanb = 0; minnanb < 5; minnanb++) {
              out_data[minnanb] = c_vstr[minnanb];
            }
          }

          matched = true;
          nmatched++;
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (str_size[1] <= 8) {
      b_bool = false;
      minnanb = str_size[1];
      y_tmp = 1;
      do {
        exitg1 = 0;
        if (y_tmp - 1 <= minnanb - 1) {
          if (tmp[(int32_T)((uint8_T)str_data[y_tmp - 1] & 127U)] != tmp
              [(int32_T)vstr_0[y_tmp - 1]]) {
            exitg1 = 1;
          } else {
            y_tmp++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (b_bool) {
        if (str_size[1] == 8) {
          nmatched = 1;
          out_size[0] = 1;
          out_size[1] = 8;
          for (minnanb = 0; minnanb < 8; minnanb++) {
            out_data[minnanb] = vstr_0[minnanb];
          }
        } else {
          if (!matched) {
            out_size[0] = 1;
            out_size[1] = 8;
            for (minnanb = 0; minnanb < 8; minnanb++) {
              out_data[minnanb] = vstr_0[minnanb];
            }
          }

          nmatched++;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (nmatched == 0) {
      out_size[0] = 1;
      out_size[1] = 8;
      for (minnanb = 0; minnanb < 8; minnanb++) {
        out_data[minnanb] = ' ';
      }
    }
  }

  if ((nmatched == 0) || (str_size[1] == 0)) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    out_size[0] = 1;
    out_size[1] = 8;
    for (minnanb = 0; minnanb < 8; minnanb++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      out_data[minnanb] = ' ';
    }
  }
}

static f_robotics_manip_internal_R_o_T *PickAndPlace_Sim_RigidBody_copy
  (f_robotics_manip_internal_R_o_T *obj, g_robotics_manip_internal_C_o_T *iobj_0,
   b_rigidBodyJoint_PickAndPlace_T *iobj_1, f_robotics_manip_internal_R_o_T
   *iobj_2)
{
  void *copyGeometryInternal;
  b_rigidBodyJoint_PickAndPlace_T *obj_0;
  e_robotics_manip_internal_Cha_T s;
  f_robotics_manip_internal_C_o_T tmp;
  f_robotics_manip_internal_R_o_T *newbody;
  g_robotics_manip_internal_C_o_T *newObj;
  g_robotics_manip_internal_C_o_T *obj_1;
  real_T msubspace_data[36];
  real_T obj_3[16];
  real_T poslim_data[14];
  real_T obj_4[9];
  real_T obj_2[7];
  real_T obj_Length;
  real_T obj_Length_0;
  real_T obj_idx_2;
  int32_T b_k;
  int32_T b_tmp;
  int32_T c;
  char_T obj_Vector_data_0[204];
  char_T obj_Vector[200];
  char_T obj_Vector_0[200];
  char_T obj_Vector_data[200];
  int8_T b_I_0[36];
  int8_T b_I[9];
  int8_T homepos_data[7];
  int8_T tmp_0;
  boolean_T result;
  static const int8_T tmp_1[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const char_T tmp_2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_3[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_4[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static const int8_T tmp_5[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T tmp_6[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T tmp_7[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static const char_T tmp_8[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T obj_Vector_size[2];
  int32_T obj_Vector_size_0[2];
  int32_T exitg1;
  int32_T homepos_size_idx_1;
  int32_T poslim_size_idx_0;
  char_T tmp_data[9];
  obj_Length = obj->NameInternal.Length;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    obj_Vector[b_tmp] = obj->NameInternal.Vector[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj_Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)obj_Length;
  }

  newbody = iobj_2;
  s.Length = 200.0;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    s.Vector[b_tmp] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_2->NameInternal = s;
  s = iobj_2->NameInternal;
  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = c;
  if (c - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)c * sizeof(char_T));
  }

  PickA_CharacterVector_setVector(&s, obj_Vector_data, obj_Vector_size);
  iobj_2->NameInternal = s;
  obj_Vector_size_0[0] = 1;
  obj_Vector_size_0[1] = c + 4;
  if (c - 1 >= 0) {
    memcpy(&obj_Vector_data_0[0], &obj_Vector[0], (uint32_T)c * sizeof(char_T));
  }

  obj_Vector_data_0[c] = '_';
  obj_Vector_data_0[c + 1] = 'j';
  obj_Vector_data_0[c + 2] = 'n';
  obj_Vector_data_0[c + 3] = 't';
  iobj_2->JointInternal = P_rigidBodyJoint_rigidBodyJoint(&iobj_1[0],
    obj_Vector_data_0, obj_Vector_size_0);
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  iobj_2->MassInternal = 1.0;
  iobj_2->CenterOfMassInternal[0] = 0.0;
  iobj_2->CenterOfMassInternal[1] = 0.0;
  iobj_2->CenterOfMassInternal[2] = 0.0;
  for (b_tmp = 0; b_tmp < 9; b_tmp++) {
    b_I[b_tmp] = 0;
  }

  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (b_tmp = 0; b_tmp < 9; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_2->InertiaInternal[b_tmp] = b_I[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 36; b_tmp++) {
    b_I_0[b_tmp] = 0;
  }

  for (b_k = 0; b_k < 6; b_k++) {
    b_I_0[b_k + 6 * b_k] = 1;
  }

  for (b_tmp = 0; b_tmp < 36; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_2->SpatialInertia[b_tmp] = b_I_0[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_2->CollisionsInternal = PickA_CollisionSet_CollisionSet(&iobj_0[0], 0.0);
  iobj_2->matlabCodegenIsDeleted = false;
  obj_0 = obj->JointInternal;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_Length = obj_0->TypeInternal.Length;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[b_tmp] = obj_0->TypeInternal.Vector[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_Length_0 = obj_0->NameInternal.Length;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector_0[b_tmp] = obj_0->NameInternal.Vector[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1[1].InTree = false;
  for (b_tmp = 0; b_tmp < 16; b_tmp++) {
    tmp_0 = tmp_1[b_tmp];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].JointToParentTransform[b_tmp] = tmp_0;
    iobj_1[1].ChildToJointTransform[b_tmp] = tmp_0;
  }

  for (b_tmp = 0; b_tmp < 14; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].PositionLimitsInternal[b_tmp] = 0.0;
  }

  for (b_tmp = 0; b_tmp < 7; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].HomePositionInternal[b_tmp] = 0.0;
  }

  for (b_tmp = 0; b_tmp < 36; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].MotionSubspaceInternal[b_tmp] = 0.0;
  }

  s.Length = 200.0;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    s.Vector[b_tmp] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1[1].NameInternal = s;
  s.Length = 200.0;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    s.Vector[b_tmp] = ' ';
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_1[1].TypeInternal = s;
  s = iobj_1[1].NameInternal;
  if (obj_Length_0 < 1.0) {
    b_k = 0;
  } else {
    b_k = (int32_T)obj_Length_0;
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = b_k;
  if (b_k - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector_0[0], (uint32_T)b_k * sizeof(char_T));
  }

  PickA_CharacterVector_setVector(&s, obj_Vector_data, obj_Vector_size);
  iobj_1[1].NameInternal = s;
  s = iobj_1[1].TypeInternal;
  if (obj_Length < 1.0) {
    b_k = 0;
  } else {
    b_k = (int32_T)obj_Length;
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = b_k;
  if (b_k - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)b_k * sizeof(char_T));
  }

  PickAndPlace_Sim_validatestring(obj_Vector_data, obj_Vector_size, tmp_data,
    obj_Vector_size_0);
  PickA_CharacterVector_setVector(&s, tmp_data, obj_Vector_size_0);
  iobj_1[1].TypeInternal = s;
  obj_Length = iobj_1[1].TypeInternal.Length;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[b_tmp] = iobj_1[1].TypeInternal.Vector[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj_Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)obj_Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (c == 8) {
    b_k = 1;
    do {
      exitg1 = 0;
      if (b_k - 1 < 8) {
        if (tmp_2[b_k - 1] != obj_Vector[b_k - 1]) {
          exitg1 = 1;
        } else {
          b_k++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    obj_Length = 0.0;
  } else {
    if (c == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_k = 1;
      do {
        exitg1 = 0;
        if (b_k - 1 < 9) {
          if (tmp_3[b_k - 1] != obj_Vector[b_k - 1]) {
            exitg1 = 1;
          } else {
            b_k++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      obj_Length = 1.0;
    } else {
      if (c == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_k = 1;
        do {
          exitg1 = 0;
          if (b_k - 1 < 8) {
            if (tmp_4[b_k - 1] != obj_Vector[b_k - 1]) {
              exitg1 = 1;
            } else {
              b_k++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        obj_Length = 2.0;
      } else {
        obj_Length = -1.0;
      }
    }
  }

  switch ((int32_T)obj_Length) {
   case 0:
    for (b_tmp = 0; b_tmp < 6; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_tmp] = tmp_5[b_tmp];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    iobj_1[1].JointAxisInternal[0] = 0.0;
    iobj_1[1].JointAxisInternal[1] = 0.0;
    iobj_1[1].JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_tmp = 0; b_tmp < 6; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      msubspace_data[b_tmp] = tmp_6[b_tmp];
    }

    poslim_size_idx_0 = 1;
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    iobj_1[1].JointAxisInternal[0] = 0.0;
    iobj_1[1].JointAxisInternal[1] = 0.0;
    iobj_1[1].JointAxisInternal[2] = 1.0;
    break;

   case 2:
    for (b_tmp = 0; b_tmp < 36; b_tmp++) {
      b_I_0[b_tmp] = 0;
    }

    for (b_k = 0; b_k < 6; b_k++) {
      b_I_0[b_k + 6 * b_k] = 1;
    }

    for (b_tmp = 0; b_tmp < 36; b_tmp++) {
      msubspace_data[b_tmp] = b_I_0[b_tmp];
    }

    poslim_size_idx_0 = 7;
    for (b_k = 0; b_k < 2; b_k++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_tmp = 10 * b_k - 5;
      c = 7 * b_k;
      poslim_data[c] = (rtNaN);
      poslim_data[1 + c] = (rtNaN);
      poslim_data[2 + c] = (rtNaN);
      poslim_data[3 + c] = (rtNaN);
      poslim_data[4 + c] = b_tmp;
      poslim_data[5 + c] = b_tmp;
      poslim_data[6 + c] = b_tmp;
    }

    homepos_size_idx_1 = 7;
    for (b_tmp = 0; b_tmp < 7; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      homepos_data[b_tmp] = tmp_7[b_tmp];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].VelocityNumber = 6.0;
    iobj_1[1].PositionNumber = 7.0;
    iobj_1[1].JointAxisInternal[0] = (rtNaN);
    iobj_1[1].JointAxisInternal[1] = (rtNaN);
    iobj_1[1].JointAxisInternal[2] = (rtNaN);
    break;

   default:
    for (b_tmp = 0; b_tmp < 6; b_tmp++) {
      msubspace_data[b_tmp] = 0.0;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_size_idx_0 = 1;
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].VelocityNumber = 0.0;
    iobj_1[1].PositionNumber = 0.0;
    iobj_1[1].JointAxisInternal[0] = 0.0;
    iobj_1[1].JointAxisInternal[1] = 0.0;
    iobj_1[1].JointAxisInternal[2] = 0.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  rigidBodyJoint_set_MotionSubspa(&iobj_1[1], msubspace_data);
  obj_Length = iobj_1[1].TypeInternal.Length;
  for (b_tmp = 0; b_tmp < 200; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[b_tmp] = iobj_1[1].TypeInternal.Vector[b_tmp];
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj_Length < 1.0) {
    b_tmp = 0;
  } else {
    b_tmp = (int32_T)obj_Length;
  }

  if (b_tmp == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_k = 1;
    do {
      exitg1 = 0;
      if (b_k - 1 < 5) {
        if (obj_Vector[b_k - 1] != tmp_8[b_k - 1]) {
          exitg1 = 1;
        } else {
          b_k++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!result) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Length = iobj_1[1].PositionNumber;
    if (obj_Length < 1.0) {
      c = 0;
    } else {
      c = (int32_T)obj_Length;
    }

    for (b_tmp = 0; b_tmp < 2; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (b_k = 0; b_k < c; b_k++) {
        iobj_1[1].PositionLimitsInternal[b_k + 7 * b_tmp] =
          poslim_data[poslim_size_idx_0 * b_tmp + b_k];
      }
    }

    for (b_tmp = 0; b_tmp < homepos_size_idx_1; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iobj_1[1].HomePositionInternal[b_tmp] = homepos_data[b_tmp];
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].PositionLimitsInternal[0] = poslim_data[0];
    iobj_1[1].PositionLimitsInternal[7] = poslim_data[1];
    iobj_1[1].HomePositionInternal[0] = homepos_data[0];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_Length = obj_0->NameInternal.Length;
  if (obj_Length < 1.0) {
    b_tmp = 0;
  } else {
    b_tmp = (int32_T)obj_Length;
  }

  if (b_tmp != 0) {
    obj_Length = obj_0->NameInternal.Length;
    for (b_tmp = 0; b_tmp < 200; b_tmp++) {
      obj_Vector[b_tmp] = obj_0->NameInternal.Vector[b_tmp];
    }

    if (!iobj_1[1].InTree) {
      s = iobj_1[1].NameInternal;
      if (obj_Length < 1.0) {
        b_k = 0;
      } else {
        b_k = (int32_T)obj_Length;
      }

      obj_Vector_size[0] = 1;
      obj_Vector_size[1] = b_k;
      if (b_k - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)b_k * sizeof
               (char_T));
      }

      PickA_CharacterVector_setVector(&s, obj_Vector_data, obj_Vector_size);
      iobj_1[1].NameInternal = s;
    }
  }

  for (b_tmp = 0; b_tmp < 14; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    poslim_data[b_tmp] = obj_0->PositionLimitsInternal[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 14; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].PositionLimitsInternal[b_tmp] = poslim_data[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 7; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_2[b_tmp] = obj_0->HomePositionInternal[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 7; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].HomePositionInternal[b_tmp] = obj_2[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_Length = obj_0->JointAxisInternal[0];
  obj_Length_0 = obj_0->JointAxisInternal[1];
  obj_idx_2 = obj_0->JointAxisInternal[2];
  iobj_1[1].JointAxisInternal[0] = obj_Length;
  iobj_1[1].JointAxisInternal[1] = obj_Length_0;
  iobj_1[1].JointAxisInternal[2] = obj_idx_2;
  rigidBodyJoint_get_MotionSubspa(obj_0, msubspace_data, obj_Vector_size);
  rigidBodyJoint_set_MotionSubspa(&iobj_1[1], msubspace_data);
  for (b_tmp = 0; b_tmp < 16; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_3[b_tmp] = obj_0->JointToParentTransform[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 16; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].JointToParentTransform[b_tmp] = obj_3[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 16; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_3[b_tmp] = obj_0->ChildToJointTransform[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 16; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_1[1].ChildToJointTransform[b_tmp] = obj_3[b_tmp];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_2->JointInternal = &iobj_1[1];
  iobj_2->MassInternal = obj->MassInternal;
  obj_Length = obj->CenterOfMassInternal[0];
  obj_Length_0 = obj->CenterOfMassInternal[1];
  obj_idx_2 = obj->CenterOfMassInternal[2];

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_2->CenterOfMassInternal[0] = obj_Length;
  iobj_2->CenterOfMassInternal[1] = obj_Length_0;
  iobj_2->CenterOfMassInternal[2] = obj_idx_2;
  for (b_tmp = 0; b_tmp < 9; b_tmp++) {
    obj_4[b_tmp] = obj->InertiaInternal[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 9; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_2->InertiaInternal[b_tmp] = obj_4[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 36; b_tmp++) {
    msubspace_data[b_tmp] = obj->SpatialInertia[b_tmp];
  }

  for (b_tmp = 0; b_tmp < 36; b_tmp++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    iobj_2->SpatialInertia[b_tmp] = msubspace_data[b_tmp];
  }

  obj_1 = obj->CollisionsInternal;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  newObj = PickA_CollisionSet_CollisionSet(&iobj_0[1], obj_1->MaxElements);
  newObj->Size = obj_1->Size;
  obj_Length = obj_1->Size;
  c = (int32_T)obj_Length;
  for (b_k = 0; b_k < c; b_k++) {
    tmp = obj_1->CollisionGeometries->data[b_k];
    copyGeometryInternal = collisioncodegen_copyGeometry(tmp.CollisionPrimitive);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    newObj->CollisionGeometries->data[b_k].CollisionPrimitive =
      copyGeometryInternal;
    memcpy(&obj_3[0], &tmp.LocalPose[0], sizeof(real_T) << 4U);
    for (b_tmp = 0; b_tmp < 16; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      newObj->CollisionGeometries->data[b_k].LocalPose[b_tmp] = obj_3[b_tmp];
    }

    memcpy(&obj_3[0], &tmp.WorldPose[0], sizeof(real_T) << 4U);
    for (b_tmp = 0; b_tmp < 16; b_tmp++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      newObj->CollisionGeometries->data[b_k].WorldPose[b_tmp] = obj_3[b_tmp];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    newObj->CollisionGeometries->data[b_k].MeshScale[0] = tmp.MeshScale[0];
    newObj->CollisionGeometries->data[b_k].MeshScale[1] = tmp.MeshScale[1];
    newObj->CollisionGeometries->data[b_k].MeshScale[2] = tmp.MeshScale[2];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  iobj_2->CollisionsInternal = newObj;
  return newbody;
}

static void PickAndPl_RigidBodyTree_addBody(h_robotics_manip_internal_Rig_T *obj,
  f_robotics_manip_internal_R_o_T *bodyin, const char_T parentName_data[], const
  int32_T parentName_size[2], g_robotics_manip_internal_C_o_T *iobj_0,
  b_rigidBodyJoint_PickAndPlace_T *iobj_1, f_robotics_manip_internal_R_o_T
  *iobj_2)
{
  b_rigidBodyJoint_PickAndPlace_T *jnt;
  f_robotics_manip_internal_R_o_T *body;
  real_T b_index;
  real_T pid;
  int32_T b_kstr;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T obj_Vector_size[2];
  int32_T exitg1;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  pid = bodyin->NameInternal.Length;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[b_kstr] = bodyin->NameInternal.Vector[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (pid < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)pid;
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = b_kstr;
  if (b_kstr - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)b_kstr * sizeof(char_T));
  }

  RigidBodyTree_findBodyIndexByNa(obj, obj_Vector_data, obj_Vector_size);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  pid = RigidBodyTree_findBodyIndexByNa(obj, parentName_data, parentName_size);
  b_index = obj->NumBodies + 1.0;
  body = PickAndPlace_Sim_RigidBody_copy(bodyin, &iobj_0[0], &iobj_1[0], iobj_2);
  obj->Bodies[(int32_T)b_index - 1] = body;
  body->Index = b_index;
  body->ParentIndex = pid;
  body->JointInternal->InTree = true;
  obj->NumBodies++;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  jnt = body->JointInternal;
  pid = jnt->TypeInternal.Length;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[b_kstr] = jnt->TypeInternal.Vector[b_kstr];
  }

  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (pid < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)pid;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj_Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    obj->NumNonFixedBodies++;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    jnt = body->JointInternal;
    b_kstr = (int32_T)body->Index - 1;
    obj->PositionDoFMap[b_kstr] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[b_kstr + 5] = obj->PositionNumber + jnt->PositionNumber;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    jnt = body->JointInternal;
    b_kstr = (int32_T)body->Index - 1;
    obj->VelocityDoFMap[b_kstr] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[b_kstr + 5] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    b_kstr = (int32_T)body->Index;
    obj->PositionDoFMap[b_kstr - 1] = 0.0;
    obj->PositionDoFMap[b_kstr + 4] = -1.0;
    b_kstr = (int32_T)body->Index;
    obj->VelocityDoFMap[b_kstr - 1] = 0.0;
    obj->VelocityDoFMap[b_kstr + 4] = -1.0;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static void PickAndPlace__IKBlock_setupImpl(robotics_slmanip_internal_b_o_T *obj)
{
  d_robotics_core_internal_Erro_T *obj_0;
  f_robotics_manip_internal_R_o_T *body;
  f_robotics_manip_internal_R_o_T *parent;
  h_robotics_manip_internal_Rig_T *newrobot;
  int32_T ret;
  char_T switch_expression[18];
  boolean_T params_UseErrorDamping;
  static const char_T a[18] = { 'L', 'e', 'v', 'e', 'n', 'b', 'e', 'r', 'g', 'M',
    'a', 'r', 'q', 'u', 'a', 'r', 'd', 't' };

  void *copyGeometryInternal;
  e_robotics_manip_internal_Cha_T obj_2;
  f_robotics_manip_internal_C_o_T tmp;
  g_robotics_manip_internal_C_o_T *newObj;
  g_robotics_manip_internal_C_o_T *obj_1;
  real_T b;
  real_T bid;
  int32_T i;
  int32_T loop_ub;
  char_T b_basename_data[200];
  char_T obj_data[200];
  static const char_T a_0[18] = { 'L', 'e', 'v', 'e', 'n', 'b', 'e', 'r', 'g',
    'M', 'a', 'r', 'q', 'u', 'a', 'r', 'd', 't' };

  int32_T b_basename_size[2];
  int32_T obj_size[2];
  boolean_T exitg1;
  Pic_RigidBodyTree_RigidBodyTree(&obj->TreeInternal);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->IKInternal.isInitialized = 0;
  newrobot = P_RigidBodyTree_RigidBodyTree_o(&obj->IKInternal._pobj4);
  obj_2 = obj->TreeInternal.Base.NameInternal;
  if (obj_2.Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)obj_2.Length;
  }

  b_basename_size[0] = 1;
  b_basename_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&b_basename_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  bid = -1.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_2 = newrobot->Base.NameInternal;
  if (obj_2.Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)obj_2.Length;
  }

  obj_size[0] = 1;
  obj_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
  }

  if (PickAndPlace_Simulation__strcmp(obj_data, obj_size, b_basename_data,
       b_basename_size)) {
    bid = 0.0;
  } else {
    b = newrobot->NumBodies;
    ret = 0;
    exitg1 = false;
    while ((!exitg1) && (ret <= (int32_T)b - 1)) {
      body = newrobot->Bodies[ret];
      obj_2 = body->NameInternal;
      if (obj_2.Length < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = (int32_T)obj_2.Length;
      }

      obj_size[0] = 1;
      obj_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
      }

      if (PickAndPlace_Simulation__strcmp(obj_data, obj_size, b_basename_data,
           b_basename_size)) {
        bid = (real_T)ret + 1.0;
        exitg1 = true;
      } else {
        ret++;
      }
    }
  }

  if ((!(bid == 0.0)) && (bid < 0.0)) {
    obj_2 = newrobot->Base.NameInternal;
    PickA_CharacterVector_setVector(&obj_2, b_basename_data, b_basename_size);
    newrobot->Base.NameInternal = obj_2;
  }

  obj_1 = obj->TreeInternal.Base.CollisionsInternal;
  newObj = PickA_CollisionSet_CollisionSet(&obj->IKInternal._pobj3[0],
    obj_1->MaxElements);
  newObj->Size = obj_1->Size;
  b = obj_1->Size;
  loop_ub = (int32_T)b;
  for (ret = 0; ret < loop_ub; ret++) {
    tmp = obj_1->CollisionGeometries->data[ret];
    copyGeometryInternal = collisioncodegen_copyGeometry(tmp.CollisionPrimitive);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    newObj->CollisionGeometries->data[ret].CollisionPrimitive =
      copyGeometryInternal;
    for (i = 0; i < 16; i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      newObj->CollisionGeometries->data[ret].LocalPose[i] = (&tmp.LocalPose[0])
        [i];
    }

    for (i = 0; i < 16; i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      newObj->CollisionGeometries->data[ret].WorldPose[i] = (&tmp.WorldPose[0])
        [i];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    newObj->CollisionGeometries->data[ret].MeshScale[0] = tmp.MeshScale[0];
    newObj->CollisionGeometries->data[ret].MeshScale[1] = tmp.MeshScale[1];
    newObj->CollisionGeometries->data[ret].MeshScale[2] = tmp.MeshScale[2];
  }

  newrobot->Base.CollisionsInternal = newObj;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TreeInternal.NumBodies >= 1.0) {
    body = obj->TreeInternal.Bodies[0];
    bid = body->ParentIndex;
    if (bid > 0.0) {
      parent = obj->TreeInternal.Bodies[(int32_T)bid - 1];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    obj_2 = parent->NameInternal;
    if (obj_2.Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj_2.Length;
    }

    obj_size[0] = 1;
    obj_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    PickAndPl_RigidBodyTree_addBody(newrobot, body, obj_data, obj_size,
      &obj->IKInternal._pobj3[1], &obj->IKInternal._pobj1[0],
      &obj->IKInternal._pobj2[0]);
  }

  if (obj->TreeInternal.NumBodies >= 2.0) {
    body = obj->TreeInternal.Bodies[1];
    bid = body->ParentIndex;
    if (bid > 0.0) {
      parent = obj->TreeInternal.Bodies[(int32_T)bid - 1];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    obj_2 = parent->NameInternal;
    if (obj_2.Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj_2.Length;
    }

    obj_size[0] = 1;
    obj_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    PickAndPl_RigidBodyTree_addBody(newrobot, body, obj_data, obj_size,
      &obj->IKInternal._pobj3[3], &obj->IKInternal._pobj1[2],
      &obj->IKInternal._pobj2[1]);
  }

  if (obj->TreeInternal.NumBodies >= 3.0) {
    body = obj->TreeInternal.Bodies[2];
    bid = body->ParentIndex;
    if (bid > 0.0) {
      parent = obj->TreeInternal.Bodies[(int32_T)bid - 1];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    obj_2 = parent->NameInternal;
    if (obj_2.Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj_2.Length;
    }

    obj_size[0] = 1;
    obj_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    PickAndPl_RigidBodyTree_addBody(newrobot, body, obj_data, obj_size,
      &obj->IKInternal._pobj3[5], &obj->IKInternal._pobj1[4],
      &obj->IKInternal._pobj2[2]);
  }

  if (obj->TreeInternal.NumBodies >= 4.0) {
    body = obj->TreeInternal.Bodies[3];
    bid = body->ParentIndex;
    if (bid > 0.0) {
      parent = obj->TreeInternal.Bodies[(int32_T)bid - 1];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    obj_2 = parent->NameInternal;
    if (obj_2.Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj_2.Length;
    }

    obj_size[0] = 1;
    obj_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    PickAndPl_RigidBodyTree_addBody(newrobot, body, obj_data, obj_size,
      &obj->IKInternal._pobj3[7], &obj->IKInternal._pobj1[6],
      &obj->IKInternal._pobj2[3]);
  }

  if (obj->TreeInternal.NumBodies >= 5.0) {
    body = obj->TreeInternal.Bodies[4];
    bid = body->ParentIndex;
    if (bid > 0.0) {
      parent = obj->TreeInternal.Bodies[(int32_T)bid - 1];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    obj_2 = parent->NameInternal;
    if (obj_2.Length < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj_2.Length;
    }

    obj_size[0] = 1;
    obj_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &obj_2.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    PickAndPl_RigidBodyTree_addBody(newrobot, body, obj_data, obj_size,
      &obj->IKInternal._pobj3[9], &obj->IKInternal._pobj1[8],
      &obj->IKInternal._pobj2[4]);
  }

  obj->IKInternal.RigidBodyTreeInternal = newrobot;
  obj->IKInternal.RigidBodyTreeKinematicModel = 0.0;
  obj->IKInternal._pobj5.MaxNumIteration = 1500.0;
  obj->IKInternal._pobj5.MaxTime = 10.0;
  obj->IKInternal._pobj5.SolutionTolerance = 1.0E-6;
  obj->IKInternal._pobj5.ConstraintsOn = true;
  obj->IKInternal._pobj5.RandomRestart = true;
  obj->IKInternal._pobj5.StepTolerance = 1.0E-12;
  obj->IKInternal._pobj5.GradientTolerance = 5.0E-9;
  obj->IKInternal._pobj5.ErrorChangeTolerance = 1.0E-12;
  obj->IKInternal._pobj5.DampingBias = 0.0025;
  obj->IKInternal._pobj5.UseErrorDamping = true;
  for (i = 0; i < 18; i++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj->IKInternal._pobj5.Name[i] = a_0[i];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->IKInternal._pobj5.TimeObj.StartTime.tv_sec = 0.0;
  obj->IKInternal._pobj5.TimeObj.StartTime.tv_nsec = 0.0;
  obj->IKInternal._pobj5.TimeObjInternal.StartTime.tv_sec = 0.0;
  obj->IKInternal._pobj5.TimeObjInternal.StartTime.tv_nsec = 0.0;
  obj->IKInternal._pobj5.matlabCodegenIsDeleted = false;
  obj->IKInternal.Solver = &obj->IKInternal._pobj5;
  obj_0 = obj->IKInternal.Solver;
  bid = obj_0->ErrorChangeTolerance;
  b = obj_0->DampingBias;
  params_UseErrorDamping = obj_0->UseErrorDamping;
  for (i = 0; i < 18; i++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    switch_expression[i] = obj->IKInternal.Solver->Name[i];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  ret = memcmp(&a[0], &switch_expression[0], 18);
  if (ret == 0) {
    bid = 1.0E-6;
    b = 0.0025;
    params_UseErrorDamping = true;
  }

  obj_0 = obj->IKInternal.Solver;
  obj_0->MaxNumIteration = 2.0;
  obj_0->MaxTime = 0.005;
  obj_0->GradientTolerance = 0.0001;
  obj_0->SolutionTolerance = 0.001;
  obj_0->ConstraintsOn = true;
  obj_0->RandomRestart = false;
  obj_0->StepTolerance = 0.001;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_0->ErrorChangeTolerance = bid;
  obj_0->DampingBias = b;
  obj_0->UseErrorDamping = params_UseErrorDamping;
  obj->IKInternal.RigidBodyTreeKinematicModel = 0.0;
  obj->IKInternal.matlabCodegenIsDeleted = false;
}

static void rigidBodyJoint_get_JointAxis_o(const b_rigidBodyJoint_PickAndPla_o_T
  *obj, real_T ax[3])
{
  int32_T b_kstr;
  boolean_T b_bool;
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  boolean_T guard1;
  b_bool = false;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 8) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    if (obj->TypeInternal.Length < 1.0) {
      b_kstr = 0;
    } else {
      b_kstr = (int32_T)obj->TypeInternal.Length;
    }

    if (b_kstr == 9) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (obj->TypeInternal.Vector[b_kstr - 1] != tmp_0[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      guard1 = true;
    } else {
      ax[0] = (rtNaN);
      ax[1] = (rtNaN);
      ax[2] = (rtNaN);
    }
  }

  if (guard1) {
    ax[0] = obj->JointAxisInternal[0];
    ax[1] = obj->JointAxisInternal[1];
    ax[2] = obj->JointAxisInternal[2];
  }
}

static void RigidBodyTree_forwardKinematics(f_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[4], h_cell_wrap_PickAndPlace_Simu_T Ttree_data[], int32_T
  Ttree_size[2])
{
  e_robotics_manip_internal_Rig_T *body;
  real_T a[16];
  real_T a_0[16];
  real_T b[16];
  real_T b_0[16];
  real_T R[9];
  real_T tempR[9];
  real_T result_data[4];
  real_T v[3];
  real_T k;
  real_T n;
  real_T tempR_tmp;
  real_T tempR_tmp_0;
  real_T theta;
  int32_T b_jtilecol;
  int32_T b_kstr;
  int32_T c;
  int32_T d;
  int32_T e;
  char_T obj_Vector[200];
  boolean_T result;
  static const int8_T tmp[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  real_T k_tmp;
  real_T k_tmp_0;
  int32_T b_tmp;
  int32_T exitg1;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  n = obj->NumBodies;
  Ttree_size[0] = 1;
  b_tmp = (int32_T)n;
  Ttree_size[1] = (int32_T)n;
  if ((int32_T)n != 0) {
    c = (uint8_T)(int32_T)n;
    for (b_jtilecol = 0; b_jtilecol < c; b_jtilecol++) {
      for (b_kstr = 0; b_kstr < 16; b_kstr++) {
        Ttree_data[b_jtilecol].f1[b_kstr] = tmp[b_kstr];
      }
    }
  }

  k = 1.0;

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  for (b_jtilecol = 0; b_jtilecol < b_tmp; b_jtilecol++) {
    body = obj->Bodies[b_jtilecol];
    n = body->JointInternal.PositionNumber;
    n += k;
    if (k > n - 1.0) {
      e = 0;
      d = 0;
    } else {
      e = (int32_T)k - 1;
      d = (int32_T)(n - 1.0);
    }

    for (b_kstr = 0; b_kstr < 16; b_kstr++) {
      a[b_kstr] = body->JointInternal.JointToParentTransform[b_kstr];
    }

    k = body->JointInternal.TypeInternal.Length;
    for (b_kstr = 0; b_kstr < 200; b_kstr++) {
      obj_Vector[b_kstr] = body->JointInternal.TypeInternal.Vector[b_kstr];
    }

    if (k < 1.0) {
      c = 0;
    } else {
      c = (int32_T)k;
    }

    result = false;
    if (c == 8) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 8) {
          if (tmp_0[b_kstr - 1] != obj_Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      k = 0.0;
    } else {
      if (c == 9) {
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 9) {
            if (tmp_1[b_kstr - 1] != obj_Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        k = 1.0;
      } else {
        if (c == 8) {
          b_kstr = 1;
          do {
            exitg1 = 0;
            if (b_kstr - 1 < 8) {
              if (tmp_2[b_kstr - 1] != obj_Vector[b_kstr - 1]) {
                exitg1 = 1;
              } else {
                b_kstr++;
              }
            } else {
              result = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (result) {
          k = 2.0;
        } else {
          k = -1.0;
        }
      }
    }

    switch ((int32_T)k) {
     case 0:
      rigidBodyJoint_get_JointAxis_o(&body->JointInternal, v);
      result_data[0] = v[0];
      result_data[1] = v[1];
      result_data[2] = v[2];
      if ((d - e != 0) - 1 >= 0) {
        result_data[3] = qvec[e];
      }

      theta = result_data[0];
      k_tmp = result_data[1];
      k_tmp_0 = result_data[2];
      k = 1.0 / sqrt((theta * theta + k_tmp * k_tmp) + k_tmp_0 * k_tmp_0);
      v[0] = theta * k;
      v[1] = k_tmp * k;
      v[2] = k_tmp_0 * k;
      theta = result_data[3];
      k = cos(theta);
      theta = sin(theta);
      tempR[0] = v[0] * v[0] * (1.0 - k) + k;
      k_tmp = v[0] * v[1] * (1.0 - k);
      k_tmp_0 = v[2] * theta;
      tempR[1] = k_tmp - k_tmp_0;
      tempR_tmp = v[0] * v[2] * (1.0 - k);
      tempR_tmp_0 = v[1] * theta;
      tempR[2] = tempR_tmp + tempR_tmp_0;
      tempR[3] = k_tmp + k_tmp_0;
      tempR[4] = v[1] * v[1] * (1.0 - k) + k;
      k_tmp = v[1] * v[2] * (1.0 - k);
      k_tmp_0 = v[0] * theta;
      tempR[5] = k_tmp - k_tmp_0;
      tempR[6] = tempR_tmp - tempR_tmp_0;
      tempR[7] = k_tmp + k_tmp_0;
      tempR[8] = v[2] * v[2] * (1.0 - k) + k;
      for (c = 0; c < 3; c++) {
        R[c] = tempR[c * 3];
        R[c + 3] = tempR[c * 3 + 1];
        R[c + 6] = tempR[c * 3 + 2];
      }

      memset(&b[0], 0, sizeof(real_T) << 4U);
      for (b_kstr = 0; b_kstr < 3; b_kstr++) {
        c = b_kstr << 2;
        b[c] = R[3 * b_kstr];
        b[c + 1] = R[3 * b_kstr + 1];
        b[c + 2] = R[3 * b_kstr + 2];
      }

      b[15] = 1.0;
      break;

     case 1:
      rigidBodyJoint_get_JointAxis_o(&body->JointInternal, v);
      memset(&R[0], 0, 9U * sizeof(real_T));
      R[0] = 1.0;
      R[4] = 1.0;
      R[8] = 1.0;
      k = qvec[e];
      for (b_kstr = 0; b_kstr < 3; b_kstr++) {
        c = b_kstr << 2;
        b[c] = R[3 * b_kstr];
        b[c + 1] = R[3 * b_kstr + 1];
        b[c + 2] = R[3 * b_kstr + 2];
        b[b_kstr + 12] = v[b_kstr] * k;
      }

      b[3] = 0.0;
      b[7] = 0.0;
      b[11] = 0.0;
      b[15] = 1.0;
      break;

     case 2:
      /* Check node always fails. would cause program termination and was eliminated */
      break;

     default:
      memset(&b[0], 0, sizeof(real_T) << 4U);
      b[0] = 1.0;
      b[5] = 1.0;
      b[10] = 1.0;
      b[15] = 1.0;
      break;
    }

    for (b_kstr = 0; b_kstr < 16; b_kstr++) {
      b_0[b_kstr] = body->JointInternal.ChildToJointTransform[b_kstr];
    }

    for (b_kstr = 0; b_kstr < 4; b_kstr++) {
      theta = a[b_kstr + 4];
      k_tmp = a[b_kstr];
      k_tmp_0 = a[b_kstr + 8];
      tempR_tmp = a[b_kstr + 12];
      for (c = 0; c < 4; c++) {
        e = c << 2;
        a_0[b_kstr + e] = ((b[e + 1] * theta + b[e] * k_tmp) + b[e + 2] *
                           k_tmp_0) + b[e + 3] * tempR_tmp;
      }

      theta = a_0[b_kstr + 4];
      k_tmp = a_0[b_kstr];
      k_tmp_0 = a_0[b_kstr + 8];
      tempR_tmp = a_0[b_kstr + 12];
      for (c = 0; c < 4; c++) {
        e = c << 2;
        Ttree_data[b_jtilecol].f1[b_kstr + e] = ((b_0[e + 1] * theta + b_0[e] *
          k_tmp) + b_0[e + 2] * k_tmp_0) + b_0[e + 3] * tempR_tmp;
      }
    }

    k = n;
    if (body->ParentIndex > 0.0) {
      for (b_kstr = 0; b_kstr < 16; b_kstr++) {
        a[b_kstr] = Ttree_data[(int32_T)body->ParentIndex - 1].f1[b_kstr];
      }

      for (b_kstr = 0; b_kstr < 4; b_kstr++) {
        theta = a[b_kstr + 4];
        k_tmp = a[b_kstr];
        k_tmp_0 = a[b_kstr + 8];
        tempR_tmp = a[b_kstr + 12];
        for (c = 0; c < 4; c++) {
          e = c << 2;
          a_0[b_kstr + e] = ((Ttree_data[b_jtilecol].f1[e + 1] * theta +
                              Ttree_data[b_jtilecol].f1[e] * k_tmp) +
                             Ttree_data[b_jtilecol].f1[e + 2] * k_tmp_0) +
            Ttree_data[b_jtilecol].f1[e + 3] * tempR_tmp;
        }
      }

      memcpy(&Ttree_data[b_jtilecol].f1[0], &a_0[0], sizeof(real_T) << 4U);
    }
  }
}

static void rigidBodyJoint_get_PositionLimi(const
  b_rigidBodyJoint_PickAndPlace_T *obj, real_T lims_data[], int32_T lims_size[2])
{
  int32_T b_kstr;
  int32_T i;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    int32_T loop_ub;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (obj->PositionNumber < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj->PositionNumber;
    }

    lims_size[0] = loop_ub;
    lims_size[1] = 2;
    for (b_kstr = 0; b_kstr < 2; b_kstr++) {
      for (i = 0; i < loop_ub; i++) {
        lims_data[i + loop_ub * b_kstr] = obj->PositionLimitsInternal[7 * b_kstr
          + i];
      }
    }
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    lims_size[0] = 1;
    lims_size[1] = 2;
    lims_data[0] = 0.0;
    lims_data[1] = 0.0;
  }
}

static void PickAn_emxEnsureCapacity_real_T(emxArray_real_T_PickAndPlace__T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void RigidBodyTree_get_JointPosition(h_robotics_manip_internal_Rig_T *obj,
  emxArray_real_T_PickAndPlace__T *limits)
{
  b_rigidBodyJoint_PickAndPlace_T *obj_0;
  f_robotics_manip_internal_R_o_T *body;
  real_T h_data[14];
  real_T k;
  real_T pnum;
  int32_T b_kstr;
  int32_T b_kstr_idx_0;
  int32_T c;
  int32_T c_0;
  int32_T limits_0;
  int32_T loop_ub;
  char_T obj_Vector[200];
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T h_size[2];
  int32_T exitg1;
  limits_0 = (int32_T)obj->PositionNumber;
  loop_ub = limits->size[0] * limits->size[1];
  limits->size[0] = limits_0;
  limits->size[1] = 2;
  PickAn_emxEnsureCapacity_real_T(limits, loop_ub);
  loop_ub = (int32_T)obj->PositionNumber << 1;
  if (loop_ub - 1 >= 0) {
    memset(&limits->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  k = 1.0;
  pnum = obj->NumBodies;
  c = (int32_T)pnum;
  for (limits_0 = 0; limits_0 < c; limits_0++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    body = obj->Bodies[limits_0];
    obj_0 = body->JointInternal;
    pnum = obj_0->TypeInternal.Length;
    for (b_kstr = 0; b_kstr < 200; b_kstr++) {
      obj_Vector[b_kstr] = obj_0->TypeInternal.Vector[b_kstr];
    }

    b_bool = false;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (pnum < 1.0) {
      b_kstr = 0;
    } else {
      b_kstr = (int32_T)pnum;
    }

    if (b_kstr == 5) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 5) {
          if (obj_Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!b_bool) {
      pnum = body->JointInternal->PositionNumber;
      pnum += k;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      if (k > pnum - 1.0) {
        c_0 = 0;
        b_kstr = 0;
      } else {
        c_0 = (int32_T)k - 1;
        b_kstr = (int32_T)(pnum - 1.0);
      }

      rigidBodyJoint_get_PositionLimi(body->JointInternal, h_data, h_size);

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr_idx_0 = b_kstr - c_0;
      for (b_kstr = 0; b_kstr < 2; b_kstr++) {
        for (loop_ub = 0; loop_ub < b_kstr_idx_0; loop_ub++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          limits->data[(c_0 + loop_ub) + limits->size[0] * b_kstr] =
            h_data[h_size[0] * b_kstr + loop_ub];
        }
      }

      k = pnum;
    }
  }
}

static void PickAndPlace_Sim_emxFree_real_T(emxArray_real_T_PickAndPlace__T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_PickAndPlace__T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_PickAndPlace__T *)NULL;
  }
}

static void PickAndPlace_binary_expand_op_6(boolean_T in1[4], const real_T in2[4],
  const emxArray_real_T_PickAndPlace__T *in3)
{
  int32_T stride_0_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  stride_0_0 = (in3->size[0] != 1);
  in1[0] = (in2[0] <= in3->data[in3->size[0]] + 4.4408920985006262E-16);
  in1[1] = (in2[1] <= in3->data[stride_0_0 + in3->size[0]] +
            4.4408920985006262E-16);
  in1[2] = (in2[2] <= in3->data[(stride_0_0 << 1) + in3->size[0]] +
            4.4408920985006262E-16);
  in1[3] = (in2[3] <= in3->data[3 * stride_0_0 + in3->size[0]] +
            4.4408920985006262E-16);
}

static void PickAndPlace_binary_expand_op_5(boolean_T in1[4], const real_T in2[4],
  const emxArray_real_T_PickAndPlace__T *in3)
{
  int32_T stride_0_0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  stride_0_0 = (in3->size[0] != 1);
  in1[0] = (in2[0] >= in3->data[0] - 4.4408920985006262E-16);
  in1[1] = (in2[1] >= in3->data[stride_0_0] - 4.4408920985006262E-16);
  in1[2] = (in2[2] >= in3->data[stride_0_0 << 1] - 4.4408920985006262E-16);
  in1[3] = (in2[3] >= in3->data[3 * stride_0_0] - 4.4408920985006262E-16);
}

static void PickAndPlace_Simulatio_eml_find(const boolean_T x[4], int32_T
  i_data[], int32_T *i_size)
{
  int32_T b_ii;
  int32_T idx;
  boolean_T exitg1;
  idx = 0;
  b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (b_ii - 1 < 4)) {
    if (x[b_ii - 1]) {
      idx++;
      i_data[idx - 1] = b_ii;
      if (idx >= 4) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (idx < 1) {
    *i_size = 0;
  } else {
    *i_size = idx;
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static void PickAndPlace_Simulation_QLa_tic(real_T *tstart_tv_sec, real_T
  *tstart_tv_nsec)
{
  coderTimespec b_timespec;
  if (!PickAndPlace_Simulation_QLab_DW.method_not_empty_f) {
    PickAndPlace_Simulation_QLab_DW.method_not_empty_f = true;
    coderInitTimeFunctions(&PickAndPlace_Simulation_QLab_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&b_timespec,
    PickAndPlace_Simulation_QLab_DW.freq);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  *tstart_tv_sec = b_timespec.tv_sec;
  *tstart_tv_nsec = b_timespec.tv_nsec;
}

static void P_RigidBodyTree_ancestorIndices(h_robotics_manip_internal_Rig_T *obj,
  f_robotics_manip_internal_R_o_T *body, emxArray_real_T_PickAndPlace__T
  *indices)
{
  real_T i;
  int32_T loop_ub;
  loop_ub = indices->size[0] * indices->size[1];
  indices->size[0] = 1;
  indices->size[1] = (int32_T)(obj->NumBodies + 1.0);
  PickAn_emxEnsureCapacity_real_T(indices, loop_ub);
  loop_ub = (int32_T)(obj->NumBodies + 1.0);
  if (loop_ub - 1 >= 0) {
    memset(&indices->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  i = 2.0;
  indices->data[0] = body->Index;
  while (body->ParentIndex > 0.0) {
    body = obj->Bodies[(int32_T)body->ParentIndex - 1];
    indices->data[(int32_T)i - 1] = body->Index;
    i++;
  }

  if (body->Index > 0.0) {
    indices->data[(int32_T)i - 1] = body->ParentIndex;
    i++;
  }

  loop_ub = indices->size[0] * indices->size[1];
  indices->size[0] = 1;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  indices->size[1] = (int32_T)(i - 1.0);
  PickAn_emxEnsureCapacity_real_T(indices, loop_ub);
}

static void Pi_rigidBodyJoint_get_JointAxis(const
  b_rigidBodyJoint_PickAndPlace_T *obj, real_T ax[3])
{
  int32_T b_kstr;
  boolean_T b_bool;
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  boolean_T guard1;
  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj->TypeInternal.Length;
  }

  if (b_kstr == 8) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (obj->TypeInternal.Length < 1.0) {
      b_kstr = 0;
    } else {
      b_kstr = (int32_T)obj->TypeInternal.Length;
    }

    if (b_kstr == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (obj->TypeInternal.Vector[b_kstr - 1] != tmp_0[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      guard1 = true;
    } else {
      ax[0] = (rtNaN);
      ax[1] = (rtNaN);
      ax[2] = (rtNaN);
    }
  }

  if (guard1) {
    ax[0] = obj->JointAxisInternal[0];
    ax[1] = obj->JointAxisInternal[1];
    ax[2] = obj->JointAxisInternal[2];
  }
}

static void PickAndPlace_Simulation_QLa_cat(real_T varargin_1, real_T varargin_2,
  real_T varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6,
  real_T varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void rigidBodyJoint_transformBodyToP(const
  b_rigidBodyJoint_PickAndPlace_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16])
{
  real_T b[16];
  real_T obj_0[16];
  real_T R[9];
  real_T tempR[9];
  real_T result_data[4];
  real_T v[3];
  real_T cth;
  real_T tempR_tmp;
  real_T tempR_tmp_0;
  real_T tempR_tmp_1;
  real_T theta;
  int32_T b_kstr;
  int32_T i;
  boolean_T result;
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_1[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  real_T cth_tmp;
  real_T cth_tmp_0;
  int32_T exitg1;
  int32_T result_data_tmp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    i = 0;
  } else {
    i = (int32_T)obj->TypeInternal.Length;
  }

  result = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (i == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        if (tmp[b_kstr - 1] != obj->TypeInternal.Vector[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        result = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (result) {
    cth = 0.0;
  } else {
    if (i == 9) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          if (tmp_0[b_kstr - 1] != obj->TypeInternal.Vector[b_kstr - 1]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          result = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (result) {
      cth = 1.0;
    } else {
      if (i == 8) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 8) {
            if (tmp_1[b_kstr - 1] != obj->TypeInternal.Vector[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            result = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (result) {
        cth = 2.0;
      } else {
        cth = -1.0;
      }
    }
  }

  switch ((int32_T)cth) {
   case 0:
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    Pi_rigidBodyJoint_get_JointAxis(obj, v);
    result_data[0] = v[0];
    result_data[1] = v[1];
    result_data[2] = v[2];
    if ((*q_size != 0) - 1 >= 0) {
      result_data[3] = q_data[0];
    }

    theta = result_data[0];
    cth_tmp = result_data[1];
    cth_tmp_0 = result_data[2];
    cth = 1.0 / sqrt((theta * theta + cth_tmp * cth_tmp) + cth_tmp_0 * cth_tmp_0);
    v[0] = theta * cth;
    v[1] = cth_tmp * cth;
    v[2] = cth_tmp_0 * cth;
    theta = result_data[3];
    cth = cos(theta);
    theta = sin(theta);
    cth_tmp = v[0] * v[1] * (1.0 - cth);
    cth_tmp_0 = v[2] * theta;
    tempR_tmp = v[0] * v[2] * (1.0 - cth);
    tempR_tmp_0 = v[1] * theta;
    tempR_tmp_1 = v[1] * v[2] * (1.0 - cth);
    theta *= v[0];
    PickAndPlace_Simulation_QLa_cat(v[0] * v[0] * (1.0 - cth) + cth, cth_tmp -
      cth_tmp_0, tempR_tmp + tempR_tmp_0, cth_tmp + cth_tmp_0, v[1] * v[1] *
      (1.0 - cth) + cth, tempR_tmp_1 - theta, tempR_tmp - tempR_tmp_0,
      tempR_tmp_1 + theta, v[2] * v[2] * (1.0 - cth) + cth, tempR);
    for (i = 0; i < 3; i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      R[i] = tempR[i * 3];
      R[i + 3] = tempR[i * 3 + 1];
      R[i + 6] = tempR[i * 3 + 2];
    }

    memset(&b[0], 0, sizeof(real_T) << 4U);
    for (i = 0; i < 3; i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_kstr = i << 2;
      b[b_kstr] = R[3 * i];
      b[b_kstr + 1] = R[3 * i + 1];
      b[b_kstr + 2] = R[3 * i + 2];
    }

    b[15] = 1.0;
    break;

   case 1:
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    Pi_rigidBodyJoint_get_JointAxis(obj, v);
    memset(&tempR[0], 0, 9U * sizeof(real_T));
    tempR[0] = 1.0;
    tempR[4] = 1.0;
    tempR[8] = 1.0;
    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      b_kstr = i << 2;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b[b_kstr] = tempR[3 * i];
      b[b_kstr + 1] = tempR[3 * i + 1];
      b[b_kstr + 2] = tempR[3 * i + 2];
      b[i + 12] = v[i] * cth;
    }

    b[3] = 0.0;
    b[7] = 0.0;
    b[11] = 0.0;
    b[15] = 1.0;
    break;

   case 2:
    /* Check node always fails. would cause program termination and was eliminated */
    break;

   default:
    memset(&b[0], 0, sizeof(real_T) << 4U);
    b[0] = 1.0;
    b[5] = 1.0;
    b[10] = 1.0;
    b[15] = 1.0;
    break;
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  for (i = 0; i < 4; i++) {
    cth = obj->JointToParentTransform[i + 4];
    cth_tmp = obj->JointToParentTransform[i];
    cth_tmp_0 = obj->JointToParentTransform[i + 8];
    tempR_tmp = obj->JointToParentTransform[i + 12];
    for (b_kstr = 0; b_kstr < 4; b_kstr++) {
      result_data_tmp = b_kstr << 2;
      obj_0[i + result_data_tmp] = ((b[result_data_tmp + 1] * cth +
        b[result_data_tmp] * cth_tmp) + b[result_data_tmp + 2] * cth_tmp_0) +
        b[result_data_tmp + 3] * tempR_tmp;
    }

    cth = obj_0[i + 4];
    cth_tmp = obj_0[i];
    cth_tmp_0 = obj_0[i + 8];
    tempR_tmp = obj_0[i + 12];
    for (b_kstr = 0; b_kstr < 4; b_kstr++) {
      result_data_tmp = b_kstr << 2;
      T[i + result_data_tmp] = ((obj->ChildToJointTransform[result_data_tmp + 1]
        * cth + obj->ChildToJointTransform[result_data_tmp] * cth_tmp) +
        obj->ChildToJointTransform[result_data_tmp + 2] * cth_tmp_0) +
        obj->ChildToJointTransform[result_data_tmp + 3] * tempR_tmp;
    }
  }
}

static void RigidBodyTree_efficientFKAndJac(h_robotics_manip_internal_Rig_T *obj,
  const real_T qv[4], real_T bid1, real_T T_data[], int32_T T_size[2],
  emxArray_real_T_PickAndPlace__T *Jac)
{
  b_rigidBodyJoint_PickAndPlace_T *joint;
  emxArray_real_T_PickAndPlace__T *B;
  emxArray_real_T_PickAndPlace__T *ancestorIndices1;
  emxArray_real_T_PickAndPlace__T *ancestorIndices2;
  emxArray_real_T_PickAndPlace__T *kinematicPathIndices;
  f_robotics_manip_internal_R_o_T *body1;
  f_robotics_manip_internal_R_o_T *nextBody;
  real_T JacSlice_data[36];
  real_T X[36];
  real_T b_data[36];
  real_T T1[16];
  real_T Tc2p[16];
  real_T Tj[16];
  real_T Tj1[16];
  real_T Tj1_0[16];
  real_T b[16];
  real_T R[9];
  real_T tempR[9];
  real_T qv_data[4];
  real_T v[3];
  real_T Tj1_1;
  real_T Tj1_2;
  real_T Tj_0;
  real_T minPathLength;
  real_T qidx_idx_0;
  real_T qidx_idx_1;
  real_T s;
  int32_T b_i;
  int32_T coffset_tmp;
  int32_T f;
  int32_T f_tmp;
  int32_T g;
  int32_T loop_ub;
  int32_T n;
  int32_T nextBody_0;
  char_T obj_Vector[200];
  boolean_T b_bool;
  boolean_T nextBodyIsParent;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T tmp_2[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  int32_T b_size[2];
  int32_T exitg2;
  boolean_T exitg1;
  if (bid1 >= 0.0) {
    if (bid1 == 0.0) {
      body1 = &obj->Base;
    } else {
      body1 = obj->Bodies[(int32_T)bid1 - 1];
    }

    PickAndPlace_Sim_emxInit_real_T(&ancestorIndices1, 2);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    P_RigidBodyTree_ancestorIndices(obj, body1, ancestorIndices1);
    PickAndPlace_Sim_emxInit_real_T(&ancestorIndices2, 2);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    P_RigidBodyTree_ancestorIndices(obj, &obj->Base, ancestorIndices2);
    minPathLength = fmin(ancestorIndices1->size[1], ancestorIndices2->size[1]);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)(minPathLength - 1.0) - 1)) {
      if (ancestorIndices1->data[(ancestorIndices1->size[1] - b_i) - 2] !=
          ancestorIndices2->data[(ancestorIndices2->size[1] - b_i) - 2]) {
        minPathLength = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }

    s = (real_T)ancestorIndices1->size[1] - minPathLength;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    f_tmp = (int32_T)minPathLength;
    f = ancestorIndices2->size[1] - f_tmp;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (f < 1) {
      f = 1;
      b_i = 1;
      g = 0;
    } else {
      b_i = -1;
      g = 1;
    }

    if (s < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)s;
    }

    PickAndPlace_Sim_emxInit_real_T(&kinematicPathIndices, 2);
    nextBody_0 = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
    kinematicPathIndices->size[0] = 1;
    n = div_s32(g - f, b_i);
    kinematicPathIndices->size[1] = (n + loop_ub) + 2;
    PickAn_emxEnsureCapacity_real_T(kinematicPathIndices, nextBody_0);
    if (loop_ub - 1 >= 0) {
      memcpy(&kinematicPathIndices->data[0], &ancestorIndices1->data[0],
             (uint32_T)loop_ub * sizeof(real_T));
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    kinematicPathIndices->data[loop_ub] = ancestorIndices1->
      data[ancestorIndices1->size[1] - f_tmp];
    PickAndPlace_Sim_emxFree_real_T(&ancestorIndices1);
    for (nextBody_0 = 0; nextBody_0 <= n; nextBody_0++) {
      kinematicPathIndices->data[(nextBody_0 + loop_ub) + 1] =
        ancestorIndices2->data[(b_i * nextBody_0 + f) - 1];
    }

    PickAndPlace_Sim_emxFree_real_T(&ancestorIndices2);
    memset(&T1[0], 0, sizeof(real_T) << 4U);
    T1[0] = 1.0;
    T1[5] = 1.0;
    T1[10] = 1.0;
    T1[15] = 1.0;
    nextBody_0 = Jac->size[0] * Jac->size[1];
    Jac->size[0] = 6;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    f_tmp = (int32_T)obj->PositionNumber;
    Jac->size[1] = f_tmp;
    PickAn_emxEnsureCapacity_real_T(Jac, nextBody_0);
    loop_ub = 6 * (int32_T)obj->PositionNumber;
    if (loop_ub - 1 >= 0) {
      memset(&Jac->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    n = kinematicPathIndices->size[1] - 1;
    for (b_i = 0; b_i < n; b_i++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      minPathLength = kinematicPathIndices->data[b_i];
      if (minPathLength != 0.0) {
        body1 = obj->Bodies[(int32_T)minPathLength - 1];
      } else {
        body1 = &obj->Base;
      }

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      minPathLength = kinematicPathIndices->data[b_i + 1];
      if (minPathLength != 0.0) {
        nextBody = obj->Bodies[(int32_T)minPathLength - 1];
      } else {
        nextBody = &obj->Base;
      }

      nextBodyIsParent = (nextBody->Index == body1->ParentIndex);
      if (nextBodyIsParent) {
        nextBody = body1;
        minPathLength = 1.0;
      } else {
        minPathLength = -1.0;
      }

      joint = nextBody->JointInternal;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      s = joint->TypeInternal.Length;
      for (nextBody_0 = 0; nextBody_0 < 200; nextBody_0++) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        obj_Vector[nextBody_0] = joint->TypeInternal.Vector[nextBody_0];
      }

      b_bool = false;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      if (s < 1.0) {
        nextBody_0 = 0;
      } else {
        nextBody_0 = (int32_T)s;
      }

      if (nextBody_0 == 5) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        g = 1;
        do {
          exitg2 = 0;
          if (g - 1 < 5) {
            if (obj_Vector[g - 1] != tmp[g - 1]) {
              exitg2 = 1;
            } else {
              g++;
            }
          } else {
            b_bool = true;
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      if (b_bool) {
        for (nextBody_0 = 0; nextBody_0 < 16; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          Tj1[nextBody_0] = joint->JointToParentTransform[nextBody_0];
        }

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        s = joint->TypeInternal.Length;
        for (nextBody_0 = 0; nextBody_0 < 200; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          obj_Vector[nextBody_0] = joint->TypeInternal.Vector[nextBody_0];
        }

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        if (s < 1.0) {
          f = 0;
        } else {
          f = (int32_T)s;
        }

        b_bool = false;

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        if (f == 8) {
          g = 1;
          do {
            exitg2 = 0;
            if (g - 1 < 8) {
              if (tmp_0[g - 1] != obj_Vector[g - 1]) {
                exitg2 = 1;
              } else {
                g++;
              }
            } else {
              b_bool = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (b_bool) {
          minPathLength = 0.0;
        } else {
          if (f == 9) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            g = 1;
            do {
              exitg2 = 0;
              if (g - 1 < 9) {
                if (tmp_1[g - 1] != obj_Vector[g - 1]) {
                  exitg2 = 1;
                } else {
                  g++;
                }
              } else {
                b_bool = true;
                exitg2 = 1;
              }
            } while (exitg2 == 0);
          }

          if (b_bool) {
            minPathLength = 1.0;
          } else {
            if (f == 8) {
              /* Start for MATLABSystem: '<S2>/MATLAB System' */
              g = 1;
              do {
                exitg2 = 0;
                if (g - 1 < 8) {
                  if (tmp_2[g - 1] != obj_Vector[g - 1]) {
                    exitg2 = 1;
                  } else {
                    g++;
                  }
                } else {
                  b_bool = true;
                  exitg2 = 1;
                }
              } while (exitg2 == 0);
            }

            if (b_bool) {
              minPathLength = 2.0;
            } else {
              minPathLength = -1.0;
            }
          }
        }

        switch ((int32_T)minPathLength) {
         case 0:
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          Pi_rigidBodyJoint_get_JointAxis(joint, v);
          qidx_idx_0 = v[0];
          qidx_idx_1 = v[1];
          s = v[2];

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          minPathLength = 1.0 / sqrt((qidx_idx_0 * qidx_idx_0 + qidx_idx_1 *
            qidx_idx_1) + s * s);
          v[0] = qidx_idx_0 * minPathLength;
          v[1] = qidx_idx_1 * minPathLength;
          v[2] = s * minPathLength;
          minPathLength = v[0] * v[1] * 0.0;
          qidx_idx_0 = v[0] * v[2] * 0.0;
          qidx_idx_1 = v[1] * v[2] * 0.0;
          PickAndPlace_Simulation_QLa_cat(v[0] * v[0] * 0.0 + 1.0, minPathLength
            - v[2] * 0.0, qidx_idx_0 + v[1] * 0.0, minPathLength + v[2] * 0.0,
            v[1] * v[1] * 0.0 + 1.0, qidx_idx_1 - v[0] * 0.0, qidx_idx_0 - v[1] *
            0.0, qidx_idx_1 + v[0] * 0.0, v[2] * v[2] * 0.0 + 1.0, tempR);
          for (g = 0; g < 3; g++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            R[g] = tempR[g * 3];
            R[g + 3] = tempR[g * 3 + 1];
            R[g + 6] = tempR[g * 3 + 2];
          }

          memset(&b[0], 0, sizeof(real_T) << 4U);
          for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            g = nextBody_0 << 2;
            b[g] = R[3 * nextBody_0];
            b[g + 1] = R[3 * nextBody_0 + 1];
            b[g + 2] = R[3 * nextBody_0 + 2];
          }

          b[15] = 1.0;
          break;

         case 1:
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          Pi_rigidBodyJoint_get_JointAxis(joint, v);
          memset(&R[0], 0, 9U * sizeof(real_T));
          R[0] = 1.0;
          R[4] = 1.0;
          R[8] = 1.0;
          for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
            g = nextBody_0 << 2;
            b[g] = R[3 * nextBody_0];
            b[g + 1] = R[3 * nextBody_0 + 1];
            b[g + 2] = R[3 * nextBody_0 + 2];

            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            b[nextBody_0 + 12] = v[nextBody_0] * 0.0;
          }

          b[3] = 0.0;
          b[7] = 0.0;
          b[11] = 0.0;
          b[15] = 1.0;
          break;

         case 2:
          /* Check node always fails. would cause program termination and was eliminated */
          break;

         default:
          memset(&b[0], 0, sizeof(real_T) << 4U);
          b[0] = 1.0;
          b[5] = 1.0;
          b[10] = 1.0;
          b[15] = 1.0;
          break;
        }

        for (nextBody_0 = 0; nextBody_0 < 16; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          Tj[nextBody_0] = joint->ChildToJointTransform[nextBody_0];
        }

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        for (nextBody_0 = 0; nextBody_0 < 4; nextBody_0++) {
          s = Tj1[nextBody_0 + 4];
          Tj1_1 = Tj1[nextBody_0];
          Tj1_2 = Tj1[nextBody_0 + 8];
          minPathLength = Tj1[nextBody_0 + 12];
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            g = loop_ub << 2;
            Tj1_0[nextBody_0 + g] = ((b[g + 1] * s + b[g] * Tj1_1) + b[g + 2] *
              Tj1_2) + b[g + 3] * minPathLength;
          }

          s = Tj1_0[nextBody_0 + 4];
          Tj1_1 = Tj1_0[nextBody_0];
          Tj1_2 = Tj1_0[nextBody_0 + 8];
          minPathLength = Tj1_0[nextBody_0 + 12];
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            g = loop_ub << 2;
            Tc2p[nextBody_0 + g] = ((Tj[g + 1] * s + Tj[g] * Tj1_1) + Tj[g + 2] *
              Tj1_2) + Tj[g + 3] * minPathLength;
          }
        }
      } else {
        nextBody_0 = (int32_T)nextBody->Index;
        qidx_idx_0 = obj->PositionDoFMap[nextBody_0 - 1];
        qidx_idx_1 = obj->PositionDoFMap[nextBody_0 + 4];

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        if (qidx_idx_0 > qidx_idx_1) {
          g = 0;
          f = 0;
        } else {
          g = (int32_T)qidx_idx_0 - 1;
          f = (int32_T)qidx_idx_1;
        }

        loop_ub = f - g;
        for (nextBody_0 = 0; nextBody_0 < loop_ub; nextBody_0++) {
          qv_data[nextBody_0] = qv[g + nextBody_0];
        }

        rigidBodyJoint_transformBodyToP(joint, qv_data, &loop_ub, Tc2p);
        nextBody_0 = (int32_T)nextBody->Index;
        qidx_idx_0 = obj->VelocityDoFMap[nextBody_0 - 1];
        qidx_idx_1 = obj->VelocityDoFMap[nextBody_0 + 4];
        if (nextBodyIsParent) {
          for (nextBody_0 = 0; nextBody_0 < 16; nextBody_0++) {
            Tj[nextBody_0] = joint->ChildToJointTransform[nextBody_0];
          }
        } else {
          for (nextBody_0 = 0; nextBody_0 < 16; nextBody_0++) {
            Tj1[nextBody_0] = joint->JointToParentTransform[nextBody_0];
          }

          for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
            R[3 * nextBody_0] = Tj1[nextBody_0];
            R[3 * nextBody_0 + 1] = Tj1[nextBody_0 + 4];
            R[3 * nextBody_0 + 2] = Tj1[nextBody_0 + 8];
          }

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          for (nextBody_0 = 0; nextBody_0 < 9; nextBody_0++) {
            tempR[nextBody_0] = -R[nextBody_0];
          }

          s = Tj1[13];
          Tj1_1 = Tj1[12];
          Tj1_2 = Tj1[14];
          for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
            g = nextBody_0 << 2;
            Tj[g] = R[3 * nextBody_0];
            Tj[g + 1] = R[3 * nextBody_0 + 1];
            Tj[g + 2] = R[3 * nextBody_0 + 2];
            Tj[nextBody_0 + 12] = (tempR[nextBody_0 + 3] * s + tempR[nextBody_0]
              * Tj1_1) + tempR[nextBody_0 + 6] * Tj1_2;
          }

          Tj[3] = 0.0;
          Tj[7] = 0.0;
          Tj[11] = 0.0;
          Tj[15] = 1.0;
        }

        for (nextBody_0 = 0; nextBody_0 < 4; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          s = Tj[nextBody_0 + 4];
          Tj1_1 = Tj[nextBody_0];
          Tj1_2 = Tj[nextBody_0 + 8];
          Tj_0 = Tj[nextBody_0 + 12];
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            g = loop_ub << 2;
            Tj1[nextBody_0 + g] = ((T1[g + 1] * s + T1[g] * Tj1_1) + T1[g + 2] *
              Tj1_2) + T1[g + 3] * Tj_0;
          }
        }

        for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          R[3 * nextBody_0] = Tj1[nextBody_0];
          R[3 * nextBody_0 + 1] = Tj1[nextBody_0 + 4];
          R[3 * nextBody_0 + 2] = Tj1[nextBody_0 + 8];
        }

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        for (nextBody_0 = 0; nextBody_0 < 9; nextBody_0++) {
          tempR[nextBody_0] = -R[nextBody_0];
        }

        s = Tj1[13];
        Tj1_1 = Tj1[12];
        Tj1_2 = Tj1[14];
        for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
          g = nextBody_0 << 2;
          Tj1[g] = R[3 * nextBody_0];
          Tj1[g + 1] = R[3 * nextBody_0 + 1];
          Tj1[g + 2] = R[3 * nextBody_0 + 2];
          Tj1[nextBody_0 + 12] = (tempR[nextBody_0 + 3] * s + tempR[nextBody_0] *
            Tj1_1) + tempR[nextBody_0 + 6] * Tj1_2;
        }

        Tj1[3] = 0.0;
        Tj1[7] = 0.0;
        Tj1[11] = 0.0;
        Tj1[15] = 1.0;

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        R[0] = 0.0;
        R[3] = -Tj1[14];
        R[6] = Tj1[13];
        R[1] = Tj1[14];
        R[4] = 0.0;
        R[7] = -Tj1[12];
        R[2] = -Tj1[13];
        R[5] = Tj1[12];
        R[8] = 0.0;
        for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
          s = R[nextBody_0 + 3];
          Tj1_1 = R[nextBody_0];
          Tj1_2 = R[nextBody_0 + 6];
          for (loop_ub = 0; loop_ub < 3; loop_ub++) {
            g = loop_ub << 2;
            tempR[nextBody_0 + 3 * loop_ub] = (Tj1[g + 1] * s + Tj1[g] * Tj1_1)
              + Tj1[g + 2] * Tj1_2;
            X[loop_ub + 6 * nextBody_0] = Tj1[(nextBody_0 << 2) + loop_ub];
            X[loop_ub + 6 * (nextBody_0 + 3)] = 0.0;
          }
        }

        for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
          X[6 * nextBody_0 + 3] = tempR[3 * nextBody_0];

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          g = nextBody_0 << 2;
          loop_ub = (nextBody_0 + 3) * 6;
          X[loop_ub + 3] = Tj1[g];
          X[6 * nextBody_0 + 4] = tempR[3 * nextBody_0 + 1];

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          X[loop_ub + 4] = Tj1[g + 1];
          X[6 * nextBody_0 + 5] = tempR[3 * nextBody_0 + 2];

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          X[loop_ub + 5] = Tj1[g + 2];
        }

        rigidBodyJoint_get_MotionSubspa(joint, b_data, b_size);

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        f = b_size[1];
        for (nextBody_0 = 0; nextBody_0 < f; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          coffset_tmp = nextBody_0 * 6 - 1;
          for (loop_ub = 0; loop_ub < 6; loop_ub++) {
            s = 0.0;
            for (g = 0; g < 6; g++) {
              /* Start for MATLABSystem: '<S2>/MATLAB System' */
              s += X[g * 6 + loop_ub] * b_data[(coffset_tmp + g) + 1];
            }

            JacSlice_data[(coffset_tmp + loop_ub) + 1] = s;
          }
        }

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        loop_ub = 6 * b_size[1];
        for (nextBody_0 = 0; nextBody_0 < loop_ub; nextBody_0++) {
          JacSlice_data[nextBody_0] *= minPathLength;
        }

        if (qidx_idx_0 > qidx_idx_1) {
          g = 0;
          f = 0;
        } else {
          g = (int32_T)qidx_idx_0 - 1;
          f = (int32_T)qidx_idx_1;
        }

        f -= g;
        for (nextBody_0 = 0; nextBody_0 < f; nextBody_0++) {
          for (loop_ub = 0; loop_ub < 6; loop_ub++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            Jac->data[loop_ub + 6 * (g + nextBody_0)] = JacSlice_data[6 *
              nextBody_0 + loop_ub];
          }
        }
      }

      if (nextBodyIsParent) {
        for (nextBody_0 = 0; nextBody_0 < 4; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          minPathLength = Tc2p[nextBody_0 + 4];
          qidx_idx_0 = Tc2p[nextBody_0];
          qidx_idx_1 = Tc2p[nextBody_0 + 8];
          s = Tc2p[nextBody_0 + 12];
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            g = loop_ub << 2;
            Tj[nextBody_0 + g] = ((T1[g + 1] * minPathLength + T1[g] *
              qidx_idx_0) + T1[g + 2] * qidx_idx_1) + T1[g + 3] * s;
          }
        }

        memcpy(&T1[0], &Tj[0], sizeof(real_T) << 4U);
      } else {
        for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          R[3 * nextBody_0] = Tc2p[nextBody_0];
          R[3 * nextBody_0 + 1] = Tc2p[nextBody_0 + 4];
          R[3 * nextBody_0 + 2] = Tc2p[nextBody_0 + 8];
        }

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        for (nextBody_0 = 0; nextBody_0 < 9; nextBody_0++) {
          tempR[nextBody_0] = -R[nextBody_0];
        }

        minPathLength = Tc2p[13];
        qidx_idx_0 = Tc2p[12];
        qidx_idx_1 = Tc2p[14];
        for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
          g = nextBody_0 << 2;
          Tc2p[g] = R[3 * nextBody_0];
          Tc2p[g + 1] = R[3 * nextBody_0 + 1];
          Tc2p[g + 2] = R[3 * nextBody_0 + 2];
          Tc2p[nextBody_0 + 12] = (tempR[nextBody_0 + 3] * minPathLength +
            tempR[nextBody_0] * qidx_idx_0) + tempR[nextBody_0 + 6] * qidx_idx_1;
        }

        Tc2p[3] = 0.0;
        Tc2p[7] = 0.0;
        Tc2p[11] = 0.0;
        Tc2p[15] = 1.0;
        for (nextBody_0 = 0; nextBody_0 < 4; nextBody_0++) {
          minPathLength = Tc2p[nextBody_0 + 4];
          qidx_idx_0 = Tc2p[nextBody_0];
          qidx_idx_1 = Tc2p[nextBody_0 + 8];
          s = Tc2p[nextBody_0 + 12];
          for (loop_ub = 0; loop_ub < 4; loop_ub++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            g = loop_ub << 2;
            Tj[nextBody_0 + g] = ((T1[g + 1] * minPathLength + T1[g] *
              qidx_idx_0) + T1[g + 2] * qidx_idx_1) + T1[g + 3] * s;
          }
        }

        memcpy(&T1[0], &Tj[0], sizeof(real_T) << 4U);
      }
    }

    PickAndPlace_Sim_emxFree_real_T(&kinematicPathIndices);
    for (nextBody_0 = 0; nextBody_0 < 3; nextBody_0++) {
      b_i = nextBody_0 << 2;
      minPathLength = T1[b_i];
      X[6 * nextBody_0] = minPathLength;
      g = (nextBody_0 + 3) * 6;
      X[g] = 0.0;
      X[6 * nextBody_0 + 3] = 0.0;
      X[g + 3] = minPathLength;
      minPathLength = T1[b_i + 1];
      X[6 * nextBody_0 + 1] = minPathLength;
      X[g + 1] = 0.0;
      X[6 * nextBody_0 + 4] = 0.0;
      X[g + 4] = minPathLength;
      minPathLength = T1[b_i + 2];
      X[6 * nextBody_0 + 2] = minPathLength;
      X[g + 2] = 0.0;
      X[6 * nextBody_0 + 5] = 0.0;
      X[g + 5] = minPathLength;
    }

    PickAndPlace_Sim_emxInit_real_T(&B, 2);
    nextBody_0 = B->size[0] * B->size[1];

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    B->size[0] = 6;
    B->size[1] = f_tmp;
    PickAn_emxEnsureCapacity_real_T(B, nextBody_0);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    n = 6 * Jac->size[1];
    if (n - 1 >= 0) {
      memcpy(&B->data[0], &Jac->data[0], (uint32_T)n * sizeof(real_T));
    }

    nextBody_0 = Jac->size[0] * Jac->size[1];
    Jac->size[0] = 6;
    Jac->size[1] = f_tmp;
    PickAn_emxEnsureCapacity_real_T(Jac, nextBody_0);
    for (nextBody_0 = 0; nextBody_0 < f_tmp; nextBody_0++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      coffset_tmp = nextBody_0 * 6 - 1;
      for (b_i = 0; b_i < 6; b_i++) {
        s = 0.0;
        for (g = 0; g < 6; g++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          s += X[g * 6 + b_i] * B->data[(coffset_tmp + g) + 1];
        }

        Jac->data[(coffset_tmp + b_i) + 1] = s;
      }
    }

    PickAndPlace_Sim_emxFree_real_T(&B);
    T_size[0] = 4;
    T_size[1] = 4;
    memcpy(&T_data[0], &T1[0], sizeof(real_T) << 4U);
  } else {
    T_size[0] = 0;
    T_size[1] = 0;
    Jac->size[0] = 6;
    Jac->size[1] = 0;
  }
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt(b * b + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

static creal_T PickAndPlace_Simulation_QL_sqrt(const creal_T x)
{
  creal_T b_x;
  real_T absxr;
  real_T xr;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  xr = x.re;
  if (x.im == 0.0) {
    if (x.re < 0.0) {
      absxr = 0.0;
      xr = sqrt(-x.re);
    } else {
      absxr = sqrt(x.re);
      xr = 0.0;
    }
  } else if (x.re == 0.0) {
    if (x.im < 0.0) {
      absxr = sqrt(-x.im / 2.0);
      xr = -absxr;
    } else {
      absxr = sqrt(x.im / 2.0);
      xr = absxr;
    }
  } else if (rtIsNaN(x.re)) {
    absxr = (rtNaN);
  } else if (rtIsNaN(x.im)) {
    absxr = (rtNaN);
    xr = (rtNaN);
  } else if (rtIsInf(x.im)) {
    absxr = fabs(x.im);
    xr = x.im;
  } else if (rtIsInf(x.re)) {
    if (x.re < 0.0) {
      absxr = 0.0;
      xr = x.im * -x.re;
    } else {
      absxr = x.re;
      xr = 0.0;
    }
  } else {
    absxr = fabs(x.re);
    xr = fabs(x.im);
    if ((absxr > 4.4942328371557893E+307) || (xr > 4.4942328371557893E+307)) {
      absxr *= 0.5;
      xr = rt_hypotd_snf(absxr, xr * 0.5);
      if (xr > absxr) {
        absxr = sqrt(absxr / xr + 1.0) * sqrt(xr);
      } else {
        absxr = sqrt(xr) * 1.4142135623730951;
      }
    } else {
      absxr = sqrt((rt_hypotd_snf(absxr, xr) + absxr) * 0.5);
    }

    if (x.re > 0.0) {
      xr = x.im / absxr * 0.5;
    } else {
      if (x.im < 0.0) {
        xr = -absxr;
      } else {
        xr = absxr;
      }

      absxr = x.im / xr * 0.5;
    }
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
  b_x.re = absxr;
  b_x.im = xr;
  return b_x;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static real_T PickAndPlace_Simulatio_xzlangeM(const real_T x[9])
{
  real_T y;
  int32_T b_k;
  boolean_T exitg1;
  y = 0.0;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 9)) {
    real_T absxk;
    absxk = fabs(x[b_k]);
    if (rtIsNaN(absxk)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }

      b_k++;
    }
  }

  return y;
}

static void PickAndPlace_Simulation_xzlascl(real_T cfrom, real_T cto, real_T A[9])
{
  real_T cfromc;
  real_T ctoc;
  int32_T b_j;
  boolean_T notdone;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((fabs(cfrom1) > fabs(ctoc)) && (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (fabs(cto1) > fabs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    for (b_j = 0; b_j < 3; b_j++) {
      int32_T offset;
      offset = b_j * 3 - 1;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
      A[offset + 3] *= mul;
    }
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static real_T PickAndPlace_Simulation_Q_xnrm2(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    real_T absxk;
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * sqrt(y);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (rtIsNaN(y)) {
    k = ix0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= kend) {
        if (rtIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static real_T PickAndPlace_Simulation_Q_xdotc(int32_T n, const real_T x[9],
  int32_T ix0, const real_T y[9], int32_T iy0)
{
  real_T d;
  int32_T b;
  int32_T k;
  d = 0.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b = (uint8_T)n;
  for (k = 0; k < b; k++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }

  return d;
}

static void PickAndPlace_Simulation_Q_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[9], int32_T iy0)
{
  int32_T k;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (!(a == 0.0)) {
    for (k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += y[(ix0 + k) - 1] * a;
    }
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static real_T PickAndPlace_Simulation_xnrm2_o(const real_T x[3], int32_T ix0)
{
  real_T scale;
  real_T y;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  for (kend = ix0; kend <= ix0 + 1; kend++) {
    real_T absxk;
    absxk = fabs(x[kend - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * sqrt(y);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (rtIsNaN(y)) {
    kend = ix0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kend <= ix0 + 1) {
        if (rtIsNaN(x[kend - 1])) {
          exitg1 = 1;
        } else {
          kend++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static void PickAndPlace_Simulation_xaxpy_o(int32_T n, real_T a, const real_T x
  [9], int32_T ix0, real_T y[3], int32_T iy0)
{
  int32_T k;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (!(a == 0.0)) {
    for (k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static void PickAndPlace_Simulatio_xaxpy_og(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T k;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (!(a == 0.0)) {
    for (k = 0; k < n; k++) {
      int32_T tmp;
      tmp = (iy0 + k) - 1;
      y[tmp] += x[(ix0 + k) - 1] * a;
    }
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static void PickAndPlace_Simulati_xzlascl_o(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((fabs(cfrom1) > fabs(ctoc)) && (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (fabs(cto1) > fabs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    A[0] *= mul;
    A[1] *= mul;
    A[2] *= mul;
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static void PickAndPlace_Simulation_xswap_o(real_T x[9], int32_T ix0, int32_T
  iy0)
{
  real_T temp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  temp = x[ix0 - 1];
  x[ix0 - 1] = x[iy0 - 1];
  x[iy0 - 1] = temp;
  temp = x[ix0];
  x[ix0] = x[iy0];
  x[iy0] = temp;
  temp = x[ix0 + 1];
  x[ix0 + 1] = x[iy0 + 1];
  x[iy0 + 1] = temp;
}

static void PickAndPlace_Simulation_Q_xrotg(real_T a, real_T b, real_T *b_a,
  real_T *b_b, real_T *c, real_T *s)
{
  real_T absa;
  real_T absb;
  real_T roe;
  real_T scale;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  roe = b;
  absa = fabs(a);
  absb = fabs(b);
  if (absa > absb) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    roe = a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *b_a = 0.0;
    *b_b = 0.0;
  } else {
    real_T ads;
    real_T bds;
    ads = absa / scale;
    bds = absb / scale;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    *b_a = sqrt(ads * ads + bds * bds) * scale;
    if (roe < 0.0) {
      *b_a = -*b_a;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    *c = a / *b_a;
    *s = b / *b_a;
    if (absa > absb) {
      *b_b = *s;
    } else if (*c != 0.0) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      *b_b = 1.0 / *c;
    } else {
      *b_b = 1.0;
    }
  }
}

static void PickAndPlace_Simulation__xrot_o(real_T x[9], int32_T ix0, int32_T
  iy0, real_T c, real_T s)
{
  real_T temp;
  real_T temp_tmp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  temp = x[iy0 - 1];
  temp_tmp = x[ix0 - 1];
  x[iy0 - 1] = temp * c - temp_tmp * s;
  x[ix0 - 1] = temp_tmp * c + temp * s;
  temp = x[ix0] * c + x[iy0] * s;
  x[iy0] = x[iy0] * c - x[ix0] * s;
  x[ix0] = temp;
  temp = x[iy0 + 1];
  temp_tmp = x[ix0 + 1];
  x[iy0 + 1] = temp * c - temp_tmp * s;
  x[ix0 + 1] = temp_tmp * c + temp * s;
}

static void PickAndPlace_Simulation_QLa_svd(const real_T A[9], real_T U[9],
  real_T s[3], real_T V[9])
{
  real_T A_0[9];
  real_T e[3];
  real_T s_0[3];
  real_T work[3];
  real_T anrm;
  real_T cscale;
  real_T emm1;
  real_T nrm;
  real_T rt;
  real_T shift;
  real_T smm1;
  real_T sqds;
  real_T ztest;
  real_T ztest0;
  real_T ztest0_tmp_tmp;
  int32_T b;
  int32_T colqp1;
  int32_T m;
  int32_T qjj;
  int32_T qp1;
  int32_T qq;
  boolean_T apply_transform;
  boolean_T doscale;
  boolean_T exitg1;
  s_0[0] = 0.0;
  e[0] = 0.0;
  work[0] = 0.0;
  s_0[1] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  s_0[2] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  for (b = 0; b < 9; b++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    A_0[b] = A[b];
    U[b] = 0.0;
    V[b] = 0.0;
  }

  doscale = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  anrm = PickAndPlace_Simulatio_xzlangeM(A);
  cscale = anrm;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    PickAndPlace_Simulation_xzlascl(anrm, cscale, A_0);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    PickAndPlace_Simulation_xzlascl(anrm, cscale, A_0);
  }

  for (m = 0; m < 2; m++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    qp1 = m + 2;
    colqp1 = 3 * m + m;
    qq = colqp1 + 1;
    apply_transform = false;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    nrm = PickAndPlace_Simulation_Q_xnrm2(3 - m, A_0, colqp1 + 1);
    if (nrm > 0.0) {
      apply_transform = true;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      if (A_0[colqp1] < 0.0) {
        ztest0 = -nrm;
        s_0[m] = -nrm;
      } else {
        ztest0 = nrm;
        s_0[m] = nrm;
      }

      if (fabs(ztest0) >= 1.0020841800044864E-292) {
        nrm = 1.0 / ztest0;
        b = (colqp1 - m) + 1;
        for (qjj = qq; qjj <= b + 2; qjj++) {
          A_0[qjj - 1] *= nrm;
        }
      } else {
        b = (colqp1 - m) + 1;
        for (qjj = qq; qjj <= b + 2; qjj++) {
          A_0[qjj - 1] /= s_0[m];
        }
      }

      A_0[colqp1]++;
      s_0[m] = -s_0[m];
    } else {
      s_0[m] = 0.0;
    }

    for (b = qp1; b < 4; b++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      qjj = ((b - 1) * 3 + m) + 1;
      if (apply_transform) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        PickAndPlace_Simulation_Q_xaxpy(3 - m, -(PickAndPlace_Simulation_Q_xdotc
          (3 - m, A_0, colqp1 + 1, A_0, qjj) / A_0[colqp1]), colqp1 + 1, A_0,
          qjj);
      }

      e[b - 1] = A_0[qjj - 1];
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    for (qq = m + 1; qq < 4; qq++) {
      b = (3 * m + qq) - 1;
      U[b] = A_0[b];
    }

    if (m + 1 <= 1) {
      nrm = PickAndPlace_Simulation_xnrm2_o(e, m + 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[m + 1] < 0.0) {
          nrm = -nrm;
        }

        e[0] = nrm;
        if (fabs(nrm) >= 1.0020841800044864E-292) {
          nrm = 1.0 / nrm;
          for (qjj = qp1; qjj <= m + 3; qjj++) {
            e[qjj - 1] *= nrm;
          }
        } else {
          for (qjj = qp1; qjj <= m + 3; qjj++) {
            e[qjj - 1] /= nrm;
          }
        }

        e[m + 1]++;
        e[0] = -e[0];
        for (qq = qp1; qq < 4; qq++) {
          work[qq - 1] = 0.0;
        }

        for (qq = qp1; qq < 4; qq++) {
          PickAndPlace_Simulation_xaxpy_o(2 - m, e[qq - 1], A_0, (m + 3 * (qq -
            1)) + 2, work, m + 2);
        }

        for (qq = qp1; qq < 4; qq++) {
          PickAndPlace_Simulatio_xaxpy_og(2 - m, -e[qq - 1] / e[m + 1], work, m
            + 2, A_0, (m + 3 * (qq - 1)) + 2);
        }
      }

      for (colqp1 = qp1; colqp1 < 4; colqp1++) {
        V[colqp1 - 1] = e[colqp1 - 1];
      }
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  m = 2;
  s_0[2] = A_0[8];
  e[1] = A_0[7];
  e[2] = 0.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  for (colqp1 = 1; colqp1 >= 0; colqp1--) {
    qq = 3 * colqp1 + colqp1;
    if (s_0[colqp1] != 0.0) {
      for (b = colqp1 + 2; b < 4; b++) {
        qjj = ((b - 1) * 3 + colqp1) + 1;
        PickAndPlace_Simulation_Q_xaxpy(3 - colqp1,
          -(PickAndPlace_Simulation_Q_xdotc(3 - colqp1, U, qq + 1, U, qjj) /
            U[qq]), qq + 1, U, qjj);
      }

      for (qp1 = colqp1 + 1; qp1 < 4; qp1++) {
        b = (3 * colqp1 + qp1) - 1;
        U[b] = -U[b];
      }

      U[qq]++;
      if (colqp1 - 1 >= 0) {
        U[3 * colqp1] = 0.0;
      }
    } else {
      U[3 * colqp1] = 0.0;
      U[3 * colqp1 + 1] = 0.0;
      U[3 * colqp1 + 2] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (colqp1 = 2; colqp1 >= 0; colqp1--) {
    if ((colqp1 + 1 <= 1) && (e[0] != 0.0)) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      PickAndPlace_Simulation_Q_xaxpy(2, -(PickAndPlace_Simulation_Q_xdotc(2, V,
        2, V, 5) / V[1]), 2, V, 5);
      PickAndPlace_Simulation_Q_xaxpy(2, -(PickAndPlace_Simulation_Q_xdotc(2, V,
        2, V, 8) / V[1]), 2, V, 8);
    }

    V[3 * colqp1] = 0.0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    V[3 * colqp1 + 1] = 0.0;
    V[3 * colqp1 + 2] = 0.0;
    V[colqp1 + 3 * colqp1] = 1.0;
  }

  for (qp1 = 0; qp1 < 3; qp1++) {
    ztest0 = s_0[qp1];
    if (ztest0 != 0.0) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      rt = fabs(ztest0);
      nrm = ztest0 / rt;
      s_0[qp1] = rt;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      if (qp1 + 1 < 3) {
        e[qp1] /= nrm;
      }

      qq = 3 * qp1;

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (qjj = qq + 1; qjj <= qq + 3; qjj++) {
        U[qjj - 1] *= nrm;
      }
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (qp1 + 1 < 3) {
      ztest = e[qp1];
      if (ztest != 0.0) {
        rt = fabs(ztest);
        nrm = rt / ztest;
        e[qp1] = rt;
        s_0[qp1 + 1] *= nrm;
        colqp1 = (qp1 + 1) * 3;
        for (qjj = colqp1 + 1; qjj <= colqp1 + 3; qjj++) {
          V[qjj - 1] *= nrm;
        }
      }
    }
  }

  rt = 0.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  nrm = fmax(fmax(fmax(0.0, fmax(fabs(s_0[0]), fabs(e[0]))), fmax(fabs(s_0[1]),
    fabs(e[1]))), fmax(fabs(s_0[2]), fabs(e[2])));
  while ((m + 1 > 0) && (!(rt >= 75.0))) {
    colqp1 = m;
    qp1 = m;
    exitg1 = false;
    while ((!exitg1) && (qp1 > -1)) {
      colqp1 = qp1;
      if (qp1 == 0) {
        exitg1 = true;
      } else {
        ztest0 = fabs(e[qp1 - 1]);
        if ((ztest0 <= (fabs(s_0[qp1 - 1]) + fabs(s_0[qp1])) *
             2.2204460492503131E-16) || ((ztest0 <= 1.0020841800044864E-292) ||
             ((rt > 20.0) && (ztest0 <= 2.2204460492503131E-16 * nrm)))) {
          e[qp1 - 1] = 0.0;
          exitg1 = true;
        } else {
          qp1--;
        }
      }
    }

    if (colqp1 == m) {
      ztest0 = 4.0;
    } else {
      qp1 = m + 1;
      qq = m + 1;
      exitg1 = false;
      while ((!exitg1) && (qq >= colqp1)) {
        qp1 = qq;
        if (qq == colqp1) {
          exitg1 = true;
        } else {
          ztest0 = 0.0;
          if (qq < m + 1) {
            ztest0 = fabs(e[qq - 1]);
          }

          if (qq > colqp1 + 1) {
            ztest0 += fabs(e[qq - 2]);
          }

          ztest = fabs(s_0[qq - 1]);
          if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
               1.0020841800044864E-292)) {
            s_0[qq - 1] = 0.0;
            exitg1 = true;
          } else {
            qq--;
          }
        }
      }

      if (qp1 == colqp1) {
        ztest0 = 3.0;
      } else if (m + 1 == qp1) {
        ztest0 = 1.0;
      } else {
        ztest0 = 2.0;
        colqp1 = qp1;
      }
    }

    switch ((int32_T)ztest0) {
     case 1:
      ztest0 = e[m - 1];
      e[m - 1] = 0.0;
      for (qq = m; qq >= colqp1 + 1; qq--) {
        PickAndPlace_Simulation_Q_xrotg(s_0[qq - 1], ztest0, &s_0[qq - 1],
          &ztest0, &ztest, &sqds);
        if (qq > colqp1 + 1) {
          ztest0 = -sqds * e[0];
          e[0] *= ztest;
        }

        PickAndPlace_Simulation__xrot_o(V, 3 * (qq - 1) + 1, 3 * m + 1, ztest,
          sqds);
      }
      break;

     case 2:
      ztest0 = e[colqp1 - 1];
      e[colqp1 - 1] = 0.0;
      for (qp1 = colqp1 + 1; qp1 <= m + 1; qp1++) {
        PickAndPlace_Simulation_Q_xrotg(s_0[qp1 - 1], ztest0, &s_0[qp1 - 1],
          &ztest, &sqds, &smm1);
        ztest = e[qp1 - 1];
        ztest0 = -smm1 * ztest;
        e[qp1 - 1] = ztest * sqds;
        PickAndPlace_Simulation__xrot_o(U, 3 * (qp1 - 1) + 1, 3 * (colqp1 - 1) +
          1, sqds, smm1);
      }
      break;

     case 3:
      smm1 = s_0[m - 1];
      sqds = e[m - 1];
      ztest = fmax(fmax(fmax(fmax(fabs(s_0[m]), fabs(smm1)), fabs(sqds)), fabs
                        (s_0[colqp1])), fabs(e[colqp1]));
      ztest0 = s_0[m] / ztest;
      smm1 /= ztest;
      emm1 = sqds / ztest;
      sqds = s_0[colqp1] / ztest;
      smm1 = ((smm1 + ztest0) * (smm1 - ztest0) + emm1 * emm1) / 2.0;
      emm1 *= ztest0;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      ztest0 = (sqds + ztest0) * (sqds - ztest0) + shift;
      ztest = e[colqp1] / ztest * sqds;
      for (qq = colqp1 + 1; qq <= m; qq++) {
        PickAndPlace_Simulation_Q_xrotg(ztest0, ztest, &sqds, &smm1, &emm1,
          &shift);
        if (qq > colqp1 + 1) {
          e[0] = sqds;
        }

        ztest0_tmp_tmp = e[qq - 1];
        ztest0 = s_0[qq - 1];
        e[qq - 1] = ztest0_tmp_tmp * emm1 - ztest0 * shift;
        ztest = shift * s_0[qq];
        s_0[qq] *= emm1;
        b = (qq - 1) * 3 + 1;
        qjj = 3 * qq + 1;
        PickAndPlace_Simulation__xrot_o(V, b, qjj, emm1, shift);
        PickAndPlace_Simulation_Q_xrotg(ztest0 * emm1 + ztest0_tmp_tmp * shift,
          ztest, &s_0[qq - 1], &sqds, &smm1, &emm1);
        ztest = e[qq - 1];
        ztest0 = ztest * smm1 + emm1 * s_0[qq];
        s_0[qq] = ztest * -emm1 + smm1 * s_0[qq];
        ztest = emm1 * e[qq];
        e[qq] *= smm1;
        PickAndPlace_Simulation__xrot_o(U, b, qjj, smm1, emm1);
      }

      e[m - 1] = ztest0;
      rt++;
      break;

     default:
      if (s_0[colqp1] < 0.0) {
        s_0[colqp1] = -s_0[colqp1];
        qq = 3 * colqp1;
        for (qjj = qq + 1; qjj <= qq + 3; qjj++) {
          V[qjj - 1] = -V[qjj - 1];
        }
      }

      qp1 = colqp1 + 1;
      while ((colqp1 + 1 < 3) && (s_0[colqp1] < s_0[qp1])) {
        rt = s_0[colqp1];
        s_0[colqp1] = s_0[qp1];
        s_0[qp1] = rt;
        b = 3 * colqp1 + 1;
        qjj = (colqp1 + 1) * 3 + 1;
        PickAndPlace_Simulation_xswap_o(V, b, qjj);
        PickAndPlace_Simulation_xswap_o(U, b, qjj);
        colqp1 = qp1;
        qp1++;
      }

      rt = 0.0;
      m--;
      break;
    }
  }

  s[0] = s_0[0];
  s[1] = s_0[1];
  s[2] = s_0[2];
  if (doscale) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    PickAndPlace_Simulati_xzlascl_o(cscale, anrm, s);
  }
}

static void PickAndPlac_IKHelpers_poseError(const real_T Td[16], const real_T
  T_data[], const int32_T T_size[2], real_T errorvec[6])
{
  creal_T tmp;
  creal_T u;
  creal_T u_0;
  real_T b_I[9];
  real_T b_U[9];
  real_T b_V[9];
  real_T y[9];
  real_T b_s[3];
  real_T v[3];
  real_T vspecial_data[3];
  real_T Td_0;
  real_T q;
  real_T t4;
  int32_T b_i;
  int32_T iy;
  int32_T trueCount;
  boolean_T exitg1;
  boolean_T xneg;
  for (iy = 0; iy < 3; iy++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    t4 = Td[iy + 4];
    q = Td[iy];
    Td_0 = Td[iy + 8];
    for (trueCount = 0; trueCount < 3; trueCount++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      y[iy + 3 * trueCount] = (T_data[trueCount + T_size[0]] * t4 + q *
        T_data[trueCount]) + T_data[(T_size[0] << 1) + trueCount] * Td_0;
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  u.re = (((y[0] + y[4]) + y[8]) - 1.0) * 0.5;
  if (!(fabs(u.re) > 1.0)) {
    u.re = acos(u.re);
  } else {
    u_0.re = u.re + 1.0;
    u_0.im = 0.0;
    tmp.re = 1.0 - u.re;
    tmp.im = 0.0;
    u.re = 2.0 * rt_atan2d_snf((PickAndPlace_Simulation_QL_sqrt(tmp)).re,
      (PickAndPlace_Simulation_QL_sqrt(u_0)).re);
  }

  t4 = 2.0 * sin(u.re);
  v[0] = (y[5] - y[7]) / t4;
  v[1] = (y[6] - y[2]) / t4;
  v[2] = (y[1] - y[3]) / t4;
  if (rtIsNaN(u.re) || rtIsInf(u.re)) {
    t4 = (rtNaN);
  } else if (u.re == 0.0) {
    t4 = 0.0;
  } else {
    t4 = fmod(u.re, 3.1415926535897931);
    xneg = (t4 == 0.0);
    if (!xneg) {
      q = fabs(u.re / 3.1415926535897931);
      xneg = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (xneg) {
      t4 = 0.0;
    } else if (t4 < 0.0) {
      t4 += 3.1415926535897931;
    }
  }

  xneg = true;
  iy = 0;
  exitg1 = false;
  while ((!exitg1) && (iy < 3)) {
    if (!(v[iy] == 0.0)) {
      xneg = false;
      exitg1 = true;
    } else {
      iy++;
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  xneg = ((t4 == 0.0) || xneg);
  if (xneg) {
    for (iy = 0; iy < 3; iy++) {
      vspecial_data[iy] = 0.0;
    }

    trueCount = 0;
    for (b_i = 0; b_i < 1; b_i++) {
      memset(&b_I[0], 0, 9U * sizeof(real_T));
      b_I[0] = 1.0;
      b_I[4] = 1.0;
      b_I[8] = 1.0;
      for (iy = 0; iy < 9; iy++) {
        b_I[iy] -= y[iy];
      }

      xneg = true;
      for (iy = 0; iy < 9; iy++) {
        if (xneg) {
          t4 = b_I[iy];
          if ((!rtIsInf(t4)) && (!rtIsNaN(t4))) {
          } else {
            xneg = false;
          }
        } else {
          xneg = false;
        }
      }

      if (xneg) {
        PickAndPlace_Simulation_QLa_svd(b_I, b_U, b_s, b_V);
      } else {
        for (iy = 0; iy < 9; iy++) {
          b_V[iy] = (rtNaN);
        }
      }

      vspecial_data[0] = b_V[6];
      vspecial_data[1] = b_V[7];
      vspecial_data[2] = b_V[8];
      trueCount++;
    }

    if (trueCount - 1 >= 0) {
      v[0] = vspecial_data[0];
      v[1] = vspecial_data[1];
      v[2] = vspecial_data[2];
    }
  }

  t4 = 1.0 / sqrt((v[0] * v[0] + v[1] * v[1]) + v[2] * v[2]);
  v[0] *= t4;
  v[1] *= t4;
  v[2] *= t4;
  errorvec[0] = u.re * v[0];
  errorvec[3] = Td[12] - T_data[T_size[0] * 3];
  errorvec[1] = u.re * v[1];
  errorvec[4] = Td[13] - T_data[T_size[0] * 3 + 1];
  errorvec[2] = u.re * v[2];
  errorvec[5] = Td[14] - T_data[T_size[0] * 3 + 2];
}

static void PickAndPlace_Simulation__mtimes(const real_T A[6], const
  emxArray_real_T_PickAndPlace__T *B, emxArray_real_T_PickAndPlace__T *C)
{
  real_T s;
  int32_T b_j;
  int32_T b_k;
  int32_T boffset;
  int32_T n_tmp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  n_tmp = B->size[1];
  b_j = C->size[0] * C->size[1];
  C->size[0] = 1;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  C->size[1] = B->size[1];
  PickAn_emxEnsureCapacity_real_T(C, b_j);
  for (b_j = 0; b_j < n_tmp; b_j++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    boffset = b_j * 6 - 1;
    s = 0.0;
    for (b_k = 0; b_k < 6; b_k++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      s += B->data[(boffset + b_k) + 1] * A[b_k];
    }

    C->data[b_j] = s;
  }
}

static void PickAndPlace__emxInit_boolean_T(emxArray_boolean_T_PickAndPla_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_boolean_T_PickAndPla_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T_PickAndPla_T *)malloc(sizeof
    (emxArray_boolean_T_PickAndPla_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static real_T PickAndPlace_Simulation_QL_norm(const real_T x[6])
{
  real_T scale;
  real_T y;
  int32_T b_k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (b_k = 0; b_k < 6; b_k++) {
    real_T absxk;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    absxk = fabs(x[b_k]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * sqrt(y);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (rtIsNaN(y)) {
    b_k = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (b_k < 6) {
        if (rtIsNaN(x[b_k])) {
          exitg1 = 1;
        } else {
          b_k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static void PickAndPlace_Simulation_Q_minus(emxArray_real_T_PickAndPlace__T *in1,
  const emxArray_real_T_PickAndPlace__T *in2)
{
  emxArray_real_T_PickAndPlace__T *in2_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  PickAndPlace_Sim_emxInit_real_T(&in2_0, 1);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  loop_ub = in1->size[0] == 1 ? in2->size[0] : in1->size[0];
  i = in2_0->size[0];
  in2_0->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in2_0, i);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    in2_0->data[i] = in2->data[i * stride_0_0] - in1->data[i * stride_1_0];
  }

  i = in1->size[0];
  in1->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in1, i);
  if (loop_ub - 1 >= 0) {
    memcpy(&in1->data[0], &in2_0->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  PickAndPlace_Sim_emxFree_real_T(&in2_0);
}

static void Pic_emxEnsureCapacity_boolean_T(emxArray_boolean_T_PickAndPla_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static real_T PickAndPlace_Simulation_QLa_toc(real_T tstart_tv_sec, real_T
  tstart_tv_nsec)
{
  coderTimespec b_timespec;
  if (!PickAndPlace_Simulation_QLab_DW.method_not_empty_f) {
    PickAndPlace_Simulation_QLab_DW.method_not_empty_f = true;
    coderInitTimeFunctions(&PickAndPlace_Simulation_QLab_DW.freq);
  }

  coderTimeClockGettimeMonotonic(&b_timespec,
    PickAndPlace_Simulation_QLab_DW.freq);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  return (b_timespec.tv_nsec - tstart_tv_nsec) / 1.0E+9 + (b_timespec.tv_sec -
    tstart_tv_sec);
}

static void PickAndPlace_Simulatio_mldivide(const real_T A[16], const
  emxArray_real_T_PickAndPlace__T *B, real_T Y_data[], int32_T *Y_size)
{
  real_T c_A[16];
  real_T smax;
  int32_T c;
  int32_T ijA;
  int32_T jA;
  int32_T jp1j;
  int32_T kAcol;
  int8_T b_ipiv[4];

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  memcpy(&c_A[0], &A[0], sizeof(real_T) << 4U);
  b_ipiv[0] = 1;
  b_ipiv[1] = 2;
  b_ipiv[2] = 3;
  for (kAcol = 0; kAcol < 3; kAcol++) {
    int32_T c_0;
    int32_T iy;
    int32_T jj;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    c = kAcol * 5 + 2;
    jj = kAcol * 5;
    c_0 = 4 - kAcol;
    iy = 1;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    smax = fabs(c_A[jj]);
    for (jA = 2; jA <= c_0; jA++) {
      real_T s;
      s = fabs(c_A[(c + jA) - 3]);
      if (s > smax) {
        iy = jA;
        smax = s;
      }
    }

    if (c_A[(c + iy) - 3] != 0.0) {
      if (iy - 1 != 0) {
        iy += kAcol;
        b_ipiv[kAcol] = (int8_T)iy;
        smax = c_A[kAcol];
        c_A[kAcol] = c_A[iy - 1];
        c_A[iy - 1] = smax;
        smax = c_A[kAcol + 4];
        c_A[kAcol + 4] = c_A[iy + 3];
        c_A[iy + 3] = smax;
        smax = c_A[kAcol + 8];
        c_A[kAcol + 8] = c_A[iy + 7];
        c_A[iy + 7] = smax;
        smax = c_A[kAcol + 12];
        c_A[kAcol + 12] = c_A[iy + 11];
        c_A[iy + 11] = smax;
      }

      iy = c - kAcol;
      for (jA = c; jA <= iy + 2; jA++) {
        c_A[jA - 1] /= c_A[jj];
      }
    }

    jA = jj;
    jj += 4;
    iy = 3 - kAcol;
    for (jp1j = 0; jp1j < iy; jp1j++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      smax = c_A[(jp1j << 2) + jj];
      if (smax != 0.0) {
        int32_T d;

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        c_0 = jA + 6;
        d = (jA - kAcol) + 8;
        for (ijA = c_0; ijA <= d; ijA++) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          c_A[ijA - 1] += c_A[((c + ijA) - jA) - 7] * -smax;
        }
      }

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      jA += 4;
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  c = B->size[0];
  *Y_size = B->size[0];
  if (c - 1 >= 0) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    memcpy(&Y_data[0], &B->data[0], (uint32_T)c * sizeof(real_T));
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (b_ipiv[0] != 1) {
    smax = Y_data[0];
    Y_data[0] = Y_data[b_ipiv[0] - 1];
    Y_data[b_ipiv[0] - 1] = smax;
  }

  if (b_ipiv[1] != 2) {
    smax = Y_data[1];
    Y_data[1] = Y_data[b_ipiv[1] - 1];
    Y_data[b_ipiv[1] - 1] = smax;
  }

  if (b_ipiv[2] != 3) {
    smax = Y_data[2];
    Y_data[2] = Y_data[b_ipiv[2] - 1];
    Y_data[b_ipiv[2] - 1] = smax;
  }

  for (c = 0; c < 4; c++) {
    kAcol = (c << 2) - 1;
    if (Y_data[c] != 0.0) {
      for (jA = c + 2; jA < 5; jA++) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        Y_data[jA - 1] -= c_A[jA + kAcol] * Y_data[c];
      }
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  for (jA = 3; jA >= 0; jA--) {
    kAcol = jA << 2;
    smax = Y_data[jA];
    if (smax != 0.0) {
      Y_data[jA] = smax / c_A[jA + kAcol];
      for (c = 0; c < jA; c++) {
        Y_data[c] -= c_A[c + kAcol] * Y_data[jA];
      }
    }
  }
}

static void PickAndPlace_S_binary_expand_op(real_T in1_data[], int32_T *in1_size,
  const emxArray_real_T_PickAndPlace__T *in2, real_T in3, const real_T in4[16],
  const emxArray_real_T_PickAndPlace__T *in5)
{
  real_T in2_0[16];
  int32_T aux_0_1;
  int32_T i;
  int32_T in2_tmp;
  int32_T stride_0_0;
  int32_T stride_0_1;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 4; i++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    in2_tmp = i << 2;
    in2_0[in2_tmp] = -(in4[in2_tmp] * in3 + in2->data[in2->size[0] * aux_0_1]);
    in2_0[in2_tmp + 1] = -(in4[in2_tmp + 1] * in3 + in2->data[in2->size[0] *
      aux_0_1 + stride_0_0]);
    in2_0[in2_tmp + 2] = -(in4[in2_tmp + 2] * in3 + in2->data[(stride_0_0 << 1)
      + in2->size[0] * aux_0_1]);
    in2_0[in2_tmp + 3] = -(in4[in2_tmp + 3] * in3 + in2->data[3 * stride_0_0 +
      in2->size[0] * aux_0_1]);
    aux_0_1 += stride_0_1;
  }

  PickAndPlace_Simulatio_mldivide(in2_0, in5, in1_data, in1_size);
}

static void PickAndPlace_Simulat_expand_max(const
  emxArray_real_T_PickAndPlace__T *a, const real_T b[4], real_T c[4])
{
  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  c[0] = fmax(a->data[0], b[0]);
  c[1] = fmax(a->data[0], b[1]);
  c[2] = fmax(a->data[0], b[2]);
  c[3] = fmax(a->data[0], b[3]);
}

static void PickAndPlace_Simulat_expand_min(const
  emxArray_real_T_PickAndPlace__T *a, const real_T b[4], real_T c[4])
{
  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  c[0] = fmin(a->data[0], b[0]);
  c[1] = fmin(a->data[0], b[1]);
  c[2] = fmin(a->data[0], b[2]);
  c[3] = fmin(a->data[0], b[3]);
}

static void PickAndPlace__emxFree_boolean_T(emxArray_boolean_T_PickAndPla_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T_PickAndPla_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T_PickAndPla_T *)NULL;
  }
}

static void ErrorDampedLevenbergMarquardt_s(d_robotics_core_internal_Erro_T *obj,
  real_T xSol[4], c_robotics_core_internal_NLPS_T *exitFlag, real_T *en, real_T *
  iter)
{
  d_robotics_manip_internal_IKE_T *args;
  emxArray_boolean_T_PickAndPla_T *x_0;
  emxArray_real_T_PickAndPlace__T *H0;
  emxArray_real_T_PickAndPlace__T *J;
  emxArray_real_T_PickAndPlace__T *b;
  emxArray_real_T_PickAndPlace__T *ev;
  emxArray_real_T_PickAndPlace__T *evprev;
  emxArray_real_T_PickAndPlace__T *grad;
  emxArray_real_T_PickAndPlace__T *y;
  h_robotics_manip_internal_Rig_T *treeInternal;
  real_T a[36];
  real_T weightMatrix[36];
  real_T T_data[16];
  real_T Td[16];
  real_T e_0[6];
  real_T step_data[4];
  real_T y_0[4];
  real_T bidx;
  real_T cc;
  real_T d;
  real_T scale;
  real_T t;
  int32_T aoffset;
  int32_T b_i;
  int32_T b_k;
  int32_T boffset;
  int32_T coffset;
  int32_T e;
  int32_T nx;
  boolean_T x[4];
  boolean_T flag;
  static const real_T tmp[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  emxArray_real_T_PickAndPlace__T *J_0;
  emxArray_real_T_PickAndPlace__T *tmp_0;
  real_T e_1[6];
  real_T xprev_idx_0;
  real_T xprev_idx_1;
  real_T xprev_idx_2;
  real_T xprev_idx_3;
  int32_T J_1;
  int32_T loop_ub;
  static const real_T tmp_1[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T T_size[2];
  int32_T exitg1;
  int32_T exitg2;
  boolean_T exitg3;
  boolean_T guard1;
  boolean_T guard2;
  xSol[0] = obj->SeedInternal[0];
  xSol[1] = obj->SeedInternal[1];
  xSol[2] = obj->SeedInternal[2];
  xSol[3] = obj->SeedInternal[3];

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  PickAndPlace_Simulation_QLa_tic(&obj->TimeObjInternal.StartTime.tv_sec,
    &obj->TimeObjInternal.StartTime.tv_nsec);
  xprev_idx_0 = xSol[0];
  xprev_idx_1 = xSol[1];
  xprev_idx_2 = xSol[2];
  xprev_idx_3 = xSol[3];
  args = obj->ExtraArgs;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  treeInternal = args->Robot;
  for (b_k = 0; b_k < 16; b_k++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    Td[b_k] = args->Tform[b_k];
  }

  for (b_k = 0; b_k < 36; b_k++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    weightMatrix[b_k] = args->WeightMatrix[b_k];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  bidx = args->BodyIndex;
  PickAndPlace_Sim_emxInit_real_T(&J, 2);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  RigidBodyTree_efficientFKAndJac(treeInternal, xSol, bidx, T_data, T_size, J);
  PickAndPlac_IKHelpers_poseError(Td, T_data, T_size, e_0);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_k = args->ErrTemp->size[0];
  args->ErrTemp->size[0] = 6;
  PickAn_emxEnsureCapacity_real_T(args->ErrTemp, b_k);
  for (b_k = 0; b_k < 6; b_k++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    args->ErrTemp->data[b_k] = e_0[b_k];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  bidx = 0.0;
  for (b_k = 0; b_k < 6; b_k++) {
    t = 0.0;
    for (nx = 0; nx < 6; nx++) {
      t += weightMatrix[6 * b_k + nx] * (0.5 * e_0[nx]);
    }

    bidx += t * e_0[b_k];
  }

  args->CostTemp = bidx;
  for (b_k = 0; b_k < 6; b_k++) {
    bidx = 0.0;
    for (nx = 0; nx < 6; nx++) {
      bidx += weightMatrix[6 * b_k + nx] * e_0[nx];
    }

    e_1[b_k] = bidx;
  }

  PickAndPlace_Sim_emxInit_real_T(&J_0, 2);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_k = J_0->size[0] * J_0->size[1];
  J_0->size[0] = 6;
  J_0->size[1] = J->size[1];
  PickAn_emxEnsureCapacity_real_T(J_0, b_k);
  nx = 6 * J->size[1];
  for (b_k = 0; b_k < nx; b_k++) {
    J_0->data[b_k] = -J->data[b_k];
  }

  PickAndPlace_Sim_emxInit_real_T(&tmp_0, 2);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  PickAndPlace_Simulation__mtimes(e_1, J_0, tmp_0);
  loop_ub = tmp_0->size[1];

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  b_k = args->GradTemp->size[0];
  args->GradTemp->size[0] = tmp_0->size[1];
  PickAn_emxEnsureCapacity_real_T(args->GradTemp, b_k);
  for (b_k = 0; b_k < loop_ub; b_k++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    args->GradTemp->data[b_k] = tmp_0->data[b_k];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj->ExtraArgs = args;
  args = obj->ExtraArgs;
  PickAndPlace_Sim_emxInit_real_T(&evprev, 1);
  b_k = evprev->size[0];
  evprev->size[0] = args->ErrTemp->size[0];
  PickAn_emxEnsureCapacity_real_T(evprev, b_k);
  loop_ub = args->ErrTemp->size[0];
  for (b_k = 0; b_k < loop_ub; b_k++) {
    evprev->data[b_k] = args->ErrTemp->data[b_k];
  }

  d = obj->MaxNumIterationInternal;
  e = (int32_T)d - 1;
  b_i = 0;
  PickAndPlace_Sim_emxInit_real_T(&grad, 1);
  PickAndPlace_Sim_emxInit_real_T(&H0, 2);
  PickAndPlace_Sim_emxInit_real_T(&ev, 1);
  PickAndPlace_Sim_emxInit_real_T(&y, 2);
  PickAndPlace_Sim_emxInit_real_T(&b, 1);
  PickAndPlace__emxInit_boolean_T(&x_0, 1);
  do {
    exitg1 = 0;
    if (b_i <= e) {
      args = obj->ExtraArgs;
      treeInternal = args->Robot;
      for (b_k = 0; b_k < 16; b_k++) {
        Td[b_k] = args->Tform[b_k];
      }

      for (b_k = 0; b_k < 36; b_k++) {
        weightMatrix[b_k] = args->WeightMatrix[b_k];
      }

      bidx = args->BodyIndex;
      RigidBodyTree_efficientFKAndJac(treeInternal, xSol, bidx, T_data, T_size,
        J);
      nx = 6 * J->size[1];
      b_k = J->size[0] * J->size[1];
      J->size[0] = 6;
      PickAn_emxEnsureCapacity_real_T(J, b_k);
      J_1 = J->size[1];
      for (b_k = 0; b_k < nx; b_k++) {
        J->data[b_k] = -J->data[b_k];
      }

      PickAndPlac_IKHelpers_poseError(Td, T_data, T_size, e_0);
      b_k = args->ErrTemp->size[0];
      args->ErrTemp->size[0] = 6;
      PickAn_emxEnsureCapacity_real_T(args->ErrTemp, b_k);
      for (b_k = 0; b_k < 6; b_k++) {
        args->ErrTemp->data[b_k] = e_0[b_k];
      }

      bidx = 0.0;
      for (b_k = 0; b_k < 6; b_k++) {
        t = 0.0;
        for (nx = 0; nx < 6; nx++) {
          t += weightMatrix[6 * b_k + nx] * (0.5 * e_0[nx]);
        }

        bidx += t * e_0[b_k];
      }

      args->CostTemp = bidx;
      for (b_k = 0; b_k < 6; b_k++) {
        bidx = 0.0;
        for (nx = 0; nx < 6; nx++) {
          bidx += weightMatrix[6 * b_k + nx] * e_0[nx];
        }

        e_1[b_k] = bidx;
      }

      PickAndPlace_Simulation__mtimes(e_1, J, tmp_0);
      loop_ub = tmp_0->size[1];
      b_k = args->GradTemp->size[0];
      args->GradTemp->size[0] = tmp_0->size[1];
      PickAn_emxEnsureCapacity_real_T(args->GradTemp, b_k);
      for (b_k = 0; b_k < loop_ub; b_k++) {
        args->GradTemp->data[b_k] = tmp_0->data[b_k];
      }

      d = args->CostTemp;
      obj->ExtraArgs = args;
      args = obj->ExtraArgs;
      b_k = grad->size[0];
      grad->size[0] = args->GradTemp->size[0];
      PickAn_emxEnsureCapacity_real_T(grad, b_k);
      loop_ub = args->GradTemp->size[0];
      for (b_k = 0; b_k < loop_ub; b_k++) {
        grad->data[b_k] = args->GradTemp->data[b_k];
      }

      args = obj->ExtraArgs;
      for (b_k = 0; b_k < 36; b_k++) {
        a[b_k] = args->WeightMatrix[b_k];
      }

      b_k = b->size[0];
      b->size[0] = args->ErrTemp->size[0];
      PickAn_emxEnsureCapacity_real_T(b, b_k);
      loop_ub = args->ErrTemp->size[0];
      for (b_k = 0; b_k < loop_ub; b_k++) {
        b->data[b_k] = args->ErrTemp->data[b_k];
      }

      loop_ub = args->ErrTemp->size[0];
      b_k = ev->size[0];
      ev->size[0] = loop_ub;
      PickAn_emxEnsureCapacity_real_T(ev, b_k);
      nx = args->ErrTemp->size[0];
      for (b_k = 0; b_k < nx; b_k++) {
        ev->data[b_k] = args->ErrTemp->data[b_k];
      }

      for (b_k = 0; b_k < 6; b_k++) {
        cc = 0.0;
        for (nx = 0; nx < 6; nx++) {
          cc += a[6 * nx + b_k] * b->data[nx];
        }

        e_0[b_k] = cc;
      }

      *en = PickAndPlace_Simulation_QL_norm(e_0);
      *iter = (real_T)b_i + 1.0;
      if (grad->size[0] == 0) {
        cc = 0.0;
      } else {
        nx = grad->size[0] - 1;
        cc = 0.0;
        if (grad->size[0] == 1) {
          cc = fabs(grad->data[0]);
        } else {
          scale = 3.3121686421112381E-170;
          for (b_k = 0; b_k <= nx; b_k++) {
            bidx = fabs(grad->data[b_k]);
            if (bidx > scale) {
              t = scale / bidx;
              cc = cc * t * t + 1.0;
              scale = bidx;
            } else {
              t = bidx / scale;
              cc += t * t;
            }
          }

          cc = scale * sqrt(cc);
          if (rtIsNaN(cc)) {
            b_k = 0;
            do {
              exitg2 = 0;
              if (b_k <= nx) {
                if (rtIsNaN(grad->data[b_k])) {
                  exitg2 = 1;
                } else {
                  b_k++;
                }
              } else {
                cc = (rtInf);
                exitg2 = 1;
              }
            } while (exitg2 == 0);
          }
        }
      }

      flag = (cc < obj->GradientTolerance);
      if (flag) {
        *exitFlag = LocalMinimumFound;
        exitg1 = 1;
      } else {
        guard1 = false;
        guard2 = false;
        if ((real_T)b_i + 1.0 > 1.0) {
          x[0] = (fabs(xSol[0] - xprev_idx_0) < obj->StepTolerance);
          x[1] = (fabs(xSol[1] - xprev_idx_1) < obj->StepTolerance);
          x[2] = (fabs(xSol[2] - xprev_idx_2) < obj->StepTolerance);
          x[3] = (fabs(xSol[3] - xprev_idx_3) < obj->StepTolerance);
          flag = true;
          b_k = 0;
          exitg3 = false;
          while ((!exitg3) && (b_k <= 3)) {
            if (!x[b_k]) {
              flag = false;
              exitg3 = true;
            } else {
              b_k++;
            }
          }

          if (flag) {
            *exitFlag = StepSizeBelowMinimum;
            exitg1 = 1;
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }

        if (guard2) {
          if ((real_T)b_i + 1.0 > 1.0) {
            if (ev->size[0] == evprev->size[0]) {
              b_k = evprev->size[0];
              evprev->size[0] = loop_ub;
              PickAn_emxEnsureCapacity_real_T(evprev, b_k);
              for (b_k = 0; b_k < loop_ub; b_k++) {
                evprev->data[b_k] = ev->data[b_k] - evprev->data[b_k];
              }
            } else {
              PickAndPlace_Simulation_Q_minus(evprev, ev);
            }

            nx = evprev->size[0];
            b_k = b->size[0];
            b->size[0] = evprev->size[0];
            PickAn_emxEnsureCapacity_real_T(b, b_k);
            for (b_k = 0; b_k < nx; b_k++) {
              b->data[b_k] = fabs(evprev->data[b_k]);
            }

            b_k = x_0->size[0];
            x_0->size[0] = evprev->size[0];
            Pic_emxEnsureCapacity_boolean_T(x_0, b_k);
            for (b_k = 0; b_k < nx; b_k++) {
              x_0->data[b_k] = (b->data[b_k] < obj->ErrorChangeTolerance);
            }

            flag = true;
            b_k = 0;
            exitg3 = false;
            while ((!exitg3) && (b_k + 1 <= x_0->size[0])) {
              if (!x_0->data[b_k]) {
                flag = false;
                exitg3 = true;
              } else {
                b_k++;
              }
            }

            if (flag) {
              *exitFlag = ChangeInErrorBelowMinimum;
              exitg1 = 1;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }

        if (guard1) {
          cc = PickAndPlace_Simulation_QLa_toc
            (obj->TimeObjInternal.StartTime.tv_sec,
             obj->TimeObjInternal.StartTime.tv_nsec);
          flag = (cc > obj->MaxTimeInternal);
          if (flag) {
            *exitFlag = TimeLimitExceeded;
            exitg1 = 1;
          } else {
            loop_ub = ev->size[0];
            b_k = evprev->size[0];
            evprev->size[0] = ev->size[0];
            PickAn_emxEnsureCapacity_real_T(evprev, b_k);
            if (loop_ub - 1 >= 0) {
              memcpy(&evprev->data[0], &ev->data[0], (uint32_T)loop_ub * sizeof
                     (real_T));
            }

            xprev_idx_0 = xSol[0];
            xprev_idx_1 = xSol[1];
            xprev_idx_2 = xSol[2];
            xprev_idx_3 = xSol[3];
            flag = obj->UseErrorDamping;
            cc = (real_T)flag * d;
            bidx = cc + obj->DampingBias;
            b_k = y->size[0] * y->size[1];
            y->size[0] = J_1;
            y->size[1] = 6;
            PickAn_emxEnsureCapacity_real_T(y, b_k);
            for (nx = 0; nx < 6; nx++) {
              coffset = nx * J_1 - 1;
              boffset = nx * 6 - 1;
              for (loop_ub = 0; loop_ub < J_1; loop_ub++) {
                aoffset = loop_ub * 6 - 1;
                scale = 0.0;
                for (b_k = 0; b_k < 6; b_k++) {
                  scale += J->data[(b_k + aoffset) + 1] * weightMatrix[(b_k +
                    boffset) + 1];
                }

                y->data[(coffset + loop_ub) + 1] = scale;
              }
            }

            b_k = H0->size[0] * H0->size[1];
            H0->size[0] = J_1;
            H0->size[1] = J_1;
            PickAn_emxEnsureCapacity_real_T(H0, b_k);
            for (nx = 0; nx < J_1; nx++) {
              coffset = nx * J_1 - 1;
              boffset = nx * 6 - 1;
              for (loop_ub = 0; loop_ub < J_1; loop_ub++) {
                scale = 0.0;
                for (b_k = 0; b_k < 6; b_k++) {
                  scale += y->data[b_k * y->size[0] + loop_ub] * J->data
                    [(boffset + b_k) + 1];
                }

                H0->data[(coffset + loop_ub) + 1] = scale;
              }
            }

            if ((H0->size[0] == 4) && (H0->size[1] == 4)) {
              for (b_k = 0; b_k < 16; b_k++) {
                Td[b_k] = -(bidx * tmp_1[b_k] + H0->data[b_k]);
              }

              PickAndPlace_Simulatio_mldivide(Td, grad, step_data, &b_k);
            } else {
              PickAndPlace_S_binary_expand_op(step_data, &b_k, H0, bidx, tmp,
                grad);
            }

            args = obj->ExtraArgs;
            treeInternal = args->Robot;
            for (b_k = 0; b_k < 16; b_k++) {
              Td[b_k] = args->Tform[b_k];
            }

            for (b_k = 0; b_k < 36; b_k++) {
              weightMatrix[b_k] = args->WeightMatrix[b_k];
            }

            bidx = args->BodyIndex;
            y_0[0] = xSol[0] + step_data[0];
            y_0[1] = xSol[1] + step_data[1];
            y_0[2] = xSol[2] + step_data[2];
            y_0[3] = xSol[3] + step_data[3];
            RigidBodyTree_efficientFKAndJac(treeInternal, y_0, bidx, T_data,
              T_size, J);
            PickAndPlac_IKHelpers_poseError(Td, T_data, T_size, e_0);
            b_k = args->ErrTemp->size[0];
            args->ErrTemp->size[0] = 6;
            PickAn_emxEnsureCapacity_real_T(args->ErrTemp, b_k);
            for (b_k = 0; b_k < 6; b_k++) {
              args->ErrTemp->data[b_k] = e_0[b_k];
            }

            bidx = 0.0;
            for (b_k = 0; b_k < 6; b_k++) {
              t = 0.0;
              for (nx = 0; nx < 6; nx++) {
                t += weightMatrix[6 * b_k + nx] * (0.5 * e_0[nx]);
              }

              bidx += t * e_0[b_k];
            }

            args->CostTemp = bidx;
            for (b_k = 0; b_k < 6; b_k++) {
              bidx = 0.0;
              for (nx = 0; nx < 6; nx++) {
                bidx += weightMatrix[6 * b_k + nx] * e_0[nx];
              }

              e_1[b_k] = bidx;
            }

            b_k = J_0->size[0] * J_0->size[1];
            J_0->size[0] = 6;
            J_0->size[1] = J->size[1];
            PickAn_emxEnsureCapacity_real_T(J_0, b_k);
            nx = 6 * J->size[1];
            for (b_k = 0; b_k < nx; b_k++) {
              J_0->data[b_k] = -J->data[b_k];
            }

            PickAndPlace_Simulation__mtimes(e_1, J_0, tmp_0);
            loop_ub = tmp_0->size[1];
            b_k = args->GradTemp->size[0];
            args->GradTemp->size[0] = tmp_0->size[1];
            PickAn_emxEnsureCapacity_real_T(args->GradTemp, b_k);
            for (b_k = 0; b_k < loop_ub; b_k++) {
              args->GradTemp->data[b_k] = tmp_0->data[b_k];
            }

            bidx = args->CostTemp;
            scale = 1.0;
            while (bidx > d) {
              scale *= 2.5;
              bidx = scale * obj->DampingBias + cc;
              if ((H0->size[0] == 4) && (H0->size[1] == 4)) {
                for (b_k = 0; b_k < 16; b_k++) {
                  Td[b_k] = -(bidx * tmp_1[b_k] + H0->data[b_k]);
                }

                PickAndPlace_Simulatio_mldivide(Td, grad, step_data, &b_k);
              } else {
                PickAndPlace_S_binary_expand_op(step_data, &b_k, H0, bidx, tmp,
                  grad);
              }

              args = obj->ExtraArgs;
              treeInternal = args->Robot;
              for (b_k = 0; b_k < 16; b_k++) {
                Td[b_k] = args->Tform[b_k];
              }

              for (b_k = 0; b_k < 36; b_k++) {
                weightMatrix[b_k] = args->WeightMatrix[b_k];
              }

              bidx = args->BodyIndex;
              y_0[0] = xSol[0] + step_data[0];
              y_0[1] = xSol[1] + step_data[1];
              y_0[2] = xSol[2] + step_data[2];
              y_0[3] = xSol[3] + step_data[3];
              RigidBodyTree_efficientFKAndJac(treeInternal, y_0, bidx, T_data,
                T_size, J);
              PickAndPlac_IKHelpers_poseError(Td, T_data, T_size, e_0);
              b_k = args->ErrTemp->size[0];
              args->ErrTemp->size[0] = 6;
              PickAn_emxEnsureCapacity_real_T(args->ErrTemp, b_k);
              for (b_k = 0; b_k < 6; b_k++) {
                args->ErrTemp->data[b_k] = e_0[b_k];
              }

              bidx = 0.0;
              for (b_k = 0; b_k < 6; b_k++) {
                t = 0.0;
                for (nx = 0; nx < 6; nx++) {
                  t += weightMatrix[6 * b_k + nx] * (0.5 * e_0[nx]);
                }

                bidx += t * e_0[b_k];
              }

              args->CostTemp = bidx;
              for (b_k = 0; b_k < 6; b_k++) {
                bidx = 0.0;
                for (nx = 0; nx < 6; nx++) {
                  bidx += weightMatrix[6 * b_k + nx] * e_0[nx];
                }

                e_1[b_k] = bidx;
              }

              b_k = J_0->size[0] * J_0->size[1];
              J_0->size[0] = 6;
              J_0->size[1] = J->size[1];
              PickAn_emxEnsureCapacity_real_T(J_0, b_k);
              nx = 6 * J->size[1];
              for (b_k = 0; b_k < nx; b_k++) {
                J_0->data[b_k] = -J->data[b_k];
              }

              PickAndPlace_Simulation__mtimes(e_1, J_0, tmp_0);
              loop_ub = tmp_0->size[1];
              b_k = args->GradTemp->size[0];
              args->GradTemp->size[0] = tmp_0->size[1];
              PickAn_emxEnsureCapacity_real_T(args->GradTemp, b_k);
              for (b_k = 0; b_k < loop_ub; b_k++) {
                args->GradTemp->data[b_k] = tmp_0->data[b_k];
              }

              bidx = args->CostTemp;
            }

            bidx = xSol[0] + step_data[0];
            xSol[0] += step_data[0];
            t = xSol[1] + step_data[1];
            xSol[1] += step_data[1];
            d = xSol[2] + step_data[2];
            xSol[2] += step_data[2];
            cc = xSol[3] + step_data[3];
            xSol[3] += step_data[3];
            if (obj->ConstraintsOn) {
              args = obj->ExtraArgs;
              b_k = b->size[0];
              b->size[0] = args->Limits->size[0];
              PickAn_emxEnsureCapacity_real_T(b, b_k);
              loop_ub = args->Limits->size[0];
              for (b_k = 0; b_k < loop_ub; b_k++) {
                b->data[b_k] = args->Limits->data[b_k];
              }

              if (b->size[0] == 4) {
                y_0[0] = fmax(b->data[0], bidx);
                y_0[1] = fmax(b->data[1], t);
                y_0[2] = fmax(b->data[2], d);
                y_0[3] = fmax(b->data[3], cc);
              } else {
                PickAndPlace_Simulat_expand_max(b, xSol, y_0);
              }

              b_k = b->size[0];
              b->size[0] = args->Limits->size[0];
              PickAn_emxEnsureCapacity_real_T(b, b_k);
              loop_ub = args->Limits->size[0];
              for (b_k = 0; b_k < loop_ub; b_k++) {
                b->data[b_k] = args->Limits->data[b_k + args->Limits->size[0]];
              }

              if (b->size[0] == 4) {
                xSol[0] = fmin(b->data[0], y_0[0]);
                xSol[1] = fmin(b->data[1], y_0[1]);
                xSol[2] = fmin(b->data[2], y_0[2]);
                xSol[3] = fmin(b->data[3], y_0[3]);
              } else {
                PickAndPlace_Simulat_expand_min(b, y_0, xSol);
              }
            }

            b_i++;
          }
        }
      }
    } else {
      args = obj->ExtraArgs;
      for (b_k = 0; b_k < 36; b_k++) {
        a[b_k] = args->WeightMatrix[b_k];
      }

      b_k = b->size[0];
      b->size[0] = args->ErrTemp->size[0];
      PickAn_emxEnsureCapacity_real_T(b, b_k);
      loop_ub = args->ErrTemp->size[0];
      for (b_k = 0; b_k < loop_ub; b_k++) {
        b->data[b_k] = args->ErrTemp->data[b_k];
      }

      for (b_k = 0; b_k < 6; b_k++) {
        cc = 0.0;
        for (nx = 0; nx < 6; nx++) {
          cc += a[6 * nx + b_k] * b->data[nx];
        }

        e_0[b_k] = cc;
      }

      *en = PickAndPlace_Simulation_QL_norm(e_0);
      *iter = obj->MaxNumIterationInternal;
      *exitFlag = IterationLimitExceeded;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  PickAndPlace_Sim_emxFree_real_T(&tmp_0);
  PickAndPlace_Sim_emxFree_real_T(&J_0);
  PickAndPlace__emxFree_boolean_T(&x_0);
  PickAndPlace_Sim_emxFree_real_T(&b);
  PickAndPlace_Sim_emxFree_real_T(&J);
  PickAndPlace_Sim_emxFree_real_T(&y);
  PickAndPlace_Sim_emxFree_real_T(&ev);
  PickAndPlace_Sim_emxFree_real_T(&H0);
  PickAndPlace_Sim_emxFree_real_T(&grad);
  PickAndPlace_Sim_emxFree_real_T(&evprev);
}

static boolean_T PickAndPlace_Simulation_Q_any_o(const boolean_T x_data[], const
  int32_T *x_size)
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= *x_size)) {
    if (x_data[ix]) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static real_T PickAndPla_eml_rand_mt19937ar_o(uint32_T state[625])
{
  real_T r;
  real_T x;
  int32_T i;
  uint32_T u32[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;
  static const real_T tmp[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static const real_T tmp_0[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  int32_T exitg1;
  int32_T exitg2;
  do {
    exitg1 = 0;
    PickAndPl_genrand_uint32_vector(state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)(u32[1] & 16777215U)) *
         2.2204460492503131E-16 - 1.0) * tmp[i];
    if (fabs(r) <= tmp[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      /* ========================= COPYRIGHT NOTICE ============================ */
      /*  This is a uniform (0,1) pseudorandom number generator based on: */
      /*  */
      /*  A C-program for MT19937, with initialization improved 2002/1/26. */
      /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
      /*  */
      /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
      /*  All rights reserved. */
      /*  */
      /*  Redistribution and use in source and binary forms, with or without */
      /*  modification, are permitted provided that the following conditions */
      /*  are met: */
      /*  */
      /*    1. Redistributions of source code must retain the above copyright */
      /*       notice, this list of conditions and the following disclaimer. */
      /*  */
      /*    2. Redistributions in binary form must reproduce the above copyright */
      /*       notice, this list of conditions and the following disclaimer */
      /*       in the documentation and/or other materials provided with the */
      /*       distribution. */
      /*  */
      /*    3. The names of its contributors may not be used to endorse or */
      /*       promote products derived from this software without specific */
      /*       prior written permission. */
      /*  */
      /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
      /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
      /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
      /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
      /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
      /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
      /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
      /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
      /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
      /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
      /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
      /*  */
      /* =============================   END   ================================= */
      do {
        exitg2 = 0;
        PickAndPl_genrand_uint32_vector(state, u32);
        u_idx_0 = u32[0] >> 5U;
        u_idx_1 = u32[1] >> 6U;
        if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
          if (!PickAndPlace_Sim_is_valid_state(state)) {
            state[0] = 5489U;
            state[624] = 624U;
          }
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
          1.1102230246251565E-16 * (tmp_0[i - 1] - tmp_0[i]) + tmp_0[i] < exp
          (-0.5 * r * r)) {
        exitg1 = 1;
      }
    } else {
      do {
        /* ========================= COPYRIGHT NOTICE ============================ */
        /*  This is a uniform (0,1) pseudorandom number generator based on: */
        /*  */
        /*  A C-program for MT19937, with initialization improved 2002/1/26. */
        /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
        /*  */
        /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
        /*  All rights reserved. */
        /*  */
        /*  Redistribution and use in source and binary forms, with or without */
        /*  modification, are permitted provided that the following conditions */
        /*  are met: */
        /*  */
        /*    1. Redistributions of source code must retain the above copyright */
        /*       notice, this list of conditions and the following disclaimer. */
        /*  */
        /*    2. Redistributions in binary form must reproduce the above copyright */
        /*       notice, this list of conditions and the following disclaimer */
        /*       in the documentation and/or other materials provided with the */
        /*       distribution. */
        /*  */
        /*    3. The names of its contributors may not be used to endorse or */
        /*       promote products derived from this software without specific */
        /*       prior written permission. */
        /*  */
        /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
        /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
        /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
        /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
        /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
        /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
        /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
        /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
        /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
        /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
        /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
        /*  */
        /* =============================   END   ================================= */
        do {
          exitg2 = 0;
          PickAndPl_genrand_uint32_vector(state, u32);
          u_idx_0 = u32[0] >> 5U;
          u_idx_1 = u32[1] >> 6U;
          if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
            if (!PickAndPlace_Sim_is_valid_state(state)) {
              state[0] = 5489U;
              state[624] = 624U;
            }
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        x = log(((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
                1.1102230246251565E-16) * 0.273661237329758;

        /* ========================= COPYRIGHT NOTICE ============================ */
        /*  This is a uniform (0,1) pseudorandom number generator based on: */
        /*  */
        /*  A C-program for MT19937, with initialization improved 2002/1/26. */
        /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
        /*  */
        /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
        /*  All rights reserved. */
        /*  */
        /*  Redistribution and use in source and binary forms, with or without */
        /*  modification, are permitted provided that the following conditions */
        /*  are met: */
        /*  */
        /*    1. Redistributions of source code must retain the above copyright */
        /*       notice, this list of conditions and the following disclaimer. */
        /*  */
        /*    2. Redistributions in binary form must reproduce the above copyright */
        /*       notice, this list of conditions and the following disclaimer */
        /*       in the documentation and/or other materials provided with the */
        /*       distribution. */
        /*  */
        /*    3. The names of its contributors may not be used to endorse or */
        /*       promote products derived from this software without specific */
        /*       prior written permission. */
        /*  */
        /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
        /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
        /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
        /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
        /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
        /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
        /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
        /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
        /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
        /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
        /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
        /*  */
        /* =============================   END   ================================= */
        do {
          exitg2 = 0;
          PickAndPl_genrand_uint32_vector(state, u32);
          u_idx_0 = u32[0] >> 5U;
          u_idx_1 = u32[1] >> 6U;
          if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
            if (!PickAndPlace_Sim_is_valid_state(state)) {
              state[0] = 5489U;
              state[624] = 624U;
            }
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      } while (!(log(((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
                     1.1102230246251565E-16) * -2.0 > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void PickAndPlace_Simulatio_randn_og(const real_T varargin_1[2], real_T
  r_data[], int32_T *r_size)
{
  int32_T b_k;
  int32_T d_tmp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  d_tmp = (int32_T)varargin_1[0];
  *r_size = (int32_T)varargin_1[0];
  for (b_k = 0; b_k < d_tmp; b_k++) {
    r_data[b_k] = PickAndPla_eml_rand_mt19937ar_o
      (PickAndPlace_Simulation_QLab_DW.state_i);
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static void PickAndPlace_binary_expand_op_4(emxArray_real_T_PickAndPlace__T *in1,
  const b_rigidBodyJoint_PickAndPlace_T *in2, int32_T in3)
{
  emxArray_real_T_PickAndPlace__T *in2_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  PickAndPlace_Sim_emxInit_real_T(&in2_0, 1);
  loop_ub = in1->size[0] == 1 ? in3 : in1->size[0];
  i = in2_0->size[0];
  in2_0->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in2_0, i);
  stride_0_0 = (in3 != 1);
  stride_1_0 = (in1->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in2_0->data[i] = in2->PositionLimitsInternal[i * stride_0_0 + 7] - in1->
      data[i * stride_1_0];
  }

  i = in1->size[0];
  in1->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in1, i);
  if (loop_ub - 1 >= 0) {
    memcpy(&in1->data[0], &in2_0->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  PickAndPlace_Sim_emxFree_real_T(&in2_0);
}

static void PickAndPlace_binary_expand_op_3(emxArray_real_T_PickAndPlace__T *in1,
  const b_rigidBodyJoint_PickAndPlace_T *in2, int32_T in3)
{
  emxArray_real_T_PickAndPlace__T *in2_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  PickAndPlace_Sim_emxInit_real_T(&in2_0, 1);
  loop_ub = in1->size[0] == 1 ? in3 : in1->size[0];
  i = in2_0->size[0];
  in2_0->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in2_0, i);
  stride_0_0 = (in3 != 1);
  stride_1_0 = (in1->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in2_0->data[i] = in2->PositionLimitsInternal[i * stride_0_0] + in1->data[i *
      stride_1_0];
  }

  i = in1->size[0];
  in1->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in1, i);
  if (loop_ub - 1 >= 0) {
    memcpy(&in1->data[0], &in2_0->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  PickAndPlace_Sim_emxFree_real_T(&in2_0);
}

static void PickAndPlace_Simulation_rand_og(real_T varargin_1, real_T r_data[],
  int32_T *r_size)
{
  int32_T b_k;
  int32_T d_tmp;
  int32_T exitg1;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  d_tmp = (int32_T)varargin_1;
  *r_size = (int32_T)varargin_1;
  for (b_k = 0; b_k < d_tmp; b_k++) {
    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on: */
    /*  */
    /*  A C-program for MT19937, with initialization improved 2002/1/26. */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
    /*  */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
    /*  All rights reserved. */
    /*  */
    /*  Redistribution and use in source and binary forms, with or without */
    /*  modification, are permitted provided that the following conditions */
    /*  are met: */
    /*  */
    /*    1. Redistributions of source code must retain the above copyright */
    /*       notice, this list of conditions and the following disclaimer. */
    /*  */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer */
    /*       in the documentation and/or other materials provided with the */
    /*       distribution. */
    /*  */
    /*    3. The names of its contributors may not be used to endorse or */
    /*       promote products derived from this software without specific */
    /*       prior written permission. */
    /*  */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
    /*  */
    /* =============================   END   ================================= */
    do {
      exitg1 = 0;
      PickAndPl_genrand_uint32_vector(PickAndPlace_Simulation_QLab_DW.state_i,
        b_u);
      u_idx_0 = b_u[0] >> 5U;
      u_idx_1 = b_u[1] >> 6U;
      if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
        if (!PickAndPlace_Sim_is_valid_state
            (PickAndPlace_Simulation_QLab_DW.state_i)) {
          PickAndPlace_Simulation_QLab_DW.state_i[0] = 5489U;
          PickAndPlace_Simulation_QLab_DW.state_i[624] = 624U;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    r_data[b_k] = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
      1.1102230246251565E-16;
  }

  /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
}

static void PickAndPlace_binary_expand_op_2(emxArray_real_T_PickAndPlace__T *in1,
  const b_rigidBodyJoint_PickAndPlace_T *in2, int32_T in3, const real_T
  in4_data[], const int32_T *in4_size, const real_T in5_data[], const int32_T
  in5_size[2])
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T tmp;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (in2->PositionNumber < 1.0) {
    i = 0;
  } else {
    i = (int32_T)in2->PositionNumber;
  }

  tmp = i == 1 ? *in4_size : i;
  loop_ub = tmp == 1 ? in3 : tmp;
  tmp = in1->size[0];
  in1->size[0] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(in1, tmp);
  stride_0_0 = (in3 != 1);
  stride_1_0 = (*in4_size != 1);
  stride_2_0 = (i != 1);
  for (i = 0; i < loop_ub; i++) {
    tmp = i * stride_2_0;

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    in1->data[i] = (in5_data[tmp + in5_size[0]] - in5_data[tmp]) * in4_data[i *
      stride_1_0] + in2->PositionLimitsInternal[i * stride_0_0];
  }
}

static void PickAndPlace_Simulation_Q_randn(real_T r[4])
{
  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  r[0] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
  r[1] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
  r[2] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
  r[3] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
}

static boolean_T PickAndPlace_Simulation_QLa_any(const boolean_T x[3])
{
  int32_T b_k;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= 2)) {
    if (x[b_k]) {
      y = true;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  return y;
}

static void PickAndPlace_Simulation_randn_o(real_T r[3])
{
  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  r[0] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
  r[1] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
  r[2] = PickAndPla_eml_rand_mt19937ar_o(PickAndPlace_Simulation_QLab_DW.state_i);
}

static void PickAndPlace_Simulation__rand_o(real_T r[3])
{
  int32_T b_k;
  int32_T exitg1;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;
  for (b_k = 0; b_k < 3; b_k++) {
    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on: */
    /*  */
    /*  A C-program for MT19937, with initialization improved 2002/1/26. */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
    /*  */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
    /*  All rights reserved. */
    /*  */
    /*  Redistribution and use in source and binary forms, with or without */
    /*  modification, are permitted provided that the following conditions */
    /*  are met: */
    /*  */
    /*    1. Redistributions of source code must retain the above copyright */
    /*       notice, this list of conditions and the following disclaimer. */
    /*  */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer */
    /*       in the documentation and/or other materials provided with the */
    /*       distribution. */
    /*  */
    /*    3. The names of its contributors may not be used to endorse or */
    /*       promote products derived from this software without specific */
    /*       prior written permission. */
    /*  */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
    /*  */
    /* =============================   END   ================================= */
    do {
      exitg1 = 0;
      PickAndPl_genrand_uint32_vector(PickAndPlace_Simulation_QLab_DW.state_i,
        b_u);
      u_idx_0 = b_u[0] >> 5U;
      u_idx_1 = b_u[1] >> 6U;
      if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
        if (!PickAndPlace_Sim_is_valid_state
            (PickAndPlace_Simulation_QLab_DW.state_i)) {
          PickAndPlace_Simulation_QLab_DW.state_i[0] = 5489U;
          PickAndPlace_Simulation_QLab_DW.state_i[624] = 624U;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    r[b_k] = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
      1.1102230246251565E-16;
  }
}

static void P_rigidBodyJoint_randomPosition(const
  b_rigidBodyJoint_PickAndPlace_T *obj, emxArray_real_T_PickAndPlace__T *qv)
{
  emxArray_real_T_PickAndPlace__T *d;
  real_T bounds_data[14];
  real_T rn_data[7];
  real_T b_r[4];
  real_T rn[3];
  real_T x[3];
  real_T kstr[2];
  real_T n;
  int32_T b_kstr;
  int32_T c;
  int32_T loop_ub;
  int32_T nx;
  boolean_T b_data[7];
  boolean_T b[3];
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T bounds_size[2];
  int32_T b_size;
  int32_T exitg1;
  boolean_T b_tmp;
  boolean_T b_tmp_0;
  boolean_T b_tmp_1;
  boolean_T b_tmp_tmp;
  boolean_T b_tmp_tmp_0;
  boolean_T b_tmp_tmp_1;
  boolean_T b_tmp_tmp_2;
  boolean_T b_tmp_tmp_3;
  boolean_T b_tmp_tmp_4;
  boolean_T exitg2;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj->TypeInternal.Length < 1.0) {
    c = 0;
  } else {
    c = (int32_T)obj->TypeInternal.Length;
  }

  if (c == 5) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj->TypeInternal.Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (!b_bool) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (obj->PositionNumber < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)obj->PositionNumber;
    }
  } else {
    loop_ub = 1;
  }

  c = qv->size[0] * qv->size[1];
  qv->size[0] = 1;
  qv->size[1] = loop_ub;
  PickAn_emxEnsureCapacity_real_T(qv, c);
  if (loop_ub - 1 >= 0) {
    memset(&qv->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  switch ((int32_T)obj->PositionNumber) {
   case 0:
    c = qv->size[0] * qv->size[1];
    qv->size[0] = 1;
    qv->size[1] = 1;
    PickAn_emxEnsureCapacity_real_T(qv, c);
    qv->data[0] = (rtNaN);
    break;

   case 7:
    PickAndPlace_Simulation_Q_randn(b_r);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    n = sqrt(((b_r[0] * b_r[0] + b_r[1] * b_r[1]) + b_r[2] * b_r[2]) + b_r[3] *
             b_r[3]);
    qv->data[0] = b_r[0] / n;
    qv->data[1] = b_r[1] / n;
    qv->data[2] = b_r[2] / n;
    qv->data[3] = b_r[3] / n;
    if (qv->size[1] < 5) {
      b_kstr = 0;
      nx = 0;
    } else {
      b_kstr = 4;
      nx = loop_ub;
    }

    b_tmp_tmp = rtIsInf(obj->PositionLimitsInternal[4]);
    b_tmp_tmp_0 = rtIsNaN(obj->PositionLimitsInternal[4]);
    b_tmp = ((!b_tmp_tmp) && (!b_tmp_tmp_0));
    b[0] = b_tmp;
    b_tmp_tmp_1 = rtIsInf(obj->PositionLimitsInternal[5]);
    b_tmp_tmp_2 = rtIsNaN(obj->PositionLimitsInternal[5]);
    b_tmp_0 = ((!b_tmp_tmp_1) && (!b_tmp_tmp_2));
    b[1] = b_tmp_0;
    b_tmp_tmp_3 = rtIsInf(obj->PositionLimitsInternal[6]);
    b_tmp_tmp_4 = rtIsNaN(obj->PositionLimitsInternal[6]);
    b_tmp_1 = ((!b_tmp_tmp_3) && (!b_tmp_tmp_4));
    b[2] = b_tmp_1;
    b_bool = true;
    c = 0;
    exitg2 = false;
    while ((!exitg2) && (c <= 2)) {
      if (!b[c]) {
        b_bool = false;
        exitg2 = true;
      } else {
        c++;
      }
    }

    guard1 = false;
    guard2 = false;
    if (b_bool) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b[0] = ((!rtIsInf(obj->PositionLimitsInternal[11])) && (!rtIsNaN
               (obj->PositionLimitsInternal[11])));
      b[1] = ((!rtIsInf(obj->PositionLimitsInternal[12])) && (!rtIsNaN
               (obj->PositionLimitsInternal[12])));
      b[2] = ((!rtIsInf(obj->PositionLimitsInternal[13])) && (!rtIsNaN
               (obj->PositionLimitsInternal[13])));
      c = 0;
      exitg2 = false;
      while ((!exitg2) && (c <= 2)) {
        if (!b[c]) {
          b_bool = false;
          exitg2 = true;
        } else {
          c++;
        }
      }

      if (b_bool) {
        PickAndPlace_Simulation__rand_o(rn);

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        rn[0] = (obj->PositionLimitsInternal[11] - obj->PositionLimitsInternal[4])
          * rn[0] + obj->PositionLimitsInternal[4];
        rn[1] = (obj->PositionLimitsInternal[12] - obj->PositionLimitsInternal[5])
          * rn[1] + obj->PositionLimitsInternal[5];
        rn[2] = (obj->PositionLimitsInternal[13] - obj->PositionLimitsInternal[6])
          * rn[2] + obj->PositionLimitsInternal[6];
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b[0] = b_tmp;
      b[1] = b_tmp_0;
      b[2] = b_tmp_1;
      b_bool = true;
      c = 0;
      exitg2 = false;
      while ((!exitg2) && (c <= 2)) {
        if (!b[c]) {
          b_bool = false;
          exitg2 = true;
        } else {
          c++;
        }
      }

      if (b_bool) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b[0] = (rtIsInf(obj->PositionLimitsInternal[11]) || rtIsNaN
                (obj->PositionLimitsInternal[11]));
        b[1] = (rtIsInf(obj->PositionLimitsInternal[12]) || rtIsNaN
                (obj->PositionLimitsInternal[12]));
        b[2] = (rtIsInf(obj->PositionLimitsInternal[13]) || rtIsNaN
                (obj->PositionLimitsInternal[13]));
        if (PickAndPlace_Simulation_QLa_any(b)) {
          PickAndPlace_Simulation_randn_o(x);

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          rn[0] = fabs(x[0]);
          rn[1] = fabs(x[1]);
          rn[2] = fabs(x[2]);
          rn[0] += obj->PositionLimitsInternal[4];
          rn[1] += obj->PositionLimitsInternal[5];
          rn[2] += obj->PositionLimitsInternal[6];
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b[0] = (b_tmp_tmp || b_tmp_tmp_0);
      b[1] = (b_tmp_tmp_1 || b_tmp_tmp_2);
      b[2] = (b_tmp_tmp_3 || b_tmp_tmp_4);
      if (PickAndPlace_Simulation_QLa_any(b)) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b[0] = ((!rtIsInf(obj->PositionLimitsInternal[11])) && (!rtIsNaN
                 (obj->PositionLimitsInternal[11])));
        b[1] = ((!rtIsInf(obj->PositionLimitsInternal[12])) && (!rtIsNaN
                 (obj->PositionLimitsInternal[12])));
        b[2] = ((!rtIsInf(obj->PositionLimitsInternal[13])) && (!rtIsNaN
                 (obj->PositionLimitsInternal[13])));
        b_bool = true;
        c = 0;
        exitg2 = false;
        while ((!exitg2) && (c <= 2)) {
          if (!b[c]) {
            b_bool = false;
            exitg2 = true;
          } else {
            c++;
          }
        }

        if (b_bool) {
          PickAndPlace_Simulation_randn_o(x);

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          rn[0] = fabs(x[0]);
          rn[1] = fabs(x[1]);
          rn[2] = fabs(x[2]);
          rn[0] = obj->PositionLimitsInternal[11] - rn[0];
          rn[1] = obj->PositionLimitsInternal[12] - rn[1];
          rn[2] = obj->PositionLimitsInternal[13] - rn[2];
        } else {
          PickAndPlace_Simulation_randn_o(rn);
        }
      } else {
        PickAndPlace_Simulation_randn_o(rn);
      }
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    nx -= b_kstr;
    for (c = 0; c < nx; c++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      qv->data[b_kstr + c] = rn[c];
    }
    break;

   default:
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (obj->PositionNumber < 1.0) {
      b_kstr = 0;
      loop_ub = 0;
    } else {
      b_kstr = (int32_T)obj->PositionNumber;
      loop_ub = (int32_T)obj->PositionNumber;
    }

    bounds_size[0] = loop_ub;
    bounds_size[1] = 2;
    for (c = 0; c < 2; c++) {
      for (nx = 0; nx < loop_ub; nx++) {
        bounds_data[nx + loop_ub * c] = obj->PositionLimitsInternal[7 * c + nx];
      }
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    for (c = 0; c < b_kstr; c++) {
      n = obj->PositionLimitsInternal[c];
      b_data[c] = ((!rtIsInf(n)) && (!rtIsNaN(n)));
    }

    b_bool = true;
    c = 0;
    exitg2 = false;
    while ((!exitg2) && (c + 1 <= b_kstr)) {
      if (!b_data[c]) {
        b_bool = false;
        exitg2 = true;
      } else {
        c++;
      }
    }

    PickAndPlace_Sim_emxInit_real_T(&d, 1);
    guard1 = false;
    guard2 = false;
    guard3 = false;
    if (b_bool) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (c = 0; c < b_kstr; c++) {
        n = obj->PositionLimitsInternal[c + 7];
        b_data[c] = ((!rtIsInf(n)) && (!rtIsNaN(n)));
      }

      c = 0;
      exitg2 = false;
      while ((!exitg2) && (c + 1 <= b_kstr)) {
        if (!b_data[c]) {
          b_bool = false;
          exitg2 = true;
        } else {
          c++;
        }
      }

      if (b_bool) {
        PickAndPlace_Simulation_rand_og((real_T)b_kstr, rn_data, &b_size);

        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        if (obj->PositionNumber < 1.0) {
          c = 0;
          nx = 0;
        } else {
          c = (int32_T)obj->PositionNumber;
          nx = (int32_T)obj->PositionNumber;
        }

        if ((b_size == c) && ((b_size == 1 ? nx : b_size) == b_kstr)) {
          c = d->size[0];
          d->size[0] = b_kstr;
          PickAn_emxEnsureCapacity_real_T(d, c);

          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          for (c = 0; c < b_kstr; c++) {
            d->data[c] = (bounds_data[c + loop_ub] - bounds_data[c]) * rn_data[c]
              + obj->PositionLimitsInternal[c];
          }
        } else {
          PickAndPlace_binary_expand_op_2(d, obj, b_kstr, rn_data, &b_size,
            bounds_data, bounds_size);
        }
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      for (c = 0; c < b_kstr; c++) {
        n = obj->PositionLimitsInternal[c];
        b_data[c] = ((!rtIsInf(n)) && (!rtIsNaN(n)));
      }

      b_bool = true;
      c = 0;
      exitg2 = false;
      while ((!exitg2) && (c + 1 <= b_kstr)) {
        if (!b_data[c]) {
          b_bool = false;
          exitg2 = true;
        } else {
          c++;
        }
      }

      if (b_bool) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        b_size = b_kstr;
        for (c = 0; c < b_kstr; c++) {
          n = obj->PositionLimitsInternal[c + 7];
          b_data[c] = (rtIsInf(n) || rtIsNaN(n));
        }

        if (PickAndPlace_Simulation_Q_any_o(b_data, &b_kstr)) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          kstr[0] = b_kstr;
          kstr[1] = 1.0;
          PickAndPlace_Simulatio_randn_og(kstr, rn_data, &b_size);
          c = d->size[0];
          d->size[0] = b_size;
          PickAn_emxEnsureCapacity_real_T(d, c);
          for (c = 0; c < b_size; c++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            d->data[c] = fabs(rn_data[c]);
          }

          if (b_kstr == d->size[0]) {
            c = d->size[0];
            d->size[0] = b_kstr;
            PickAn_emxEnsureCapacity_real_T(d, c);

            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            for (c = 0; c < b_kstr; c++) {
              d->data[c] += obj->PositionLimitsInternal[c];
            }
          } else {
            PickAndPlace_binary_expand_op_3(d, obj, b_kstr);
          }
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    }

    if (guard2) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      b_size = b_kstr;
      for (c = 0; c < b_kstr; c++) {
        n = obj->PositionLimitsInternal[c];
        b_data[c] = (rtIsInf(n) || rtIsNaN(n));
      }

      if (PickAndPlace_Simulation_Q_any_o(b_data, &b_kstr)) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        for (c = 0; c < b_kstr; c++) {
          n = obj->PositionLimitsInternal[c + 7];
          b_data[c] = ((!rtIsInf(n)) && (!rtIsNaN(n)));
        }

        b_bool = true;
        c = 0;
        exitg2 = false;
        while ((!exitg2) && (c + 1 <= b_kstr)) {
          if (!b_data[c]) {
            b_bool = false;
            exitg2 = true;
          } else {
            c++;
          }
        }

        if (b_bool) {
          /* Start for MATLABSystem: '<S2>/MATLAB System' */
          kstr[0] = b_kstr;
          kstr[1] = 1.0;
          PickAndPlace_Simulatio_randn_og(kstr, rn_data, &b_size);
          c = d->size[0];
          d->size[0] = b_size;
          PickAn_emxEnsureCapacity_real_T(d, c);
          for (c = 0; c < b_size; c++) {
            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            d->data[c] = fabs(rn_data[c]);
          }

          if (b_kstr == d->size[0]) {
            c = d->size[0];
            d->size[0] = b_kstr;
            PickAn_emxEnsureCapacity_real_T(d, c);

            /* Start for MATLABSystem: '<S2>/MATLAB System' */
            for (c = 0; c < b_kstr; c++) {
              d->data[c] = obj->PositionLimitsInternal[c + 7] - d->data[c];
            }
          } else {
            PickAndPlace_binary_expand_op_4(d, obj, b_kstr);
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      kstr[0] = b_kstr;
      kstr[1] = 1.0;
      PickAndPlace_Simulatio_randn_og(kstr, rn_data, &b_size);
      c = d->size[0];
      d->size[0] = b_size;
      PickAn_emxEnsureCapacity_real_T(d, c);
      if (b_size - 1 >= 0) {
        /* Start for MATLABSystem: '<S2>/MATLAB System' */
        memcpy(&d->data[0], &rn_data[0], (uint32_T)b_size * sizeof(real_T));
      }
    }

    loop_ub = d->size[0];
    c = qv->size[0] * qv->size[1];
    qv->size[0] = d->size[0];
    qv->size[1] = 1;
    PickAn_emxEnsureCapacity_real_T(qv, c);
    if (loop_ub - 1 >= 0) {
      memcpy(&qv->data[0], &d->data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    PickAndPlace_Sim_emxFree_real_T(&d);
    break;
  }
}

static void PickAndPlace_Si_emxInit_int32_T(emxArray_int32_T_PickAndPlace_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_int32_T_PickAndPlace_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T_PickAndPlace_T *)malloc(sizeof
    (emxArray_int32_T_PickAndPlace_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void PickA_emxEnsureCapacity_int32_T(emxArray_int32_T_PickAndPlace_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void PickAndPlace_Si_emxFree_int32_T(emxArray_int32_T_PickAndPlace_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T_PickAndPlace_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T_PickAndPlace_T *)NULL;
  }
}

static void PickA_inverseKinematics_solve_o(b_inverseKinematics_PickAndPl_T *obj,
  real_T initialGuess[4], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  d_robotics_core_internal_Erro_T *obj_1;
  d_robotics_manip_internal_IKE_T *args;
  emxArray_int32_T_PickAndPlace_T *d;
  emxArray_int32_T_PickAndPlace_T *tmp;
  emxArray_real_T_PickAndPlace__T *bodyIndices;
  emxArray_real_T_PickAndPlace__T *limits;
  emxArray_real_T_PickAndPlace__T *positionIndices;
  emxArray_real_T_PickAndPlace__T *qi;
  emxArray_real_T_PickAndPlace__T *y;
  f_robotics_manip_internal_R_o_T *body;
  h_robotics_manip_internal_Rig_T *obj_0;
  real_T newseed_data[35];
  real_T c_xSol[4];
  real_T xSolPrev[4];
  real_T apnd;
  real_T cdiff;
  real_T err;
  real_T iter;
  real_T limits_0;
  real_T ndbl;
  real_T tol;
  c_robotics_core_internal_NLPS_T exitFlag;
  c_robotics_core_internal_NLPS_T exitFlagPrev;
  int32_T indicesUpperBoundViolation_data[4];
  int32_T tmp_data[4];
  int32_T b_k;
  int32_T c;
  int32_T f;
  int32_T indicesUpperBoundViolation;
  int32_T loop_ub;
  int32_T nm1d2;
  boolean_T lbOK[4];
  boolean_T ubOK[4];
  boolean_T ubOK_0[4];
  boolean_T y_0;
  static const char_T tmp_0[14] = { 'b', 'e', 's', 't', ' ', 'a', 'v', 'a', 'i',
    'l', 'a', 'b', 'l', 'e' };

  static const char_T tmp_1[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  boolean_T exitg1;
  boolean_T guard1;
  obj_0 = obj->RigidBodyTreeInternal;
  PickAndPlace_Sim_emxInit_real_T(&limits, 2);
  RigidBodyTree_get_JointPosition(obj_0, limits);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (limits->size[0] == 4) {
    ubOK[0] = (initialGuess[0] <= limits->data[limits->size[0]] +
               4.4408920985006262E-16);
    ubOK[1] = (initialGuess[1] <= limits->data[1 + limits->size[0]] +
               4.4408920985006262E-16);
    ubOK[2] = (initialGuess[2] <= limits->data[2 + limits->size[0]] +
               4.4408920985006262E-16);
    ubOK[3] = (initialGuess[3] <= limits->data[3 + limits->size[0]] +
               4.4408920985006262E-16);
  } else {
    PickAndPlace_binary_expand_op_6(ubOK, initialGuess, limits);
  }

  if (limits->size[0] == 4) {
    lbOK[0] = (initialGuess[0] >= limits->data[0] - 4.4408920985006262E-16);
    lbOK[1] = (initialGuess[1] >= limits->data[1] - 4.4408920985006262E-16);
    lbOK[2] = (initialGuess[2] >= limits->data[2] - 4.4408920985006262E-16);
    lbOK[3] = (initialGuess[3] >= limits->data[3] - 4.4408920985006262E-16);
  } else {
    PickAndPlace_binary_expand_op_5(lbOK, initialGuess, limits);
  }

  y_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= 3)) {
    if (!ubOK[b_k]) {
      y_0 = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  guard1 = false;
  if (y_0) {
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k <= 3)) {
      if (!lbOK[b_k]) {
        y_0 = false;
        exitg1 = true;
      } else {
        b_k++;
      }
    }

    if (y_0) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    ubOK_0[0] = !ubOK[0];
    ubOK_0[1] = !ubOK[1];
    ubOK_0[2] = !ubOK[2];
    ubOK_0[3] = !ubOK[3];
    PickAndPlace_Simulatio_eml_find(ubOK_0, tmp_data, &b_k);
    for (f = 0; f < b_k; f++) {
      indicesUpperBoundViolation_data[f] = tmp_data[f];
      indicesUpperBoundViolation = indicesUpperBoundViolation_data[f];
      initialGuess[indicesUpperBoundViolation - 1] = limits->data
        [(indicesUpperBoundViolation + limits->size[0]) - 1];
    }

    ubOK[0] = !lbOK[0];
    ubOK[1] = !lbOK[1];
    ubOK[2] = !lbOK[2];
    ubOK[3] = !lbOK[3];
    PickAndPlace_Simulatio_eml_find(ubOK, tmp_data, &b_k);
    for (f = 0; f < b_k; f++) {
      indicesUpperBoundViolation_data[f] = tmp_data[f];
      indicesUpperBoundViolation = indicesUpperBoundViolation_data[f];
      initialGuess[indicesUpperBoundViolation - 1] = limits->
        data[indicesUpperBoundViolation - 1];
    }
  }

  obj_1 = obj->Solver;
  obj_1->MaxNumIterationInternal = obj_1->MaxNumIteration;
  obj_1->MaxTimeInternal = obj_1->MaxTime;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_1->SeedInternal[0] = initialGuess[0];
  obj_1->SeedInternal[1] = initialGuess[1];
  obj_1->SeedInternal[2] = initialGuess[2];
  obj_1->SeedInternal[3] = initialGuess[3];
  tol = obj_1->SolutionTolerance;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  PickAndPlace_Simulation_QLa_tic(&obj_1->TimeObj.StartTime.tv_sec,
    &obj_1->TimeObj.StartTime.tv_nsec);
  ErrorDampedLevenbergMarquardt_s(obj_1, xSolPrev, &exitFlag, &err, &iter);
  *solutionInfo_NumRandomRestarts = 0.0;
  *solutionInfo_Iterations = iter;
  *solutionInfo_PoseErrorNorm = err;
  exitFlagPrev = exitFlag;
  PickAndPlace_Sim_emxInit_real_T(&qi, 2);
  exitg1 = false;
  while ((!exitg1) && (obj_1->RandomRestart && (err > tol))) {
    obj_1->MaxNumIterationInternal -= iter;
    err = PickAndPlace_Simulation_QLa_toc(obj_1->TimeObj.StartTime.tv_sec,
      obj_1->TimeObj.StartTime.tv_nsec);
    obj_1->MaxTimeInternal = obj_1->MaxTime - err;
    if (obj_1->MaxNumIterationInternal <= 0.0) {
      exitFlag = IterationLimitExceeded;
    }

    if ((exitFlag == IterationLimitExceeded) || (exitFlag == TimeLimitExceeded))
    {
      exitFlagPrev = exitFlag;
      exitg1 = true;
    } else {
      args = obj_1->ExtraArgs;
      obj_0 = args->Robot;
      err = obj_0->PositionNumber;
      if ((int32_T)err - 1 >= 0) {
        memset(&newseed_data[0], 0, (uint32_T)(int32_T)err * sizeof(real_T));
      }

      err = obj_0->NumBodies;
      c = (int32_T)err;
      for (indicesUpperBoundViolation = 0; indicesUpperBoundViolation < c;
           indicesUpperBoundViolation++) {
        err = obj_0->PositionDoFMap[indicesUpperBoundViolation];
        iter = obj_0->PositionDoFMap[indicesUpperBoundViolation + 5];
        if (err <= iter) {
          P_rigidBodyJoint_randomPosition(obj_0->
            Bodies[indicesUpperBoundViolation]->JointInternal, qi);
          if (err > iter) {
            b_k = 0;
            f = 0;
          } else {
            b_k = (int32_T)err - 1;
            f = (int32_T)iter;
          }

          loop_ub = f - b_k;
          for (f = 0; f < loop_ub; f++) {
            newseed_data[b_k + f] = qi->data[f];
          }
        }
      }

      obj_1->SeedInternal[0] = newseed_data[0];
      obj_1->SeedInternal[1] = newseed_data[1];
      obj_1->SeedInternal[2] = newseed_data[2];
      obj_1->SeedInternal[3] = newseed_data[3];
      ErrorDampedLevenbergMarquardt_s(obj_1, c_xSol, &exitFlag, &err, &iter);
      if (err < *solutionInfo_PoseErrorNorm) {
        xSolPrev[0] = c_xSol[0];
        xSolPrev[1] = c_xSol[1];
        xSolPrev[2] = c_xSol[2];
        xSolPrev[3] = c_xSol[3];
        *solutionInfo_PoseErrorNorm = err;
        exitFlagPrev = exitFlag;
      }

      (*solutionInfo_NumRandomRestarts)++;
      *solutionInfo_Iterations += iter;
    }
  }

  PickAndPlace_Sim_emxFree_real_T(&qi);
  if (*solutionInfo_PoseErrorNorm < tol) {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 7;
    for (f = 0; f < 7; f++) {
      solutionInfo_Status_data[f] = tmp_1[f];
    }
  } else {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 14;
    for (f = 0; f < 14; f++) {
      solutionInfo_Status_data[f] = tmp_0[f];
    }
  }

  obj_0 = obj->RigidBodyTreeInternal;
  tol = obj->Solver->ExtraArgs->BodyIndex;
  PickAndPlace_Sim_emxInit_real_T(&bodyIndices, 1);
  c = bodyIndices->size[0];
  bodyIndices->size[0] = (int32_T)obj_0->NumBodies;
  PickAn_emxEnsureCapacity_real_T(bodyIndices, c);
  loop_ub = (int32_T)obj_0->NumBodies;
  if (loop_ub - 1 >= 0) {
    memset(&bodyIndices->data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }

  if (tol == 0.0) {
    c = bodyIndices->size[0];
    bodyIndices->size[0] = 1;
    PickAn_emxEnsureCapacity_real_T(bodyIndices, c);
    bodyIndices->data[0] = 0.0;
  } else {
    body = obj_0->Bodies[(int32_T)tol - 1];
    tol = 1.0;
    while (body->ParentIndex != 0.0) {
      bodyIndices->data[(int32_T)tol - 1] = body->Index;
      body = obj_0->Bodies[(int32_T)body->ParentIndex - 1];
      tol++;
    }

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (tol - 1.0 < 1.0) {
      f = 0;
    } else {
      f = (int32_T)(tol - 1.0);
    }

    c = bodyIndices->size[0];
    bodyIndices->size[0] = f + 2;
    PickAn_emxEnsureCapacity_real_T(bodyIndices, c);
    bodyIndices->data[f] = body->Index;
    bodyIndices->data[f + 1] = 0.0;
  }

  obj_0 = obj->RigidBodyTreeInternal;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  indicesUpperBoundViolation = bodyIndices->size[0];
  b_k = 0;
  for (f = 0; f < indicesUpperBoundViolation; f++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (bodyIndices->data[f] != 0.0) {
      b_k++;
    }
  }

  PickAndPlace_Si_emxInit_int32_T(&tmp, 1);
  c = tmp->size[0];
  tmp->size[0] = b_k;
  PickA_emxEnsureCapacity_int32_T(tmp, c);
  b_k = 0;
  for (f = 0; f < indicesUpperBoundViolation; f++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    if (bodyIndices->data[f] != 0.0) {
      tmp->data[b_k] = f;
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  loop_ub = tmp->size[0];
  c = limits->size[0] * limits->size[1];
  limits->size[0] = tmp->size[0];
  limits->size[1] = 2;
  PickAn_emxEnsureCapacity_real_T(limits, c);
  for (f = 0; f < 2; f++) {
    for (indicesUpperBoundViolation = 0; indicesUpperBoundViolation < loop_ub;
         indicesUpperBoundViolation++) {
      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      limits->data[indicesUpperBoundViolation + limits->size[0] * f] =
        obj_0->PositionDoFMap[(5 * f + (int32_T)bodyIndices->data[tmp->
        data[indicesUpperBoundViolation]]) - 1];
    }
  }

  PickAndPlace_Si_emxFree_int32_T(&tmp);
  PickAndPlace_Sim_emxFree_real_T(&bodyIndices);
  PickAndPlace_Sim_emxInit_real_T(&positionIndices, 2);
  c = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[0] = 1;
  positionIndices->size[1] = (int32_T)obj_0->PositionNumber;
  PickAn_emxEnsureCapacity_real_T(positionIndices, c);
  b_k = (int32_T)obj_0->PositionNumber;
  if (b_k - 1 >= 0) {
    memset(&positionIndices->data[0], 0, (uint32_T)b_k * sizeof(real_T));
  }

  tol = 0.0;
  PickAndPlace_Si_emxInit_int32_T(&d, 2);
  PickAndPlace_Sim_emxInit_real_T(&y, 2);
  for (indicesUpperBoundViolation = 0; indicesUpperBoundViolation < loop_ub;
       indicesUpperBoundViolation++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    err = limits->data[indicesUpperBoundViolation + limits->size[0]] -
      limits->data[indicesUpperBoundViolation];
    if (err + 1.0 > 0.0) {
      if (err + 1.0 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else {
        c = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)((err + 1.0) - 1.0) + 1;
        PickAn_emxEnsureCapacity_real_T(y, c);
        b_k = (int32_T)((err + 1.0) - 1.0);
        for (f = 0; f <= b_k; f++) {
          y->data[f] = (real_T)f + 1.0;
        }
      }

      c = d->size[0] * d->size[1];
      d->size[0] = 1;
      b_k = y->size[1];
      d->size[1] = y->size[1];
      PickA_emxEnsureCapacity_int32_T(d, c);
      for (f = 0; f < b_k; f++) {
        d->data[f] = (int32_T)(tol + y->data[f]);
      }

      /* Start for MATLABSystem: '<S2>/MATLAB System' */
      iter = limits->data[indicesUpperBoundViolation];
      limits_0 = limits->data[indicesUpperBoundViolation + limits->size[0]];
      if (rtIsNaN(iter) || rtIsNaN(limits_0)) {
        c = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        PickAn_emxEnsureCapacity_real_T(y, c);
        y->data[0] = (rtNaN);
      } else if (limits_0 < iter) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if ((rtIsInf(iter) || rtIsInf(limits_0)) && (iter == limits_0)) {
        c = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        PickAn_emxEnsureCapacity_real_T(y, c);
        y->data[0] = (rtNaN);
      } else if (floor(iter) == iter) {
        c = y->size[0] * y->size[1];
        y->size[0] = 1;
        b_k = (int32_T)err;
        y->size[1] = (int32_T)err + 1;
        PickAn_emxEnsureCapacity_real_T(y, c);
        for (f = 0; f <= b_k; f++) {
          y->data[f] = iter + (real_T)f;
        }
      } else {
        ndbl = floor(err + 0.5);
        apnd = iter + ndbl;
        cdiff = apnd - limits_0;
        if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(iter), fabs
             (limits_0))) {
          ndbl++;
          apnd = limits_0;
        } else if (cdiff > 0.0) {
          apnd = (ndbl - 1.0) + iter;
        } else {
          ndbl++;
        }

        if (ndbl >= 0.0) {
          f = (int32_T)ndbl;
        } else {
          f = 0;
        }

        c = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = f;
        PickAn_emxEnsureCapacity_real_T(y, c);
        if (f > 0) {
          y->data[0] = iter;
          if (f > 1) {
            y->data[f - 1] = apnd;
            nm1d2 = (int32_T)((uint32_T)(f - 1) >> 1);
            c = nm1d2 - 2;
            for (b_k = 0; b_k <= c; b_k++) {
              y->data[b_k + 1] = ((real_T)b_k + 1.0) + iter;
              y->data[(f - b_k) - 2] = apnd - ((real_T)b_k + 1.0);
            }

            if (nm1d2 << 1 == f - 1) {
              y->data[nm1d2] = (limits->data[indicesUpperBoundViolation] + apnd)
                / 2.0;
            } else {
              y->data[nm1d2] = limits->data[indicesUpperBoundViolation] +
                (real_T)nm1d2;
              y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      b_k = y->size[1];
      for (f = 0; f < b_k; f++) {
        positionIndices->data[d->data[f] - 1] = y->data[f];
      }

      tol += err + 1.0;
    }
  }

  PickAndPlace_Sim_emxFree_real_T(&y);
  PickAndPlace_Si_emxFree_int32_T(&d);
  PickAndPlace_Sim_emxFree_real_T(&limits);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (tol < 1.0) {
    positionIndices->size[1] = 0;
  } else {
    c = positionIndices->size[0] * positionIndices->size[1];
    positionIndices->size[1] = (int32_T)tol;
    PickAn_emxEnsureCapacity_real_T(positionIndices, c);
  }

  loop_ub = positionIndices->size[1];
  for (f = 0; f < loop_ub; f++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    tol = positionIndices->data[f];
    initialGuess[(int32_T)tol - 1] = xSolPrev[(int32_T)tol - 1];
  }

  PickAndPlace_Sim_emxFree_real_T(&positionIndices);

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  *solutionInfo_ExitFlag = exitFlagPrev;
}

static void Pick_inverseKinematics_stepImpl(b_inverseKinematics_PickAndPl_T *obj,
  const real_T tform[16], const real_T weights[6], const real_T initialGuess[4],
  real_T QSol[4])
{
  d_robotics_manip_internal_IKE_T *args;
  f_robotics_manip_internal_R_o_T *obj_1;
  h_robotics_manip_internal_Rig_T *obj_0;
  real_T weightMatrix[36];
  real_T b;
  real_T bidx;
  real_T expl_temp;
  real_T obj_Length;
  int32_T b_i;
  int32_T b_kstr;
  char_T obj_Vector[200];
  char_T expl_temp_data[14];
  boolean_T b_bool;
  static const char_T tmp[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C',
    'T', 'O', 'R' };

  int32_T expl_temp_size[2];
  int32_T exitg1;
  boolean_T exitg2;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_0 = obj->RigidBodyTreeInternal;
  bidx = -1.0;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  obj_Length = obj_0->Base.NameInternal.Length;
  for (b_kstr = 0; b_kstr < 200; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    obj_Vector[b_kstr] = obj_0->Base.NameInternal.Vector[b_kstr];
  }

  b_bool = false;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  if (obj_Length < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)obj_Length;
  }

  if (b_kstr == 12) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 12) {
        if (obj_Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    bidx = 0.0;
  } else {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    b = obj_0->NumBodies;
    b_i = 0;
    exitg2 = false;
    while ((!exitg2) && (b_i <= (int32_T)b - 1)) {
      obj_1 = obj_0->Bodies[b_i];
      obj_Length = obj_1->NameInternal.Length;
      for (b_kstr = 0; b_kstr < 200; b_kstr++) {
        obj_Vector[b_kstr] = obj_1->NameInternal.Vector[b_kstr];
      }

      if (obj_Length < 1.0) {
        b_kstr = 0;
      } else {
        b_kstr = (int32_T)obj_Length;
      }

      if (b_kstr == 12) {
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 12) {
            if (obj_Vector[b_kstr - 1] != tmp[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        bidx = (real_T)b_i + 1.0;
        exitg2 = true;
      } else {
        b_i++;
      }
    }
  }

  memset(&weightMatrix[0], 0, 36U * sizeof(real_T));
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    weightMatrix[b_kstr + 6 * b_kstr] = weights[b_kstr];
  }

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  args = obj->Solver->ExtraArgs;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    args->WeightMatrix[b_kstr] = weightMatrix[b_kstr];
  }

  args->BodyIndex = bidx;

  /* Start for MATLABSystem: '<S2>/MATLAB System' */
  args->KinematicModel = obj->RigidBodyTreeKinematicModel;
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    args->Tform[b_kstr] = tform[b_kstr];
  }

  QSol[0] = initialGuess[0];
  QSol[1] = initialGuess[1];
  QSol[2] = initialGuess[2];
  QSol[3] = initialGuess[3];
  PickA_inverseKinematics_solve_o(obj, QSol, &bidx, &obj_Length, &b, &expl_temp,
    expl_temp_data, expl_temp_size);
}

static void emxFree_f_robotics_manip_intern(emxArray_f_robotics_manip_i_o_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_robotics_manip_i_o_T *)NULL) {
    if (((*pEmxArray)->data != (f_robotics_manip_internal_Col_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_robotics_manip_i_o_T *)NULL;
  }
}

static void emxFreeStruct_g_robotics_manip_(g_robotics_manip_internal_Col_T
  *pStruct)
{
  emxFree_f_robotics_manip_intern(&pStruct->CollisionGeometries);
}

static void emxFreeStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_g_robotics_manip_(&pStruct->CollisionsInternal);
}

static void emxFreeMatrix_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  pMatrix[10])
{
  int32_T i;
  for (i = 0; i < 10; i++) {
    emxFreeStruct_e_robotics_manip_(&pMatrix[i]);
  }
}

static void emxFreeStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_e_robotics_manip_(&pStruct->Base);
  emxFreeMatrix_e_robotics_manip_(pStruct->_pobj0);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_f_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFree_f_robotics_manip_inte_o(emxArray_f_robotics_manip_int_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_robotics_manip_int_T *)NULL) {
    if (((*pEmxArray)->data != (f_robotics_manip_internal_C_o_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_robotics_manip_int_T *)NULL;
  }
}

static void emxFreeStruct_g_robotics_mani_o(g_robotics_manip_internal_C_o_T
  *pStruct)
{
  emxFree_f_robotics_manip_inte_o(&pStruct->CollisionGeometries);
}

static void emxFreeMatrix_g_robotics_manip_(g_robotics_manip_internal_C_o_T
  pMatrix[11])
{
  int32_T i;
  for (i = 0; i < 11; i++) {
    emxFreeStruct_g_robotics_mani_o(&pMatrix[i]);
  }
}

static void emxFreeStruct_g_robotics_man_og(g_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeMatrix_g_robotics_manip_(pStruct->_pobj0);
}

static void emxFreeStruct_d_robotics_manip_(d_robotics_manip_internal_IKE_T
  *pStruct)
{
  PickAndPlace_Sim_emxFree_real_T(&pStruct->Limits);
  PickAndPlace_Sim_emxFree_real_T(&pStruct->ErrTemp);
  PickAndPlace_Sim_emxFree_real_T(&pStruct->GradTemp);
}

static void emxFreeMatrix_g_robotics_mani_o(g_robotics_manip_internal_C_o_T
  pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    emxFreeStruct_g_robotics_mani_o(&pMatrix[i]);
  }
}

static void emxFreeStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeMatrix_g_robotics_mani_o(pStruct->_pobj1);
}

static void emxFreeStruct_b_inverseKinemati(b_inverseKinematics_PickAndPl_T
  *pStruct)
{
  PickAndPlace_Sim_emxFree_real_T(&pStruct->Limits);
  emxFreeStruct_d_robotics_manip_(&pStruct->_pobj0);
  emxFreeMatrix_g_robotics_manip_(pStruct->_pobj3);
  emxFreeStruct_h_robotics_manip_(&pStruct->_pobj4);
}

static void emxFreeStruct_robotics_slmani_o(robotics_slmanip_internal_b_o_T
  *pStruct)
{
  emxFreeStruct_g_robotics_man_og(&pStruct->TreeInternal);
  emxFreeStruct_b_inverseKinemati(&pStruct->IKInternal);
}

/* Model step function */
void PickAndPlace_Simulation_QLabs_step(void)
{
  /* local block i/o variables */
  real_T rtb_HILReadTimebase[5];
  b_rigidBodyJoint_PickAndPlace_T *joint;
  e_robotics_manip_internal_Rig_T *obj;
  emxArray_real_T_PickAndPlace__T *tmp;
  f_robotics_manip_internal_R_o_T *obj_0;
  h_cell_wrap_PickAndPlace_Simu_T Ttree_data[5];
  real_T R_1[16];
  real_T T1[16];
  real_T T2[16];
  real_T rtb_Product[16];
  real_T rtb_MatrixConcatenate[12];
  real_T R[9];
  real_T R_0[9];
  real_T rtb_TmpSignalConversionAtHILWri[8];
  real_T rtb_MATLABSystem_o1_0[4];
  real_T rtb_Switch1[3];
  real_T R_2;
  real_T b;
  real_T bid1;
  real_T rtb_Automate;
  int32_T R_tmp;
  int32_T b_i;
  int32_T b_kstr;
  char_T obj_Vector[200];
  boolean_T b_bool;
  boolean_T rtb_NOT;
  static const char_T tmp_0[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C',
    'T', 'O', 'R' };

  static const char_T tmp_1[5] = { 'w', 'o', 'r', 'l', 'd' };

  static const char_T tmp_2[5] = { 'f', 'i', 'x', 'e', 'd' };

  emxArray_real_T_7x2_PickAndPl_T joint_0;
  int32_T Ttree_size[2];
  int32_T exitg1;
  boolean_T exitg2;

  /* S-Function (hil_read_timebase_block): '<S6>/HIL Read Timebase' */

  /* S-Function Block: PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_read(PickAndPlace_Simulation_QLab_DW.HILReadTimebase_Task,
      1,
      NULL,
      NULL,
      NULL,
      &rtb_HILReadTimebase[0]
      );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
    }
  }

  /* MATLABSystem: '<S5>/MATLAB System' */
  RigidBodyTree_forwardKinematics
    (&PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal, &rtb_HILReadTimebase[0],
     Ttree_data, Ttree_size);
  bid1 = -1.0;
  rtb_Automate =
    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.NameInternal.Length;
  memcpy(&obj_Vector[0],
         &PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.NameInternal.Vector
         [0], 200U * sizeof(char_T));
  b_bool = false;
  if (rtb_Automate < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)rtb_Automate;
  }

  if (b_kstr == 12) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 12) {
        if (obj_Vector[b_kstr - 1] != tmp_0[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    bid1 = 0.0;
  } else {
    b = PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.NumBodies;
    b_i = 0;
    exitg2 = false;
    while ((!exitg2) && (b_i <= (int32_T)b - 1)) {
      obj = PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Bodies[b_i];
      rtb_Automate = obj->NameInternal.Length;
      for (b_kstr = 0; b_kstr < 200; b_kstr++) {
        obj_Vector[b_kstr] = obj->NameInternal.Vector[b_kstr];
      }

      if (rtb_Automate < 1.0) {
        b_kstr = 0;
      } else {
        b_kstr = (int32_T)rtb_Automate;
      }

      if (b_kstr == 12) {
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 12) {
            if (obj_Vector[b_kstr - 1] != tmp_0[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        bid1 = (real_T)b_i + 1.0;
        exitg2 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid1 == 0.0) {
    memset(&T1[0], 0, sizeof(real_T) << 4U);
    T1[0] = 1.0;
    T1[5] = 1.0;
    T1[10] = 1.0;
    T1[15] = 1.0;
  } else {
    for (b_kstr = 0; b_kstr < 16; b_kstr++) {
      T1[b_kstr] = Ttree_data[(int32_T)bid1 - 1].f1[b_kstr];
    }
  }

  bid1 = -1.0;
  rtb_Automate =
    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.NameInternal.Length;
  memcpy(&obj_Vector[0],
         &PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.NameInternal.Vector
         [0], 200U * sizeof(char_T));
  b_bool = false;
  if (rtb_Automate < 1.0) {
    b_kstr = 0;
  } else {
    b_kstr = (int32_T)rtb_Automate;
  }

  if (b_kstr == 5) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        if (obj_Vector[b_kstr - 1] != tmp_1[b_kstr - 1]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    bid1 = 0.0;
  } else {
    b = PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.NumBodies;
    b_i = 0;
    exitg2 = false;
    while ((!exitg2) && (b_i <= (int32_T)b - 1)) {
      obj = PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Bodies[b_i];
      rtb_Automate = obj->NameInternal.Length;
      for (b_kstr = 0; b_kstr < 200; b_kstr++) {
        obj_Vector[b_kstr] = obj->NameInternal.Vector[b_kstr];
      }

      if (rtb_Automate < 1.0) {
        b_kstr = 0;
      } else {
        b_kstr = (int32_T)rtb_Automate;
      }

      if (b_kstr == 5) {
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 5) {
            if (obj_Vector[b_kstr - 1] != tmp_1[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        bid1 = (real_T)b_i + 1.0;
        exitg2 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid1 == 0.0) {
    memset(&T2[0], 0, sizeof(real_T) << 4U);
    T2[0] = 1.0;
    T2[5] = 1.0;
    T2[10] = 1.0;
    T2[15] = 1.0;
  } else {
    for (b_kstr = 0; b_kstr < 16; b_kstr++) {
      T2[b_kstr] = Ttree_data[(int32_T)bid1 - 1].f1[b_kstr];
    }
  }

  for (b_kstr = 0; b_kstr < 3; b_kstr++) {
    R[3 * b_kstr] = T2[b_kstr];
    R[3 * b_kstr + 1] = T2[b_kstr + 4];
    R[3 * b_kstr + 2] = T2[b_kstr + 8];
  }

  for (b_kstr = 0; b_kstr < 9; b_kstr++) {
    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    R_0[b_kstr] = -R[b_kstr];
  }

  /* Start for MATLABSystem: '<S5>/MATLAB System' */
  bid1 = T2[13];
  rtb_Automate = T2[12];
  b = T2[14];
  for (b_kstr = 0; b_kstr < 3; b_kstr++) {
    R_tmp = b_kstr << 2;
    T2[R_tmp] = R[3 * b_kstr];
    T2[R_tmp + 1] = R[3 * b_kstr + 1];
    T2[R_tmp + 2] = R[3 * b_kstr + 2];
    T2[b_kstr + 12] = (R_0[b_kstr + 3] * bid1 + R_0[b_kstr] * rtb_Automate) +
      R_0[b_kstr + 6] * b;
  }

  T2[3] = 0.0;
  T2[7] = 0.0;
  T2[11] = 0.0;
  T2[15] = 1.0;
  for (b_kstr = 0; b_kstr < 4; b_kstr++) {
    /* MATLABSystem: '<S5>/MATLAB System' */
    bid1 = T2[b_kstr + 4];
    rtb_Automate = T2[b_kstr];
    b = T2[b_kstr + 8];
    R_2 = T2[b_kstr + 12];
    for (b_i = 0; b_i < 4; b_i++) {
      /* Start for MATLABSystem: '<S5>/MATLAB System' */
      R_tmp = b_i << 2;
      R_1[b_kstr + R_tmp] = ((T1[R_tmp + 1] * bid1 + T1[R_tmp] * rtb_Automate) +
        T1[R_tmp + 2] * b) + T1[R_tmp + 3] * R_2;
    }

    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/Constant9'
     */
    bid1 = R_1[b_kstr + 4];
    rtb_Automate = R_1[b_kstr];
    b = R_1[b_kstr + 8];
    R_2 = R_1[b_kstr + 12];
    for (b_i = 0; b_i < 4; b_i++) {
      R_tmp = b_i << 2;
      rtb_Product[b_kstr + R_tmp] =
        ((PickAndPlace_Simulation_QLabs_P.Constant9_Value[R_tmp + 1] * bid1 +
          PickAndPlace_Simulation_QLabs_P.Constant9_Value[R_tmp] * rtb_Automate)
         + PickAndPlace_Simulation_QLabs_P.Constant9_Value[R_tmp + 2] * b) +
        PickAndPlace_Simulation_QLabs_P.Constant9_Value[R_tmp + 3] * R_2;
    }

    /* End of Product: '<S3>/Product' */
  }

  /* Selector: '<S3>/Selector1' incorporates:
   *  Product: '<S3>/Product'
   */
  for (b_kstr = 0; b_kstr < 3; b_kstr++) {
    R_tmp = b_kstr << 2;
    R[3 * b_kstr] = rtb_Product[R_tmp];
    R[3 * b_kstr + 1] = rtb_Product[R_tmp + 1];
    R[3 * b_kstr + 2] = rtb_Product[R_tmp + 2];
  }

  /* End of Selector: '<S3>/Selector1' */

  /* SignalConversion generated from: '<S4>/Matrix Concatenate' incorporates:
   *  Selector: '<S3>/Selector1'
   */
  memcpy(&rtb_MatrixConcatenate[0], &R[0], 9U * sizeof(real_T));

  /* ManualSwitch: '<Root>/Automate?' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (PickAndPlace_Simulation_QLabs_P.Automate_CurrentSetting == 1) {
    rtb_Automate = PickAndPlace_Simulation_QLabs_P.Constant_Value;
  } else {
    rtb_Automate = PickAndPlace_Simulation_QLabs_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<Root>/Automate?' */

  /* Logic: '<Root>/NOT' */
  rtb_NOT = !(rtb_Automate != 0.0);

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/(m)'
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant9'
   *  Product: '<S3>/Product'
   *  Selector: '<S3>/Selector'
   */
  if (PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 < 1023) {
    PickAndPlace_Simulation_QLab_DW.temporalCounter_i1++;
  }

  if (PickAndPlace_Simulation_QLab_DW.is_active_c3_PickAndPlace_Simul == 0) {
    PickAndPlace_Simulation_QLab_DW.is_active_c3_PickAndPlace_Simul = 1U;
    PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
    PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
      PickAndPlace_Simulation_IN_Wait;
    PickAndPlace_Simulation_QLabs_B.gripper = 0.0;
    PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
      PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
    PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
      PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
    PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
      PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
  } else {
    switch (PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q) {
     case PickAndPlace_Si_IN_CloseGripper:
      if (PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 400) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Simula_IN_GotoHome;
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      } else {
        PickAndPlace_Simulation_QLabs_B.gripper = 1.0;
      }
      break;

     case PickAndPlace_Simula_IN_GotoHome:
      if ((PickAndPlace_Simulation_QLabs_B.gripper != 0.0) &&
          (PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 400) &&
          PickAndPlace_Simulation_QLab_DW.flag) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Simul_IN_GotoPlace;
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      } else if ((PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 400) &&
                 PickAndPlace_Simulation_QLab_DW.flag) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Simula_IN_GotoPick;
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      } else {
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      }
      break;

     case PickAndPlace_Simula_IN_GotoPick:
      if ((PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 400) &&
          PickAndPlace_Simulation_QLab_DW.flag) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Si_IN_CloseGripper;
        PickAndPlace_Simulation_QLabs_B.gripper = 1.0;
      } else {
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      }
      break;

     case PickAndPlace_Simul_IN_GotoPlace:
      if ((PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 600) &&
          PickAndPlace_Simulation_QLab_DW.flag) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Sim_IN_OpenGripper;
        PickAndPlace_Simulation_QLabs_B.gripper = 0.0;
      } else {
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant10_Value[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      }
      break;

     case PickAndPlace_Sim_IN_OpenGripper:
      if (PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 400) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Simula_IN_GotoHome;
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      } else {
        PickAndPlace_Simulation_QLabs_B.gripper = 0.0;
      }
      break;

     default:
      /* case IN_Wait: */
      if ((rtb_Automate != 0.0) &&
          (PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 >= 400)) {
        PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
        PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
          PickAndPlace_Simula_IN_GotoPick;
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
        PickAndPlace_Simulation_QLabs_B.a[0] = rtb_Product[12];
        PickAndPlace_Simulation_QLabs_B.b[0] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
        PickAndPlace_Simulation_QLabs_B.a[1] = rtb_Product[13];
        PickAndPlace_Simulation_QLabs_B.b[1] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
        PickAndPlace_Simulation_QLabs_B.a[2] = rtb_Product[14];
        PickAndPlace_Simulation_QLabs_B.b[2] =
          PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
        PickAndPlace_Simulation_QLabs_B.t =
          PickAndPlace_Simulation_QLabs_P.m_Value;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simula_closeEnough(PickAndPlace_Simulation_QLabs_B.a,
          PickAndPlace_Simulation_QLabs_B.b, PickAndPlace_Simulation_QLabs_B.t,
          &PickAndPlace_Simulation_QLabs_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        PickAndPlace_Simulation_QLab_DW.flag =
          PickAndPlace_Simulation_QLabs_B.closeEnough.LessThanOrEqual;
      } else {
        PickAndPlace_Simulation_QLabs_B.gripper = 0.0;
        PickAndPlace_Simulation_QLabs_B.targetPosition[0] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
        PickAndPlace_Simulation_QLabs_B.targetPosition[1] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
        PickAndPlace_Simulation_QLabs_B.targetPosition[2] =
          PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Switch: '<Root>/Switch1' */
  if (rtb_NOT) {
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    switch ((int32_T)PickAndPlace_Simulation_QLabs_P.Constant7_Value) {
     case 1:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant2'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant2_Value[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant2_Value[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant2_Value[2];
      break;

     case 2:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant3'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant3_Value[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant3_Value[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant3_Value[2];
      break;

     case 3:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant4'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant4_Value[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant4_Value[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant4_Value[2];
      break;

     case 4:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant9'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant9_Value_h[2];
      break;

     case 5:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant12'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant12_Value[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant12_Value[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant12_Value[2];
      break;

     case 6:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant10'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant10_Value[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant10_Value[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant10_Value[2];
      break;

     default:
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant11'
       */
      rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_P.Constant11_Value[0];
      rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_P.Constant11_Value[1];
      rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_P.Constant11_Value[2];
      break;
    }

    /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  } else {
    rtb_Switch1[0] = PickAndPlace_Simulation_QLabs_B.targetPosition[0];
    rtb_Switch1[1] = PickAndPlace_Simulation_QLabs_B.targetPosition[1];
    rtb_Switch1[2] = PickAndPlace_Simulation_QLabs_B.targetPosition[2];
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Product: '<S4>/Matrix Multiply' incorporates:
   *  Constant: '<S4>/E_P_GE'
   *  Selector: '<S3>/Selector1'
   */
  bid1 = PickAndPlace_Simulation_QLabs_P.E_P_GE_Value[1];
  rtb_Automate = PickAndPlace_Simulation_QLabs_P.E_P_GE_Value[0];
  b = PickAndPlace_Simulation_QLabs_P.E_P_GE_Value[2];

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/E_P_GE'
   *  Product: '<S4>/Matrix Multiply'
   *  Selector: '<S3>/Selector1'
   *  Switch: '<Root>/Switch1'
   */
  for (b_kstr = 0; b_kstr < 3; b_kstr++) {
    rtb_MatrixConcatenate[b_kstr + 9] = ((R[b_kstr + 3] * bid1 + R[b_kstr] *
      rtb_Automate) + R[b_kstr + 6] * b) + rtb_Switch1[b_kstr];
  }

  /* End of Sum: '<S4>/Add' */

  /* Concatenate: '<S4>/Matrix Concatenate1' incorporates:
   *  Concatenate: '<S4>/Matrix Concatenate'
   *  Constant: '<S4>/Constant10'
   */
  for (b_kstr = 0; b_kstr < 4; b_kstr++) {
    b_i = b_kstr << 2;
    T1[b_i] = rtb_MatrixConcatenate[3 * b_kstr];
    T1[b_i + 1] = rtb_MatrixConcatenate[3 * b_kstr + 1];
    T1[b_i + 2] = rtb_MatrixConcatenate[3 * b_kstr + 2];
    T1[b_i + 3] = PickAndPlace_Simulation_QLabs_P.Constant10_Value_h[b_kstr];
  }

  /* End of Concatenate: '<S4>/Matrix Concatenate1' */

  /* MATLABSystem: '<S2>/MATLAB System' incorporates:
   *  Concatenate: '<S4>/Matrix Concatenate1'
   *  Constant: '<Root>/Constant6'
   */
  if (PickAndPlace_Simulation_QLab_DW.obj.IKInternal.isInitialized != 1) {
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.isSetupComplete = false;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.isInitialized = 1;
    rtb_Automate =
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.RigidBodyTreeInternal->NumBodies;
    R_tmp = (int32_T)rtb_Automate;
    for (b_i = 0; b_i < R_tmp; b_i++) {
      obj_0 =
        PickAndPlace_Simulation_QLab_DW.obj.IKInternal.RigidBodyTreeInternal->Bodies
        [b_i];
      joint = obj_0->JointInternal;
      rtb_Automate = joint->TypeInternal.Length;
      for (b_kstr = 0; b_kstr < 200; b_kstr++) {
        obj_Vector[b_kstr] = joint->TypeInternal.Vector[b_kstr];
      }

      b_bool = false;
      if (rtb_Automate < 1.0) {
        b_kstr = 0;
      } else {
        b_kstr = (int32_T)rtb_Automate;
      }

      if (b_kstr == 5) {
        b_kstr = 1;
        do {
          exitg1 = 0;
          if (b_kstr - 1 < 5) {
            if (obj_Vector[b_kstr - 1] != tmp_2[b_kstr - 1]) {
              exitg1 = 1;
            } else {
              b_kstr++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (!b_bool) {
        rigidBodyJoint_get_PositionLimi(joint, joint_0.data, joint_0.size);
        rigidBodyJoint_get_PositionLimi(joint, joint_0.data, joint_0.size);
      }
    }

    RigidBodyTree_get_JointPosition
      (PickAndPlace_Simulation_QLab_DW.obj.IKInternal.RigidBodyTreeInternal,
       PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Limits);
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj0.matlabCodegenIsDeleted
      = false;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs =
      &PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj0;
    for (b_kstr = 0; b_kstr < 36; b_kstr++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->
        ExtraArgs->WeightMatrix[b_kstr] = 0.0;
    }

    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->Robot =
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.RigidBodyTreeInternal;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->
      ExtraArgs->KinematicModel =
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.RigidBodyTreeKinematicModel;
    R_tmp = PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Limits->size[0] << 1;
    b_kstr = PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->
      ExtraArgs->Limits->size[0] *
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
      Limits->size[1];
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
      Limits->size[0] =
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Limits->size[0];
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
      Limits->size[1] = 2;
    PickAn_emxEnsureCapacity_real_T
      (PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->Limits,
       b_kstr);
    PickAndPlace_Sim_emxInit_real_T(&tmp, 1);
    b_kstr = tmp->size[0];
    tmp->size[0] = R_tmp;
    PickAn_emxEnsureCapacity_real_T(tmp, b_kstr);
    for (b_i = 0; b_i < R_tmp; b_i++) {
      tmp->data[b_i] =
        PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Limits->data[b_i];
    }

    for (b_i = 0; b_i < R_tmp; b_i++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
        Limits->data[b_i] = tmp->data[b_i];
    }

    PickAndPlace_Sim_emxFree_real_T(&tmp);
    memset(&T2[0], 0, sizeof(real_T) << 4U);
    T2[0] = 1.0;
    T2[5] = 1.0;
    T2[10] = 1.0;
    T2[15] = 1.0;
    for (b_kstr = 0; b_kstr < 16; b_kstr++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
        Tform[b_kstr] = T2[b_kstr];
    }

    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->BodyIndex =
      -1.0;
    b_kstr = PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->
      ExtraArgs->ErrTemp->size[0];
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
      ErrTemp->size[0] = 6;
    PickAn_emxEnsureCapacity_real_T
      (PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->ErrTemp,
       b_kstr);
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
        ErrTemp->data[b_kstr] = 0.0;
    }

    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->CostTemp =
      0.0;
    b_i = (int32_T)
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    b_kstr = PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->
      ExtraArgs->GradTemp->size[0];
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
      GradTemp->size[0] = b_i;
    PickAn_emxEnsureCapacity_real_T
      (PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->
       ExtraArgs->GradTemp, b_kstr);
    for (b_kstr = 0; b_kstr < b_i; b_kstr++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.Solver->ExtraArgs->
        GradTemp->data[b_kstr] = 0.0;
    }

    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.isSetupComplete = true;
  }

  Pick_inverseKinematics_stepImpl
    (&PickAndPlace_Simulation_QLab_DW.obj.IKInternal, T1,
     PickAndPlace_Simulation_QLabs_P.Constant6_Value, &rtb_HILReadTimebase[0],
     rtb_MATLABSystem_o1_0);

  /* SignalConversion generated from: '<S6>/HIL Write' incorporates:
   *  MATLABSystem: '<S2>/MATLAB System'
   */
  rtb_TmpSignalConversionAtHILWri[0] = rtb_MATLABSystem_o1_0[0];
  rtb_TmpSignalConversionAtHILWri[1] = rtb_MATLABSystem_o1_0[1];
  rtb_TmpSignalConversionAtHILWri[2] = rtb_MATLABSystem_o1_0[2];
  rtb_TmpSignalConversionAtHILWri[3] = rtb_MATLABSystem_o1_0[3];

  /* Switch: '<Root>/Switch' */
  if (rtb_NOT) {
    /* ManualSwitch: '<Root>/Manual Switch1' */
    if (PickAndPlace_Simulation_QLabs_P.ManualSwitch1_CurrentSetting == 1) {
      /* SignalConversion generated from: '<S6>/HIL Write' incorporates:
       *  Constant: '<Root>/Constant5'
       */
      rtb_TmpSignalConversionAtHILWri[4] =
        PickAndPlace_Simulation_QLabs_P.Constant5_Value;
    } else {
      /* SignalConversion generated from: '<S6>/HIL Write' incorporates:
       *  Constant: '<Root>/Constant8'
       */
      rtb_TmpSignalConversionAtHILWri[4] =
        PickAndPlace_Simulation_QLabs_P.Constant8_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch1' */
  } else {
    /* SignalConversion generated from: '<S6>/HIL Write' */
    rtb_TmpSignalConversionAtHILWri[4] = PickAndPlace_Simulation_QLabs_B.gripper;
  }

  /* End of Switch: '<Root>/Switch' */

  /* SignalConversion generated from: '<S6>/HIL Write' incorporates:
   *  Constant: '<S10>/Constant'
   */
  rtb_TmpSignalConversionAtHILWri[5] =
    PickAndPlace_Simulation_QLabs_P.ColorConstant_color[0];
  rtb_TmpSignalConversionAtHILWri[6] =
    PickAndPlace_Simulation_QLabs_P.ColorConstant_color[1];
  rtb_TmpSignalConversionAtHILWri[7] =
    PickAndPlace_Simulation_QLabs_P.ColorConstant_color[2];

  /* S-Function (hil_write_block): '<S6>/HIL Write' */

  /* S-Function Block: PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)/HIL Write (hil_write_block) */
  {
    t_error result;
    result = hil_write
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card,
       NULL, 0U,
       NULL, 0U,
       NULL, 0U,
       PickAndPlace_Simulation_QLabs_P.HILWrite_other_channels, 8U,
       NULL,
       NULL,
       NULL,
       &rtb_TmpSignalConversionAtHILWri[0]
       );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
    }
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(PickAndPlace_Simulation_QLab_M->rtwLogInfo,
                      (&PickAndPlace_Simulation_QLab_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(PickAndPlace_Simulation_QLab_M)!=-1) &&
        !((rtmGetTFinal(PickAndPlace_Simulation_QLab_M)-
           PickAndPlace_Simulation_QLab_M->Timing.taskTime0) >
          PickAndPlace_Simulation_QLab_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PickAndPlace_Simulation_QLab_M->Timing.clockTick0)) {
    ++PickAndPlace_Simulation_QLab_M->Timing.clockTickH0;
  }

  PickAndPlace_Simulation_QLab_M->Timing.taskTime0 =
    PickAndPlace_Simulation_QLab_M->Timing.clockTick0 *
    PickAndPlace_Simulation_QLab_M->Timing.stepSize0 +
    PickAndPlace_Simulation_QLab_M->Timing.clockTickH0 *
    PickAndPlace_Simulation_QLab_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void PickAndPlace_Simulation_QLabs_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)PickAndPlace_Simulation_QLab_M, 0,
                sizeof(RT_MODEL_PickAndPlace_Simulat_T));
  rtmSetTFinal(PickAndPlace_Simulation_QLab_M, -1);
  PickAndPlace_Simulation_QLab_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    PickAndPlace_Simulation_QLab_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(PickAndPlace_Simulation_QLab_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(PickAndPlace_Simulation_QLab_M->rtwLogInfo, (NULL));
    rtliSetLogT(PickAndPlace_Simulation_QLab_M->rtwLogInfo, "tout");
    rtliSetLogX(PickAndPlace_Simulation_QLab_M->rtwLogInfo, "");
    rtliSetLogXFinal(PickAndPlace_Simulation_QLab_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(PickAndPlace_Simulation_QLab_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(PickAndPlace_Simulation_QLab_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(PickAndPlace_Simulation_QLab_M->rtwLogInfo, 0);
    rtliSetLogDecimation(PickAndPlace_Simulation_QLab_M->rtwLogInfo, 1);
    rtliSetLogY(PickAndPlace_Simulation_QLab_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(PickAndPlace_Simulation_QLab_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(PickAndPlace_Simulation_QLab_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &PickAndPlace_Simulation_QLabs_B), 0,
                sizeof(B_PickAndPlace_Simulation_QLa_T));

  /* states (dwork) */
  (void) memset((void *)&PickAndPlace_Simulation_QLab_DW, 0,
                sizeof(DW_PickAndPlace_Simulation_QL_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(PickAndPlace_Simulation_QLab_M->rtwLogInfo,
    0.0, rtmGetTFinal(PickAndPlace_Simulation_QLab_M),
    PickAndPlace_Simulation_QLab_M->Timing.stepSize0, (&rtmGetErrorStatus
    (PickAndPlace_Simulation_QLab_M)));

  /* Start for S-Function (hil_initialize_block): '<S6>/HIL Initialize (Position Mode)' */

  /* S-Function Block: PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)/HIL Initialize (Position Mode) (hil_initialize_block) */
  {
    t_int result;
    result = hil_open("qarm_usb", "0@tcpip://localhost:18900?nagle='off'",
                      &PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
      return;
    }

    result = hil_set_card_specific_options
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card,
       "j0_mode=0;j1_mode=0;j2_mode=0;j3_mode=0;gripper_mode=0;", 56);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (hil_read_timebase_block): '<S6>/HIL Read Timebase' */

  /* S-Function Block: PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_create_reader
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card,
       PickAndPlace_Simulation_QLabs_P.HILReadTimebase_SamplesInBuffer,
       NULL, 0U,
       NULL, 0U,
       NULL, 0U,
       PickAndPlace_Simulation_QLabs_P.HILReadTimebase_OtherChannels, 5U,
       &PickAndPlace_Simulation_QLab_DW.HILReadTimebase_Task);
    if (result >= 0) {
      result = hil_task_set_buffer_overflow_mode
        (PickAndPlace_Simulation_QLab_DW.HILReadTimebase_Task,
         (t_buffer_overflow_mode)
         (PickAndPlace_Simulation_QLabs_P.HILReadTimebase_OverflowMode - 1));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
    }
  }

  {
    int32_T i;
    static const uint32_T tmp[625] = { 5489U, 1301868182U, 2938499221U,
      2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U,
      219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U,
      3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U,
      2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U,
      431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U,
      1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U,
      3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U,
      1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U,
      3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U,
      1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
      699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
      1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U,
      3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U,
      2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U,
      2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U,
      1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U,
      619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U,
      4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U,
      3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U,
      3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
      3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U,
      2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U,
      3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U,
      819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U,
      1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U,
      2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U,
      2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U,
      2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U,
      1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U,
      3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U,
      1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U,
      1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U,
      2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U,
      1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
      3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
      3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
      354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
      1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U,
      1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U,
      171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U,
      1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U,
      136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U,
      341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U,
      297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U,
      894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U,
      1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U,
      3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U,
      3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U,
      3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U,
      3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
      3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
      2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U,
      1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U,
      903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U,
      2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U,
      732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U,
      2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U,
      2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U,
      3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
      3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U,
      686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U,
      4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U,
      1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U,
      2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U,
      1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U,
      3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
      4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U,
      1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U,
      422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U,
      1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U,
      539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U,
      2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U,
      3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U,
      818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U,
      232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U,
      3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U,
      3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U,
      3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U,
      3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
      4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U,
      1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U,
      3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U,
      2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U,
      171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U,
      1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U,
      3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U,
      1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U,
      326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U,
      880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U,
      2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U,
      879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U,
      975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U,
      2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U,
      3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U,
      2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
      2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
      643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U,
      3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U,
      3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U,
      1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U,
      828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U,
      1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U,
      1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U,
      831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U,
      4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U,
      3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
      2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
      453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U,
      3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U,
      1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U,
      705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U,
      2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U,
      1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };

    PickAndPlace_Simulation_QLab_DW.temporalCounter_i1 = 0U;
    PickAndPlace_Simulation_QLabs_B.targetPosition[0] = 0.0;
    PickAndPlace_Simulation_QLabs_B.targetPosition[1] = 0.0;
    PickAndPlace_Simulation_QLabs_B.targetPosition[2] = 0.0;
    PickAndPlace_Simulation_QLabs_B.gripper = 0.0;
    PickAndPlace_Simulation_QLab_DW.flag = false;
    PickAndPlace_Simulation_QLab_DW.is_active_c3_PickAndPlace_Simul = 0U;
    PickAndPlace_Simulation_QLab_DW.is_c3_PickAndPlace_Simulation_Q =
      PickAndPlace_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<Root>/Chart' incorporates:
     *  SubSystem: '<S1>/closeEnough'
     */
    PickAndPlace_S_closeEnough_Init(&PickAndPlace_Simulation_QLabs_B.closeEnough,
      &PickAndPlace_Simulation_QLabs_P.closeEnough);
    emxInitStruct_robotics_slmanip_(&PickAndPlace_Simulation_QLab_DW.obj_j);

    /* Start for MATLABSystem: '<S5>/MATLAB System' */
    for (i = 0; i < 10; i++) {
      PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal._pobj0[i].
        CollisionsInternal.matlabCodegenIsDeleted = true;
    }

    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.CollisionsInternal.matlabCodegenIsDeleted
      = true;
    for (i = 0; i < 10; i++) {
      PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal._pobj0[i].
        matlabCodegenIsDeleted = true;
    }

    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.matlabCodegenIsDeleted
      = true;
    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.matlabCodegenIsDeleted =
      true;
    PickAndPlace_Simulation_QLab_DW.method = 7U;
    PickAndPlace_Simulation_QLab_DW.method_not_empty = true;
    PickAndPlace_Simulation_QLab_DW.state = 1144108930U;
    PickAndPlace_Simulation_QLab_DW.state_not_empty_p = true;
    PickAndPlace_Simulation_QLab_DW.state_g[0] = 362436069U;
    PickAndPlace_Simulation_QLab_DW.state_g[1] = 521288629U;
    PickAndPlace_Simulation_QLab_DW.state_not_empty_g = true;
    memcpy(&PickAndPlace_Simulation_QLab_DW.state_k[0], &tmp[0], 625U * sizeof
           (uint32_T));
    PickAndPlace_Simulation_QLab_DW.state_not_empty = true;
    PickAndPlace_Simulation_QLab_DW.obj_j.matlabCodegenIsDeleted = false;
    PickAndPlace_Simulation_QLab_DW.objisempty = true;
    PickAndPlace_Simulation_QLab_DW.obj_j.isInitialized = 1;
    Pic_GetTransformBlock_setupImpl(&PickAndPlace_Simulation_QLab_DW.obj_j);

    /* End of Start for MATLABSystem: '<S5>/MATLAB System' */
    emxInitStruct_robotics_slmani_o(&PickAndPlace_Simulation_QLab_DW.obj);

    /* Start for MATLABSystem: '<S2>/MATLAB System' */
    for (i = 0; i < 6; i++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4._pobj1[i].
        matlabCodegenIsDeleted = true;
    }

    for (i = 0; i < 11; i++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj3[i].
        matlabCodegenIsDeleted = true;
    }

    for (i = 0; i < 11; i++) {
      PickAndPlace_Simulation_QLab_DW.obj.TreeInternal._pobj0[i].
        matlabCodegenIsDeleted = true;
    }

    for (i = 0; i < 5; i++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4._pobj0[i].
        matlabCodegenIsDeleted = true;
    }

    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4.Base.matlabCodegenIsDeleted
      = true;
    for (i = 0; i < 5; i++) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj2[i].
        matlabCodegenIsDeleted = true;
    }

    for (i = 0; i < 10; i++) {
      PickAndPlace_Simulation_QLab_DW.obj.TreeInternal._pobj2[i].
        matlabCodegenIsDeleted = true;
    }

    PickAndPlace_Simulation_QLab_DW.obj.TreeInternal.Base.matlabCodegenIsDeleted
      = true;
    PickAndPlace_Simulation_QLab_DW.obj.TreeInternal.matlabCodegenIsDeleted =
      true;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4.matlabCodegenIsDeleted
      = true;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj0.matlabCodegenIsDeleted
      = true;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj5.matlabCodegenIsDeleted
      = true;
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.matlabCodegenIsDeleted = true;
    PickAndPlace_Simulation_QLab_DW.state_c = 7U;
    PickAndPlace_Simulation_QLab_DW.state_not_empty_k = true;
    PickAndPlace_Simulation_QLab_DW.method_p = 1144108930U;
    PickAndPlace_Simulation_QLab_DW.state_not_empty_h = true;
    PickAndPlace_Simulation_QLab_DW.state_b[0] = 362436069U;
    PickAndPlace_Simulation_QLab_DW.state_b[1] = 521288629U;
    PickAndPlace_Simulation_QLab_DW.state_not_empty_l = true;
    memcpy(&PickAndPlace_Simulation_QLab_DW.state_i[0], &tmp[0], 625U * sizeof
           (uint32_T));
    PickAndPlace_Simulation_QLab_DW.freq_not_empty = true;
    PickAndPlace_Simulation_QLab_DW.method_l = 0U;
    PickAndPlace_Simulation_QLab_DW.method_not_empty_a = true;
    PickAndPlace_Simulation_QLab_DW.state_kf[0] = 362436069U;
    PickAndPlace_Simulation_QLab_DW.state_kf[1] = 521288629U;
    PickAndPlace_Simulation_QLab_DW.state_not_empty_d = true;
    PickAndPlace_Simulation_QLab_DW.obj.matlabCodegenIsDeleted = false;
    PickAndPlace_Simulation_QLab_DW.objisempty_f = true;
    PickAndPlace_Simulation_QLab_DW.obj.isInitialized = 1;
    PickAndPlace__IKBlock_setupImpl(&PickAndPlace_Simulation_QLab_DW.obj);

    /* End of Start for MATLABSystem: '<S2>/MATLAB System' */
  }
}

/* Model terminate function */
void PickAndPlace_Simulation_QLabs_terminate(void)
{
  e_robotics_manip_internal_Rig_T *obj_0;
  f_robotics_manip_internal_C_o_T obj_4;
  f_robotics_manip_internal_Col_T obj;
  f_robotics_manip_internal_R_o_T *obj_2;
  g_robotics_manip_internal_C_o_T *obj_3;
  g_robotics_manip_internal_Col_T *obj_1;
  real_T b_0;
  int32_T b;
  int32_T b_i;
  int32_T c;

  /* Terminate for S-Function (hil_initialize_block): '<S6>/HIL Initialize (Position Mode)' */

  /* S-Function Block: PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)/HIL Initialize (Position Mode) (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_other_outputs = 0;
    static const t_uint other_output_channels[12U] = {
      1000
      , 1001
      , 1002
      , 1003
      , 1004
      , 11000
      , 11001
      , 11002
      , 11003
      , 11005
      , 11006
      , 11007
    };

    hil_task_stop_all
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    hil_monitor_stop_all
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    is_switching = false;
    if ((PickAndPlace_Simulation_QLabs_P.HILInitializePositionMode_OOTer &&
         !is_switching) ||
        (PickAndPlace_Simulation_QLabs_P.HILInitializePositionMode_OOExi &&
         is_switching)) {
      num_final_other_outputs = 12U;
    } else {
      num_final_other_outputs = 0;
    }

    if (num_final_other_outputs > 0) {
      result = hil_write_other
        (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card,
         other_output_channels, num_final_other_outputs,
         PickAndPlace_Simulation_QLabs_P.HILInitializePositionMode_OOFin);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(PickAndPlace_Simulation_QLab_M, _rt_error_message);
      }
    }

    hil_task_delete_all
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    hil_monitor_delete_all
      (PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    hil_close(PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card);
    PickAndPlace_Simulation_QLab_DW.HILInitializePositionMode_Card = NULL;
  }

  /* Terminate for MATLABSystem: '<S5>/MATLAB System' */
  if (!PickAndPlace_Simulation_QLab_DW.obj_j.matlabCodegenIsDeleted) {
    PickAndPlace_Simulation_QLab_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.matlabCodegenIsDeleted =
      true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.matlabCodegenIsDeleted
      = true;
  }

  for (b = 0; b < 10; b++) {
    obj_0 = &PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal._pobj0[b];
    if (!obj_0->matlabCodegenIsDeleted) {
      obj_0->matlabCodegenIsDeleted = true;
    }
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.CollisionsInternal.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.CollisionsInternal.matlabCodegenIsDeleted
      = true;
    b_0 =
      PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.CollisionsInternal.Size;
    b = (int32_T)b_0;
    for (b_i = 0; b_i < b; b_i++) {
      obj =
        PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.CollisionsInternal.CollisionGeometries
        ->data[b_i];
      collisioncodegen_destructGeometry(&obj.CollisionPrimitive);
      PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal.Base.CollisionsInternal.CollisionGeometries
        ->data[b_i] = obj;
    }
  }

  for (b = 0; b < 10; b++) {
    obj_1 = &PickAndPlace_Simulation_QLab_DW.obj_j.TreeInternal._pobj0[b].
      CollisionsInternal;
    if (!obj_1->matlabCodegenIsDeleted) {
      obj_1->matlabCodegenIsDeleted = true;
      b_0 = obj_1->Size;
      c = (int32_T)b_0;
      for (b_i = 0; b_i < c; b_i++) {
        obj = obj_1->CollisionGeometries->data[b_i];
        collisioncodegen_destructGeometry(&obj.CollisionPrimitive);
        obj_1->CollisionGeometries->data[b_i] = obj;
      }
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/MATLAB System' */
  emxFreeStruct_robotics_slmanip_(&PickAndPlace_Simulation_QLab_DW.obj_j);

  /* Terminate for MATLABSystem: '<S2>/MATLAB System' */
  if (!PickAndPlace_Simulation_QLab_DW.obj.matlabCodegenIsDeleted) {
    PickAndPlace_Simulation_QLab_DW.obj.matlabCodegenIsDeleted = true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.IKInternal.matlabCodegenIsDeleted) {
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal.matlabCodegenIsDeleted = true;
    if (PickAndPlace_Simulation_QLab_DW.obj.IKInternal.isInitialized == 1) {
      PickAndPlace_Simulation_QLab_DW.obj.IKInternal.isInitialized = 2;
    }
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj5.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj5.matlabCodegenIsDeleted
      = true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj0.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj0.matlabCodegenIsDeleted
      = true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4.matlabCodegenIsDeleted
      = true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.TreeInternal.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj.TreeInternal.matlabCodegenIsDeleted =
      true;
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.TreeInternal.Base.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj.TreeInternal.Base.matlabCodegenIsDeleted
      = true;
  }

  for (b = 0; b < 10; b++) {
    obj_2 = &PickAndPlace_Simulation_QLab_DW.obj.TreeInternal._pobj2[b];
    if (!obj_2->matlabCodegenIsDeleted) {
      obj_2->matlabCodegenIsDeleted = true;
    }
  }

  for (b = 0; b < 5; b++) {
    obj_2 = &PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj2[b];
    if (!obj_2->matlabCodegenIsDeleted) {
      obj_2->matlabCodegenIsDeleted = true;
    }
  }

  if (!PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4.Base.matlabCodegenIsDeleted)
  {
    PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4.Base.matlabCodegenIsDeleted
      = true;
  }

  for (b = 0; b < 5; b++) {
    obj_2 = &PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4._pobj0[b];
    if (!obj_2->matlabCodegenIsDeleted) {
      obj_2->matlabCodegenIsDeleted = true;
    }
  }

  for (c = 0; c < 11; c++) {
    obj_3 = &PickAndPlace_Simulation_QLab_DW.obj.TreeInternal._pobj0[c];
    if (!obj_3->matlabCodegenIsDeleted) {
      obj_3->matlabCodegenIsDeleted = true;
      b_0 = obj_3->Size;
      b = (int32_T)b_0;
      for (b_i = 0; b_i < b; b_i++) {
        obj_4 = obj_3->CollisionGeometries->data[b_i];
        collisioncodegen_destructGeometry(&obj_4.CollisionPrimitive);
        obj_3->CollisionGeometries->data[b_i] = obj_4;
      }
    }
  }

  for (c = 0; c < 11; c++) {
    obj_3 = &PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj3[c];
    if (!obj_3->matlabCodegenIsDeleted) {
      obj_3->matlabCodegenIsDeleted = true;
      b_0 = obj_3->Size;
      b = (int32_T)b_0;
      for (b_i = 0; b_i < b; b_i++) {
        obj_4 = obj_3->CollisionGeometries->data[b_i];
        collisioncodegen_destructGeometry(&obj_4.CollisionPrimitive);
        obj_3->CollisionGeometries->data[b_i] = obj_4;
      }
    }
  }

  for (c = 0; c < 6; c++) {
    obj_3 = &PickAndPlace_Simulation_QLab_DW.obj.IKInternal._pobj4._pobj1[c];
    if (!obj_3->matlabCodegenIsDeleted) {
      obj_3->matlabCodegenIsDeleted = true;
      b_0 = obj_3->Size;
      b = (int32_T)b_0;
      for (b_i = 0; b_i < b; b_i++) {
        obj_4 = obj_3->CollisionGeometries->data[b_i];
        collisioncodegen_destructGeometry(&obj_4.CollisionPrimitive);
        obj_3->CollisionGeometries->data[b_i] = obj_4;
      }
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/MATLAB System' */
  emxFreeStruct_robotics_slmani_o(&PickAndPlace_Simulation_QLab_DW.obj);
}
