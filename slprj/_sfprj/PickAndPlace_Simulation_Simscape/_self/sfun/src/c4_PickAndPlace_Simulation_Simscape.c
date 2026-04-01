/* Include files */

#include "PickAndPlace_Simulation_Simscape_sfun.h"
#include "c4_PickAndPlace_Simulation_Simscape.h"
#include <string.h>
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 5,  /* lineNo */
  "MATLAB Function2",                  /* fcnName */
  "#PickAndPlace_Simulation_Simscape:134"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 8,/* lineNo */
  "MATLAB Function2",                  /* fcnName */
  "#PickAndPlace_Simulation_Simscape:134"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 45,/* lineNo */
  "sscanf",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\sscanf.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 54,/* lineNo */
  "sscanf",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\sscanf.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 79,/* lineNo */
  "scanf",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+io\\scanf.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 29,/* lineNo */
  9,                                   /* colNo */
  "scanf",                             /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+io\\scanf.m"/* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 90,/* lineNo */
  37,                                  /* colNo */
  "scanf",                             /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+io\\scanf.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 27,/* lineNo */
  9,                                   /* colNo */
  "scanf",                             /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+io\\scanf.m"/* pName */
};

static emlrtBCInfo c4_emlrtBCI = { 0,  /* iFirst */
  MAX_int32_T,                         /* iLast */
  7,                                   /* lineNo */
  4,                                   /* colNo */
  "vals",                              /* aName */
  "MATLAB Function2",                  /* fName */
  "#PickAndPlace_Simulation_Simscape:134",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  16,                                  /* colNo */
  "vals",                              /* aName */
  "MATLAB Function2",                  /* fName */
  "#PickAndPlace_Simulation_Simscape:134",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  17,                                  /* colNo */
  "vals",                              /* aName */
  "MATLAB Function2",                  /* fName */
  "#PickAndPlace_Simulation_Simscape:134",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void initialize_params_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void mdl_start_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void mdl_terminate_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void enable_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void disable_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void sf_gateway_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void ext_mode_exec_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void set_sim_state_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_st);
static void c4_indexShapeCheck
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, int32_T c4_matrixSize);
static real_T c4_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_nullptr, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_nullptr, const char_T *c4_identifier, real_T c4_y[3]);
static void c4_d_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[3]);
static void c4_array_real_T_SetSize
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, c4_coder_array_real_T *c4_coderArray, const emlrtRTEInfo
   *c4_srcLocation, int32_T c4_size0);
static void c4_array_real_T_Constructor
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance,
   c4_coder_array_real_T *c4_coderArray);
static void c4_array_real_T_Destructor
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance,
   c4_coder_array_real_T *c4_coderArray);
