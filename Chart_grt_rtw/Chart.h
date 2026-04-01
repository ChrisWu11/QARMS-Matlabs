/*
 * Chart.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Chart".
 *
 * Model version              : 8.0
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Mar  5 21:00:11 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Chart_h_
#define Chart_h_
#ifndef Chart_COMMON_INCLUDES_
#define Chart_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* Chart_COMMON_INCLUDES_ */

#include "Chart_types.h"
#include <float.h>
#include <string.h>
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

/* Block signals for system '<S1>/closeEnough' */
typedef struct {
  boolean_T LessThanOrEqual;           /* '<S2>/LessThanOrEqual' */
} B_closeEnough_Chart_T;

/* Block signals (default storage) */
typedef struct {
  real_T a[3];                         /* '<Root>/Chart' */
  real_T b[3];                         /* '<Root>/Chart' */
  real_T t;                            /* '<Root>/Chart' */
  B_closeEnough_Chart_T closeEnough;   /* '<S1>/closeEnough' */
} B_Chart_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_Chart;          /* '<Root>/Chart' */
  uint8_T is_c3_Chart;                 /* '<Root>/Chart' */
  boolean_T flag;                      /* '<Root>/Chart' */
} DW_Chart_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T start;                        /* '<Root>/start' */
  real_T pick1[3];                     /* '<Root>/pick1' */
  real_T pick2[3];                     /* '<Root>/pick2' */
  real_T pick3[3];                     /* '<Root>/pick3' */
  real_T place1[3];                    /* '<Root>/place1' */
  real_T place2[3];                    /* '<Root>/place2' */
  real_T place3[3];                    /* '<Root>/place3' */
  real_T home[3];                      /* '<Root>/home' */
  real_T threshold;                    /* '<Root>/threshold' */
  real_T measPosition[3];              /* '<Root>/measPosition' */
} ExtU_Chart_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T targetPosition[3];            /* '<Root>/targetPosition' */
  real_T gripper;                      /* '<Root>/gripper' */
} ExtY_Chart_T;

/* Parameters for system: '<S1>/closeEnough' */
struct P_closeEnough_Chart_T_ {
  boolean_T flag_Y0;                   /* Computed Parameter: flag_Y0
                                        * Referenced by: '<S2>/flag'
                                        */
};

/* Parameters (default storage) */
struct P_Chart_T_ {
  P_closeEnough_Chart_T closeEnough;   /* '<S1>/closeEnough' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Chart_T {
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
extern P_Chart_T Chart_P;

/* Block signals (default storage) */
extern B_Chart_T Chart_B;

/* Block states (default storage) */
extern DW_Chart_T Chart_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Chart_T Chart_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Chart_T Chart_Y;

/* Model entry point functions */
extern void Chart_initialize(void);
extern void Chart_step(void);
extern void Chart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Chart_T *const Chart_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('PickAndPlace_Simulation_QLabs/Chart')    - opens subsystem PickAndPlace_Simulation_QLabs/Chart
 * hilite_system('PickAndPlace_Simulation_QLabs/Chart/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PickAndPlace_Simulation_QLabs'
 * '<S1>'   : 'PickAndPlace_Simulation_QLabs/Chart'
 * '<S2>'   : 'PickAndPlace_Simulation_QLabs/Chart/closeEnough'
 * '<S3>'   : 'PickAndPlace_Simulation_QLabs/Chart/closeEnough/Norm'
 * '<S4>'   : 'PickAndPlace_Simulation_QLabs/Chart/closeEnough/Norm/Norm Squared'
 */
#endif                                 /* Chart_h_ */
