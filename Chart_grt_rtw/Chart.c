/*
 * Chart.c
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

#include "Chart.h"
#include "rtwtypes.h"
#include "Chart_private.h"
#include <math.h>
#include <string.h>

/* Named constants for Chart: '<Root>/Chart' */
#define Chart_IN_CloseGripper          ((uint8_T)1U)
#define Chart_IN_GotoHome              ((uint8_T)2U)
#define Chart_IN_GotoPick              ((uint8_T)3U)
#define Chart_IN_GotoPlace             ((uint8_T)4U)
#define Chart_IN_NO_ACTIVE_CHILD       ((uint8_T)0U)
#define Chart_IN_OpenGripper           ((uint8_T)5U)
#define Chart_IN_Wait                  ((uint8_T)6U)

/* Block signals (default storage) */
B_Chart_T Chart_B;

/* Block states (default storage) */
DW_Chart_T Chart_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Chart_T Chart_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Chart_T Chart_Y;

/* Real-time model */
static RT_MODEL_Chart_T Chart_M_;
RT_MODEL_Chart_T *const Chart_M = &Chart_M_;

/* System initialize for function-call system: '<S1>/closeEnough' */
void Chart_closeEnough_Init(B_closeEnough_Chart_T *localB, P_closeEnough_Chart_T
  *localP)
{
  /* SystemInitialize for RelationalOperator: '<S2>/LessThanOrEqual' incorporates:
   *  Outport: '<S2>/flag'
   */
  localB->LessThanOrEqual = localP->flag_Y0;
}

/* Output and update for function-call system: '<S1>/closeEnough' */
void Chart_closeEnough(const real_T rtu_a[3], const real_T rtu_b[3], real_T
  rtu_t, B_closeEnough_Chart_T *localB)
{
  real_T rtb_Sum_0;
  real_T rtb_Sum_1;

  /* Sum: '<S2>/Sum' */
  rtb_Sum_1 = rtu_a[0] - rtu_b[0];

  /* DotProduct: '<S4>/Dot Product' incorporates:
   *  Sum: '<S2>/Sum'
   */
  rtb_Sum_0 = rtb_Sum_1 * rtb_Sum_1;

  /* Sum: '<S2>/Sum' */
  rtb_Sum_1 = rtu_a[1] - rtu_b[1];

  /* DotProduct: '<S4>/Dot Product' incorporates:
   *  Sum: '<S2>/Sum'
   */
  rtb_Sum_0 += rtb_Sum_1 * rtb_Sum_1;

  /* Sum: '<S2>/Sum' */
  rtb_Sum_1 = rtu_a[2] - rtu_b[2];

  /* RelationalOperator: '<S2>/LessThanOrEqual' incorporates:
   *  DotProduct: '<S4>/Dot Product'
   *  Sqrt: '<S3>/Sqrt'
   *  Sum: '<S2>/Sum'
   */
  localB->LessThanOrEqual = (sqrt(rtb_Sum_1 * rtb_Sum_1 + rtb_Sum_0) <= rtu_t);
}