static void init_dsm_address_info
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_doneDoubleBufferReInit = false;
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c4_JITStateAnimation[0],
                        &chartInstance->c4_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    25U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "c4_PickAndPlace_Simulation_Simscape", 0, -1, 211);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 98, 117, 159,
                    206, false);
  covrtEmlRelationalInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 101,
    117, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  static real_T c4_dv[3] = { 0.5, 0.0, 0.2 };

  c4_cell_0 c4_outCell;
  c4_cell_0 c4_tmpOut;
  c4_coder_array_real_T c4_bigA;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c4_b_grip;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  int32_T c4_b_bigA;
  int32_T c4_b_numRead;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_numRead;
  int32_T c4_ptrLoc;
  int32_T c4_sumptrLoc;
  char_T c4_fileString[17];
  char_T c4_inStr[17];
  char_T c4_str[16];
  uint8_T c4_varargin_1[16];
  boolean_T c4_exitg1;
  boolean_T c4_incompleteRead;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  if (covrtIsSigCovEnabledFcn(chartInstance->c4_covrtInstance, 0U) != 0U) {
    for (c4_i = 0; c4_i < 16; c4_i++) {
      covrtSigUpdateFcnAssumingCovEnabled(chartInstance->c4_covrtInstance, 0U,
        (real_T)(*chartInstance->c4_u)[c4_i]);
    }
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  for (c4_i1 = 0; c4_i1 < 16; c4_i1++) {
    c4_varargin_1[c4_i1] = (*chartInstance->c4_u)[c4_i1];
  }

  for (c4_i2 = 0; c4_i2 < 16; c4_i2++) {
    c4_str[c4_i2] = (char_T)(int8_T)c4_varargin_1[c4_i2];
  }

  c4_b_st.site = &c4_emlrtRSI;
  for (c4_i3 = 0; c4_i3 < 16; c4_i3++) {
    c4_inStr[c4_i3] = c4_str[c4_i3];
  }

  c4_inStr[16] = '\x00';
  c4_c_st.site = &c4_c_emlrtRSI;
  c4_d_st.site = &c4_d_emlrtRSI;
  c4_array_real_T_Constructor(chartInstance, &c4_bigA);
  c4_array_real_T_SetSize(chartInstance, &c4_d_st, &c4_bigA, &c4_emlrtRTEI, 0);
  c4_numRead = 1;
  c4_sumptrLoc = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && ((c4_numRead > 0) && (!(c4_sumptrLoc >= 17)))) {
    for (c4_i5 = 0; c4_i5 < 17; c4_i5++) {
      c4_fileString[c4_i5] = c4_inStr[c4_i5];
    }

    c4_ptrLoc = c4_sumptrLoc;
    c4_outCell.f1 = 0.0;
    c4_outCell.f2 = 0.0;
    c4_outCell.f3 = 0.0;
    c4_outCell.f4 = 0;
    c4_outCell.f5 = -1;
    c4_tmpOut = c4_outCell;
    c4_tmpOut.f5 = -1;
    c4_b_numRead = sscanf(&c4_fileString[c4_ptrLoc], "%lf,%lf,%lf,%d%n",
                          &c4_tmpOut.f1, &c4_tmpOut.f2, &c4_tmpOut.f3,
                          &c4_tmpOut.f4, &c4_tmpOut.f5);
    if (c4_tmpOut.f5 != -1) {
      c4_b_numRead++;
    }

    c4_numRead = c4_b_numRead;
    c4_incompleteRead = (c4_b_numRead == 0);
    if (c4_b_numRead > 0) {
      c4_d1 = c4_tmpOut.f1;
      c4_i12 = c4_bigA.size[0];
      c4_array_real_T_SetSize(chartInstance, &c4_d_st, &c4_bigA, &c4_b_emlrtRTEI,
        c4_bigA.size[0] + 1);
      c4_bigA.vector.data[c4_i12] = c4_d1;
      if (c4_b_numRead >= 2) {
        c4_d2 = c4_tmpOut.f2;
        c4_i13 = c4_bigA.size[0];
        c4_array_real_T_SetSize(chartInstance, &c4_d_st, &c4_bigA,
          &c4_b_emlrtRTEI, c4_bigA.size[0] + 1);
        c4_bigA.vector.data[c4_i13] = c4_d2;
      } else {
        c4_incompleteRead = true;
      }

      if (c4_b_numRead >= 3) {
        c4_d3 = c4_tmpOut.f3;
        c4_i14 = c4_bigA.size[0];
        c4_array_real_T_SetSize(chartInstance, &c4_d_st, &c4_bigA,
          &c4_b_emlrtRTEI, c4_bigA.size[0] + 1);
        c4_bigA.vector.data[c4_i14] = c4_d3;
      } else {
        c4_incompleteRead = true;
      }

      if (c4_b_numRead >= 4) {
        c4_d4 = (real_T)c4_tmpOut.f4;
        c4_i15 = c4_bigA.size[0];
        c4_array_real_T_SetSize(chartInstance, &c4_d_st, &c4_bigA,
          &c4_b_emlrtRTEI, c4_bigA.size[0] + 1);
        c4_bigA.vector.data[c4_i15] = c4_d4;
      } else {
        c4_incompleteRead = true;
      }

      if (c4_b_numRead >= 5) {
        c4_sumptrLoc += c4_tmpOut.f5;
      } else {
        c4_incompleteRead = true;
      }
    }

    if (c4_incompleteRead) {
      c4_exitg1 = true;
    }
  }

  c4_i4 = c4_bigA.size[0];
  if (c4_i4 < 0) {
    emlrtDynamicBoundsCheckR2012b(c4_i4, 0, MAX_int32_T, &c4_emlrtBCI, &c4_st);
  }

  c4_d = (real_T)c4_i4;
  if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c4_covrtInstance,
        4U, 0U, 0U, c4_d, 4.0, -1, 0U, c4_d == 4.0))) {
    c4_b_st.site = &c4_b_emlrtRSI;
    c4_indexShapeCheck(chartInstance, &c4_b_st, c4_bigA.size[0]);
    c4_b_bigA = c4_bigA.size[0];
    for (c4_i7 = 0; c4_i7 < 3; c4_i7++) {
      c4_i9 = c4_i7 + 1;
      if ((c4_i9 < 1) || (c4_i9 > c4_b_bigA)) {
        emlrtDynamicBoundsCheckR2012b(c4_i9, 1, c4_b_bigA, &c4_b_emlrtBCI,
          &c4_st);
      }

      (*chartInstance->c4_pos)[c4_i7] = c4_bigA.vector.data[c4_i9 - 1];
    }

    c4_i8 = c4_bigA.size[0];
    c4_i10 = 4;
    if ((c4_i10 < 1) || (c4_i10 > c4_i8)) {
      emlrtDynamicBoundsCheckR2012b(c4_i10, 1, c4_i8, &c4_c_emlrtBCI, &c4_st);
    }

    c4_b_grip = c4_bigA.vector.data[c4_i10 - 1];
  } else {
    for (c4_i6 = 0; c4_i6 < 3; c4_i6++) {
      (*chartInstance->c4_pos)[c4_i6] = c4_dv[c4_i6];
    }

    c4_b_grip = 0.0;
  }

  c4_array_real_T_Destructor(chartInstance, &c4_bigA);
  *chartInstance->c4_grip = c4_b_grip;
  if (covrtIsSigCovEnabledFcn(chartInstance->c4_covrtInstance, 1U) != 0U) {
    for (c4_i11 = 0; c4_i11 < 3; c4_i11++) {
      covrtSigUpdateFcnAssumingCovEnabled(chartInstance->c4_covrtInstance, 1U, (*
        chartInstance->c4_pos)[c4_i11]);
    }
  }

  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U, *chartInstance->c4_grip);
}

