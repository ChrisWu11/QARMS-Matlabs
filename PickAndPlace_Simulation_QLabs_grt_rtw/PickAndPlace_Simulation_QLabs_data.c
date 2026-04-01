/*
 * PickAndPlace_Simulation_QLabs_data.c
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

/* Block parameters (default storage) */
P_PickAndPlace_Simulation_QLa_T PickAndPlace_Simulation_QLabs_P = {
  /* Mask Parameter: ColorConstant_color
   * Referenced by: '<S10>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S6>/HIL Write'
   */
  { 1000U, 1001U, 1002U, 1003U, 1004U, 11005U, 11006U, 11007U },

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/Constant7'
   */
  3.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant8'
   */
  0.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0 },

  /* Expression: [1 0 0 0;0 1 0 0; 0 0 1 0.15; 0 0 0 1]
   * Referenced by: '<S3>/Constant9'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.15,
    1.0 },

  /* Expression: [0;0;-0.15]
   * Referenced by: '<S4>/E_P_GE'
   */
  { 0.0, 0.0, -0.15 },

  /* Expression:  [0.65;0;0.29]
   * Referenced by: '<Root>/Constant2'
   */
  { 0.65, 0.0, 0.29 },

  /* Expression: [-0.45;0.45;0.35]
   * Referenced by: '<Root>/Constant3'
   */
  { -0.45, 0.45, 0.35 },

  /* Expression: [0.45;0;0.49]
   * Referenced by: '<Root>/Constant4'
   */
  { 0.45, 0.0, 0.49 },

  /* Expression:  [0.65;0.08;0.29]
   * Referenced by: '<Root>/Constant9'
   */
  { 0.65, 0.08, 0.29 },

  /* Expression:  [0.65;-0.08;0.29]
   * Referenced by: '<Root>/Constant12'
   */
  { 0.65, -0.08, 0.29 },

  /* Expression: [-0.45;0.37;0.35]
   * Referenced by: '<Root>/Constant10'
   */
  { -0.45, 0.37, 0.35 },

  /* Expression: [-0.45;0.53;0.35]
   * Referenced by: '<Root>/Constant11'
   */
  { -0.45, 0.53, 0.35 },

  /* Expression: 0.01
   * Referenced by: '<Root>/(m)'
   */
  0.01,

  /* Expression: [0 0 0 1]
   * Referenced by: '<S4>/Constant10'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /* Expression: [0 0 0 1 1 1]
   * Referenced by: '<Root>/Constant6'
   */
  { 0.0, 0.0, 0.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: HILReadTimebase_Clock
   * Referenced by: '<S6>/HIL Read Timebase'
   */
  0,

  /* Computed Parameter: HILReadTimebase_SamplesInBuffer
   * Referenced by: '<S6>/HIL Read Timebase'
   */
  200U,

  /* Computed Parameter: HILReadTimebase_OtherChannels
   * Referenced by: '<S6>/HIL Read Timebase'
   */
  { 1000U, 1001U, 1002U, 1003U, 1004U },

  /* Computed Parameter: HILInitializePositionMode_Activ
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  true,

  /* Computed Parameter: HILInitializePositionMode_AOTer
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILInitializePositionMode_AOExi
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILInitializePositionMode_DOTer
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILInitializePositionMode_DOExi
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILInitializePositionMode_POTer
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILInitializePositionMode_POExi
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILInitializePositionMode_DOFin
   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
   */
  false,

  /* Computed Parameter: HILReadTimebase_Active
   * Referenced by: '<S6>/HIL Read Timebase'
   */
  true,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S6>/HIL Write'
   */
  true,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: HILReadTimebase_OverflowMode
   * Referenced by: '<S6>/HIL Read Timebase'
   */
  5U,

  /* Computed Parameter: Automate_CurrentSetting
   * Referenced by: '<Root>/Automate?'
   */
  1U,

  /* Start of '<S1>/closeEnough' */
  {
    /* Computed Parameter: flag_Y0
     * Referenced by: '<S7>/flag'
     */
    false
  }
  /* End of '<S1>/closeEnough' */
};