/* Model step function */
void Chart_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/home'
   *  Inport: '<Root>/measPosition'
   *  Inport: '<Root>/pick2'
   *  Inport: '<Root>/place2'
   *  Inport: '<Root>/start'
   *  Inport: '<Root>/threshold'
   *  Outport: '<Root>/gripper'
   */
  if (Chart_DW.temporalCounter_i1 < 1023) {
    Chart_DW.temporalCounter_i1++;
  }

  if (Chart_DW.is_active_c3_Chart == 0) {
    Chart_DW.is_active_c3_Chart = 1U;
    Chart_DW.temporalCounter_i1 = 0U;
    Chart_DW.is_c3_Chart = Chart_IN_Wait;

    /* Outport: '<Root>/gripper' */
    Chart_Y.gripper = 0.0;

    /* Outport: '<Root>/targetPosition' incorporates:
     *  Inport: '<Root>/home'
     */
    Chart_Y.targetPosition[0] = Chart_U.home[0];
    Chart_Y.targetPosition[1] = Chart_U.home[1];
    Chart_Y.targetPosition[2] = Chart_U.home[2];
  } else {
    switch (Chart_DW.is_c3_Chart) {
     case Chart_IN_CloseGripper:
      if (Chart_DW.temporalCounter_i1 >= 400) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_GotoHome;

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         */
        Chart_Y.targetPosition[0] = Chart_U.home[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.home[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         *  Inport: '<Root>/measPosition'
         */
        Chart_Y.targetPosition[1] = Chart_U.home[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.home[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         *  Inport: '<Root>/measPosition'
         */
        Chart_Y.targetPosition[2] = Chart_U.home[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.home[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      } else {
        /* Outport: '<Root>/gripper' */
        Chart_Y.gripper = 1.0;
      }
      break;

     case Chart_IN_GotoHome:
      if ((Chart_Y.gripper != 0.0) && (Chart_DW.temporalCounter_i1 >= 400) &&
          Chart_DW.flag) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_GotoPlace;

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/place2'
         */
        Chart_Y.targetPosition[0] = Chart_U.place2[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.place2[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/place2'
         */
        Chart_Y.targetPosition[1] = Chart_U.place2[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.place2[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/place2'
         */
        Chart_Y.targetPosition[2] = Chart_U.place2[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.place2[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      } else if ((Chart_DW.temporalCounter_i1 >= 400) && Chart_DW.flag) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_GotoPick;

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[0] = Chart_U.pick2[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.pick2[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[1] = Chart_U.pick2[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.pick2[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[2] = Chart_U.pick2[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.pick2[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      } else {
        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         */
        Chart_Y.targetPosition[0] = Chart_U.home[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.home[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         *  Inport: '<Root>/measPosition'
         */
        Chart_Y.targetPosition[1] = Chart_U.home[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.home[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         *  Inport: '<Root>/measPosition'
         */
        Chart_Y.targetPosition[2] = Chart_U.home[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.home[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      }
      break;

     case Chart_IN_GotoPick:
      if ((Chart_DW.temporalCounter_i1 >= 400) && Chart_DW.flag) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_CloseGripper;

        /* Outport: '<Root>/gripper' */
        Chart_Y.gripper = 1.0;
      } else {
        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[0] = Chart_U.pick2[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.pick2[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[1] = Chart_U.pick2[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.pick2[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[2] = Chart_U.pick2[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.pick2[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      }
      break;

     case Chart_IN_GotoPlace:
      if ((Chart_DW.temporalCounter_i1 >= 600) && Chart_DW.flag) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_OpenGripper;

        /* Outport: '<Root>/gripper' */
        Chart_Y.gripper = 0.0;
      } else {
        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/place2'
         */
        Chart_Y.targetPosition[0] = Chart_U.place2[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.place2[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/place2'
         */
        Chart_Y.targetPosition[1] = Chart_U.place2[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.place2[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/place2'
         */
        Chart_Y.targetPosition[2] = Chart_U.place2[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.place2[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      }
      break;

     case Chart_IN_OpenGripper:
      if (Chart_DW.temporalCounter_i1 >= 400) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_GotoHome;

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         */
        Chart_Y.targetPosition[0] = Chart_U.home[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.home[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         *  Inport: '<Root>/measPosition'
         */
        Chart_Y.targetPosition[1] = Chart_U.home[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.home[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         *  Inport: '<Root>/measPosition'
         */
        Chart_Y.targetPosition[2] = Chart_U.home[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.home[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      } else {
        /* Outport: '<Root>/gripper' */
        Chart_Y.gripper = 0.0;
      }
      break;

     default:
      /* case IN_Wait: */
      if ((Chart_U.start != 0.0) && (Chart_DW.temporalCounter_i1 >= 400)) {
        Chart_DW.temporalCounter_i1 = 0U;
        Chart_DW.is_c3_Chart = Chart_IN_GotoPick;

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[0] = Chart_U.pick2[0];
        Chart_B.a[0] = Chart_U.measPosition[0];
        Chart_B.b[0] = Chart_U.pick2[0];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[1] = Chart_U.pick2[1];
        Chart_B.a[1] = Chart_U.measPosition[1];
        Chart_B.b[1] = Chart_U.pick2[1];

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/measPosition'
         *  Inport: '<Root>/pick2'
         */
        Chart_Y.targetPosition[2] = Chart_U.pick2[2];
        Chart_B.a[2] = Chart_U.measPosition[2];
        Chart_B.b[2] = Chart_U.pick2[2];
        Chart_B.t = Chart_U.threshold;

        /* Outputs for Function Call SubSystem: '<S1>/closeEnough' */
        Chart_closeEnough(Chart_B.a, Chart_B.b, Chart_B.t, &Chart_B.closeEnough);

        /* End of Outputs for SubSystem: '<S1>/closeEnough' */
        Chart_DW.flag = Chart_B.closeEnough.LessThanOrEqual;
      } else {
        /* Outport: '<Root>/gripper' */
        Chart_Y.gripper = 0.0;

        /* Outport: '<Root>/targetPosition' incorporates:
         *  Inport: '<Root>/home'
         */
        Chart_Y.targetPosition[0] = Chart_U.home[0];
        Chart_Y.targetPosition[1] = Chart_U.home[1];
        Chart_Y.targetPosition[2] = Chart_U.home[2];
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(Chart_M->rtwLogInfo, (&Chart_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(Chart_M)!=-1) &&
        !((rtmGetTFinal(Chart_M)-Chart_M->Timing.taskTime0) >
          Chart_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Chart_M, "Simulation finished");
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
  if (!(++Chart_M->Timing.clockTick0)) {
    ++Chart_M->Timing.clockTickH0;
  }

  Chart_M->Timing.taskTime0 = Chart_M->Timing.clockTick0 *
    Chart_M->Timing.stepSize0 + Chart_M->Timing.clockTickH0 *
    Chart_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Chart_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Chart_M, 0,
                sizeof(RT_MODEL_Chart_T));
  rtmSetTFinal(Chart_M, -1);
  Chart_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Chart_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Chart_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Chart_M->rtwLogInfo, (NULL));
    rtliSetLogT(Chart_M->rtwLogInfo, "tout");
    rtliSetLogX(Chart_M->rtwLogInfo, "");
    rtliSetLogXFinal(Chart_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Chart_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Chart_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Chart_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Chart_M->rtwLogInfo, 1);
    rtliSetLogY(Chart_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Chart_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Chart_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &Chart_B), 0,
                sizeof(B_Chart_T));

  /* states (dwork) */
  (void) memset((void *)&Chart_DW, 0,
                sizeof(DW_Chart_T));

  /* external inputs */
  (void)memset(&Chart_U, 0, sizeof(ExtU_Chart_T));

  /* external outputs */
  (void)memset(&Chart_Y, 0, sizeof(ExtY_Chart_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Chart_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Chart_M), Chart_M->Timing.stepSize0, (&rtmGetErrorStatus(Chart_M)));
  Chart_DW.temporalCounter_i1 = 0U;

  /* SystemInitialize for Outport: '<Root>/targetPosition' */
  Chart_Y.targetPosition[0] = 0.0;
  Chart_Y.targetPosition[1] = 0.0;
  Chart_Y.targetPosition[2] = 0.0;

  /* SystemInitialize for Outport: '<Root>/gripper' */
  Chart_Y.gripper = 0.0;
  Chart_DW.flag = false;
  Chart_DW.is_active_c3_Chart = 0U;
  Chart_DW.is_c3_Chart = Chart_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/Chart' incorporates:
   *  SubSystem: '<S1>/closeEnough'
   */
  Chart_closeEnough_Init(&Chart_B.closeEnough, &Chart_P.closeEnough);
}

/* Model terminate function */
void Chart_terminate(void)
{
  /* (no terminate code required) */
}
