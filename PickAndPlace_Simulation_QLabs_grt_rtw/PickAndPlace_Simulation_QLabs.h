/*
 * PickAndPlace_Simulation_QLabs.h
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

#ifndef PickAndPlace_Simulation_QLabs_h_
#define PickAndPlace_Simulation_QLabs_h_
#ifndef PickAndPlace_Simulation_QLabs_COMMON_INCLUDES_
#define PickAndPlace_Simulation_QLabs_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "hil.h"
#include "quanser_messages.h"
#include "coder_posix_time.h"
#include "collisioncodegen_api.hpp"
#include "quanser_extern.h"
#endif                      /* PickAndPlace_Simulation_QLabs_COMMON_INCLUDES_ */

#include "PickAndPlace_Simulation_QLabs_types.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <float.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#define PickAndPlace_Simulation_QLabs_M (PickAndPlace_Simulation_QLab_M)

/* Block signals for system '<S1>/closeEnough' */
typedef struct {
  boolean_T LessThanOrEqual;           /* '<S7>/LessThanOrEqual' */
} B_closeEnough_PickAndPlace_Si_T;

/* Block signals (default storage) */
typedef struct {
  real_T targetPosition[3];            /* '<Root>/Chart' */
  real_T gripper;                      /* '<Root>/Chart' */
  real_T a[3];                         /* '<Root>/Chart' */
  real_T b[3];                         /* '<Root>/Chart' */
  real_T t;                            /* '<Root>/Chart' */
  B_closeEnough_PickAndPlace_Si_T closeEnough;/* '<S1>/closeEnough' */
} B_PickAndPlace_Simulation_QLa_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  robotics_slmanip_internal_b_o_T obj; /* '<S2>/MATLAB System' */
  robotics_slmanip_internal_blo_T obj_j;/* '<S5>/MATLAB System' */
  real_T freq;                         /* '<S2>/MATLAB System' */
  t_card HILInitializePositionMode_Card;
                                     /* '<S6>/HIL Initialize (Position Mode)' */
  t_task HILReadTimebase_Task;         /* '<S6>/HIL Read Timebase' */
  void *HILWrite_PWORK;                /* '<S6>/HIL Write' */
  uint32_T method;                     /* '<S5>/MATLAB System' */
  uint32_T state;                      /* '<S5>/MATLAB System' */
  uint32_T state_g[2];                 /* '<S5>/MATLAB System' */
  uint32_T state_k[625];               /* '<S5>/MATLAB System' */
  uint32_T method_l;                   /* '<S2>/MATLAB System' */
  uint32_T state_c;                    /* '<S2>/MATLAB System' */
  uint32_T state_kf[2];                /* '<S2>/MATLAB System' */
  uint32_T state_i[625];               /* '<S2>/MATLAB System' */
  uint32_T method_p;                   /* '<S2>/MATLAB System' */
  uint32_T state_b[2];                 /* '<S2>/MATLAB System' */
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_PickAndPlace_Simul;/* '<Root>/Chart' */
  uint8_T is_c3_PickAndPlace_Simulation_Q;/* '<Root>/Chart' */
  boolean_T objisempty;                /* '<S5>/MATLAB System' */
  boolean_T method_not_empty;          /* '<S5>/MATLAB System' */
  boolean_T state_not_empty;           /* '<S5>/MATLAB System' */
  boolean_T state_not_empty_g;         /* '<S5>/MATLAB System' */
  boolean_T state_not_empty_p;         /* '<S5>/MATLAB System' */
  boolean_T objisempty_f;              /* '<S2>/MATLAB System' */
  boolean_T method_not_empty_a;        /* '<S2>/MATLAB System' */
  boolean_T state_not_empty_k;         /* '<S2>/MATLAB System' */
  boolean_T state_not_empty_h;         /* '<S2>/MATLAB System' */
  boolean_T state_not_empty_l;         /* '<S2>/MATLAB System' */
  boolean_T freq_not_empty;            /* '<S2>/MATLAB System' */
  boolean_T method_not_empty_f;        /* '<S2>/MATLAB System' */
  boolean_T state_not_empty_d;         /* '<S2>/MATLAB System' */
  boolean_T flag;                      /* '<Root>/Chart' */
} DW_PickAndPlace_Simulation_QL_T;

/* Parameters for system: '<S1>/closeEnough' */
struct P_closeEnough_PickAndPlace_Si_T_ {
  boolean_T flag_Y0;                   /* Computed Parameter: flag_Y0
                                        * Referenced by: '<S7>/flag'
                                        */
};