static void ext_mode_exec_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(2, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_grip, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", *chartInstance->c4_pos, 0, 0U, 1, 0U,
    2, 3, 1), false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_PickAndPlace_Simulation_Simscape
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_st)
{
  const mxArray *c4_b_u;
  real_T c4_dv[3];
  int32_T c4_i;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_b_u = sf_mex_dup(c4_st);
  *chartInstance->c4_grip = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_b_u, 0)), "grip");
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_b_u, 1)),
                        "pos", c4_dv);
  for (c4_i = 0; c4_i < 3; c4_i++) {
    (*chartInstance->c4_pos)[c4_i] = c4_dv[c4_i];
  }

  sf_mex_destroy(&c4_b_u);
  sf_mex_destroy(&c4_st);
}

static void c4_indexShapeCheck
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, int32_T c4_matrixSize)
{
  static char_T c4_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_size1;
  boolean_T c4_b;
  boolean_T c4_b_c;
  boolean_T c4_c;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_size1 = c4_matrixSize;
  if (c4_size1 != 1) {
    c4_b = false;
  } else {
    c4_b = true;
  }

  if (c4_b) {
    c4_c = true;
  } else {
    c4_c = false;
  }

  c4_st.site = &c4_f_emlrtRSI;
  c4_b_c = c4_c;
  if (c4_b_c) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c4_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14, sf_mex_call
                (&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c4_st, NULL,
      "message", 1U, 1U, 14, c4_b_y)));
  }
}

const mxArray
  *sf_c4_PickAndPlace_Simulation_Simscape_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_nullptr, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_b_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_b_u);
  return c4_y;
}

static void c4_c_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_nullptr, const char_T *c4_identifier, real_T c4_y[3])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_d_emlrt_marshallIn
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[3])
{
  real_T c4_dv[3];
  int32_T c4_i;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_b_u), c4_dv, 1, 0, 0U, 1, 0U, 2, 3, 1);
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_y[c4_i] = c4_dv[c4_i];
  }

  sf_mex_destroy(&c4_b_u);
}

