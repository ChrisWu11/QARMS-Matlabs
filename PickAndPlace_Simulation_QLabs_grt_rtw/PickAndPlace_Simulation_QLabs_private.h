/*
 * PickAndPlace_Simulation_QLabs_private.h
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

#ifndef PickAndPlace_Simulation_QLabs_private_h_
#define PickAndPlace_Simulation_QLabs_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "PickAndPlace_Simulation_QLabs.h"
#include "PickAndPlace_Simulation_QLabs_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern int32_T div_s32(int32_T numerator, int32_T denominator);
extern void PickAndPlace_S_closeEnough_Init(B_closeEnough_PickAndPlace_Si_T
  *localB, P_closeEnough_PickAndPlace_Si_T *localP);
extern void PickAndPlace_Simula_closeEnough(const real_T rtu_a[3], const real_T
  rtu_b[3], real_T rtu_t, B_closeEnough_PickAndPlace_Si_T *localB);

#endif                            /* PickAndPlace_Simulation_QLabs_private_h_ */