/* Parameters (default storage) */
struct P_PickAndPlace_Simulation_QLa_T_ {
  real_T ColorConstant_color[3];       /* Mask Parameter: ColorConstant_color
                                        * Referenced by: '<S10>/Constant'
                                        */
  uint32_T HILWrite_other_channels[8];/* Mask Parameter: HILWrite_other_channels
                                       * Referenced by: '<S6>/HIL Write'
                                       */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant7_Value;              /* Expression: 3
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T HILInitializePositionMode_OOTer;
                                   /* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                                    */
  real_T HILInitializePositionMode_OOExi;
                                  /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                                   */
  real_T HILInitializePositionMode_AOFin;/* Expression: final_analog_outputs
                                          * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                                          */
  real_T HILInitializePositionMode_OOFin[12];/* Expression: final_other_outputs
                                              * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                                              */
  real_T Constant9_Value[16];
                           /* Expression: [1 0 0 0;0 1 0 0; 0 0 1 0.15; 0 0 0 1]
                            * Referenced by: '<S3>/Constant9'
                            */
  real_T E_P_GE_Value[3];              /* Expression: [0;0;-0.15]
                                        * Referenced by: '<S4>/E_P_GE'
                                        */
  real_T Constant2_Value[3];           /* Expression:  [0.65;0;0.29]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value[3];           /* Expression: [-0.45;0.45;0.35]
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value[3];           /* Expression: [0.45;0;0.49]
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant9_Value_h[3];         /* Expression:  [0.65;0.08;0.29]
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant12_Value[3];          /* Expression:  [0.65;-0.08;0.29]
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant10_Value[3];          /* Expression: [-0.45;0.37;0.35]
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant11_Value[3];          /* Expression: [-0.45;0.53;0.35]
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T m_Value;                      /* Expression: 0.01
                                        * Referenced by: '<Root>/(m)'
                                        */
  real_T Constant10_Value_h[4];        /* Expression: [0 0 0 1]
                                        * Referenced by: '<S4>/Constant10'
                                        */
  real_T Constant6_Value[6];           /* Expression: [0 0 0 1 1 1]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  int32_T HILReadTimebase_Clock;    /* Computed Parameter: HILReadTimebase_Clock
                                     * Referenced by: '<S6>/HIL Read Timebase'
                                     */
  uint32_T HILReadTimebase_SamplesInBuffer;
                          /* Computed Parameter: HILReadTimebase_SamplesInBuffer
                           * Referenced by: '<S6>/HIL Read Timebase'
                           */
  uint32_T HILReadTimebase_OtherChannels[5];
                            /* Computed Parameter: HILReadTimebase_OtherChannels
                             * Referenced by: '<S6>/HIL Read Timebase'
                             */
  boolean_T HILInitializePositionMode_Activ;
                          /* Computed Parameter: HILInitializePositionMode_Activ
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_AOTer;
                          /* Computed Parameter: HILInitializePositionMode_AOTer
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_AOExi;
                          /* Computed Parameter: HILInitializePositionMode_AOExi
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_DOTer;
                          /* Computed Parameter: HILInitializePositionMode_DOTer
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_DOExi;
                          /* Computed Parameter: HILInitializePositionMode_DOExi
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_POTer;
                          /* Computed Parameter: HILInitializePositionMode_POTer
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_POExi;
                          /* Computed Parameter: HILInitializePositionMode_POExi
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILInitializePositionMode_DOFin;
                          /* Computed Parameter: HILInitializePositionMode_DOFin
                           * Referenced by: '<S6>/HIL Initialize (Position Mode)'
                           */
  boolean_T HILReadTimebase_Active;/* Computed Parameter: HILReadTimebase_Active
                                    * Referenced by: '<S6>/HIL Read Timebase'
                                    */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S6>/HIL Write'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch1'
                              */
  uint8_T HILReadTimebase_OverflowMode;
                             /* Computed Parameter: HILReadTimebase_OverflowMode
                              * Referenced by: '<S6>/HIL Read Timebase'
                              */
  uint8_T Automate_CurrentSetting;/* Computed Parameter: Automate_CurrentSetting
                                   * Referenced by: '<Root>/Automate?'
                                   */
  P_closeEnough_PickAndPlace_Si_T closeEnough;/* '<S1>/closeEnough' */
};

/* Real-time Model Data Structure */
struct tag_RTM_PickAndPlace_Simulati_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_PickAndPlace_Simulation_QLa_T PickAndPlace_Simulation_QLabs_P;

/* Block signals (default storage) */
extern B_PickAndPlace_Simulation_QLa_T PickAndPlace_Simulation_QLabs_B;

/* Block states (default storage) */
extern DW_PickAndPlace_Simulation_QL_T PickAndPlace_Simulation_QLab_DW;

/* Model entry point functions */
extern void PickAndPlace_Simulation_QLabs_initialize(void);
extern void PickAndPlace_Simulation_QLabs_step(void);
extern void PickAndPlace_Simulation_QLabs_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PickAndPlace_Simulat_T *const PickAndPlace_Simulation_QLab_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PickAndPlace_Simulation_QLabs'
 * '<S1>'   : 'PickAndPlace_Simulation_QLabs/Chart'
 * '<S2>'   : 'PickAndPlace_Simulation_QLabs/End-Effector Transform to Joint Space'
 * '<S3>'   : 'PickAndPlace_Simulation_QLabs/End-Effector to Gripper'
 * '<S4>'   : 'PickAndPlace_Simulation_QLabs/Gripper to End-Effector'
 * '<S5>'   : 'PickAndPlace_Simulation_QLabs/Joint Space to End-Effector Transform'
 * '<S6>'   : 'PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)'
 * '<S7>'   : 'PickAndPlace_Simulation_QLabs/Chart/closeEnough'
 * '<S8>'   : 'PickAndPlace_Simulation_QLabs/Chart/closeEnough/Norm'
 * '<S9>'   : 'PickAndPlace_Simulation_QLabs/Chart/closeEnough/Norm/Norm Squared'
 * '<S10>'  : 'PickAndPlace_Simulation_QLabs/QArm - Simulation (Quanser Interactive Labs)/Color Constant'
 */
#endif                                 /* PickAndPlace_Simulation_QLabs_h_ */