static void c4_array_real_T_SetSize
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, c4_coder_array_real_T *c4_coderArray, const emlrtRTEInfo
   *c4_srcLocation, int32_T c4_size0)
{
  real_T *c4_newData;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  (void)chartInstance;
  c4_coderArray->size[0] = c4_size0;
  c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp);
  if (c4_newNumel > c4_coderArray->vector.allocated) {
    c4_newCapacity = c4_coderArray->vector.allocated;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c4_newCapacity);
    if ((void *)c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if ((void *)c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_coderArray->vector.data != NULL) {
      memcpy(c4_newData, c4_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c4_coderArray->vector.numel);
      if (c4_coderArray->vector.owner) {
        emlrtFreeMex(c4_coderArray->vector.data);
      }
    }

    c4_coderArray->vector.data = c4_newData;
    c4_coderArray->vector.allocated = c4_newCapacity;
    c4_coderArray->vector.owner = true;
  }

  c4_coderArray->vector.numel = c4_newNumel;
}

static void c4_array_real_T_Constructor
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance,
   c4_coder_array_real_T *c4_coderArray)
{
  (void)chartInstance;
  c4_coderArray->vector.data = (real_T *)NULL;
  c4_coderArray->vector.numel = 0;
  c4_coderArray->vector.allocated = 0;
  c4_coderArray->vector.owner = true;
  c4_coderArray->size[0] = 0;
}

static void c4_array_real_T_Destructor
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance,
   c4_coder_array_real_T *c4_coderArray)
{
  (void)chartInstance;
  if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c4_coderArray->vector.data);
  }
}

static void init_dsm_address_info
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_u = (uint8_T (*)[16])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_pos = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_grip = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_PickAndPlace_Simulation_Simscape_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3093756029U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2935105909U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1084008506U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4096731505U);
}

mxArray *sf_c4_PickAndPlace_Simulation_Simscape_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c4_PickAndPlace_Simulation_Simscape_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("sscanf");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_PickAndPlace_Simulation_Simscape_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_PickAndPlace_Simulation_Simscape
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiC+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Eg4g/QZI+lmw6GdB0i8A5KUXZRbwQfkD634Rot"
    "zPjOJ+ZoaC/GIGmPsBeqkTBg=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_PickAndPlace_Simulation_Simscape_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sqAWT3wFKIrzrKeB7GmewfG";
}

static void sf_opaque_initialize_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  initialize_params_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
  initialize_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  enable_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  disable_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  sf_gateway_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
}

static const mxArray*
  sf_opaque_get_sim_state_c4_PickAndPlace_Simulation_Simscape(SimStruct* S)
{
  return get_sim_state_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_PickAndPlace_Simulation_Simscape
  (SimStruct* S, const mxArray *st)
{
  set_sim_state_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_PickAndPlace_Simulation_Simscape_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_PickAndPlace_Simulation_Simscape
      ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  mdl_start_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo
      (((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*)chartInstanceVar
       )->S);
  }
}

static void sf_opaque_mdl_terminate_c4_PickAndPlace_Simulation_Simscape(void
  *chartInstanceVar)
{
  mdl_terminate_c4_PickAndPlace_Simulation_Simscape
    ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_PickAndPlace_Simulation_Simscape(SimStruct
  *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_PickAndPlace_Simulation_Simscape
      ((SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_PickAndPlace_Simulation_Simscape_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWE1vG0UYHrtuRCqogoREDpVA4gBHpCDRA4I6/qqVhFjYaRGXMp597R15dnYzH3bcA+f+HH5",
    "OzpV66oUjR95Zrx3HMfHOGpTASpvNrP3M+84zz/sxJqX2CcHrMd57+4Ts4PMDvMtkdj3MxqWle/",
    "a+Qr7Lxp1HhLCQKtOWg5j4XywOYAiyawcDfuGJlTbqUEUjXcCupBH8BDoW1vBY+jnP5QAUSIYTJ",
    "LEyXnY1j6zgctS0kjnL+mXIWdgNYyuCQ5yQBqdSTP/ObmJNBy3WuQJmmgCBCVVsh2FT0OHtLCgz",
    "qYXARtpG3lxpMF2buKXqEysMTwQ0LoC1pTYUWdAb1ts11EDNXHgrhOvuHB1HieBU5uc6pLoLCar",
    "DwFkS4N9Ta5C9nHbRXp9LamLFqWhEouYUnhPbEejnCcpaePNsIlOHvh0OuRw6dpWNQOL6USc5uB",
    "rU4jEoOoRT6RmDbnWNi3SDF7rMH4NtJ8tCMWij2a7oQtjUbmOMDOmCdptM1qgQ2g/bi5NjGINI7",
    "depoQWwM/seYK150ItfUOWiwDOSrOTnFjJsLZYBz7/D4xVUmnB/xOSZA84jJykIkOaF64uJNmnS",
    "ahNHNQyj+vFxTns3sW1pQA0og9y5T1GuAR1OdeVpN+Ca9oVDI0smXWXuGUAWhhI9sLI+idUIOfZ",
    "NsldcuUjwQ0MwhDoYSBNGA9X9ggqb0+dIY4Zz8jjTmLH87CLWxU8hMKMshMDVEy7gBLSbQOfOz1",
    "hHqrjaMTfTOmimeJI3kqyGAAuJY6k3TeBMjmQ8kU0VR92sI7hFVwCYNaiSWBYOsSypaROdz+e1g",
    "vOeU1aR9iyiRtC+00YLJFYWt1ZXCSnDqGpIbN3QoW2wXf4aS7vUXBtsp6aNNAaCtB/dL/n1ox9n",
    "44NFLLV1T+FOUSzDEjulaj9t9qDHI0hfdCn2FLNhdjm7X5Mru7vl2+2W8b9SQRzZEvfzEq6yhp8",
    "vlnB72Zh986rD2agqA+xRGLxKlZfujPtXM5rAWr8+zMF/Hhy5gbviff78aglfWmOXLD232a9nS7",
    "iPVuxUVnA7GYfBr7+1ym/fvBMPd5++//3Ly23svyn76ftxNn4y79cWFW18I+m77z7foI9PV/Thx",
    "vq8+rJ3MGketdVrdQSH37YimAxa6XyXG+KxvOLv/P3neJvpTFhasXaQnb3cmNrZmcDN/3TJ350N",
    "fOwu6YmQP37YDr//bHUf1/FVucZXhQwx9y/r9u78/ySX/w+u+f+AJLG+Fnf3Pe/dVZ69Sz/z5N1",
    "SQVz5X8zz/yRu2/X51pP/+vdvywNk5ft793gdq8+ifcV9W9cl8av7n2Xj7xe/AdRCLoI1p5DsYz",
    "woDNZ9+j/R95+e/M37nIbjL/sR85eDqqRiiseO2bEue91R7vezxUcKqF5/truLOpQnvtfV+dbhU",
    "eE69hcVJQd5",
    ""
  };

  static char newstr [1437] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_PickAndPlace_Simulation_Simscape(SimStruct *S)
{
  const char* newstr =
    sf_c4_PickAndPlace_Simulation_Simscape_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1199464548U));
  ssSetChecksum1(S,(3850953218U));
  ssSetChecksum2(S,(940115308U));
  ssSetChecksum3(S,(3626479851U));
}

static void mdlRTW_c4_PickAndPlace_Simulation_Simscape(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_PickAndPlace_Simulation_Simscape
  (SimStruct *S)
{
  SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *chartInstance;
  chartInstance = (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct *)
    utMalloc(sizeof(SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc4_PickAndPlace_Simulation_SimscapeInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_PickAndPlace_Simulation_Simscape;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_PickAndPlace_Simulation_Simscape(chartInstance);
}

void c4_PickAndPlace_Simulation_Simscape_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_PickAndPlace_Simulation_Simscape(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_PickAndPlace_Simulation_Simscape(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_PickAndPlace_Simulation_Simscape(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_PickAndPlace_Simulation_Simscape_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
