/* Include files */

#include "modelInterface.h"
#include "m_RlUt5YazEZ0A5u4lfJgXaE.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 48,    /* lineNo */
  "IKBlock",                           /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 68,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 69,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 1410,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 47,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 69,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 74,  /* lineNo */
  "randi",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 107, /* lineNo */
  "rand",                              /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 45,  /* lineNo */
  "eml_rand",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 23,  /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 51,  /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 133, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 192, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 182, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 185, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 201, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 1370,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 77,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 102,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 112,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 159,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 180,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 182,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 213,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 214,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 279,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 31, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 56, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 131,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 153,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 173,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 304,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 167,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 168,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 166,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 170,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 216,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 257,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 1,  /* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 479,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 566,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 567,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 572,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 585,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 571,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 165,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 167,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 47, /* lineNo */
  "FastVisualizationHelper",           /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\FastVisualizationHelper.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 1399,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 1380,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 2307,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 464,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 2312,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 2315,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 2321,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 2323,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 1425,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 1428,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 1434,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 283,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 287,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 275,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 280,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 2374,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 230,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 234,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 238,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 241,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 283,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 285,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 286,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 293,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 294,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 254,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 1723,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 1727,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 443,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 261,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 1448,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 1452,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 199,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 200,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 210,/* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 96, /* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 99, /* lineNo */
  "RigidBody",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 240,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 409,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 410,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 412,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 414,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 415,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 421,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 173,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 74, /* lineNo */
  "validatestring",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 111,/* lineNo */
  "validatestring",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 164,/* lineNo */
  "validatestring",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 240,/* lineNo */
  "strcmp",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 241,/* lineNo */
  "strcmp",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 242,/* lineNo */
  "strcmp",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 16, /* lineNo */
  "lower",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 10, /* lineNo */
  "eml_string_transform",              /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 151,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 252,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 254,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 256,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 21, /* lineNo */
  "warning",                           /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 464,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 1,  /* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 52, /* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 93, /* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 94, /* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 42, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 1,  /* lineNo */
  "TimeProvider",                      /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\TimeProvider.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 369,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 450,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 33, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 38, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 123,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 126,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 129,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 528,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 530,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 531,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 532,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 533,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 534,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 50, /* lineNo */
  "eye",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 21, /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 296,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 2333,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 2335,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 135,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 1,  /* lineNo */
  "IKExtraArgs",                       /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKExtraArgs.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 162,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 163,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 268,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 269,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 271,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 280,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 281,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 285,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 318,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 320,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 326,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 327,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 331,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 1696,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 1698,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 1712,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 39, /* lineNo */
  "find",                              /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 1675,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 396,/* lineNo */
  "find",                              /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 42, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 108,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 111,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 123,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 142,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 144,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 83, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 84, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 32, /* lineNo */
  "tic",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 7,  /* lineNo */
  "getTime",                           /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 21, /* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 168,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 180,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 181,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 184,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 185,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 187,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 193,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 198,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 203,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 209,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 225,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 226,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 233,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 234,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 241,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 246,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 26, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 32, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 1897,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 1929,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 1930,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 1933,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 1956,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 2007,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 2008,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 614,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 442,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 444,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 445,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 447,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 312,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2tform.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 23, /* lineNo */
  "quat2tform",                        /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2tform.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 22, /* lineNo */
  "quat2rotm",                         /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\quat2rotm.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 451,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\+validation\\validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 69, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 51, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 42, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 36, /* lineNo */
  "svd",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 42, /* lineNo */
  "svd",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 34, /* lineNo */
  "xgesvd",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 431,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 418,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 404,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 377,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 358,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 32, /* lineNo */
  "xrotg",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 258,/* lineNo */
  "ErrorDampedLevenbergMarquardt",     /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 64, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 66, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 37, /* lineNo */
  "toc",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 42, /* lineNo */
  "mldivide",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 112,/* lineNo */
  "lusolve",                           /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 49, /* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 51, /* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 102,/* lineNo */
  "ixfun",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 53, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 664,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 670,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 620,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 627,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 631,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 634,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 288,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 64, /* lineNo */
  "randrot",                           /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\rotations\\rotationslib\\randrot.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 68, /* lineNo */
  "randrot",                           /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\rotations\\rotationslib\\randrot.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 117,/* lineNo */
  "randn",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 40, /* lineNo */
  "eml_randn",                         /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 39, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 56, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 405,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 414,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 416,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 10, /* lineNo */
  "normalize",                         /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\rotations\\rotationslib\\+matlabshared\\+rotations\\+internal\\@quaternionBase\\normalize.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 597,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 600,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 602,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 604,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 596,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 599,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 601,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 2060,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 319,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 742,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 1534,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 296,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 342,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 1,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 125, /* lineNo */
  13,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 139, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 131, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 15,  /* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 82,  /* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 21,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 122, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 225, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 293,/* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 47, /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtMCInfo cb_emlrtMCI = { 64, /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo db_emlrtMCI = { 16, /* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtMCInfo eb_emlrtMCI = { 225,/* lineNo */
  23,                                  /* colNo */
  "ixfun",                             /* fName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 2425,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 419,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 30,    /* lineNo */
  32,                                  /* colNo */
  "CharacterVector",                   /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  200,                                 /* iLast */
  30,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 70,  /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 215, /* lineNo */
  46,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  215,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  215,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo d_emlrtDCI = { 216, /* lineNo */
  44,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  216,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  216,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  218,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  219,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 280, /* lineNo */
  48,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  280,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  280,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 62,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 38,  /* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 38,  /* lineNo */
  65,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "RigidBody",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 305, /* lineNo */
  60,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  305,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 1433,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { 0,   /* iFirst */
  4,                                   /* iLast */
  1434,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 0,   /* iFirst */
  4,                                   /* iLast */
  581,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 581, /* lineNo */
  45,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 286,/* lineNo */
  21,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 264, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 273, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  273,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 285, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  285,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 286, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  286,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 288, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  288,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 289, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  289,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 0,   /* iFirst */
  4,                                   /* iLast */
  264,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 0,   /* iFirst */
  4,                                   /* iLast */
  269,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 1451,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo t_emlrtBCI = { 0,   /* iFirst */
  4,                                   /* iLast */
  1452,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 522, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 522, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 522, /* lineNo */
  26,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 527,/* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  533,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  534,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 531, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 531, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 531, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 531, /* lineNo */
  37,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  531,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo w_emlrtDCI = { 532, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 532, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 532, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 532,/* lineNo */
  42,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  532,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 1,   /* nDims */
  150,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo bb_emlrtDCI = { 523,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  528,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 150,/* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 150,/* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  533,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 533,/* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  534,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 297,/* lineNo */
  53,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  297,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 2329,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 2329,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 2331,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo ib_emlrtDCI = { 2335,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2335,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 2335,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2335,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  2335,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo lb_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  2332,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  769,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 769,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  769,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  765,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  762,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 758,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 758,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2060,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2060,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  143,                                 /* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  329,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo nb_emlrtDCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  2052,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 2052,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2056,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  2057,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 2057,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { 1,  /* iFirst */
  5,                                   /* iLast */
  757,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 757,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  757,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 329,/* lineNo */
  19,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  329,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 765,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  765,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = { 183,/* lineNo */
  21,                                  /* colNo */
  "ErrorDampedLevenbergMarquardt",     /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\ErrorDampedLevenbergMarquardt.m"/* pName */
};

static emlrtDCInfo ub_emlrtDCI = { 1900,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 1900,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 1932,/* lineNo */
  51,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  5,                                   /* iLast */
  1932,                                /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 1933,/* lineNo */
  64,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  1933,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 1933,/* lineNo */
  72,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  1933,                                /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 1935,/* lineNo */
  55,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  5,                                   /* iLast */
  1935,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 1957,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1957,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 1957,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1957,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  1957,                                /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2018,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2020,                                /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  1890,                                /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 1890,/* lineNo */
  40,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2012,                                /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2012,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2017,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1902,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1907,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  1903,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 1903,/* lineNo */
  50,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1903,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  1908,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 1908,/* lineNo */
  47,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1908,                                /* lineNo */
  68,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2041,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2041,                                /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2031,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 2029,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 2029,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 0,  /* iFirst */
  4,                                   /* iLast */
  2033,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 2033,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2038,                                /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2034,                                /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 1,  /* iFirst */
  1,                                   /* iLast */
  451,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  45,                                  /* lineNo */
  9,                                   /* colNo */
  "rotm2axang",                        /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "D:\\R2024b\\toolbox\\shared\\robotics\\robotutilsint\\+robotics\\+internal\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 667,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { 1,  /* iFirst */
  5,                                   /* iLast */
  668,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 671,/* lineNo */
  23,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  671,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 671,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  671,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  671,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo lc_emlrtDCI = { 621,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 633,/* lineNo */
  53,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  633,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  631,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  631,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo nc_emlrtDCI = { 289,/* lineNo */
  51,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  289,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 53, /* lineNo */
  13,                                  /* colNo */
  "IKHelpers",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 53, /* lineNo */
  13,                                  /* colNo */
  "IKHelpers",                         /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  627,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "rigidBodyJoint",                    /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 295,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { 1,  /* iFirst */
  200,                                 /* iLast */
  26,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "CharacterVector",                   /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CharacterVector.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  1708,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  1711,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1708,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1711,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo dl_emlrtRSI = { 293,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 14, /* lineNo */
  "validatenonnegative",               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 15, /* lineNo */
  "assertSupportedString",             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 13, /* lineNo */
  "validatenonempty",                  /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 125,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 47, /* lineNo */
  "allOrAny",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 2425,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 225,/* lineNo */
  "ixfun",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 16, /* lineNo */
  "mldivide",                          /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 225,/* lineNo */
  "cat",                               /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 122,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 419,/* lineNo */
  "colon",                             /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 21, /* lineNo */
  "error",                             /* fcnName */
  "D:\\R2024b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 131,/* lineNo */
  "validatestring",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 139,/* lineNo */
  "validatestring",                    /* fcnName */
  "D:\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "D:\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__setup(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp);
static void IKBlock_setupImpl(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj);
static void b_rand(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static boolean_T is_valid_state(uint32_T mt[625]);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj, char_T bodyInput[10],
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static boolean_T b_strcmp(char_T b_data[], int32_T b_size[2]);
static boolean_T c_strcmp(char_T b_data[], int32_T b_size[2]);
static boolean_T d_strcmp(char_T b_data[], int32_T b_size[2]);
static void rigidBodyJoint_set_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2]);
static boolean_T e_strcmp(char_T a_data[], int32_T a_size[2]);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj, real_T maxElements);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static void rigidBodyJoint_get_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2]);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1);
static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, char_T jname_data[], int32_T jname_size[2]);
static void validateattributes(const emlrtStack *sp, int32_T a_size[2]);
static void inverseKinematics_set_RigidBodyTree
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const emlrtStack *sp,
   inverseKinematics *obj, robotics_manip_internal_RigidBodyTree *rigidbodytree,
   rigidBodyJoint *iobj_0, robotics_manip_internal_RigidBody *iobj_1,
   robotics_manip_internal_CollisionSet *iobj_2,
   robotics_manip_internal_RigidBodyTree_1 *iobj_3);
static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj);
static void b_validateattributes(const emlrtStack *sp, int32_T a_size[2]);
static boolean_T f_strcmp(char_T a_data[], int32_T a_size[2], char_T b_data[],
  int32_T b_size[2]);
static robotics_manip_internal_CollisionSet *CollisionSet_copy(const emlrtStack *
  sp, robotics_manip_internal_CollisionSet *obj,
  robotics_manip_internal_CollisionSet *iobj_0);
static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, char_T parentName_data[], int32_T
  parentName_size[2], robotics_manip_internal_CollisionSet *iobj_0,
  rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2);
static real_T RigidBodyTree_findBodyIndexByName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, char_T bodyname_data[], int32_T
  bodyname_size[2]);
static void error(const emlrtStack *sp);
static robotics_manip_internal_RigidBody *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet
  *iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2);
static rigidBodyJoint *b_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, char_T jname_data[], int32_T jname_size[2], char_T
  jtype_data[], int32_T jtype_size[2]);
static void get_match(const emlrtStack *sp, char_T str_data[], int32_T str_size
                      [2], char_T match_data[], int32_T match_size[2], int32_T
                      *nmatched);
static void assertSupportedString(const emlrtStack *sp, char_T s);
static void warning(const emlrtStack *sp);
static void mw__internal__call__reset(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[4], real_T c_y0[4], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status);
static void eye(const emlrtStack *sp, real_T varargin_1, coder_array_real_T_2D
                *b_I);
static void rigidBodyJoint_get_PositionLimits(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T lims_data[], int32_T lims_size[2]);
static void RigidBodyTree_get_JointPositionLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, coder_array_real_T_2D *limits);
static void inverseKinematics_stepImpl(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[4], real_T QSol[4], real_T
  *solutionInfo_Iterations, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static boolean_T g_strcmp(char_T a_data[], int32_T a_size[2]);
static void inv(const emlrtStack *sp, real_T x[9], real_T y[9]);
static real_T b_norm(real_T x[9]);
static void b_warning(const emlrtStack *sp);
static void c_warning(const emlrtStack *sp, char_T varargin_1[14]);
static void d_warning(const emlrtStack *sp);
static void c_validateattributes(const emlrtStack *sp, real_T a[6]);
static void inverseKinematics_solve(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[4], real_T QSol[4], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void eml_find(const emlrtStack *sp, boolean_T x[4], int32_T i_data[],
                     int32_T i_size[1]);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void e_warning(const emlrtStack *sp);
static emlrtTimespec tic(void);
static void ErrorDampedLevenbergMarquardt_solveInternal(const emlrtStack *sp,
  robotics_core_internal_ErrorDampedLevenbergMarquardt *obj, real_T xSol[4],
  robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *en, real_T *iter);
static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[4],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  coder_array_real_T_2D *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[4], real_T bid1,
  real_T T_data[], int32_T T_size[2], coder_array_real_T_2D *Jac);
static void RigidBodyTree_ancestorIndices(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *body, coder_array_real_T_2D *indices);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static void rigidBodyJoint_get_JointAxis(const emlrtStack *sp, rigidBodyJoint
  *obj, real_T ax[3]);
static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3]);
static real_T sumColumnB(real_T x[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b_b[9]);
static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void tforminv(real_T T[16], real_T Tinv[16]);
static void mtimes(real_T A[36], real_T B_data[], int32_T B_size[2], real_T
                   C_data[], int32_T C_size[2]);
static void b_mtimes(real_T A[36], coder_array_real_T_2D *B,
                     coder_array_real_T_2D *C);
static void IKHelpers_poseError(const emlrtStack *sp, real_T Td[16], real_T
  T_data[], int32_T T_size[2], real_T errorvec[6]);
static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9]);
static real_T xzlangeM(real_T x[9]);
static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0);
static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0);
static real_T b_xnrm2(real_T x[3], int32_T ix0);
static void c_mtimes(real_T A[6], coder_array_real_T_2D *B,
                     coder_array_real_T_2D *C);
static void dynamic_size_checks(const emlrtStack *sp, coder_array_real_T *b_b,
  int32_T innerDimB);
static real_T c_norm(real_T x[6]);
static boolean_T all(const emlrtStack *sp, coder_array_boolean_T *x);
static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj);
static real_T toc(real_T tstart_tv_sec, real_T tstart_tv_nsec);
static void d_mtimes(coder_array_real_T_2D *A, coder_array_real_T_2D *B,
                     coder_array_real_T_2D *C);
static void mldivide(const emlrtStack *sp, real_T A[16], coder_array_real_T *B,
                     real_T Y_data[], int32_T Y_size[1]);
static real_T b_IKHelpers_computeCost(const emlrtStack *sp, real_T x[4],
  robotics_manip_internal_IKExtraArgs *args);
static real_T function_handle_parenReference(real_T varargin_1, real_T
  varargin_2);
static void expand_max(const emlrtStack *sp, coder_array_real_T *a, real_T b_b[4],
  real_T c[4]);
static real_T b_function_handle_parenReference(real_T varargin_1, real_T
  varargin_2);
static void expand_min(const emlrtStack *sp, coder_array_real_T *a, real_T b_b[4],
  real_T c[4]);
static void IKHelpers_randomConfig(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_IKExtraArgs
  *args, real_T rc_data[], int32_T rc_size[1]);
static void randn(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                  emlrtStack *sp, real_T r[4]);
static void c_rand(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                   emlrtStack *sp, real_T r[3]);
static boolean_T vectorAny(boolean_T x_data[], int32_T x_size[1]);
static void b_randn(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                    emlrtStack *sp, real_T r[3]);
static void d_rand(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, real_T r_data[], int32_T
                   r_size[1]);
static boolean_T any(const emlrtStack *sp, boolean_T x_data[], int32_T x_size[1]);
static void c_randn(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                    emlrtStack *sp, real_T varargin_1[2], real_T r_data[],
                    int32_T r_size[1]);
static void f_warning(const emlrtStack *sp);
static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30]);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);
static const mxArray *d_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2]);
static void CharacterVector_setVector(const emlrtStack *sp,
  robotics_manip_internal_CharacterVector *obj, char_T vec_data[], int32_T
  vec_size[2]);
static void b_sqrt(const emlrtStack *sp, real_T *x);
static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[4]);
static void c_sqrt(creal_T *x);
static real_T rescale(real_T *re, real_T *im);
static void xzlascl(real_T cfrom, real_T cto, real_T A[9]);
static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0);
static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_xscal(real_T a, real_T x[3], int32_T ix0);
static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0);
static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0);
static void c_xscal(real_T a, real_T x[9], int32_T ix0);
static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s);
static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void b_xzlascl(real_T cfrom, real_T cto, real_T A[3]);
static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static real_T genrandu(const emlrtStack *sp, uint32_T mt[625]);
static void binary_expand_op(const emlrtStack *sp, real_T in1_data[], int32_T
  in1_size[1], emlrtRSInfo in2, coder_array_real_T_2D *in3, real_T in4, int8_T
  in5[16], coder_array_real_T *in6);
static void minus(coder_array_real_T *in1, coder_array_real_T *in2);
static void binary_expand_op_2(coder_array_real_T *in1, real_T in2_data[],
  int32_T in2_size[2], real_T in3_data[], int32_T in3_size[1]);
static void times(real_T in1_data[], int32_T in1_size[1], real_T in2_data[],
                  int32_T in2_size[1]);
static void binary_expand_op_3(coder_array_real_T *in1, real_T in2_data[],
  int32_T in2_size[2]);
static void binary_expand_op_4(coder_array_real_T *in1, real_T in2_data[],
  int32_T in2_size[2]);
static void binary_expand_op_5(boolean_T in1[4], real_T in2[4],
  coder_array_real_T_2D *in3);
static void binary_expand_op_6(boolean_T in1[4], real_T in2[4],
  coder_array_real_T_2D *in3);
static void array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray, int32_T size0, int32_T size1);
static void array_real_T_2D_SetSize(coder_array_real_T_2D *coderArray, int32_T
  size0, int32_T size1);
static void array_real_T_SetSize(coder_array_real_T *coderArray, int32_T size0);
static void array_int32_T_SetSize(coder_array_int32_T *coderArray, int32_T size0);
static void array_int32_T_2D_SetSize(coder_array_int32_T_2D *coderArray, int32_T
  size0, int32_T size1);
static void array_boolean_T_SetSize(coder_array_boolean_T *coderArray, int32_T
  size0);
static void b_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray);
static void c_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray);
static void array_real_T_2D_Constructor(coder_array_real_T_2D *coderArray);
static void array_real_T_Constructor(coder_array_real_T *coderArray);
static void array_real_T_2D_Destructor(coder_array_real_T_2D *coderArray);
static void array_real_T_Destructor(coder_array_real_T *coderArray);
static void array_int32_T_2D_Constructor(coder_array_int32_T_2D *coderArray);
static void array_int32_T_Constructor(coder_array_int32_T *coderArray);
static void array_int32_T_2D_Destructor(coder_array_int32_T_2D *coderArray);
static void array_int32_T_Destructor(coder_array_int32_T *coderArray);
static void array_boolean_T_Constructor(coder_array_boolean_T *coderArray);
static void array_boolean_T_Destructor(coder_array_boolean_T *coderArray);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void init_simulink_io_address(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->u1, *moduleInstance->u2, *moduleInstance->b_y0, (real_T *)
    &((char_T *)moduleInstance->b_y1)[0], (real_T *)&((char_T *)
    moduleInstance->b_y1)[8], (uint16_T *)&((char_T *)moduleInstance->b_y1)[16],
    (uint8_T *)&((char_T *)moduleInstance->b_y1)[18]);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  emlrtStack st;
  int32_T i;
  for (i = 0; i < 625; i++) {
    moduleInstance->c_state[i] = uv[i];
  }

  for (i = 0; i < 6; i++) {
    moduleInstance->sysobj.IKInternal._pobj4._pobj1[i].matlabCodegenIsDeleted =
      true;
  }

  for (i = 0; i < 11; i++) {
    moduleInstance->sysobj.IKInternal._pobj3[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 11; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 5; i++) {
    moduleInstance->sysobj.IKInternal._pobj4._pobj0[i].matlabCodegenIsDeleted =
      true;
  }

  moduleInstance->sysobj.IKInternal._pobj4.Base.matlabCodegenIsDeleted = true;
  for (i = 0; i < 5; i++) {
    moduleInstance->sysobj.IKInternal._pobj2[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 10; i++) {
    moduleInstance->sysobj.TreeInternal._pobj2[i].matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal._pobj4.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal._pobj0.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal._pobj5.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.IKInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  st.site = NULL;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  st.site = NULL;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  st.site = NULL;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  st.site = NULL;
  moduleInstance->c_state_not_empty = true;
  st.site = NULL;
  moduleInstance->b_method = 0U;
  moduleInstance->b_method_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->d_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->d_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *obj;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.IKInternal.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.IKInternal.matlabCodegenIsDeleted = true;
    b_st.site = &yk_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (moduleInstance->sysobj.IKInternal.isInitialized == 1) {
      moduleInstance->sysobj.IKInternal.isInitialized = 2;
      d_st.site = &d_emlrtRSI;
    }
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.IKInternal._pobj5.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.IKInternal._pobj5.matlabCodegenIsDeleted = true;
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.IKInternal._pobj0.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.IKInternal._pobj0.matlabCodegenIsDeleted = true;
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.IKInternal._pobj4.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.IKInternal._pobj4.matlabCodegenIsDeleted = true;
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 10; i++) {
    st.site = &cl_emlrtRSI;
    obj = &moduleInstance->sysobj.TreeInternal._pobj2[i];
    if (!obj->matlabCodegenIsDeleted) {
      obj->matlabCodegenIsDeleted = true;
    }
  }

  for (i = 0; i < 5; i++) {
    st.site = &cl_emlrtRSI;
    obj = &moduleInstance->sysobj.IKInternal._pobj2[i];
    if (!obj->matlabCodegenIsDeleted) {
      obj->matlabCodegenIsDeleted = true;
    }
  }

  st.site = &cl_emlrtRSI;
  if (!moduleInstance->sysobj.IKInternal._pobj4.Base.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.IKInternal._pobj4.Base.matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 5; i++) {
    st.site = &cl_emlrtRSI;
    obj = &moduleInstance->sysobj.IKInternal._pobj4._pobj0[i];
    if (!obj->matlabCodegenIsDeleted) {
      obj->matlabCodegenIsDeleted = true;
    }
  }

  for (i = 0; i < 11; i++) {
    st.site = &cl_emlrtRSI;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.TreeInternal._pobj0[i]);
  }

  for (i = 0; i < 11; i++) {
    st.site = &cl_emlrtRSI;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.IKInternal._pobj3[i]);
  }

  for (i = 0; i < 6; i++) {
    st.site = &cl_emlrtRSI;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.IKInternal._pobj4._pobj1[i]);
  }
}

static void mw__internal__call__setup(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  moduleInstance->sysobj.isInitialized = 1;
  b_st.site = &d_emlrtRSI;
  IKBlock_setupImpl(moduleInstance, &b_st, &moduleInstance->sysobj);
}

static void IKBlock_setupImpl(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj)
{
  static char_T a[18] = { 'L', 'e', 'v', 'e', 'n', 'b', 'e', 'r', 'g', 'M', 'a',
    'r', 'q', 'u', 'a', 'r', 'd', 't' };

  static char_T cv[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T cv1[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2' };

  static char_T cv2[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3' };

  static char_T cv3[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4' };

  static char_T cv4[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5' };

  static char_T cv5[5] = { 'w', 'o', 'r', 'l', 'd' };

  static char_T cv6[4] = { '_', 'j', 'n', 't' };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  robotics_core_internal_ErrorDampedLevenbergMarquardt *b_obj;
  real_T idx[5];
  real_T dv[2];
  real_T dv1[2];
  real_T params_DampingBias;
  real_T s_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T s_Vector_size[2];
  int32_T i;
  int32_T ret;
  char_T s_Vector_data[204];
  char_T s_Vector[200];
  char_T b_a[18];
  char_T switch_expression[18];
  boolean_T params_UseErrorDamping;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &r_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  e_st.site = &l_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  b_rand(moduleInstance, &f_st, idx);
  for (ret = 0; ret <= 2; ret += 2) {
    r = _mm_loadu_pd(&idx[ret]);
    _mm_storeu_pd(&dv[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv1[0] = muDoubleScalarFloor(dv[0]);
    dv1[1] = muDoubleScalarFloor(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&idx[ret], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (ret = 4; ret < 5; ret++) {
    idx[4] = muDoubleScalarFloor(idx[4] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    ret = (int32_T)emlrtIntegerCheckR2012b(idx[i], &b_emlrtDCI, &d_st);
    emlrtDynamicBoundsCheckR2012b(ret, 1, 62, &b_emlrtBCI, &d_st);
  }

  obj->TreeInternal.NumBodies = 5.0;
  b_st.site = &u_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[0] = RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[0], cv, &obj->TreeInternal._pobj0[0],
    &obj->TreeInternal._pobj1[0]);
  c_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[1] = RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[1], cv1, &obj->TreeInternal._pobj0[1],
    &obj->TreeInternal._pobj1[1]);
  c_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[2] = RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[2], cv2, &obj->TreeInternal._pobj0[2],
    &obj->TreeInternal._pobj1[2]);
  c_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[3] = RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[3], cv3, &obj->TreeInternal._pobj0[3],
    &obj->TreeInternal._pobj1[3]);
  c_st.site = &x_emlrtRSI;
  obj->TreeInternal.Bodies[4] = RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj2[4], cv4, &obj->TreeInternal._pobj0[4],
    &obj->TreeInternal._pobj1[4]);
  b_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[0] = b_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj2[5], &obj->TreeInternal._pobj0[5],
    &obj->TreeInternal._pobj1[5]);
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  b_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[1] = c_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj2[6], &obj->TreeInternal._pobj0[6],
    &obj->TreeInternal._pobj1[6]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  b_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[2] = d_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj2[7], &obj->TreeInternal._pobj0[7],
    &obj->TreeInternal._pobj1[7]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  b_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[3] = e_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj2[8], &obj->TreeInternal._pobj0[8],
    &obj->TreeInternal._pobj1[8]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  b_st.site = &v_emlrtRSI;
  obj->TreeInternal.Bodies[4] = f_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj2[9], &obj->TreeInternal._pobj0[9],
    &obj->TreeInternal._pobj1[9]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  b_st.site = &t_emlrtRSI;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Gravity[i] = 0.0;
  }

  b_st.site = &w_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  d_st.site = &i_emlrtRSI;
  obj->TreeInternal.Base.NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    obj->TreeInternal.Base.NameInternal.Vector[i] = ' ';
  }

  c_st.site = &mb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = obj->TreeInternal.Base.NameInternal.Vector[i];
  }

  for (i = 0; i < 2; i++) {
    iv[i] = (i << 2) + 1;
    iv1[i] = (i << 2) + 1;
  }

  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, &c_st);
  for (i = 0; i < 5; i++) {
    s_Vector[i] = cv5[i];
  }

  obj->TreeInternal.Base.NameInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    obj->TreeInternal.Base.NameInternal.Vector[i] = s_Vector[i];
  }

  obj->TreeInternal.Base.ParentIndex = -1.0;
  obj->TreeInternal.Base.MassInternal = 0.0;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    obj->TreeInternal.Base.InertiaInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    obj->TreeInternal.Base.SpatialInertia[i] = 0.0;
  }

  c_st.site = &rb_emlrtRSI;
  s_Length = obj->TreeInternal.Base.NameInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = obj->TreeInternal.Base.NameInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ret = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ret = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ret + 4;
  if (ret - 1 >= 0) {
    memcpy(&s_Vector_data[0], &s_Vector[0], (uint32_T)ret * sizeof(char_T));
  }

  for (i = 0; i < 4; i++) {
    s_Vector_data[i + ret] = cv6[i];
  }

  c_st.site = &sb_emlrtRSI;
  obj->TreeInternal.Base.JointInternal = rigidBodyJoint_rigidBodyJoint(&c_st,
    &obj->TreeInternal._pobj1[10], s_Vector_data, s_Vector_size);
  c_st.site = &pb_emlrtRSI;
  obj->TreeInternal.Base.CollisionsInternal = CollisionSet_CollisionSet(&c_st,
    &obj->TreeInternal._pobj0[10], 0.0);
  obj->TreeInternal.Base.matlabCodegenIsDeleted = false;
  obj->TreeInternal.Base.Index = 0.0;
  obj->TreeInternal.matlabCodegenIsDeleted = false;
  st.site = &h_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  c_st.site = &b_emlrtRSI;
  d_st.site = &c_emlrtRSI;
  c_st.site = &b_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  obj->IKInternal.isInitialized = 0;
  b_st.site = &wb_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &yb_emlrtRSI;
  e_st.site = &yb_emlrtRSI;
  inverseKinematics_set_RigidBodyTree(moduleInstance, &e_st, &obj->IKInternal,
    &obj->TreeInternal, &obj->IKInternal._pobj1[0], &obj->IKInternal._pobj2[0],
    &obj->IKInternal._pobj3[0], &obj->IKInternal._pobj4);
  e_st.site = &yb_emlrtRSI;
  f_st.site = &te_emlrtRSI;
  g_st.site = &ve_emlrtRSI;
  h_st.site = &ue_emlrtRSI;
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
    obj->IKInternal._pobj5.Name[i] = a[i];
  }

  g_st.site = &we_emlrtRSI;
  h_st.site = &ye_emlrtRSI;
  i_st.site = &af_emlrtRSI;
  obj->IKInternal._pobj5.TimeObj.StartTime.tv_sec = 0.0;
  obj->IKInternal._pobj5.TimeObj.StartTime.tv_nsec = 0.0;
  g_st.site = &xe_emlrtRSI;
  h_st.site = &ye_emlrtRSI;
  i_st.site = &af_emlrtRSI;
  obj->IKInternal._pobj5.TimeObjInternal.StartTime.tv_sec = 0.0;
  obj->IKInternal._pobj5.TimeObjInternal.StartTime.tv_nsec = 0.0;
  obj->IKInternal._pobj5.matlabCodegenIsDeleted = false;
  obj->IKInternal.Solver = &obj->IKInternal._pobj5;
  e_st.site = &yb_emlrtRSI;
  f_st.site = &c_emlrtRSI;
  e_st.site = &yb_emlrtRSI;
  f_st.site = &bf_emlrtRSI;
  b_obj = obj->IKInternal.Solver;
  s_Length = b_obj->ErrorChangeTolerance;
  params_DampingBias = b_obj->DampingBias;
  params_UseErrorDamping = b_obj->UseErrorDamping;
  for (i = 0; i < 18; i++) {
    switch_expression[i] = obj->IKInternal.Solver->Name[i];
  }

  for (i = 0; i < 18; i++) {
    b_a[i] = a[i];
  }

  ret = memcmp(&b_a[0], &switch_expression[0], 18);
  if (ret == 0) {
    ret = 1;
  } else {
    ret = -1;
  }

  switch (ret) {
   case 0:
    break;

   case 1:
    s_Length = 1.0E-6;
    params_DampingBias = 0.0025;
    params_UseErrorDamping = true;
    break;
  }

  f_st.site = &cf_emlrtRSI;
  b_obj = obj->IKInternal.Solver;
  b_obj->MaxNumIteration = 2.0;
  b_obj->MaxTime = 0.005;
  b_obj->GradientTolerance = 0.0001;
  b_obj->SolutionTolerance = 0.001;
  b_obj->ConstraintsOn = true;
  b_obj->RandomRestart = false;
  b_obj->StepTolerance = 0.001;
  b_obj->ErrorChangeTolerance = s_Length;
  b_obj->DampingBias = params_DampingBias;
  b_obj->UseErrorDamping = params_UseErrorDamping;
  obj->IKInternal.RigidBodyTreeKinematicModel = 0.0;
  obj->IKInternal.matlabCodegenIsDeleted = false;
}

static void b_rand(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &o_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &p_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static boolean_T is_valid_state(uint32_T mt[625])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    isvalid = true;
  } else {
    isvalid = false;
  }

  if (isvalid) {
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
  }

  return isvalid;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj, char_T bodyInput[10],
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T s_Length;
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T c_I[9];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 10; i++) {
    s_Vector[i] = bodyInput[i];
  }

  b_obj->NameInternal.Length = 10.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = s_Vector[i];
  }

  st.site = &ab_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 14; i++) {
    iobj_1->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    iobj_1->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    iobj_1->MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &cb_emlrtRSI;
  iobj_1->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = ' ';
  }

  iobj_1->TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->NameInternal.Vector[i];
  }

  for (i = 0; i < 10; i++) {
    s_Vector[i] = bodyInput[i];
  }

  for (i = 0; i < 4; i++) {
    s_Vector[i + 10] = cv[i];
  }

  iobj_1->NameInternal.Length = 14.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    s_Vector[i] = vec[i];
  }

  iobj_1->TypeInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv1[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv2[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv4[i];
    }

    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, iobj_1, msubspace_data,
    msubspace_size);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &st);
    }

    switch_expression_size[0] = ibmat;
    switch_expression_size[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &b_emlrtECI, &st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        iobj_1->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      iobj_1->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      switch_expression_size[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &d_emlrtECI, &st);
    for (i = 0; i < 2; i++) {
      iobj_1->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &st);
    iobj_1->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    c_I[i] = 0;
  }

  for (ibmat = 0; ibmat < 3; ibmat++) {
    c_I[ibmat + 3 * ibmat] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)c_I[i];
  }

  for (i = 0; i < 36; i++) {
    b_I[i] = 0;
  }

  for (ibmat = 0; ibmat < 6; ibmat++) {
    b_I[ibmat + 6 * ibmat] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)b_I[i];
  }

  st.site = &bb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static boolean_T b_strcmp(char_T b_data[], int32_T b_size[2])
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(char_T b_data[], int32_T b_size[2])
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (cv[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T d_strcmp(char_T b_data[], int32_T b_size[2])
{
  static char_T cv[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b_size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void rigidBodyJoint_set_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T obj_Vector_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &hb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = obj->TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
    obj_Length = obj->VelocityNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &e_emlrtDCI,
        (emlrtConstCTX)sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &e_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    obj_Vector_size[0] = 6;
    obj_Vector_size[1] = loop_ub;
    emlrtSubAssignSizeCheckR2012b(&obj_Vector_size[0], 2, &msubspace_size[0], 2,
      &f_emlrtECI, (void *)sp);
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        obj->MotionSubspaceInternal[i1 + 6 * i] = msubspace_data[i1 + 6 * i];
      }
    }
  } else {
    for (i = 0; i < 6; i++) {
      obj->MotionSubspaceInternal[i] = 0.0;
    }
  }
}

static boolean_T e_strcmp(char_T a_data[], int32_T a_size[2])
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a_data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj, real_T maxElements)
{
  static void *t2_GeometryInternal = NULL;
  static int8_T b_localPose[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  coder_array_robotics_manip_inte r;
  emlrtStack b_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int8_T defaultGeometry_LocalPose[16];
  int8_T defaultGeometry_WorldPose[16];
  int8_T t6_LocalPose[16];
  int8_T t6_WorldPose[16];
  int8_T localPose;
  b_array_robotics_manip_internal_C(&r);
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &kb_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  b_obj->MaxElements = maxElements;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &g_emlrtDCI,
    (emlrtConstCTX)sp);
  array_robotics_manip_internal_C(&r, 1, (int32_T)emlrtIntegerCheckR2012b(d,
    &f_emlrtDCI, (emlrtConstCTX)sp));
  for (i = 0; i < 2; i++) {
    iv[i] = r.size[i];
  }

  array_robotics_manip_internal_C(&b_obj->CollisionGeometries, iv[0], iv[1]);
  st.site = &lb_emlrtRSI;
  for (i = 0; i < 16; i++) {
    localPose = b_localPose[i];
    defaultGeometry_LocalPose[i] = localPose;
    defaultGeometry_WorldPose[i] = localPose;
  }

  d = b_obj->MaxElements;
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    i1 = b_obj->CollisionGeometries.size[1] - 1;
    for (i2 = 0; i2 < 16; i2++) {
      t6_LocalPose[i2] = defaultGeometry_LocalPose[i2];
      t6_WorldPose[i2] = defaultGeometry_WorldPose[i2];
    }

    expl_temp.CollisionPrimitive = t2_GeometryInternal;
    for (i2 = 0; i2 < 16; i2++) {
      expl_temp.LocalPose[i2] = (real_T)t6_LocalPose[i2];
    }

    for (i2 = 0; i2 < 16; i2++) {
      expl_temp.WorldPose[i2] = (real_T)t6_WorldPose[i2];
    }

    for (i2 = 0; i2 < 3; i2++) {
      expl_temp.MeshScale[i2] = 1.0;
    }

    b_obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
      i1, &f_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
  c_array_robotics_manip_internal_C(&r);
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.028768757108327443, 7.4631381442683291E-7,
    -5.5352035432538354E-5, 0.0, -0.10442166007653277, -8.7055726677321662E-6,
    7.4631381442683291E-7, 0.026539874468044112, 2.3325033125477598E-7,
    0.10442166007653277, 0.0, -0.0020630727627134028, -5.5352035432538354E-5,
    2.3325033125477598E-7, 0.048731110220704144, 8.7055726677321662E-6,
    0.0020630727627134028, 0.0, 0.0, 0.10442166007653277, 8.7055726677321662E-6,
    3.89847036294307, 0.0, 0.0, -0.10442166007653277, 0.0, 0.0020630727627134028,
    0.0, 3.89847036294307, 0.0, -8.7055726677321662E-6, -0.0020630727627134028,
    0.0, 0.0, 0.0, 3.89847036294307 };

  static real_T dv1[9] = { 0.028768757108327443, 7.4631381442683291E-7,
    -5.5352035432538354E-5, 7.4631381442683291E-7, 0.026539874468044112,
    2.3325033125477598E-7, -5.5352035432538354E-5, 2.3325033125477598E-7,
    0.048731110220704144 };

  static real_T dv[3] = { 0.000529200576288575, -2.23307396420992E-6,
    0.0267852902177001 };

  static char_T cv1[16] = { 'w', 'o', 'r', 'l', 'd', '_', 'b', 'a', 's', 'e',
    '_', 'j', 'o', 'i', 'n', 't' };

  static char_T cv[9] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k' };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv5[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T s_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  st.site = &mb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 2; i++) {
    iv[i] = (i << 3) + 1;
    iv1[i] = (i << 3) + 1;
  }

  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, &st);
  for (i = 0; i < 9; i++) {
    s_Vector[i] = cv[i];
  }

  b_obj->NameInternal.Length = 9.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = s_Vector[i];
  }

  b_obj->ParentIndex = 0.0;
  b_obj->MassInternal = 3.89847036294307;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &nb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 14; i++) {
    iobj_1->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    iobj_1->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    iobj_1->MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &cb_emlrtRSI;
  iobj_1->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = ' ';
  }

  iobj_1->TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->NameInternal.Vector[i];
  }

  for (i = 0; i < 16; i++) {
    s_Vector[i] = cv1[i];
  }

  iobj_1->NameInternal.Length = 16.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    s_Vector[i] = vec[i];
  }

  iobj_1->TypeInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv3[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv4[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv6[i];
    }

    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, iobj_1, msubspace_data,
    msubspace_size);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &st);
    }

    iv[0] = ibmat;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &b_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        iobj_1->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      iobj_1->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      iv[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &d_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      iobj_1->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &st);
    iobj_1->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < 6; i++) {
    msubspace_data[i] = 0.0;
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_obj->JointInternal->InTree = true;
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal[7 * i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = 0.0;
  }

  b_obj->JointInternal->HomePositionInternal[0] = 0.0;
  st.site = &pb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void rigidBodyJoint_get_MotionSubspace(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T msubspace_data[], int32_T msubspace_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T obj_Vector_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &hb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = obj->TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
    obj_Length = obj->VelocityNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &h_emlrtDCI,
        (emlrtConstCTX)sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 6, &h_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = loop_ub;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        msubspace_data[i1 + 6 * i] = obj->MotionSubspaceInternal[i1 + 6 * i];
      }
    }
  } else {
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }
  }
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.0098883618076915317, 3.491520440311153E-12,
    -7.0807706907914012E-10, 0.0, -0.081245648020186481, -2.4469721682934774E-9,
    3.491520440311153E-12, 0.0098602125072737353, 3.7559333579963049E-10,
    0.081245648020186481, 0.0, -6.576165478270739E-9, -7.0807706907914012E-10,
    3.7559333579963049E-10, 0.00062506753263199318, 2.4469721682934774E-9,
    6.576165478270739E-9, 0.0, 0.0, 0.081245648020186481, 2.4469721682934774E-9,
    0.701518504018672, 0.0, 0.0, -0.081245648020186481, 0.0,
    6.576165478270739E-9, 0.0, 0.701518504018672, 0.0, -2.4469721682934774E-9,
    -6.576165478270739E-9, 0.0, 0.0, 0.0, 0.701518504018672 };

  static real_T dv1[9] = { 0.0098883618076915317, 3.491520440311153E-12,
    -7.0807706907914012E-10, 3.491520440311153E-12, 0.0098602125072737353,
    3.7559333579963049E-10, -7.0807706907914012E-10, 3.7559333579963049E-10,
    0.00062506753263199318 };

  static real_T dv[3] = { 9.37418676855843E-9, -3.48810780368004E-9,
    0.115813977186301 };

  static char_T b_vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T vec[3] = { 'Y', 'A', 'W' };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv5[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T s_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  st.site = &mb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 2; i++) {
    iv[i] = (i << 1) + 1;
    iv1[i] = (i << 1) + 1;
  }

  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, &st);
  for (i = 0; i < 3; i++) {
    s_Vector[i] = vec[i];
  }

  b_obj->NameInternal.Length = 3.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = s_Vector[i];
  }

  b_obj->ParentIndex = 1.0;
  b_obj->MassInternal = 0.701518504018672;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &nb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 14; i++) {
    iobj_1->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    iobj_1->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    iobj_1->MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &cb_emlrtRSI;
  iobj_1->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = ' ';
  }

  iobj_1->TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->NameInternal.Vector[i];
  }

  for (i = 0; i < 3; i++) {
    s_Vector[i] = vec[i];
  }

  iobj_1->NameInternal.Length = 3.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  for (i = 0; i < 8; i++) {
    s_Vector[i] = b_vec[i];
  }

  iobj_1->TypeInternal.Length = 8.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv3[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv4[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv6[i];
    }

    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, iobj_1, msubspace_data,
    msubspace_size);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &st);
    }

    iv[0] = ibmat;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &b_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        iobj_1->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      iobj_1->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      iv[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &d_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      iobj_1->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &st);
    iobj_1->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < 6; i++) {
    msubspace_data[i] = (real_T)iv3[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_obj->JointInternal->InTree = true;
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal[7 * i] = 5.934 * (real_T)i -
      2.967;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv5[i];
  }

  b_obj->JointInternal->HomePositionInternal[0] = 0.0;
  st.site = &pb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.041343998418695183, 0.0022665991316712631,
    5.4154653500840718E-8, 0.0, 4.98489140592527E-5, -0.165771096295436,
    0.0022665991316712631, 0.00040606585858177875, -1.0006210903442956E-5,
    -4.98489140592527E-5, 0.0, -0.0096438506814792869, 5.4154653500840718E-8,
    -1.0006210903442956E-5, 0.041519005205512126, 0.165771096295436,
    0.0096438506814792869, 0.0, 0.0, -4.98489140592527E-5, 0.165771096295436,
    0.706073338310231, 0.0, 0.0, 4.98489140592527E-5, 0.0, 0.0096438506814792869,
    0.0, 0.706073338310231, 0.0, -0.165771096295436, -0.0096438506814792869, 0.0,
    0.0, 0.0, 0.706073338310231 };

  static real_T dv3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -3.4914813388431334E-15,
    -1.0, 0.0, -0.0, 1.0, -3.4914813388431334E-15, 0.0, 0.0, 0.0, 0.1397714, 1.0
  };

  static real_T dv1[9] = { 0.041343998418695183, 0.0022665991316712631,
    5.4154653500840718E-8, 0.0022665991316712631, 0.00040606585858177875,
    -1.0006210903442956E-5, 5.4154653500840718E-8, -1.0006210903442956E-5,
    0.041519005205512126 };

  static real_T dv[3] = { 0.0136584263393359, -0.234778864037209,
    -7.06001931450219E-5 };

  static char_T cv1[8] = { 'S', 'H', 'O', 'U', 'L', 'D', 'E', 'R' };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'B', 'I', 'C', 'E', 'P' };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv5[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T s_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  st.site = &mb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 2; i++) {
    iv[i] = (i << 2) + 1;
    iv1[i] = (i << 2) + 1;
  }

  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, &st);
  for (i = 0; i < 5; i++) {
    s_Vector[i] = cv[i];
  }

  b_obj->NameInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = s_Vector[i];
  }

  b_obj->ParentIndex = 2.0;
  b_obj->MassInternal = 0.706073338310231;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &nb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 14; i++) {
    iobj_1->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    iobj_1->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    iobj_1->MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &cb_emlrtRSI;
  iobj_1->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = ' ';
  }

  iobj_1->TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->NameInternal.Vector[i];
  }

  for (i = 0; i < 8; i++) {
    s_Vector[i] = cv1[i];
  }

  iobj_1->NameInternal.Length = 8.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  for (i = 0; i < 8; i++) {
    s_Vector[i] = vec[i];
  }

  iobj_1->TypeInternal.Length = 8.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv3[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv4[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv6[i];
    }

    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, iobj_1, msubspace_data,
    msubspace_size);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &st);
    }

    iv[0] = ibmat;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &b_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        iobj_1->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      iobj_1->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      iv[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &d_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      iobj_1->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &st);
    iobj_1->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < 6; i++) {
    msubspace_data[i] = (real_T)iv3[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_obj->JointInternal->InTree = true;
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal[7 * i] = 2.2683981633974484 *
      (real_T)i - 0.78539816339744828;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv5[i];
  }

  b_obj->JointInternal->HomePositionInternal[0] = 0.0;
  st.site = &pb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.010714902352115131, -0.0025168761378282847,
    -3.8533065563211014E-6, 0.0, -0.000116750789591703, 0.066751857775336626,
    -0.0025168761378282847, 0.00074659743266776088, -1.5164818091056276E-5,
    0.000116750789591703, 0.0, -0.0160142250451979, -3.8533065563211014E-6,
    -1.5164818091056276E-5, 0.011264971358460269, -0.066751857775336626,
    0.0160142250451979, 0.0, 0.0, 0.000116750789591703, -0.066751857775336626,
    0.4296669212638, 0.0, 0.0, -0.000116750789591703, 0.0, 0.0160142250451979,
    0.0, 0.4296669212638, 0.0, 0.066751857775336626, -0.0160142250451979, 0.0,
    0.0, 0.0, 0.4296669212638 };

  static real_T dv3[16] = { 0.14142135623730218, -0.98994949366116758, -0.0, 0.0,
    0.98994949366116758, 0.14142135623730218, 0.0, 0.0, 0.0, -0.0, 1.0, 0.0,
    0.0500000000000004, -0.350000000000015, 0.0, 1.0 };

  static real_T dv1[9] = { 0.010714902352115131, -0.0025168761378282847,
    -3.8533065563211014E-6, -0.0025168761378282847, 0.00074659743266776088,
    -1.5164818091056276E-5, -3.8533065563211014E-6, -1.5164818091056276E-5,
    0.011264971358460269 };

  static real_T dv[3] = { 0.0372712542033594, 0.155357218514742,
    0.000271723941997439 };

  static real_T dv4[2] = { -1.658, 1.309 };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[7] = { 'F', 'O', 'R', 'E', 'A', 'R', 'M' };

  static char_T cv1[5] = { 'E', 'L', 'B', 'O', 'W' };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv5[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T s_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  st.site = &mb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 2; i++) {
    iv[i] = 6 * i + 1;
    iv1[i] = 6 * i + 1;
  }

  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, &st);
  for (i = 0; i < 7; i++) {
    s_Vector[i] = cv[i];
  }

  b_obj->NameInternal.Length = 7.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = s_Vector[i];
  }

  b_obj->ParentIndex = 3.0;
  b_obj->MassInternal = 0.4296669212638;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &nb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 14; i++) {
    iobj_1->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    iobj_1->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    iobj_1->MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &cb_emlrtRSI;
  iobj_1->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = ' ';
  }

  iobj_1->TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->NameInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    s_Vector[i] = cv1[i];
  }

  iobj_1->NameInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  for (i = 0; i < 8; i++) {
    s_Vector[i] = vec[i];
  }

  iobj_1->TypeInternal.Length = 8.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv3[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv4[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv6[i];
    }

    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, iobj_1, msubspace_data,
    msubspace_size);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &st);
    }

    iv[0] = ibmat;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &b_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        iobj_1->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      iobj_1->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      iv[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &d_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      iobj_1->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &st);
    iobj_1->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < 6; i++) {
    msubspace_data[i] = (real_T)iv3[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_obj->JointInternal->InTree = true;
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal[7 * i] = dv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv5[i];
  }

  b_obj->JointInternal->HomePositionInternal[0] = 0.0;
  st.site = &pb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 3.0980034913892174E-6, 7.9139298237574491E-9,
    2.1215216355265991E-8, 0.0, -0.00014499073172338651, -1.0291773640103424E-6,
    7.9139298237574491E-9, 3.059322121353783E-6, 3.9179207849492555E-10,
    0.00014499073172338651, 0.0, 1.8086873928019055E-6, 2.1215216355265991E-8,
    3.9179207849492555E-10, 4.0061985137306217E-6, 1.0291773640103424E-6,
    -1.8086873928019055E-6, 0.0, 0.0, 0.00014499073172338651,
    1.0291773640103424E-6, 0.025331269641348, 0.0, 0.0, -0.00014499073172338651,
    0.0, -1.8086873928019055E-6, 0.0, 0.025331269641348, 0.0,
    -1.0291773640103424E-6, 1.8086873928019055E-6, 0.0, 0.0, 0.0,
    0.025331269641348 };

  static real_T dv3[16] = { 0.98994949366116725, -0.14142135623730462, -0.0, 0.0,
    -4.9377002621643607E-16, -3.4563901835151742E-15, -1.0, 0.0,
    0.14142135623730462, 0.98994949366116725, -3.4914813388431334E-15, 0.0,
    0.0336611536380097, 0.235607569369425, 0.0, 1.0 };

  static real_T dv1[9] = { 3.0980034913892174E-6, 7.9139298237574491E-9,
    2.1215216355265991E-8, 7.9139298237574491E-9, 3.059322121353783E-6,
    3.9179207849492555E-10, 2.1215216355265991E-8, 3.9179207849492555E-10,
    4.0061985137306217E-6 };

  static real_T dv[3] = { -7.14013714436801E-5, -4.06287319420589E-5,
    0.0057237846257307 };

  static char_T cv[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C', 'T', 'O',
    'R' };

  static char_T vec[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv1[5] = { 'W', 'R', 'I', 'S', 'T' };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv6[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv5[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T s_Length;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  b_obj->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = ' ';
  }

  st.site = &mb_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->NameInternal.Vector[i];
  }

  for (i = 0; i < 2; i++) {
    iv[i] = 11 * i + 1;
    iv1[i] = 11 * i + 1;
  }

  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, &st);
  for (i = 0; i < 12; i++) {
    s_Vector[i] = cv[i];
  }

  b_obj->NameInternal.Length = 12.0;
  for (i = 0; i < 200; i++) {
    b_obj->NameInternal.Vector[i] = s_Vector[i];
  }

  b_obj->ParentIndex = 4.0;
  b_obj->MassInternal = 0.025331269641348;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &nb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  for (i = 0; i < 14; i++) {
    iobj_1->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    iobj_1->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    iobj_1->MotionSubspaceInternal[i] = 0.0;
  }

  b_st.site = &cb_emlrtRSI;
  iobj_1->NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = ' ';
  }

  iobj_1->TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->NameInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    s_Vector[i] = cv1[i];
  }

  iobj_1->NameInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    iobj_1->NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  for (i = 0; i < 8; i++) {
    s_Vector[i] = vec[i];
  }

  iobj_1->TypeInternal.Length = 8.0;
  for (i = 0; i < 200; i++) {
    iobj_1->TypeInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv3[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv4[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv5[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv6[i];
    }

    iobj_1->VelocityNumber = 6.0;
    iobj_1->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  b_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&b_st, iobj_1, msubspace_data,
    msubspace_size);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  s_Length = iobj_1->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = iobj_1->TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &c_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &st);
    }

    iv[0] = ibmat;
    iv[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &b_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        iobj_1->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    s_Length = iobj_1->PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      iobj_1->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      iv[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &poslim_size[0], 2, &d_emlrtECI,
      &st);
    for (i = 0; i < 2; i++) {
      iobj_1->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &st);
    iobj_1->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv2[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  emlrtDynamicBoundsCheckR2012b(1, 1, msubspace_size[1], &g_emlrtBCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < 6; i++) {
    msubspace_data[i] = (real_T)iv3[i];
  }

  st.site = &ob_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj->JointInternal, msubspace_data,
    msubspace_size);
  b_obj->JointInternal->InTree = true;
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal[7 * i] = 6.02 * (real_T)i -
      3.01;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv5[i];
  }

  b_obj->JointInternal->HomePositionInternal[0] = 0.0;
  st.site = &pb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, char_T jname_data[], int32_T jname_size[2])
{
  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_CharacterVector s;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T d;
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 14; i++) {
    b_obj->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    b_obj->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    b_obj->MotionSubspaceInternal[i] = 0.0;
  }

  jname_size[0] = 1;
  st.site = &tb_emlrtRSI;
  validateattributes(&st, jname_size);
  st.site = &cb_emlrtRSI;
  s.Length = 200.0;
  for (i = 0; i < 200; i++) {
    s.Vector[i] = ' ';
  }

  b_obj->NameInternal = s;
  s.Length = 200.0;
  for (i = 0; i < 200; i++) {
    s.Vector[i] = ' ';
  }

  b_obj->TypeInternal = s;
  s = b_obj->NameInternal;
  st.site = &ub_emlrtRSI;
  CharacterVector_setVector(&st, &s, jname_data, jname_size);
  b_obj->NameInternal = s;
  st.site = &db_emlrtRSI;
  s = b_obj->TypeInternal;
  s.Length = 5.0;
  for (i = 0; i < 5; i++) {
    s.Vector[i] = vec[i];
  }

  b_obj->TypeInternal = s;
  st.site = &eb_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  s = b_obj->TypeInternal;
  if (s.Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s.Length, &emlrtDCI, &b_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s.Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv1[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv2[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv4[i];
    }

    b_obj->VelocityNumber = 6.0;
    b_obj->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj, msubspace_data, msubspace_size);
  st.site = &gb_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  s = b_obj->TypeInternal;
  if (s.Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s.Length, &emlrtDCI, &b_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  s_size[0] = 1;
  s_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s.Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_size)) {
    d = b_obj->PositionNumber;
    if (d < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtConstCTX)sp);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, (emlrtConstCTX)
        sp);
    }

    switch_expression_size[0] = ibmat;
    switch_expression_size[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &b_emlrtECI, (void *)sp);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        b_obj->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    d = b_obj->PositionNumber;
    if (d < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)sp);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI,
      (emlrtConstCTX)sp);
    for (i = 0; i < homepos_size_idx_1; i++) {
      b_obj->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      switch_expression_size[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &d_emlrtECI, (void *)sp);
    for (i = 0; i < 2; i++) {
      b_obj->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI,
      (emlrtConstCTX)sp);
    b_obj->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  return b_obj;
}

static void validateattributes(const emlrtStack *sp, int32_T a_size[2])
{
  static const int32_T iv[2] = { 1, 38 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T g_u[5] = { 'j', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[38];
  char_T f_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a_size[1] == 0) {
    for (i = 0; i < 38; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 38, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &ll_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static void inverseKinematics_set_RigidBodyTree
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const emlrtStack *sp,
   inverseKinematics *obj, robotics_manip_internal_RigidBodyTree *rigidbodytree,
   rigidBodyJoint *iobj_0, robotics_manip_internal_RigidBody *iobj_1,
   robotics_manip_internal_CollisionSet *iobj_2,
   robotics_manip_internal_RigidBodyTree_1 *iobj_3)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv10[2] = { 1, 46 };

  static const int32_T iv11[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 8 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv6[2] = { 1, 35 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 35 };

  static const int32_T iv9[2] = { 1, 7 };

  static char_T i_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'a', 's', 'e', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T q_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c_u[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T k_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T n_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[8] = { 'b', 'a', 's', 'e', 'N', 'a', 'm', 'e' };

  static char_T p_u[7] = { 'G', 'r', 'a', 'v', 'i', 't', 'y' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_CharacterVector b_obj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBody *parent;
  robotics_manip_internal_RigidBodyTree_1 *newrobot;
  real_T g[3];
  real_T pid;
  int32_T b_obj_size[2];
  int32_T basename_size[2];
  int32_T c_obj_size[2];
  int32_T d_obj_size[2];
  int32_T e_obj_size[2];
  int32_T f_obj_size[2];
  int32_T g_obj_size[2];
  int32_T iv5[2];
  int32_T obj_size[2];
  int32_T b_loop_ub;
  int32_T bid;
  int32_T i;
  int32_T loop_ub;
  char_T basename_data[200];
  char_T obj_data[200];
  char_T h_u[51];
  char_T d_u[48];
  char_T l_u[46];
  char_T b_u[37];
  char_T j_u[35];
  char_T f_u[8];
  char_T o_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ac_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &bc_emlrtRSI;
  newrobot = RigidBodyTree_RigidBodyTree(moduleInstance, &b_st, iobj_3);
  b_st.site = &cc_emlrtRSI;
  c_st.site = &mc_emlrtRSI;
  d_st.site = &nc_emlrtRSI;
  b_obj = rigidbodytree->Base.NameInternal;
  if (b_obj.Length < 1.0) {
    b_loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &d_st);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI, &d_st);
  }

  basename_size[0] = 1;
  basename_size[1] = b_loop_ub;
  if (b_loop_ub - 1 >= 0) {
    memcpy(&basename_data[0], &b_obj.Vector[0], (uint32_T)b_loop_ub * sizeof
           (char_T));
  }

  b_st.site = &cc_emlrtRSI;
  c_st.site = &oc_emlrtRSI;
  d_st.site = &vb_emlrtRSI;
  if (b_loop_ub == 0) {
    for (loop_ub = 0; loop_ub < 37; loop_ub++) {
      b_u[loop_ub] = c_u[loop_ub];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&d_st, 37, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (loop_ub = 0; loop_ub < 48; loop_ub++) {
      d_u[loop_ub] = e_u[loop_ub];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&d_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      f_u[loop_ub] = g_u[loop_ub];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&d_st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    e_st.site = &ll_emlrtRSI;
    b_error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  c_st.site = &pc_emlrtRSI;
  bid = -1;
  d_st.site = &sc_emlrtRSI;
  b_validateattributes(&d_st, basename_size);
  d_st.site = &tc_emlrtRSI;
  e_st.site = &nc_emlrtRSI;
  b_obj = newrobot->Base.NameInternal;
  if (b_obj.Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &e_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI, &e_st);
  }

  obj_size[0] = 1;
  obj_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
  }

  if (f_strcmp(obj_data, obj_size, basename_data, basename_size)) {
    bid = 0;
  } else {
    pid = newrobot->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
      &b_emlrtRTEI, &c_st);
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= (int32_T)pid - 1)) {
      d_st.site = &uc_emlrtRSI;
      body = newrobot->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 4, &i_emlrtBCI,
        &d_st)];
      e_st.site = &nc_emlrtRSI;
      b_obj = body->NameInternal;
      if (b_obj.Length < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI,
          &e_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
          &e_st);
      }

      b_obj_size[0] = 1;
      b_obj_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)loop_ub * sizeof(char_T));
      }

      if (f_strcmp(obj_data, b_obj_size, basename_data, basename_size)) {
        bid = i + 1;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (bid != 0) {
    if (bid < 0) {
      b_obj = newrobot->Base.NameInternal;
      c_st.site = &qc_emlrtRSI;
      CharacterVector_setVector(&c_st, &b_obj, basename_data, basename_size);
      newrobot->Base.NameInternal = b_obj;
    } else {
      c_st.site = &rc_emlrtRSI;
      for (loop_ub = 0; loop_ub < 51; loop_ub++) {
        h_u[loop_ub] = i_u[loop_ub];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &h_u[0]);
      emlrtAssign(&d_y, m);
      for (loop_ub = 0; loop_ub < 51; loop_ub++) {
        h_u[loop_ub] = i_u[loop_ub];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &h_u[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      iv5[0] = 1;
      iv5[1] = b_loop_ub;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&c_st, b_loop_ub, m, &basename_data[0]);
      emlrtAssign(&f_y, m);
      d_st.site = &jl_emlrtRSI;
      b_error(&d_st, d_y, getString(&d_st, message(&d_st, e_y, f_y, &d_emlrtMCI),
               &d_emlrtMCI), &d_emlrtMCI);
    }
  }

  b_st.site = &fc_emlrtRSI;
  newrobot->Base.CollisionsInternal = CollisionSet_copy(&b_st,
    rigidbodytree->Base.CollisionsInternal, &iobj_2[0]);
  b_st.site = &dc_emlrtRSI;
  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    g[loop_ub] = rigidbodytree->Gravity[loop_ub];
  }

  c_st.site = &ad_emlrtRSI;
  d_st.site = &vb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if (!muDoubleScalarIsNaN(g[loop_ub])) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (loop_ub = 0; loop_ub < 35; loop_ub++) {
      j_u[loop_ub] = k_u[loop_ub];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&d_st, 35, m, &j_u[0]);
    emlrtAssign(&g_y, m);
    for (loop_ub = 0; loop_ub < 46; loop_ub++) {
      l_u[loop_ub] = m_u[loop_ub];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&d_st, 46, m, &l_u[0]);
    emlrtAssign(&h_y, m);
    for (loop_ub = 0; loop_ub < 7; loop_ub++) {
      o_u[loop_ub] = p_u[loop_ub];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&d_st, 7, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    e_st.site = &gl_emlrtRSI;
    b_error(&e_st, g_y, getString(&e_st, message(&e_st, h_y, j_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  d_st.site = &vb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if ((!muDoubleScalarIsInf(g[loop_ub])) && (!muDoubleScalarIsNaN(g[loop_ub])))
    {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (loop_ub = 0; loop_ub < 35; loop_ub++) {
      j_u[loop_ub] = n_u[loop_ub];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&d_st, 35, m, &j_u[0]);
    emlrtAssign(&i_y, m);
    for (loop_ub = 0; loop_ub < 46; loop_ub++) {
      l_u[loop_ub] = q_u[loop_ub];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&d_st, 46, m, &l_u[0]);
    emlrtAssign(&k_y, m);
    for (loop_ub = 0; loop_ub < 7; loop_ub++) {
      o_u[loop_ub] = p_u[loop_ub];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(&d_st, 7, m, &o_u[0]);
    emlrtAssign(&l_y, m);
    e_st.site = &fl_emlrtRSI;
    b_error(&e_st, i_y, getString(&e_st, message(&e_st, k_y, l_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  if (rigidbodytree->NumBodies >= 1.0) {
    body = rigidbodytree->Bodies[0];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(pid, &i_emlrtDCI, &st) - 1;
      parent = rigidbodytree->Bodies[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, 4,
        &j_emlrtBCI, &st)];
    } else {
      parent = &rigidbodytree->Base;
    }

    b_st.site = &ec_emlrtRSI;
    c_st.site = &nc_emlrtRSI;
    b_obj = parent->NameInternal;
    if (b_obj.Length < 1.0) {
      b_loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &c_st);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
        &c_st);
    }

    c_obj_size[0] = 1;
    c_obj_size[1] = b_loop_ub;
    if (b_loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)b_loop_ub * sizeof(char_T));
    }

    b_st.site = &ec_emlrtRSI;
    RigidBodyTree_addBody(&b_st, newrobot, body, obj_data, c_obj_size, &iobj_2[1],
                          &iobj_0[0], &iobj_1[0]);
  }

  if (rigidbodytree->NumBodies >= 2.0) {
    body = rigidbodytree->Bodies[1];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(pid, &i_emlrtDCI, &st) - 1;
      parent = rigidbodytree->Bodies[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, 4,
        &j_emlrtBCI, &st)];
    } else {
      parent = &rigidbodytree->Base;
    }

    b_st.site = &ec_emlrtRSI;
    c_st.site = &nc_emlrtRSI;
    b_obj = parent->NameInternal;
    if (b_obj.Length < 1.0) {
      b_loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &c_st);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
        &c_st);
    }

    d_obj_size[0] = 1;
    d_obj_size[1] = b_loop_ub;
    if (b_loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)b_loop_ub * sizeof(char_T));
    }

    b_st.site = &ec_emlrtRSI;
    RigidBodyTree_addBody(&b_st, newrobot, body, obj_data, d_obj_size, &iobj_2[3],
                          &iobj_0[2], &iobj_1[1]);
  }

  if (rigidbodytree->NumBodies >= 3.0) {
    body = rigidbodytree->Bodies[2];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(pid, &i_emlrtDCI, &st) - 1;
      parent = rigidbodytree->Bodies[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, 4,
        &j_emlrtBCI, &st)];
    } else {
      parent = &rigidbodytree->Base;
    }

    b_st.site = &ec_emlrtRSI;
    c_st.site = &nc_emlrtRSI;
    b_obj = parent->NameInternal;
    if (b_obj.Length < 1.0) {
      b_loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &c_st);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
        &c_st);
    }

    e_obj_size[0] = 1;
    e_obj_size[1] = b_loop_ub;
    if (b_loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)b_loop_ub * sizeof(char_T));
    }

    b_st.site = &ec_emlrtRSI;
    RigidBodyTree_addBody(&b_st, newrobot, body, obj_data, e_obj_size, &iobj_2[5],
                          &iobj_0[4], &iobj_1[2]);
  }

  if (rigidbodytree->NumBodies >= 4.0) {
    body = rigidbodytree->Bodies[3];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(pid, &i_emlrtDCI, &st) - 1;
      parent = rigidbodytree->Bodies[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, 4,
        &j_emlrtBCI, &st)];
    } else {
      parent = &rigidbodytree->Base;
    }

    b_st.site = &ec_emlrtRSI;
    c_st.site = &nc_emlrtRSI;
    b_obj = parent->NameInternal;
    if (b_obj.Length < 1.0) {
      b_loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &c_st);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
        &c_st);
    }

    f_obj_size[0] = 1;
    f_obj_size[1] = b_loop_ub;
    if (b_loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)b_loop_ub * sizeof(char_T));
    }

    b_st.site = &ec_emlrtRSI;
    RigidBodyTree_addBody(&b_st, newrobot, body, obj_data, f_obj_size, &iobj_2[7],
                          &iobj_0[6], &iobj_1[3]);
  }

  if (rigidbodytree->NumBodies >= 5.0) {
    body = rigidbodytree->Bodies[4];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(pid, &i_emlrtDCI, &st) - 1;
      parent = rigidbodytree->Bodies[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, 4,
        &j_emlrtBCI, &st)];
    } else {
      parent = &rigidbodytree->Base;
    }

    b_st.site = &ec_emlrtRSI;
    c_st.site = &nc_emlrtRSI;
    b_obj = parent->NameInternal;
    if (b_obj.Length < 1.0) {
      b_loop_ub = 0;
    } else {
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(b_obj.Length, &emlrtDCI, &c_st);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
        &c_st);
    }

    g_obj_size[0] = 1;
    g_obj_size[1] = b_loop_ub;
    if (b_loop_ub - 1 >= 0) {
      memcpy(&obj_data[0], &b_obj.Vector[0], (uint32_T)b_loop_ub * sizeof(char_T));
    }

    b_st.site = &ec_emlrtRSI;
    RigidBodyTree_addBody(&b_st, newrobot, body, obj_data, g_obj_size, &iobj_2[9],
                          &iobj_0[8], &iobj_1[4]);
  }

  obj->RigidBodyTreeInternal = newrobot;
  obj->RigidBodyTreeKinematicModel = 0.0;
}

static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj)
{
  static char_T cv2[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T cv3[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2' };

  static char_T cv4[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3' };

  static char_T cv5[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4' };

  static char_T cv6[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5' };

  static char_T cv1[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static char_T vec[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T cv[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv5[10] = { 0, 0, 0, 0, 0, -1, -1, -1, -1, -1 };

  static int8_T iv4[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T idx[5];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T s_Length;
  int32_T msubspace_size[2];
  int32_T poslim_size[2];
  int32_T s_Vector_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T s_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[36];
  int8_T c_I[9];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_obj = obj;
  st.site = &r_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  st.site = &s_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  e_st.site = &m_emlrtRSI;
  b_rand(moduleInstance, &e_st, idx);
  for (ibmat = 0; ibmat <= 2; ibmat += 2) {
    r = _mm_loadu_pd(&idx[ibmat]);
    _mm_storeu_pd(&dv[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv1[0] = muDoubleScalarFloor(dv[0]);
    dv1[1] = muDoubleScalarFloor(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&idx[ibmat], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (ibmat = 4; ibmat < 5; ibmat++) {
    idx[4] = muDoubleScalarFloor(idx[4] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    jcol = (int32_T)emlrtIntegerCheckR2012b(idx[i], &b_emlrtDCI, &c_st);
    emlrtDynamicBoundsCheckR2012b(jcol, 1, 62, &b_emlrtBCI, &c_st);
  }

  st.site = &hc_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  b_obj->Base.NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->Base.NameInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->Base.NameInternal.Vector[i];
  }

  for (i = 0; i < 4; i++) {
    s_Vector[i] = cv[i];
  }

  b_obj->Base.NameInternal.Length = 4.0;
  for (i = 0; i < 200; i++) {
    b_obj->Base.NameInternal.Vector[i] = s_Vector[i];
  }

  b_st.site = &ab_emlrtRSI;
  b_obj->_pobj2[0].InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj2[0].JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj2[0].ChildToJointTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 14; i++) {
    b_obj->_pobj2[0].PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    b_obj->_pobj2[0].HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    b_obj->_pobj2[0].MotionSubspaceInternal[i] = 0.0;
  }

  c_st.site = &cb_emlrtRSI;
  b_obj->_pobj2[0].NameInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->_pobj2[0].NameInternal.Vector[i] = ' ';
  }

  b_obj->_pobj2[0].TypeInternal.Length = 200.0;
  for (i = 0; i < 200; i++) {
    b_obj->_pobj2[0].TypeInternal.Vector[i] = ' ';
  }

  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->_pobj2[0].NameInternal.Vector[i];
  }

  for (i = 0; i < 8; i++) {
    s_Vector[i] = cv1[i];
  }

  b_obj->_pobj2[0].NameInternal.Length = 8.0;
  for (i = 0; i < 200; i++) {
    b_obj->_pobj2[0].NameInternal.Vector[i] = s_Vector[i];
  }

  c_st.site = &db_emlrtRSI;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->_pobj2[0].TypeInternal.Vector[i];
  }

  for (i = 0; i < 5; i++) {
    s_Vector[i] = vec[i];
  }

  b_obj->_pobj2[0].TypeInternal.Length = 5.0;
  for (i = 0; i < 200; i++) {
    b_obj->_pobj2[0].TypeInternal.Vector[i] = s_Vector[i];
  }

  c_st.site = &eb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  s_Length = b_obj->_pobj2[0].TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->_pobj2[0].TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &d_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &d_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv1[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->_pobj2[0].VelocityNumber = 1.0;
    b_obj->_pobj2[0].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv2[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->_pobj2[0].VelocityNumber = 1.0;
    b_obj->_pobj2[0].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv4[i];
    }

    b_obj->_pobj2[0].VelocityNumber = 6.0;
    b_obj->_pobj2[0].PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->_pobj2[0].VelocityNumber = 0.0;
    b_obj->_pobj2[0].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  c_st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&c_st, &b_obj->_pobj2[0], msubspace_data,
    msubspace_size);
  c_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  s_Length = b_obj->_pobj2[0].TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    s_Vector[i] = b_obj->_pobj2[0].TypeInternal.Vector[i];
  }

  if (s_Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &emlrtDCI, &d_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &d_st);
  }

  s_Vector_size[0] = 1;
  s_Vector_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s_Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_Vector_size)) {
    s_Length = b_obj->_pobj2[0].PositionNumber;
    if (s_Length < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &c_emlrtDCI, &b_st);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, &b_st);
    }

    switch_expression_size[0] = ibmat;
    switch_expression_size[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &b_emlrtECI, &b_st);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        b_obj->_pobj2[0].PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol
          + poslim_size[0] * i];
      }
    }

    s_Length = b_obj->_pobj2[0].PositionNumber;
    if (s_Length < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(s_Length, &d_emlrtDCI, &b_st);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, &b_st);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI, &b_st);
    for (i = 0; i < homepos_size_idx_1; i++) {
      b_obj->_pobj2[0].HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      switch_expression_size[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&switch_expression_size[0], 2, &poslim_size[0],
      2, &d_emlrtECI, &b_st);
    for (i = 0; i < 2; i++) {
      b_obj->_pobj2[0].PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI, &b_st);
    b_obj->_pobj2[0].HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  b_obj->Base.JointInternal = &b_obj->_pobj2[0];
  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_obj->Base.MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    c_I[i] = 0;
  }

  for (ibmat = 0; ibmat < 3; ibmat++) {
    c_I[ibmat + 3 * ibmat] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->Base.InertiaInternal[i] = (real_T)c_I[i];
  }

  for (i = 0; i < 36; i++) {
    b_I[i] = 0;
  }

  for (ibmat = 0; ibmat < 6; ibmat++) {
    b_I[ibmat + 6 * ibmat] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->Base.SpatialInertia[i] = (real_T)b_I[i];
  }

  b_st.site = &bb_emlrtRSI;
  b_obj->Base.CollisionsInternal = CollisionSet_CollisionSet(&b_st,
    &b_obj->_pobj1[0], 0.0);
  b_obj->Base.matlabCodegenIsDeleted = false;
  b_obj->Base.Index = 0.0;
  st.site = &gc_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  st.site = &ic_emlrtRSI;
  b_st.site = &lc_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[0] = RigidBody_RigidBody(&c_st, &b_obj->_pobj0[0], cv2,
    &b_obj->_pobj1[1], &b_obj->_pobj2[1]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[1] = RigidBody_RigidBody(&c_st, &b_obj->_pobj0[1], cv3,
    &b_obj->_pobj1[2], &b_obj->_pobj2[2]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[2] = RigidBody_RigidBody(&c_st, &b_obj->_pobj0[2], cv4,
    &b_obj->_pobj1[3], &b_obj->_pobj2[3]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[3] = RigidBody_RigidBody(&c_st, &b_obj->_pobj0[3], cv5,
    &b_obj->_pobj1[4], &b_obj->_pobj2[4]);
  c_st.site = &x_emlrtRSI;
  b_obj->Bodies[4] = RigidBody_RigidBody(&c_st, &b_obj->_pobj0[4], cv6,
    &b_obj->_pobj1[5], &b_obj->_pobj2[5]);
  b_obj->NumBodies = 0.0;
  b_obj->NumNonFixedBodies = 0.0;
  b_obj->PositionNumber = 0.0;
  b_obj->VelocityNumber = 0.0;
  b_st.site = &kc_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  e_st.site = &l_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  b_rand(moduleInstance, &f_st, idx);
  for (ibmat = 0; ibmat <= 2; ibmat += 2) {
    r = _mm_loadu_pd(&idx[ibmat]);
    _mm_storeu_pd(&dv2[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv3[0] = muDoubleScalarFloor(dv2[0]);
    dv3[1] = muDoubleScalarFloor(dv2[1]);
    r = _mm_loadu_pd(&dv3[0]);
    _mm_storeu_pd(&idx[ibmat], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (ibmat = 4; ibmat < 5; ibmat++) {
    idx[4] = muDoubleScalarFloor(idx[4] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    jcol = (int32_T)emlrtIntegerCheckR2012b(idx[i], &b_emlrtDCI, &d_st);
    emlrtDynamicBoundsCheckR2012b(jcol, 1, 62, &b_emlrtBCI, &d_st);
  }

  for (i = 0; i < 10; i++) {
    b_obj->PositionDoFMap[i] = (real_T)iv5[i];
  }

  for (i = 0; i < 10; i++) {
    b_obj->VelocityDoFMap[i] = (real_T)iv5[i];
  }

  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void b_validateattributes(const emlrtStack *sp, int32_T a_size[2])
{
  static const int32_T iv[2] = { 1, 43 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 8 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm',
    'p', 't', 'y' };

  static char_T g_u[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[43];
  char_T f_u[8];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a_size[1] == 0) {
    for (i = 0; i < 43; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &ll_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static boolean_T f_strcmp(char_T a_data[], int32_T a_size[2], char_T b_data[],
  int32_T b_size[2])
{
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_b;
  boolean_T b_bool;
  b_bool = false;
  b_b = (a_size[1] == 0);
  if (b_b && (b_size[1] == 0)) {
    b_bool = true;
  } else if (a_size[1] != b_size[1]) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 <= b_size[1] - 1) {
        if (a_data[kstr - 1] != b_data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_copy(const emlrtStack *
  sp, robotics_manip_internal_CollisionSet *obj,
  robotics_manip_internal_CollisionSet *iobj_0)
{
  void *copyGeometryInternal;
  emlrtStack b_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  robotics_manip_internal_CollisionSet *newObj;
  real_T t24_LocalPose[16];
  real_T t24_WorldPose[16];
  real_T newObj_MeshScale[3];
  real_T t22_MeshScale[3];
  real_T t24_MeshScale[3];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vc_emlrtRSI;
  newObj = CollisionSet_CollisionSet(&st, iobj_0, obj->MaxElements);
  newObj->Size = obj->Size;
  d = obj->Size;
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &c_emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    st.site = &wc_emlrtRSI;
    i1 = obj->CollisionGeometries.size[1] - 1;
    r = obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i,
      0, i1, &l_emlrtBCI, &st)];
    memcpy(&t24_LocalPose[0], &r.LocalPose[0], sizeof(real_T) << 4);
    memcpy(&t24_WorldPose[0], &r.WorldPose[0], sizeof(real_T) << 4);
    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = r.MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t24_MeshScale[i1] = t22_MeshScale[i1];
    }

    for (i1 = 0; i1 < 3; i1++) {
      t22_MeshScale[i1] = t24_MeshScale[i1];
    }

    b_st.site = &xc_emlrtRSI;
    copyGeometryInternal = collisioncodegen_copyGeometry(r.CollisionPrimitive);
    b_st.site = &yc_emlrtRSI;
    for (i1 = 0; i1 < 3; i1++) {
      newObj_MeshScale[i1] = t22_MeshScale[i1];
    }

    i1 = newObj->CollisionGeometries.size[1] - 1;
    for (i2 = 0; i2 < 3; i2++) {
      t24_MeshScale[i2] = newObj_MeshScale[i2];
    }

    expl_temp.CollisionPrimitive = copyGeometryInternal;
    memcpy(&expl_temp.LocalPose[0], &t24_LocalPose[0], sizeof(real_T) << 4);
    memcpy(&expl_temp.WorldPose[0], &t24_WorldPose[0], sizeof(real_T) << 4);
    for (i2 = 0; i2 < 3; i2++) {
      expl_temp.MeshScale[i2] = t24_MeshScale[i2];
    }

    newObj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
      i1, &k_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  return newObj;
}

static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, char_T parentName_data[], int32_T
  parentName_size[2], robotics_manip_internal_CollisionSet *iobj_0,
  rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2)
{
  static const int32_T iv[2] = { 1, 46 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 48 };

  static const int32_T iv6[2] = { 1, 48 };

  static const int32_T iv7[2] = { 1, 9 };

  static const int32_T iv8[2] = { 1, 52 };

  static const int32_T iv9[2] = { 1, 52 };

  static char_T l_u[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N',
    'a', 'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T g_u[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T h_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T j_u[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *jnt;
  robotics_manip_internal_RigidBody *body;
  real_T bid;
  real_T d;
  real_T pid;
  int32_T b_obj_Vector_size[2];
  int32_T b_parentName_size[2];
  int32_T bname_size[2];
  int32_T iv4[2];
  int32_T obj_Vector_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T bid2;
  int32_T i;
  int32_T obj_Vector_size_idx_1;
  char_T tmp_data[204];
  char_T bname_data[200];
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  char_T k_u[52];
  char_T d_u[51];
  char_T f_u[48];
  char_T b_u[46];
  char_T i_u[9];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &nc_emlrtRSI;
  bid = bodyin->NameInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = bodyin->NameInternal.Vector[i];
  }

  if (bid < 1.0) {
    obj_Vector_size_idx_1 = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(bid, &emlrtDCI, &b_st);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI,
      &b_st);
  }

  tmp_size[0] = 1;
  tmp_size[1] = obj_Vector_size_idx_1;
  for (i = 0; i < obj_Vector_size_idx_1; i++) {
    tmp_data[i] = obj_Vector[i];
  }

  st.site = &bd_emlrtRSI;
  bid = RigidBodyTree_findBodyIndexByName(&st, obj, tmp_data, tmp_size);
  if (bid > -1.0) {
    st.site = &cd_emlrtRSI;
    b_st.site = &nc_emlrtRSI;
    bid = bodyin->NameInternal.Length;
    for (i = 0; i < 200; i++) {
      obj_Vector[i] = bodyin->NameInternal.Vector[i];
    }

    if (bid < 1.0) {
      obj_Vector_size_idx_1 = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(bid, &emlrtDCI, &b_st);
      obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI,
        &b_st);
    }

    if (obj_Vector_size_idx_1 - 1 >= 0) {
      memcpy(&bname_data[0], &obj_Vector[0], (uint32_T)obj_Vector_size_idx_1 *
             sizeof(char_T));
    }

    st.site = &cd_emlrtRSI;
    for (i = 0; i < 51; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 51; i++) {
      d_u[i] = e_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    f_y = NULL;
    iv4[0] = 1;
    iv4[1] = obj_Vector_size_idx_1;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, obj_Vector_size_idx_1, m, &bname_data[0]);
    emlrtAssign(&f_y, m);
    b_st.site = &jl_emlrtRSI;
    b_error(&b_st, b_y, getString(&b_st, message(&b_st, d_y, f_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  st.site = &dd_emlrtRSI;
  b_parentName_size[0] = 1;
  b_parentName_size[1] = parentName_size[1];
  if (parentName_size[1] - 1 >= 0) {
    memcpy(&tmp_data[0], &parentName_data[0], (uint32_T)parentName_size[1] *
           sizeof(char_T));
  }

  b_st.site = &md_emlrtRSI;
  pid = RigidBodyTree_findBodyIndexByName(&b_st, obj, tmp_data,
    b_parentName_size);
  if (pid == -1.0) {
    b_st.site = &nd_emlrtRSI;
    for (i = 0; i < 46; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    e_y = NULL;
    for (i = 0; i < 2; i++) {
      iv4[i] = parentName_size[i];
    }

    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, parentName_size[1], m, &parentName_data[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &jl_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, message(&c_st, c_y, e_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  st.site = &ed_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    error(&b_st);
  }

  jnt = bodyin->JointInternal;
  st.site = &ed_emlrtRSI;
  b_st.site = &pd_emlrtRSI;
  bid = jnt->NameInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = jnt->NameInternal.Vector[i];
  }

  if (bid < 1.0) {
    obj_Vector_size_idx_1 = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(bid, &emlrtDCI, &b_st);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI,
      &b_st);
  }

  bname_size[0] = 1;
  bname_size[1] = obj_Vector_size_idx_1;
  if (obj_Vector_size_idx_1 - 1 >= 0) {
    memcpy(&bname_data[0], &obj_Vector[0], (uint32_T)obj_Vector_size_idx_1 *
           sizeof(char_T));
  }

  st.site = &ed_emlrtRSI;
  bid2 = -2;
  b_st.site = &qd_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  if (obj_Vector_size_idx_1 == 0) {
    for (i = 0; i < 48; i++) {
      f_u[i] = g_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &f_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 48; i++) {
      f_u[i] = h_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &f_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 9; i++) {
      i_u[i] = j_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 9, m, &i_u[0]);
    emlrtAssign(&i_y, m);
    d_st.site = &ll_emlrtRSI;
    b_error(&d_st, g_y, getString(&d_st, message(&d_st, h_y, i_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  d = obj->NumBodies;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &d_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
    b_st.site = &rd_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 4, &t_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &od_emlrtRSI;
      error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &rd_emlrtRSI;
    c_st.site = &pd_emlrtRSI;
    bid = jnt->NameInternal.Length;
    for (i = 0; i < 200; i++) {
      obj_Vector[i] = jnt->NameInternal.Vector[i];
    }

    if (bid < 1.0) {
      obj_Vector_size_idx_1 = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(bid, &emlrtDCI, &c_st);
      obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI,
        &c_st);
    }

    obj_Vector_size[0] = 1;
    obj_Vector_size[1] = obj_Vector_size_idx_1;
    if (obj_Vector_size_idx_1 - 1 >= 0) {
      memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)
             obj_Vector_size_idx_1 * sizeof(char_T));
    }

    if (f_strcmp(obj_Vector_data, obj_Vector_size, bname_data, bname_size)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  if (bid2 + 1 > 0) {
    st.site = &fd_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &od_emlrtRSI;
      error(&b_st);
    }

    jnt = bodyin->JointInternal;
    st.site = &fd_emlrtRSI;
    b_st.site = &pd_emlrtRSI;
    bid = jnt->NameInternal.Length;
    for (i = 0; i < 200; i++) {
      obj_Vector[i] = jnt->NameInternal.Vector[i];
    }

    if (bid < 1.0) {
      obj_Vector_size_idx_1 = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(bid, &emlrtDCI, &b_st);
      obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI,
        &b_st);
    }

    if (obj_Vector_size_idx_1 - 1 >= 0) {
      memcpy(&bname_data[0], &obj_Vector[0], (uint32_T)obj_Vector_size_idx_1 *
             sizeof(char_T));
    }

    st.site = &fd_emlrtRSI;
    for (i = 0; i < 52; i++) {
      k_u[i] = l_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &k_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 52; i++) {
      k_u[i] = l_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &k_u[0]);
    emlrtAssign(&k_y, m);
    l_y = NULL;
    iv4[0] = 1;
    iv4[1] = obj_Vector_size_idx_1;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, obj_Vector_size_idx_1, m, &bname_data[0]);
    emlrtAssign(&l_y, m);
    b_st.site = &jl_emlrtRSI;
    b_error(&b_st, j_y, getString(&b_st, message(&b_st, k_y, l_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  bid = obj->NumBodies + 1.0;
  st.site = &ld_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, &iobj_0[0], &iobj_1[0], iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(bid, &j_emlrtDCI, (emlrtConstCTX)sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 4, &r_emlrtBCI, (emlrtConstCTX)
    sp)] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (pid > 0.0) {
    emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 4, &s_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &k_emlrtDCI, (emlrtConstCTX)
    sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 5, &m_emlrtBCI, (emlrtConstCTX)sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &gd_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  st.site = &gd_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  bid = jnt->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = jnt->TypeInternal.Vector[i];
  }

  if (bid < 1.0) {
    obj_Vector_size_idx_1 = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(bid, &emlrtDCI, &b_st);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI,
      &b_st);
  }

  b_obj_Vector_size[0] = 1;
  b_obj_Vector_size[1] = obj_Vector_size_idx_1;
  if (obj_Vector_size_idx_1 - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)obj_Vector_size_idx_1 *
           sizeof(char_T));
  }

  if (!e_strcmp(obj_Vector_data, b_obj_Vector_size)) {
    obj->NumNonFixedBodies++;
    st.site = &hd_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &od_emlrtRSI;
      error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &l_emlrtDCI,
      (emlrtConstCTX)sp);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 5, &n_emlrtBCI,
      (emlrtConstCTX)sp) - 1;
    obj->PositionDoFMap[obj_Vector_size_idx_1] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[obj_Vector_size_idx_1 + 5] = obj->PositionNumber +
      jnt->PositionNumber;
    st.site = &id_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &od_emlrtRSI;
      error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &m_emlrtDCI,
      (emlrtConstCTX)sp);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 5, &o_emlrtBCI,
      (emlrtConstCTX)sp) - 1;
    obj->VelocityDoFMap[obj_Vector_size_idx_1] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[obj_Vector_size_idx_1 + 5] = obj->VelocityNumber +
      jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &n_emlrtDCI,
      (emlrtConstCTX)sp);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 5, &p_emlrtBCI,
      (emlrtConstCTX)sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(obj_Vector_size_idx_1 + 5 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &o_emlrtDCI,
      (emlrtConstCTX)sp);
    obj_Vector_size_idx_1 = emlrtDynamicBoundsCheckR2012b(i, 1, 5, &q_emlrtBCI,
      (emlrtConstCTX)sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(obj_Vector_size_idx_1 + 5 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &jd_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &kd_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static real_T RigidBodyTree_findBodyIndexByName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, char_T bodyname_data[], int32_T
  bodyname_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  real_T bid;
  real_T d;
  real_T obj_Length;
  int32_T b_obj_Vector_size[2];
  int32_T obj_Vector_size[2];
  int32_T i;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  bid = -1.0;
  bodyname_size[0] = 1;
  st.site = &sc_emlrtRSI;
  b_validateattributes(&st, bodyname_size);
  st.site = &tc_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  obj_Length = obj->Base.NameInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = obj->Base.NameInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI, &b_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (f_strcmp(obj_Vector_data, obj_Vector_size, bodyname_data, bodyname_size))
  {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &b_emlrtRTEI, (emlrtConstCTX)sp);
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= (int32_T)d - 1)) {
      st.site = &uc_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 4, &i_emlrtBCI,
        &st)];
      b_st.site = &nc_emlrtRSI;
      obj_Length = b_obj->NameInternal.Length;
      for (loop_ub = 0; loop_ub < 200; loop_ub++) {
        obj_Vector[loop_ub] = b_obj->NameInternal.Vector[loop_ub];
      }

      if (obj_Length < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI,
          &b_st);
      }

      b_obj_Vector_size[0] = 1;
      b_obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (f_strcmp(obj_Vector_data, b_obj_Vector_size, bodyname_data,
                   bodyname_size)) {
        bid = (real_T)i + 1.0;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  return bid;
}

static void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T e_u[5] = { 'J', 'o', 'i', 'n', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    d_u[i] = e_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &d_u[0]);
  emlrtAssign(&c_y, m);
  st.site = &jl_emlrtRSI;
  b_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static robotics_manip_internal_RigidBody *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet
  *iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2)
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 48 };

  static const int32_T iv5[2] = { 1, 4 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T g_u[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static char_T k_u[4] = { 'N', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *b_obj;
  rigidBodyJoint *newjoint;
  robotics_manip_internal_CharacterVector s;
  robotics_manip_internal_RigidBody *newbody;
  real_T tmp_data[36];
  real_T f_obj[16];
  real_T c_obj[14];
  real_T g_obj[9];
  real_T d_obj[7];
  real_T e_obj[3];
  real_T obj_Length;
  int32_T b_obj_Vector_size[2];
  int32_T c_obj_Vector_size[2];
  int32_T d_obj_Vector_size[2];
  int32_T obj_Vector_size[2];
  int32_T tmp_size[2];
  int32_T k;
  int32_T loop_ub;
  char_T b_obj_Vector_data[204];
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  char_T s_data[200];
  char_T d_u[48];
  char_T h_u[38];
  char_T b_u[33];
  char_T f_u[5];
  char_T j_u[4];
  int8_T c_I[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  obj_Length = obj->NameInternal.Length;
  for (k = 0; k < 200; k++) {
    obj_Vector[k] = obj->NameInternal.Vector[k];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &st);
  }

  st.site = &sd_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  newbody = iobj_2;
  s.Length = 200.0;
  for (k = 0; k < 200; k++) {
    s.Vector[k] = ' ';
  }

  iobj_2->NameInternal = s;
  b_st.site = &vd_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  if (loop_ub == 0) {
    for (k = 0; k < 33; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 48; k++) {
      d_u[k] = e_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 5; k++) {
      f_u[k] = g_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    d_st.site = &ll_emlrtRSI;
    b_error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  s = iobj_2->NameInternal;
  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  b_st.site = &wd_emlrtRSI;
  CharacterVector_setVector(&b_st, &s, obj_Vector_data, obj_Vector_size);
  iobj_2->NameInternal = s;
  b_obj_Vector_size[0] = 1;
  b_obj_Vector_size[1] = loop_ub + 4;
  if (loop_ub - 1 >= 0) {
    memcpy(&b_obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  for (k = 0; k < 4; k++) {
    b_obj_Vector_data[k + loop_ub] = cv[k];
  }

  b_st.site = &ab_emlrtRSI;
  iobj_2->JointInternal = rigidBodyJoint_rigidBodyJoint(&b_st, &iobj_1[0],
    b_obj_Vector_data, b_obj_Vector_size);
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  iobj_2->MassInternal = 1.0;
  for (k = 0; k < 3; k++) {
    iobj_2->CenterOfMassInternal[k] = 0.0;
  }

  for (k = 0; k < 9; k++) {
    b_I[k] = 0;
  }

  for (k = 0; k < 3; k++) {
    b_I[k + 3 * k] = 1;
  }

  for (k = 0; k < 9; k++) {
    iobj_2->InertiaInternal[k] = (real_T)b_I[k];
  }

  for (k = 0; k < 36; k++) {
    c_I[k] = 0;
  }

  for (k = 0; k < 6; k++) {
    c_I[k + 6 * k] = 1;
  }

  for (k = 0; k < 36; k++) {
    iobj_2->SpatialInertia[k] = (real_T)c_I[k];
  }

  b_st.site = &bb_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_CollisionSet(&b_st, &iobj_0[0], 0.0);
  iobj_2->matlabCodegenIsDeleted = false;
  st.site = &td_emlrtRSI;
  b_obj = obj->JointInternal;
  b_st.site = &xd_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  obj_Length = b_obj->TypeInternal.Length;
  for (k = 0; k < 200; k++) {
    obj_Vector[k] = b_obj->TypeInternal.Vector[k];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &d_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &d_st);
  }

  c_st.site = &ae_emlrtRSI;
  d_st.site = &pd_emlrtRSI;
  s = b_obj->NameInternal;
  if (s.Length < 1.0) {
    k = 0;
  } else {
    k = (int32_T)emlrtIntegerCheckR2012b(s.Length, &emlrtDCI, &d_st);
    k = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &d_st);
  }

  if (k - 1 >= 0) {
    memcpy(&s_data[0], &s.Vector[0], (uint32_T)k * sizeof(char_T));
  }

  c_obj_Vector_size[0] = 1;
  c_obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  tmp_size[0] = 1;
  tmp_size[1] = k;
  if (k - 1 >= 0) {
    memcpy(&b_obj_Vector_data[0], &s_data[0], (uint32_T)k * sizeof(char_T));
  }

  c_st.site = &be_emlrtRSI;
  newjoint = b_rigidBodyJoint_rigidBodyJoint(&c_st, &iobj_1[1],
    b_obj_Vector_data, tmp_size, obj_Vector_data, c_obj_Vector_size);
  c_st.site = &ce_emlrtRSI;
  d_st.site = &pd_emlrtRSI;
  obj_Length = b_obj->NameInternal.Length;
  if (obj_Length < 1.0) {
    k = 0;
  } else {
    k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &d_st);
    k = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &d_st);
  }

  if (k != 0) {
    c_st.site = &de_emlrtRSI;
    d_st.site = &pd_emlrtRSI;
    obj_Length = b_obj->NameInternal.Length;
    for (k = 0; k < 200; k++) {
      obj_Vector[k] = b_obj->NameInternal.Vector[k];
    }

    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &d_st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &d_st);
    }

    c_st.site = &de_emlrtRSI;
    d_st.site = &pe_emlrtRSI;
    e_st.site = &vb_emlrtRSI;
    if (loop_ub == 0) {
      for (k = 0; k < 38; k++) {
        h_u[k] = i_u[k];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&e_st, 38, m, &h_u[0]);
      emlrtAssign(&d_y, m);
      for (k = 0; k < 48; k++) {
        d_u[k] = e_u[k];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &d_u[0]);
      emlrtAssign(&e_y, m);
      for (k = 0; k < 4; k++) {
        j_u[k] = k_u[k];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&e_st, 4, m, &j_u[0]);
      emlrtAssign(&f_y, m);
      f_st.site = &ll_emlrtRSI;
      b_error(&f_st, d_y, getString(&f_st, message(&f_st, e_y, f_y, &c_emlrtMCI),
               &c_emlrtMCI), &c_emlrtMCI);
    }

    if (!newjoint->InTree) {
      s = newjoint->NameInternal;
      d_obj_Vector_size[0] = 1;
      d_obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      d_st.site = &qe_emlrtRSI;
      CharacterVector_setVector(&d_st, &s, obj_Vector_data, d_obj_Vector_size);
      newjoint->NameInternal = s;
    } else {
      d_st.site = &re_emlrtRSI;
      e_st.site = &se_emlrtRSI;
      warning(&e_st);
    }
  }

  for (k = 0; k < 14; k++) {
    c_obj[k] = b_obj->PositionLimitsInternal[k];
  }

  for (k = 0; k < 14; k++) {
    newjoint->PositionLimitsInternal[k] = c_obj[k];
  }

  for (k = 0; k < 7; k++) {
    d_obj[k] = b_obj->HomePositionInternal[k];
  }

  for (k = 0; k < 7; k++) {
    newjoint->HomePositionInternal[k] = d_obj[k];
  }

  for (k = 0; k < 3; k++) {
    e_obj[k] = b_obj->JointAxisInternal[k];
  }

  for (k = 0; k < 3; k++) {
    newjoint->JointAxisInternal[k] = e_obj[k];
  }

  c_st.site = &ee_emlrtRSI;
  rigidBodyJoint_get_MotionSubspace(&c_st, b_obj, tmp_data, tmp_size);
  c_st.site = &ee_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&c_st, newjoint, tmp_data, tmp_size);
  for (k = 0; k < 16; k++) {
    f_obj[k] = b_obj->JointToParentTransform[k];
  }

  for (k = 0; k < 16; k++) {
    newjoint->JointToParentTransform[k] = f_obj[k];
  }

  for (k = 0; k < 16; k++) {
    f_obj[k] = b_obj->ChildToJointTransform[k];
  }

  for (k = 0; k < 16; k++) {
    newjoint->ChildToJointTransform[k] = f_obj[k];
  }

  iobj_2->JointInternal = newjoint;
  iobj_2->MassInternal = obj->MassInternal;
  for (k = 0; k < 3; k++) {
    e_obj[k] = obj->CenterOfMassInternal[k];
  }

  for (k = 0; k < 3; k++) {
    iobj_2->CenterOfMassInternal[k] = e_obj[k];
  }

  for (k = 0; k < 9; k++) {
    g_obj[k] = obj->InertiaInternal[k];
  }

  for (k = 0; k < 9; k++) {
    iobj_2->InertiaInternal[k] = g_obj[k];
  }

  for (k = 0; k < 36; k++) {
    tmp_data[k] = obj->SpatialInertia[k];
  }

  for (k = 0; k < 36; k++) {
    iobj_2->SpatialInertia[k] = tmp_data[k];
  }

  st.site = &ud_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_copy(&st, obj->CollisionsInternal,
    &iobj_0[1]);
  return newbody;
}

static rigidBodyJoint *b_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, char_T jname_data[], int32_T jname_size[2], char_T
  jtype_data[], int32_T jtype_size[2])
{
  static const int32_T iv1[2] = { 1, 43 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 49 };

  static const int32_T iv4[2] = { 1, 52 };

  static const int32_T iv5[2] = { 1, 5 };

  static const int32_T iv6[2] = { 1, 5 };

  static const int32_T iv7[2] = { 1, 44 };

  static const int32_T iv8[2] = { 1, 44 };

  static char_T j_u[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T g_u[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r',
    'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T f_u[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n', 'r',
    'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n', 'g',
    'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T m_u[44] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e', '\'',
    ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',', ' ',
    '\'', 'f', 'i', 'x', 'e', 'd', '\'', ',', ' ', '\'', 'f', 'l', 'o', 'a', 't',
    'i', 'n', 'g', '\'' };

  static char_T c_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm', 'b',
    'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o',
    'i', 'c', 'e' };

  static char_T k_u[5] = { 'j', 't', 'y', 'p', 'e' };

  static char_T cv[3] = { ',', ' ', '\'' };

  static char_T cv1[2] = { '\'', ',' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv12[7] = { 1, 0, 0, 0, 0, 0, 0 };

  static int8_T iv10[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv9[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv11[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_CharacterVector s;
  real_T msubspace_data[36];
  real_T poslim_data[14];
  real_T d;
  int32_T inputstr_size[2];
  int32_T jointtype_size[2];
  int32_T msubspace_size[2];
  int32_T partial_match_size[2];
  int32_T poslim_size[2];
  int32_T s_size[2];
  int32_T switch_expression_size[2];
  int32_T homepos_size_idx_1;
  int32_T i;
  int32_T ibmat;
  int32_T jcol;
  char_T inputstr_data[205];
  char_T switch_expression_data[200];
  char_T h_u[52];
  char_T e_u[49];
  char_T d_u[46];
  char_T l_u[44];
  char_T b_u[43];
  char_T jointtype_data[9];
  char_T partial_match_data[9];
  char_T i_u[5];
  int8_T b_I[36];
  int8_T homepos_data[7];
  int8_T b_b[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 14; i++) {
    b_obj->PositionLimitsInternal[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    b_obj->HomePositionInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    b_obj->MotionSubspaceInternal[i] = 0.0;
  }

  jname_size[0] = 1;
  st.site = &tb_emlrtRSI;
  validateattributes(&st, jname_size);
  st.site = &cb_emlrtRSI;
  s.Length = 200.0;
  for (i = 0; i < 200; i++) {
    s.Vector[i] = ' ';
  }

  b_obj->NameInternal = s;
  s.Length = 200.0;
  for (i = 0; i < 200; i++) {
    s.Vector[i] = ' ';
  }

  b_obj->TypeInternal = s;
  s = b_obj->NameInternal;
  st.site = &ub_emlrtRSI;
  CharacterVector_setVector(&st, &s, jname_data, jname_size);
  b_obj->NameInternal = s;
  st.site = &fe_emlrtRSI;
  b_st.site = &ge_emlrtRSI;
  c_st.site = &he_emlrtRSI;
  get_match(&c_st, jtype_data, jtype_size, partial_match_data,
            partial_match_size, &ibmat);
  if ((ibmat == 0) || (jtype_size[1] == 0)) {
    jointtype_size[0] = 1;
    jointtype_size[1] = 8;
    for (i = 0; i < 8; i++) {
      jointtype_data[i] = ' ';
    }

    if ((ibmat == 0) || (jtype_size[1] == 0)) {
      for (i = 0; i < 46; i++) {
        d_u[i] = f_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 46, m, &d_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 52; i++) {
        h_u[i] = j_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&b_st, 52, m, &h_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 5; i++) {
        i_u[i] = k_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&b_st, 5, m, &i_u[0]);
      emlrtAssign(&f_y, m);
      for (i = 0; i < 44; i++) {
        l_u[i] = m_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&b_st, 44, m, &l_u[0]);
      emlrtAssign(&h_y, m);
      inputstr_size[0] = 1;
      inputstr_size[1] = jtype_size[1] + 5;
      for (i = 0; i < 3; i++) {
        inputstr_data[i] = cv[i];
      }

      if (jtype_size[1] - 1 >= 0) {
        memcpy(&inputstr_data[3], &jtype_data[0], (uint32_T)jtype_size[1] *
               sizeof(char_T));
      }

      for (i = 0; i < 2; i++) {
        inputstr_data[(i + jtype_size[1]) + 3] = cv1[i];
      }

      j_y = NULL;
      for (i = 0; i < 2; i++) {
        partial_match_size[i] = inputstr_size[i];
      }

      m = emlrtCreateCharArray(2, &partial_match_size[0]);
      emlrtInitCharArrayR2013a(&b_st, jtype_size[1] + 5, m, &inputstr_data[0]);
      emlrtAssign(&j_y, m);
      c_st.site = &cm_emlrtRSI;
      b_error(&c_st, b_y, getString(&c_st, c_message(&c_st, d_y, f_y, h_y, j_y,
                &h_emlrtMCI), &h_emlrtMCI), &h_emlrtMCI);
    }
  } else if (ibmat > 1) {
    for (i = 0; i < 43; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 49; i++) {
      e_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 49, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      i_u[i] = k_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 5, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 44; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 44, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    inputstr_size[0] = 1;
    inputstr_size[1] = jtype_size[1] + 5;
    for (i = 0; i < 3; i++) {
      inputstr_data[i] = cv[i];
    }

    if (jtype_size[1] - 1 >= 0) {
      memcpy(&inputstr_data[3], &jtype_data[0], (uint32_T)jtype_size[1] * sizeof
             (char_T));
    }

    for (i = 0; i < 2; i++) {
      inputstr_data[(i + jtype_size[1]) + 3] = cv1[i];
    }

    i_y = NULL;
    for (i = 0; i < 2; i++) {
      partial_match_size[i] = inputstr_size[i];
    }

    m = emlrtCreateCharArray(2, &partial_match_size[0]);
    emlrtInitCharArrayR2013a(&b_st, jtype_size[1] + 5, m, &inputstr_data[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &dm_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, c_message(&c_st, c_y, e_y, g_y, i_y,
              &g_emlrtMCI), &g_emlrtMCI), &g_emlrtMCI);
  } else {
    jointtype_size[0] = 1;
    jointtype_size[1] = partial_match_size[1];
    if (partial_match_size[1] - 1 >= 0) {
      memcpy(&jointtype_data[0], &partial_match_data[0], (uint32_T)
             partial_match_size[1] * sizeof(char_T));
    }
  }

  st.site = &db_emlrtRSI;
  s = b_obj->TypeInternal;
  b_st.site = &oe_emlrtRSI;
  CharacterVector_setVector(&b_st, &s, jointtype_data, jointtype_size);
  b_obj->TypeInternal = s;
  st.site = &eb_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  s = b_obj->TypeInternal;
  if (s.Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s.Length, &emlrtDCI, &b_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s.Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    ibmat = 2;
  } else {
    ibmat = -1;
  }

  switch (ibmat) {
   case 0:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv9[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv11[i];
    }
    break;

   case 1:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = (real_T)iv10[i];
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv11[i];
    }
    break;

   case 2:
    for (i = 0; i < 36; i++) {
      b_I[i] = 0;
    }

    for (ibmat = 0; ibmat < 6; ibmat++) {
      b_I[ibmat + 6 * ibmat] = 1;
    }

    msubspace_size[0] = 6;
    msubspace_size[1] = 6;
    for (i = 0; i < 36; i++) {
      msubspace_data[i] = (real_T)b_I[i];
    }

    poslim_size[0] = 7;
    poslim_size[1] = 2;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 3;
      for (homepos_size_idx_1 = 0; homepos_size_idx_1 < 3; homepos_size_idx_1++)
      {
        b_b[ibmat + homepos_size_idx_1] = (int8_T)(10 * jcol - 5);
      }

      for (i = 0; i < 4; i++) {
        poslim_data[i + 7 * jcol] = rtNaN;
      }
    }

    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < 3; jcol++) {
        poslim_data[(jcol + 7 * i) + 4] = (real_T)b_b[jcol + 3 * i];
      }
    }

    homepos_size_idx_1 = 7;
    for (i = 0; i < 7; i++) {
      homepos_data[i] = iv12[i];
    }

    b_obj->VelocityNumber = 6.0;
    b_obj->PositionNumber = 7.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = rtNaN;
    }
    break;

   default:
    msubspace_size[0] = 6;
    msubspace_size[1] = 1;
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0.0;
    }

    poslim_size[0] = 1;
    poslim_size[1] = 2;
    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    homepos_size_idx_1 = 1;
    homepos_data[0] = 0;
    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  st.site = &fb_emlrtRSI;
  rigidBodyJoint_set_MotionSubspace(&st, b_obj, msubspace_data, msubspace_size);
  st.site = &gb_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  s = b_obj->TypeInternal;
  if (s.Length < 1.0) {
    ibmat = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(s.Length, &emlrtDCI, &b_st);
    ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  s_size[0] = 1;
  s_size[1] = ibmat;
  if (ibmat - 1 >= 0) {
    memcpy(&switch_expression_data[0], &s.Vector[0], (uint32_T)ibmat * sizeof
           (char_T));
  }

  if (!e_strcmp(switch_expression_data, s_size)) {
    d = b_obj->PositionNumber;
    if (d < 1.0) {
      ibmat = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtConstCTX)sp);
      ibmat = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &c_emlrtBCI, (emlrtConstCTX)
        sp);
    }

    partial_match_size[0] = ibmat;
    partial_match_size[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&partial_match_size[0], 2, &poslim_size[0], 2,
      &b_emlrtECI, (void *)sp);
    for (i = 0; i < 2; i++) {
      for (jcol = 0; jcol < ibmat; jcol++) {
        b_obj->PositionLimitsInternal[jcol + 7 * i] = poslim_data[jcol +
          poslim_size[0] * i];
      }
    }

    d = b_obj->PositionNumber;
    if (d < 1.0) {
      i = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)sp);
      i = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &d_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(i, homepos_size_idx_1, &c_emlrtECI,
      (emlrtConstCTX)sp);
    for (i = 0; i < homepos_size_idx_1; i++) {
      b_obj->HomePositionInternal[i] = (real_T)homepos_data[i];
    }
  } else {
    for (i = 0; i < 2; i++) {
      partial_match_size[i] = i + 1;
    }

    emlrtSubAssignSizeCheckR2012b(&partial_match_size[0], 2, &poslim_size[0], 2,
      &d_emlrtECI, (void *)sp);
    for (i = 0; i < 2; i++) {
      b_obj->PositionLimitsInternal[7 * i] = poslim_data[i];
    }

    emlrtSubAssignSizeCheck1dR2017a(1, homepos_size_idx_1, &e_emlrtECI,
      (emlrtConstCTX)sp);
    b_obj->HomePositionInternal[0] = (real_T)homepos_data[0];
  }

  return b_obj;
}

static void get_match(const emlrtStack *sp, char_T str_data[], int32_T str_size
                      [2], char_T match_data[], int32_T match_size[2], int32_T
                      *nmatched)
{
  static char_T cv[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
    '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19',
    '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$',
    '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3',
    '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b',
    'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~',
    '\x7f' };

  static char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T d_vstr[8] = { 'f', 'l', 'o', 'a', 't', 'i', 'n', 'g' };

  static char_T vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T exitg1;
  int32_T minnanb;
  int32_T ns;
  int32_T partial_match_size_idx_1;
  char_T partial_match_data[9];
  boolean_T b_bool;
  boolean_T b_guard1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  boolean_T guard4;
  boolean_T matched;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  partial_match_size_idx_1 = 8;
  for (minnanb = 0; minnanb < 8; minnanb++) {
    partial_match_data[minnanb] = ' ';
  }

  *nmatched = 0;
  matched = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (str_size[1] <= 8) {
    st.site = &ie_emlrtRSI;
    ns = str_size[1];
    b_bool = false;
    if (str_size[1] < 8) {
      minnanb = str_size[1];
    } else {
      minnanb = 8;
    }

    b_guard1 = false;
    if (ns <= minnanb) {
      if (minnanb < ns) {
        ns = minnanb;
      }

      b_guard1 = true;
    } else if (str_size[1] == 8) {
      ns = 8;
      b_guard1 = true;
    }

    if (b_guard1) {
      minnanb = 1;
      do {
        exitg1 = 0;
        if (minnanb - 1 <= ns - 1) {
          b_st.site = &je_emlrtRSI;
          assertSupportedString(&b_st, str_data[minnanb - 1]);
          b_st.site = &ke_emlrtRSI;
          assertSupportedString(&b_st, vstr[minnanb - 1]);
          b_st.site = &le_emlrtRSI;
          c_st.site = &me_emlrtRSI;
          d_st.site = &ne_emlrtRSI;
          assertSupportedString(&d_st, str_data[minnanb - 1]);
          b_st.site = &le_emlrtRSI;
          c_st.site = &me_emlrtRSI;
          d_st.site = &ne_emlrtRSI;
          assertSupportedString(&d_st, vstr[minnanb - 1]);
          if (cv[(int32_T)((uint32_T)(uint8_T)str_data[minnanb - 1] & 127U)] !=
              cv[(int32_T)vstr[minnanb - 1]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      if (str_size[1] == 8) {
        *nmatched = 1;
        match_size[0] = 1;
        match_size[1] = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          match_data[minnanb] = vstr[minnanb];
        }
      } else {
        for (minnanb = 0; minnanb < 8; minnanb++) {
          partial_match_data[minnanb] = vstr[minnanb];
        }

        matched = true;
        *nmatched = 1;
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
      st.site = &ie_emlrtRSI;
      ns = str_size[1];
      b_bool = false;
      if (str_size[1] < 9) {
        minnanb = str_size[1];
      } else {
        minnanb = 9;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str_size[1] == 9) {
        ns = 9;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &je_emlrtRSI;
            assertSupportedString(&b_st, str_data[minnanb - 1]);
            b_st.site = &ke_emlrtRSI;
            assertSupportedString(&b_st, b_vstr[minnanb - 1]);
            b_st.site = &le_emlrtRSI;
            c_st.site = &me_emlrtRSI;
            d_st.site = &ne_emlrtRSI;
            assertSupportedString(&d_st, str_data[minnanb - 1]);
            b_st.site = &le_emlrtRSI;
            c_st.site = &me_emlrtRSI;
            d_st.site = &ne_emlrtRSI;
            assertSupportedString(&d_st, b_vstr[minnanb - 1]);
            if (cv[(int32_T)((uint32_T)(uint8_T)str_data[minnanb - 1] & 127U)]
                != cv[(int32_T)b_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str_size[1] == 9) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 9;
          for (minnanb = 0; minnanb < 9; minnanb++) {
            match_data[minnanb] = b_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 9;
            for (minnanb = 0; minnanb < 9; minnanb++) {
              partial_match_data[minnanb] = b_vstr[minnanb];
            }
          }

          matched = true;
          (*nmatched)++;
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
      st.site = &ie_emlrtRSI;
      ns = str_size[1];
      b_bool = false;
      if (str_size[1] < 5) {
        minnanb = str_size[1];
      } else {
        minnanb = 5;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str_size[1] == 5) {
        ns = 5;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &je_emlrtRSI;
            assertSupportedString(&b_st, str_data[minnanb - 1]);
            b_st.site = &ke_emlrtRSI;
            assertSupportedString(&b_st, c_vstr[minnanb - 1]);
            b_st.site = &le_emlrtRSI;
            c_st.site = &me_emlrtRSI;
            d_st.site = &ne_emlrtRSI;
            assertSupportedString(&d_st, str_data[minnanb - 1]);
            b_st.site = &le_emlrtRSI;
            c_st.site = &me_emlrtRSI;
            d_st.site = &ne_emlrtRSI;
            assertSupportedString(&d_st, c_vstr[minnanb - 1]);
            if (cv[(int32_T)((uint32_T)(uint8_T)str_data[minnanb - 1] & 127U)]
                != cv[(int32_T)c_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str_size[1] == 5) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 5;
          for (minnanb = 0; minnanb < 5; minnanb++) {
            match_data[minnanb] = c_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 5;
            for (minnanb = 0; minnanb < 5; minnanb++) {
              partial_match_data[minnanb] = c_vstr[minnanb];
            }
          }

          matched = true;
          (*nmatched)++;
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
      st.site = &ie_emlrtRSI;
      ns = str_size[1];
      b_bool = false;
      if (str_size[1] < 8) {
        minnanb = str_size[1];
      } else {
        minnanb = 8;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str_size[1] == 8) {
        ns = 8;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &je_emlrtRSI;
            assertSupportedString(&b_st, str_data[minnanb - 1]);
            b_st.site = &ke_emlrtRSI;
            assertSupportedString(&b_st, d_vstr[minnanb - 1]);
            b_st.site = &le_emlrtRSI;
            c_st.site = &me_emlrtRSI;
            d_st.site = &ne_emlrtRSI;
            assertSupportedString(&d_st, str_data[minnanb - 1]);
            b_st.site = &le_emlrtRSI;
            c_st.site = &me_emlrtRSI;
            d_st.site = &ne_emlrtRSI;
            assertSupportedString(&d_st, d_vstr[minnanb - 1]);
            if (cv[(int32_T)((uint32_T)(uint8_T)str_data[minnanb - 1] & 127U)]
                != cv[(int32_T)d_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str_size[1] == 8) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 8;
          for (minnanb = 0; minnanb < 8; minnanb++) {
            match_data[minnanb] = d_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 8;
            for (minnanb = 0; minnanb < 8; minnanb++) {
              partial_match_data[minnanb] = d_vstr[minnanb];
            }
          }

          (*nmatched)++;
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
    if (*nmatched == 0) {
      match_size[0] = 1;
      match_size[1] = 8;
      for (minnanb = 0; minnanb < 8; minnanb++) {
        match_data[minnanb] = ' ';
      }
    } else {
      match_size[0] = 1;
      match_size[1] = partial_match_size_idx_1;
      memcpy(&match_data[0], &partial_match_data[0], (uint32_T)
             partial_match_size_idx_1 * sizeof(char_T));
    }
  }
}

static void assertSupportedString(const emlrtStack *sp, char_T s)
{
  static const int32_T iv[2] = { 1, 31 };

  static const int32_T iv1[2] = { 1, 31 };

  static char_T c_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[31];
  st.prev = sp;
  st.tls = sp->tls;
  if ((uint8_T)s > 127) {
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 31, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 31, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)emlrtMxGetData(m) = MAX_int8_T;
    emlrtAssign(&c_y, m);
    st.site = &kl_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &i_emlrtMCI),
             &i_emlrtMCI), &i_emlrtMCI);
  }
}

static void warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 38 };

  static char_T b_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't',
    ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[38];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 38; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 38, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &em_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void mw__internal__call__reset(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &df_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[4], real_T c_y0[4], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 45 };

  static const int32_T iv5[2] = { 1, 51 };

  static const int32_T iv6[2] = { 1, 5 };

  static const int32_T iv7[2] = { 1, 4 };

  static const int32_T iv8[2] = { 1, 5 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T cv[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  static char_T h_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T i_u[4] = { 's', 't', 'e', 'p' };

  coder_array_real_T b_b;
  coder_array_real_T r1;
  coder_array_real_T_2D A;
  coder_array_real_T_2D r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody *obj;
  real_T tmp_data[14];
  real_T varargout_1[4];
  real_T b_m;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T k;
  real_T n;
  real_T pnum;
  int32_T obj_Vector_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  int32_T unnamed_idx_1;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  char_T b_u[51];
  char_T c_u[45];
  char_T varargout_2_Status_data[14];
  char_T f_u[5];
  char_T g_u[4];
  int8_T b_I[16];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &ef_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 51; i++) {
        b_u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 5; i++) {
        f_u[i] = h_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &f_u[0]);
      emlrtAssign(&g_y, m);
      d_st.site = &d_emlrtRSI;
      b_error(&d_st, y, getString(&d_st, message(&d_st, d_y, g_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
    }

    moduleInstance->sysobj.isInitialized = 1;
    d_st.site = &d_emlrtRSI;
    IKBlock_setupImpl(moduleInstance, &d_st, &moduleInstance->sysobj);
  }

  b_st.site = &d_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  if (moduleInstance->sysobj.IKInternal.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      c_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 45; i++) {
      c_u[i] = e_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &c_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 4; i++) {
      g_u[i] = i_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 4, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &d_emlrtRSI;
    b_error(&d_st, b_y, getString(&d_st, message(&d_st, e_y, h_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.IKInternal.isInitialized != 1) {
    d_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.IKInternal.isSetupComplete = false;
    if (moduleInstance->sysobj.IKInternal.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&e_st, 51, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      for (i = 0; i < 51; i++) {
        b_u[i] = d_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&e_st, 51, m, &b_u[0]);
      emlrtAssign(&f_y, m);
      for (i = 0; i < 5; i++) {
        f_u[i] = h_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &f_u[0]);
      emlrtAssign(&i_y, m);
      f_st.site = &d_emlrtRSI;
      b_error(&f_st, c_y, getString(&f_st, message(&f_st, f_y, i_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
    }

    moduleInstance->sysobj.IKInternal.isInitialized = 1;
    f_st.site = &d_emlrtRSI;
    g_st.site = &ff_emlrtRSI;
    n = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(n, &p_emlrtDCI, &g_st);
    d2 = emlrtIntegerCheckR2012b(d2, &q_emlrtDCI, &g_st);
    d3 = emlrtIntegerCheckR2012b(2.0 * n, &r_emlrtDCI, &g_st);
    array_real_T_2D_Constructor(&A);
    array_real_T_2D_SetSize(&A, (int32_T)d2, (int32_T)d3);
    loop_ub = (int32_T)d2 * (int32_T)d3;
    for (i = 0; i < loop_ub; i++) {
      A.vector.data[i] = 0.0;
    }

    array_real_T_Constructor(&b_b);
    array_real_T_SetSize(&b_b, (int32_T)emlrtIntegerCheckR2012b(2.0 * n,
      &bb_emlrtDCI, &g_st));
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &bb_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      b_b.vector.data[i] = 0.0;
    }

    k = 1.0;
    b_m = 1.0;
    d2 = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->NumBodies;
    i = (int32_T)d2;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
      &e_emlrtRTEI, &g_st);
    array_real_T_2D_Constructor(&r);
    for (b_i = 0; b_i < i; b_i++) {
      h_st.site = &if_emlrtRSI;
      obj = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->
        Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 4, &fb_emlrtBCI, &h_st)];
      if (obj->Index == 0.0) {
        i_st.site = &od_emlrtRSI;
        error(&i_st);
      }

      joint = obj->JointInternal;
      pnum = joint->PositionNumber;
      h_st.site = &jf_emlrtRSI;
      i_st.site = &hb_emlrtRSI;
      n = joint->TypeInternal.Length;
      for (i1 = 0; i1 < 200; i1++) {
        obj_Vector[i1] = joint->TypeInternal.Vector[i1];
      }

      if (n < 1.0) {
        loop_ub = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(n, &emlrtDCI, &i_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i1, 1, 200, &emlrtBCI, &i_st);
      }

      obj_Vector_size[0] = 1;
      obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
        d2 = (k + pnum) - 1.0;
        if (k > d2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(k, &s_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, A.size[0], &w_emlrtBCI,
            &g_st) - 1;
          i2 = (int32_T)emlrtIntegerCheckR2012b(d2, &t_emlrtDCI, &g_st);
          i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, A.size[0], &x_emlrtBCI,
            &g_st);
        }

        d2 = (b_m + pnum) - 1.0;
        if (b_m > d2) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = (int32_T)emlrtIntegerCheckR2012b(b_m, &u_emlrtDCI, &g_st);
          i3 = emlrtDynamicBoundsCheckR2012b(i3, 1, A.size[1], &y_emlrtBCI,
            &g_st) - 1;
          i4 = (int32_T)emlrtIntegerCheckR2012b(d2, &v_emlrtDCI, &g_st);
          i4 = emlrtDynamicBoundsCheckR2012b(i4, 1, A.size[1], &ab_emlrtBCI,
            &g_st);
        }

        h_st.site = &kf_emlrtRSI;
        eye(&h_st, pnum, &r);
        tmp_size[0] = i2 - i1;
        tmp_size[1] = i4 - i3;
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &r.size[0], 2,
          &g_emlrtECI, &g_st);
        loop_ub = i2 - i1;
        unnamed_idx_1 = i4 - i3;
        for (i2 = 0; i2 < unnamed_idx_1; i2++) {
          for (i4 = 0; i4 < loop_ub; i4++) {
            A.vector.data[(i1 + i4) + A.size[0] * (i3 + i2)] = r.vector.data[i4
              + loop_ub * i2];
          }
        }

        d2 = (k + pnum) - 1.0;
        if (k > d2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(k, &w_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, A.size[0], &bb_emlrtBCI,
            &g_st) - 1;
          i2 = (int32_T)emlrtIntegerCheckR2012b(d2, &x_emlrtDCI, &g_st);
          i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, A.size[0], &cb_emlrtBCI,
            &g_st);
        }

        d2 = b_m + pnum;
        d3 = (b_m + 2.0 * pnum) - 1.0;
        if (d2 > d3) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = (int32_T)emlrtIntegerCheckR2012b(d2, &y_emlrtDCI, &g_st);
          i3 = emlrtDynamicBoundsCheckR2012b(i3, 1, A.size[1], &db_emlrtBCI,
            &g_st) - 1;
          i4 = (int32_T)emlrtIntegerCheckR2012b(d3, &ab_emlrtDCI, &g_st);
          i4 = emlrtDynamicBoundsCheckR2012b(i4, 1, A.size[1], &eb_emlrtBCI,
            &g_st);
        }

        h_st.site = &lf_emlrtRSI;
        eye(&h_st, pnum, &r);
        unnamed_idx_1 = r.size[0] * r.size[1];
        array_real_T_2D_SetSize(&r, r.size[0], r.size[1]);
        loop_ub = unnamed_idx_1 - 1;
        for (unnamed_idx_1 = 0; unnamed_idx_1 <= loop_ub; unnamed_idx_1++) {
          r.vector.data[unnamed_idx_1] = -r.vector.data[unnamed_idx_1];
        }

        tmp_size[0] = i2 - i1;
        tmp_size[1] = i4 - i3;
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &r.size[0], 2,
          &h_emlrtECI, &g_st);
        loop_ub = i2 - i1;
        unnamed_idx_1 = i4 - i3;
        for (i2 = 0; i2 < unnamed_idx_1; i2++) {
          for (i4 = 0; i4 < loop_ub; i4++) {
            A.vector.data[(i1 + i4) + A.size[0] * (i3 + i2)] = r.vector.data[i4
              + loop_ub * i2];
          }
        }

        h_st.site = &mf_emlrtRSI;
        rigidBodyJoint_get_PositionLimits(&h_st, joint, tmp_data, tmp_size);
        emlrtDynamicBoundsCheckR2012b(2, 1, tmp_size[0] << 1, &u_emlrtBCI, &g_st);
        i1 = (int32_T)emlrtIntegerCheckR2012b(b_m, &eb_emlrtDCI, &g_st);
        b_b.vector.data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_b.size[0],
          &gb_emlrtBCI, &g_st) - 1] = tmp_data[1];
        h_st.site = &nf_emlrtRSI;
        rigidBodyJoint_get_PositionLimits(&h_st, joint, tmp_data, tmp_size);
        emlrtDynamicBoundsCheckR2012b(1, 1, tmp_size[0] << 1, &v_emlrtBCI, &g_st);
        b_b.vector.data[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_m +
          1U), 1, b_b.size[0], &hb_emlrtBCI, &g_st) - 1] = -tmp_data[0];
        b_m += 2.0 * pnum;
      }

      k += pnum;
    }

    array_real_T_2D_Destructor(&r);
    array_real_T_2D_Destructor(&A);
    g_st.site = &gf_emlrtRSI;
    RigidBodyTree_get_JointPositionLimits(&g_st,
      moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal,
      &moduleInstance->sysobj.IKInternal.Limits);
    g_st.site = &hf_emlrtRSI;
    h_st.site = &tf_emlrtRSI;
    i_st.site = &uf_emlrtRSI;
    moduleInstance->sysobj.IKInternal._pobj0.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs =
      &moduleInstance->sysobj.IKInternal._pobj0;
    for (i = 0; i < 36; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->WeightMatrix[i] = 0.0;
    }

    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->Robot =
      moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal;
    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->KinematicModel =
      moduleInstance->sysobj.IKInternal.RigidBodyTreeKinematicModel;
    loop_ub = moduleInstance->sysobj.IKInternal.Limits.size[0] << 1;
    array_real_T_2D_SetSize(&moduleInstance->sysobj.IKInternal.Solver->
      ExtraArgs->Limits, moduleInstance->sysobj.IKInternal.Limits.size[0], 2);
    array_real_T_Constructor(&r1);
    array_real_T_SetSize(&r1, loop_ub);
    for (i = 0; i < loop_ub; i++) {
      r1.vector.data[i] = moduleInstance->sysobj.IKInternal.Limits.vector.data[i];
    }

    loop_ub = r1.size[0];
    for (i = 0; i < loop_ub; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->Limits.vector.data[i]
        = r1.vector.data[i];
    }

    array_real_T_Destructor(&r1);
    for (i = 0; i < 16; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_I[loop_ub + (loop_ub << 2)] = 1;
    }

    for (i = 0; i < 16; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->Tform[i] = (real_T)
        b_I[i];
    }

    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->BodyIndex = -1.0;
    array_real_T_SetSize(&moduleInstance->sysobj.IKInternal.Solver->
                         ExtraArgs->ErrTemp, 6);
    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->ErrTemp.vector.data[i]
        = 0.0;
    }

    moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->CostTemp = 0.0;
    d2 = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(d2, &db_emlrtDCI, &g_st);
    array_real_T_SetSize(&b_b, (int32_T)emlrtIntegerCheckR2012b(d2, &cb_emlrtDCI,
      &g_st));
    d2 = moduleInstance->sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(d2, &db_emlrtDCI, &g_st);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d2, &cb_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      b_b.vector.data[i] = 0.0;
    }

    emlrtDimSizeGeqCheckR2012b(35, b_b.size[0], &i_emlrtECI, &g_st);
    array_real_T_SetSize(&moduleInstance->sysobj.IKInternal.Solver->
                         ExtraArgs->GradTemp, b_b.size[0]);
    loop_ub = b_b.size[0];
    for (i = 0; i < loop_ub; i++) {
      moduleInstance->sysobj.IKInternal.Solver->ExtraArgs->
        GradTemp.vector.data[i] = b_b.vector.data[i];
    }

    array_real_T_Destructor(&b_b);
    moduleInstance->sysobj.IKInternal.isSetupComplete = true;
  }

  d_st.site = &d_emlrtRSI;
  inverseKinematics_stepImpl(moduleInstance, &d_st,
    &moduleInstance->sysobj.IKInternal, b_u0, b_u1, b_u2, varargout_1, &d, &d1,
    &n, varargout_2_Status_data, tmp_size);
  *y1_PoseErrorNorm = d1;
  *y1_Iterations = d;
  d2 = muDoubleScalarRound(n);
  if (d2 < 65536.0) {
    if (d2 >= 0.0) {
      *y1_ExitFlag = (uint16_T)d2;
    } else {
      *y1_ExitFlag = 0U;
    }
  } else if (d2 >= 65536.0) {
    *y1_ExitFlag = MAX_uint16_T;
  } else {
    *y1_ExitFlag = 0U;
  }

  b_bool = false;
  if (tmp_size[1] != 7) {
  } else {
    loop_ub = 1;
    do {
      exitg1 = 0;
      if (loop_ub - 1 < 7) {
        if (varargout_2_Status_data[loop_ub - 1] != cv[loop_ub - 1]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    *y1_Status = 1U;
  } else {
    *y1_Status = 2U;
  }

  for (i = 0; i < 4; i++) {
    c_y0[i] = varargout_1[i];
  }
}

static void eye(const emlrtStack *sp, real_T varargin_1, coder_array_real_T_2D
                *b_I)
{
  static const int32_T iv[2] = { 1, 28 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 28 };

  static const int32_T iv3[2] = { 1, 21 };

  static char_T c_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T e_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T n;
  real_T t;
  int32_T b_m;
  int32_T i;
  int32_T loop_ub;
  char_T b_u[28];
  char_T d_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &of_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &pf_emlrtRSI;
  if ((t != muDoubleScalarFloor(t)) || muDoubleScalarIsInf(t) || (t >
       2.147483647E+9)) {
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&f_y, m);
    c_st.site = &bm_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, d_message(&c_st, c_y, d_y, f_y,
              &m_emlrtMCI), &m_emlrtMCI), &m_emlrtMCI);
  }

  if (t <= 0.0) {
    n = 0.0;
  } else {
    n = t;
  }

  if (!(n <= 2.147483647E+9)) {
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &am_emlrtRSI;
    b_error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &n_emlrtMCI),
             &n_emlrtMCI), &n_emlrtMCI);
  }

  b_m = (int32_T)t;
  array_real_T_2D_SetSize(b_I, (int32_T)t, (int32_T)t);
  loop_ub = (int32_T)t * (int32_T)t;
  for (i = 0; i < loop_ub; i++) {
    b_I->vector.data[i] = 0.0;
  }

  if ((int32_T)t > 0) {
    for (loop_ub = 0; loop_ub < b_m; loop_ub++) {
      b_I->vector.data[loop_ub + b_I->size[0] * loop_ub] = 1.0;
    }
  }
}

static void rigidBodyJoint_get_PositionLimits(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T lims_data[], int32_T lims_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T obj_Vector_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &hb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = obj->TypeInternal.Vector[i];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &b_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
    obj_Length = obj->PositionNumber;
    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &fb_emlrtDCI,
        (emlrtConstCTX)sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &ib_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    lims_size[0] = loop_ub;
    lims_size[1] = 2;
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        lims_data[i1 + loop_ub * i] = obj->PositionLimitsInternal[i1 + 7 * i];
      }
    }
  } else {
    lims_size[0] = 1;
    lims_size[1] = 2;
    for (i = 0; i < 2; i++) {
      lims_data[i] = 0.0;
    }
  }
}

static void RigidBodyTree_get_JointPositionLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, coder_array_real_T_2D *limits)
{
  emlrtStack b_st;
  emlrtStack st;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBody *body;
  real_T tmp_data[14];
  real_T k;
  real_T obj_Length;
  real_T pnum;
  int32_T iv[2];
  int32_T obj_Vector_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  obj_Length = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &gb_emlrtDCI,
    (emlrtConstCTX)sp);
  obj_Length = emlrtIntegerCheckR2012b(obj_Length, &hb_emlrtDCI, (emlrtConstCTX)
    sp);
  array_real_T_2D_SetSize(limits, (int32_T)obj_Length, 2);
  loop_ub = (int32_T)obj_Length << 1;
  for (i = 0; i < loop_ub; i++) {
    limits->vector.data[i] = 0.0;
  }

  k = 1.0;
  obj_Length = obj->NumBodies;
  i = (int32_T)obj_Length;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, obj_Length, mxDOUBLE_CLASS, (int32_T)
    obj_Length, &f_emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 4, &lb_emlrtBCI,
      (emlrtConstCTX)sp)];
    st.site = &rf_emlrtRSI;
    b_obj = body->JointInternal;
    b_st.site = &hb_emlrtRSI;
    obj_Length = b_obj->TypeInternal.Length;
    for (i1 = 0; i1 < 200; i1++) {
      obj_Vector[i1] = b_obj->TypeInternal.Vector[i1];
    }

    if (obj_Length < 1.0) {
      loop_ub = 0;
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i1, 1, 200, &emlrtBCI, &b_st);
    }

    obj_Vector_size[0] = 1;
    obj_Vector_size[1] = loop_ub;
    if (loop_ub - 1 >= 0) {
      memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
             (char_T));
    }

    if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
      pnum = body->JointInternal->PositionNumber;
      obj_Length = (k + pnum) - 1.0;
      if (k > obj_Length) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(k, &ib_emlrtDCI, (emlrtConstCTX)sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, limits->size[0], &jb_emlrtBCI,
          (emlrtConstCTX)sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &jb_emlrtDCI,
          (emlrtConstCTX)sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, limits->size[0], &kb_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      st.site = &sf_emlrtRSI;
      rigidBodyJoint_get_PositionLimits(&st, body->JointInternal, tmp_data,
        tmp_size);
      iv[0] = i2 - i1;
      iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &tmp_size[0], 2, &j_emlrtECI,
        (void *)sp);
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < 2; i2++) {
        for (i3 = 0; i3 < loop_ub; i3++) {
          limits->vector.data[(i1 + i3) + limits->size[0] * i2] = tmp_data[i3 +
            tmp_size[0] * i2];
        }
      }

      k += pnum;
    }
  }
}

static void inverseKinematics_stepImpl(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[4], real_T QSol[4], real_T
  *solutionInfo_Iterations, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  static const int32_T iv[2] = { 1, 55 };

  static const int32_T iv1[2] = { 1, 55 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 12 };

  static char_T c_u[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'E', 'n',
    'd', 'E', 'f', 'f', 'e', 'c', 't', 'o', 'r', 'I', 's', 'B', 'a', 's', 'e' };

  static char_T e_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T g_u[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C', 'T',
    'O', 'R' };

  static int8_T iv5[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBody *c_obj;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T weightMatrix[36];
  real_T R[9];
  real_T dv[9];
  real_T x[9];
  real_T b_x[4];
  real_T maxval[3];
  real_T absxk;
  real_T c_x;
  real_T d;
  real_T d1;
  real_T d2;
  real_T obj_Length;
  real_T scale;
  real_T t;
  int32_T b_obj_Vector_size[2];
  int32_T c_obj_Vector_size[2];
  int32_T obj_Vector_size[2];
  int32_T bidx;
  int32_T exitg2;
  int32_T i;
  int32_T idx;
  int32_T k;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  char_T b_u[55];
  char_T d_u[46];
  char_T f_u[12];
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &xf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &mc_emlrtRSI;
  d_st.site = &nc_emlrtRSI;
  obj_Length = b_obj->Base.NameInternal.Length;
  for (k = 0; k < 200; k++) {
    obj_Vector[k] = b_obj->Base.NameInternal.Vector[k];
  }

  if (obj_Length < 1.0) {
    idx = 0;
  } else {
    k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &d_st);
    idx = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &d_st);
  }

  obj_Vector_size[0] = 1;
  obj_Vector_size[1] = idx;
  if (idx - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)idx * sizeof(char_T));
  }

  if (g_strcmp(obj_Vector_data, obj_Vector_size)) {
    b_st.site = &yf_emlrtRSI;
    for (k = 0; k < 55; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 55, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 55; k++) {
      b_u[k] = c_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 55, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &yl_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &o_emlrtMCI),
             &o_emlrtMCI), &o_emlrtMCI);
  }

  b_st.site = &ag_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &md_emlrtRSI;
  bidx = -1;
  d_st.site = &tc_emlrtRSI;
  e_st.site = &nc_emlrtRSI;
  obj_Length = b_obj->Base.NameInternal.Length;
  for (k = 0; k < 200; k++) {
    obj_Vector[k] = b_obj->Base.NameInternal.Vector[k];
  }

  if (obj_Length < 1.0) {
    idx = 0;
  } else {
    k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &e_st);
    idx = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &e_st);
  }

  b_obj_Vector_size[0] = 1;
  b_obj_Vector_size[1] = idx;
  if (idx - 1 >= 0) {
    memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)idx * sizeof(char_T));
  }

  if (g_strcmp(obj_Vector_data, b_obj_Vector_size)) {
    bidx = 0;
  } else {
    scale = b_obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, scale, mxDOUBLE_CLASS, (int32_T)
      scale, &b_emlrtRTEI, &c_st);
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= (int32_T)scale - 1)) {
      d_st.site = &uc_emlrtRSI;
      c_obj = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 4, &i_emlrtBCI,
        &d_st)];
      e_st.site = &nc_emlrtRSI;
      obj_Length = c_obj->NameInternal.Length;
      for (k = 0; k < 200; k++) {
        obj_Vector[k] = c_obj->NameInternal.Vector[k];
      }

      if (obj_Length < 1.0) {
        idx = 0;
      } else {
        k = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &e_st);
        idx = emlrtDynamicBoundsCheckR2012b(k, 1, 200, &emlrtBCI, &e_st);
      }

      c_obj_Vector_size[0] = 1;
      c_obj_Vector_size[1] = idx;
      if (idx - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)idx * sizeof
               (char_T));
      }

      if (g_strcmp(obj_Vector_data, c_obj_Vector_size)) {
        bidx = i + 1;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (bidx == -1) {
    c_st.site = &nd_emlrtRSI;
    for (k = 0; k < 46; k++) {
      d_u[k] = e_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = e_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    for (k = 0; k < 12; k++) {
      f_u[k] = g_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 12, m, &f_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &jl_emlrtRSI;
    b_error(&d_st, c_y, getString(&d_st, message(&d_st, d_y, e_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  for (k = 0; k < 3; k++) {
    for (idx = 0; idx < 3; idx++) {
      R[idx + 3 * k] = tform[idx + (k << 2)];
    }
  }

  b_st.site = &bg_emlrtRSI;
  inv(&b_st, R, dv);
  for (k = 0; k < 3; k++) {
    for (idx = 0; idx < 3; idx++) {
      x[idx + 3 * k] = dv[idx + 3 * k] - R[k + 3 * idx];
    }
  }

  for (k = 0; k < 9; k++) {
    R[k] = muDoubleScalarAbs(x[k]);
  }

  for (idx = 0; idx < 3; idx++) {
    maxval[idx] = R[3 * idx];
    for (i = 0; i < 2; i++) {
      obj_Length = maxval[idx];
      if (muDoubleScalarIsNaN(R[(i + 3 * idx) + 1])) {
        p = false;
      } else if (muDoubleScalarIsNaN(obj_Length)) {
        p = true;
      } else {
        p = (obj_Length < R[(i + 3 * idx) + 1]);
      }

      if (p) {
        obj_Length = R[(i + 3 * idx) + 1];
      }

      maxval[idx] = obj_Length;
    }
  }

  if (!muDoubleScalarIsNaN(maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muDoubleScalarIsNaN(maxval[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    obj_Length = maxval[0];
  } else {
    obj_Length = maxval[idx - 1];
    for (k = idx + 1; k < 4; k++) {
      if (obj_Length < maxval[k - 1]) {
        obj_Length = maxval[k - 1];
      }
    }
  }

  guard1 = false;
  if (obj_Length > 0.0001) {
    guard1 = true;
  } else {
    obj_Length = 0.0;
    scale = 3.3121686421112381E-170;
    for (k = 0; k < 4; k++) {
      c_x = tform[(k << 2) + 3] - (real_T)iv5[k];
      absxk = muDoubleScalarAbs(c_x);
      if (absxk > scale) {
        t = scale / absxk;
        obj_Length = obj_Length * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        obj_Length += t * t;
      }

      b_x[k] = c_x;
    }

    obj_Length = scale * muDoubleScalarSqrt(obj_Length);
    p = muDoubleScalarIsNaN(obj_Length);
    if (p) {
      k = 0;
      do {
        exitg2 = 0;
        if (k < 4) {
          if (muDoubleScalarIsNaN(b_x[k])) {
            exitg2 = 1;
          } else {
            k++;
          }
        } else {
          obj_Length = rtInf;
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }

    if (obj_Length > 1.0E-7) {
      guard1 = true;
    }
  }

  if (guard1) {
    b_st.site = &cg_emlrtRSI;
    c_st.site = &se_emlrtRSI;
    d_warning(&c_st);
  }

  b_st.site = &dg_emlrtRSI;
  c_validateattributes(&b_st, weights);
  for (k = 0; k < 36; k++) {
    weightMatrix[k] = 0.0;
  }

  for (idx = 0; idx < 6; idx++) {
    weightMatrix[idx + 6 * idx] = weights[idx];
  }

  args = obj->Solver->ExtraArgs;
  for (k = 0; k < 36; k++) {
    args->WeightMatrix[k] = weightMatrix[k];
  }

  args->BodyIndex = (real_T)bidx;
  args->KinematicModel = obj->RigidBodyTreeKinematicModel;
  for (k = 0; k < 16; k++) {
    args->Tform[k] = tform[k];
  }

  st.site = &wf_emlrtRSI;
  inverseKinematics_solve(moduleInstance, &st, obj, initialGuess, QSol, &d,
    &obj_Length, &d1, &d2, solutionInfo_Status_data, solutionInfo_Status_size);
  *solutionInfo_ExitFlag = d2;
  *solutionInfo_PoseErrorNorm = d1;
  *solutionInfo_Iterations = d;
}

static boolean_T g_strcmp(char_T a_data[], int32_T a_size[2])
{
  static char_T cv[12] = { 'E', 'N', 'D', '-', 'E', 'F', 'F', 'E', 'C', 'T', 'O',
    'R' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] != 12) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 12) {
        if (a_data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inv(const emlrtStack *sp, real_T x[9], real_T y[9])
{
  static const int32_T iv[2] = { 1, 6 };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T b_x[9];
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 1;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 4;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else if (absx31 > absx11) {
    p1 = 7;
    p3 = 0;
    b_x[0] = x[2];
    b_x[2] = x[0];
    b_x[3] = x[5];
    b_x[5] = x[3];
    b_x[6] = x[8];
    b_x[8] = x[6];
  }

  absx11 = b_x[1] / b_x[0];
  b_x[1] /= b_x[0];
  absx21 = b_x[2] / b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= b_x[3] * absx11;
  b_x[5] -= b_x[3] * absx21;
  b_x[7] -= b_x[6] * absx11;
  b_x[8] -= b_x[6] * absx21;
  if (muDoubleScalarAbs(b_x[5]) > muDoubleScalarAbs(b_x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    b_x[1] = absx21;
    b_x[2] = absx11;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  absx11 = b_x[5] / b_x[4];
  b_x[5] /= b_x[4];
  b_x[8] -= b_x[7] * absx11;
  absx11 = (b_x[1] * b_x[5] - b_x[2]) / b_x[8];
  absx21 = -(b_x[1] + b_x[7] * absx11) / b_x[4];
  y[p1 - 1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1] = absx21;
  y[p1 + 1] = absx11;
  absx11 = -b_x[5] / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
  st.site = &eg_emlrtRSI;
  absx11 = b_norm(x);
  absx21 = b_norm(y);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    b_st.site = &fg_emlrtRSI;
    b_warning(&b_st);
  } else if (muDoubleScalarIsNaN(absx31) || (absx31 < 2.2204460492503131E-16)) {
    b_st.site = &gg_emlrtRSI;
    for (p1 = 0; p1 < 6; p1++) {
      rfmt[p1] = b_rfmt[p1];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateDoubleScalar(absx31);
    emlrtAssign(&c_y, m);
    c_st.site = &fm_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &p_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &gg_emlrtRSI;
    c_warning(&b_st, str);
  }
}

static real_T b_norm(real_T x[9])
{
  real_T s;
  real_T y;
  int32_T i;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = 0.0;
    for (i = 0; i < 3; i++) {
      s += muDoubleScalarAbs(x[i + 3 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

static void b_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 21 };

  static char_T b_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'n',
    'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[21];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 21; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &em_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void c_warning(const emlrtStack *sp, char_T varargin_1[14])
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 33 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[33];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 33; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &em_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void d_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 65 };

  static char_T b_msgID[65] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'H', 'o',
    'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's', 'T', 'r', 'a', 'n', 's', 'f',
    'o', 'r', 'm', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[65];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 65U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 65, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &em_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void c_validateattributes(const emlrtStack *sp, real_T a[6])
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 38 };

  static const int32_T iv3[2] = { 1, 7 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 33 };

  static const int32_T iv6[2] = { 1, 7 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 7 };

  static char_T k_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T j_u[7] = { 'w', 'e', 'i', 'g', 'h', 't', 's' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T i_u[51];
  char_T d_u[46];
  char_T e_u[38];
  char_T b_u[33];
  char_T h_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &gl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, d_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  st.site = &vb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!(a[k] < 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 38; k++) {
      e_u[k] = g_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 38, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 51; k++) {
      i_u[k] = k_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&g_y, m);
    b_st.site = &il_emlrtRSI;
    b_error(&b_st, c_y, getString(&b_st, message(&b_st, e_y, g_y, &r_emlrtMCI),
             &r_emlrtMCI), &r_emlrtMCI);
  }

  st.site = &vb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = l_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &b_u[0]);
    emlrtAssign(&f_y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = m_u[k];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&h_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    b_st.site = &fl_emlrtRSI;
    b_error(&b_st, f_y, getString(&b_st, message(&b_st, h_y, i_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }
}

static void inverseKinematics_solve(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[4], real_T QSol[4], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 21 };

  static char_T c_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  static char_T cv1[14] = { 'b', 'e', 's', 't', ' ', 'a', 'v', 'a', 'i', 'l',
    'a', 'b', 'l', 'e' };

  static char_T cv[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  coder_array_int32_T r;
  coder_array_int32_T_2D r1;
  coder_array_real_T bodyIndices;
  coder_array_real_T_2D positionIndices;
  coder_array_real_T_2D positionMap;
  coder_array_real_T_2D y;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  robotics_core_internal_ErrorDampedLevenbergMarquardt *b_obj;
  robotics_core_internal_SystemTimeProvider *c_obj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBodyTree_1 *d_obj;
  real_T newseed_data[35];
  real_T xSol[4];
  real_T xSolPrev[4];
  real_T apnd;
  real_T cdiff;
  real_T err;
  real_T idxCount;
  real_T iter;
  real_T numPositions;
  real_T tol;
  int32_T iv[2];
  int32_T b_tmp_size[1];
  int32_T newseed_size[1];
  int32_T tmp_size[1];
  int32_T b_i;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nm1d2;
  int32_T sol_Status_size_idx_1;
  robotics_core_internal_NLPSolverExitFlags exitFlag;
  robotics_core_internal_NLPSolverExitFlags exitFlagPrev;
  uint32_T c_i;
  char_T b_u[21];
  char_T sol_Status_data[14];
  boolean_T tmp_data[4];
  boolean_T exitg1;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 4; i++) {
    QSol[i] = initialGuess[i];
  }

  st.site = &hg_emlrtRSI;
  RigidBodyTree_validateConfigurationWithLimits(&st, obj->RigidBodyTreeInternal,
    QSol);
  st.site = &ig_emlrtRSI;
  b_obj = obj->Solver;
  b_obj->MaxNumIterationInternal = b_obj->MaxNumIteration;
  b_obj->MaxTimeInternal = b_obj->MaxTime;
  for (i = 0; i < 4; i++) {
    b_obj->SeedInternal[i] = QSol[i];
  }

  tol = b_obj->SolutionTolerance;
  b_st.site = &tg_emlrtRSI;
  c_obj = &b_obj->TimeObj;
  c_st.site = &yg_emlrtRSI;
  expl_temp = tic();
  c_obj->StartTime.tv_sec = expl_temp.tv_sec;
  c_obj->StartTime.tv_nsec = expl_temp.tv_nsec;
  c_st.site = &ah_emlrtRSI;
  b_st.site = &ug_emlrtRSI;
  ErrorDampedLevenbergMarquardt_solveInternal(&b_st, b_obj, xSolPrev, &exitFlag,
    &err, &iter);
  *solutionInfo_NumRandomRestarts = 0.0;
  *solutionInfo_Iterations = iter;
  *solutionInfo_PoseErrorNorm = err;
  exitFlagPrev = exitFlag;
  exitg1 = false;
  while ((!exitg1) && (b_obj->RandomRestart && (err > tol))) {
    b_obj->MaxNumIterationInternal -= iter;
    b_st.site = &vg_emlrtRSI;
    b_obj->MaxTimeInternal = b_obj->MaxTime - SystemTimeProvider_getElapsedTime(
      &b_st, &b_obj->TimeObj);
    if (b_obj->MaxNumIterationInternal <= 0.0) {
      exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
    }

    if ((exitFlag ==
         robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded) ||
        (exitFlag == robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded))
    {
      exitFlagPrev = exitFlag;
      exitg1 = true;
    } else {
      b_st.site = &wg_emlrtRSI;
      IKHelpers_randomConfig(moduleInstance, &b_st, b_obj->ExtraArgs,
        newseed_data, newseed_size);
      emlrtSubAssignSizeCheck1dR2017a(4, newseed_size[0], &l_emlrtECI, &st);
      for (b_i = 0; b_i < 4; b_i++) {
        b_obj->SeedInternal[b_i] = newseed_data[b_i];
      }

      b_st.site = &xg_emlrtRSI;
      ErrorDampedLevenbergMarquardt_solveInternal(&b_st, b_obj, xSol, &exitFlag,
        &err, &iter);
      if (err < *solutionInfo_PoseErrorNorm) {
        for (i = 0; i < 4; i++) {
          xSolPrev[i] = xSol[i];
        }

        *solutionInfo_PoseErrorNorm = err;
        exitFlagPrev = exitFlag;
      }

      (*solutionInfo_NumRandomRestarts)++;
      *solutionInfo_Iterations += iter;
    }
  }

  if (*solutionInfo_PoseErrorNorm < tol) {
    sol_Status_size_idx_1 = 7;
    for (b_i = 0; b_i < 7; b_i++) {
      sol_Status_data[b_i] = cv[b_i];
    }
  } else {
    sol_Status_size_idx_1 = 14;
    for (b_i = 0; b_i < 14; b_i++) {
      sol_Status_data[b_i] = cv1[b_i];
    }
  }

  st.site = &jg_emlrtRSI;
  d_obj = obj->RigidBodyTreeInternal;
  tol = obj->Solver->ExtraArgs->BodyIndex;
  array_real_T_Constructor(&bodyIndices);
  err = emlrtNonNegativeCheckR2012b(d_obj->NumBodies, &ob_emlrtDCI, &st);
  array_real_T_SetSize(&bodyIndices, (int32_T)emlrtIntegerCheckR2012b(err,
    &nb_emlrtDCI, &st));
  err = emlrtNonNegativeCheckR2012b(d_obj->NumBodies, &ob_emlrtDCI, &st);
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(err, &nb_emlrtDCI, &st);
  for (b_i = 0; b_i < nm1d2; b_i++) {
    bodyIndices.vector.data[b_i] = 0.0;
  }

  if (tol == 0.0) {
    array_real_T_SetSize(&bodyIndices, 1);
    bodyIndices.vector.data[0] = 0.0;
  } else {
    b_i = (int32_T)emlrtIntegerCheckR2012b(tol, &pb_emlrtDCI, &st) - 1;
    body = d_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 4, &rb_emlrtBCI,
      &st)];
    c_i = 1U;
    while (body->ParentIndex != 0.0) {
      bodyIndices.vector.data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1,
        bodyIndices.size[0], &sb_emlrtBCI, &st) - 1] = body->Index;
      b_i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &qb_emlrtDCI,
        &st) - 1;
      body = d_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 4, &tb_emlrtBCI,
        &st)];
      c_i++;
    }

    if ((int32_T)(c_i - 1U) < 1) {
      nm1d2 = 0;
    } else {
      emlrtDynamicBoundsCheckR2012b(1, 1, bodyIndices.size[0], &qb_emlrtBCI, &st);
      nm1d2 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1,
        bodyIndices.size[0], &pb_emlrtBCI, &st);
    }

    iv[0] = 1;
    iv[1] = nm1d2;
    b_st.site = &tk_emlrtRSI;
    indexShapeCheck(&b_st, bodyIndices.size[0], iv);
    array_real_T_SetSize(&bodyIndices, nm1d2 + 2);
    bodyIndices.vector.data[nm1d2] = body->Index;
    bodyIndices.vector.data[nm1d2 + 1] = 0.0;
  }

  st.site = &kg_emlrtRSI;
  d_obj = obj->RigidBodyTreeInternal;
  end = bodyIndices.size[0];
  nm1d2 = 0;
  for (i = 0; i < end; i++) {
    if (bodyIndices.vector.data[i] != 0.0) {
      nm1d2++;
    }
  }

  array_int32_T_Constructor(&r);
  array_int32_T_SetSize(&r, nm1d2);
  nm1d2 = 0;
  for (i = 0; i < end; i++) {
    if (bodyIndices.vector.data[i] != 0.0) {
      r.vector.data[nm1d2] = i;
      nm1d2++;
    }
  }

  array_real_T_2D_Constructor(&positionMap);
  array_real_T_2D_SetSize(&positionMap, r.size[0], 2);
  for (b_i = 0; b_i < 2; b_i++) {
    nm1d2 = r.size[0];
    for (i1 = 0; i1 < nm1d2; i1++) {
      end = r.vector.data[i1];
      err = bodyIndices.vector.data[emlrtDynamicBoundsCheckR2012b(end, 0,
        bodyIndices.size[0] - 1, &vb_emlrtBCI, &st)];
      end = (int32_T)emlrtIntegerCheckR2012b(err, &rb_emlrtDCI, &st);
      positionMap.vector.data[i1 + positionMap.size[0] * b_i] =
        d_obj->PositionDoFMap[(emlrtDynamicBoundsCheckR2012b(end, 1, 5,
        &ub_emlrtBCI, &st) + 5 * b_i) - 1];
    }
  }

  array_int32_T_Destructor(&r);
  array_real_T_Destructor(&bodyIndices);
  err = emlrtNonNegativeCheckR2012b(d_obj->PositionNumber, &mb_emlrtDCI, &st);
  err = emlrtIntegerCheckR2012b(err, &lb_emlrtDCI, &st);
  array_real_T_2D_Constructor(&positionIndices);
  array_real_T_2D_SetSize(&positionIndices, 1, (int32_T)err);
  nm1d2 = (int32_T)err;
  for (b_i = 0; b_i < nm1d2; b_i++) {
    positionIndices.vector.data[b_i] = 0.0;
  }

  idxCount = 0.0;
  b_i = positionMap.size[0];
  array_int32_T_2D_Constructor(&r1);
  array_real_T_2D_Constructor(&y);
  for (i = 0; i < b_i; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, positionMap.size[0], &ob_emlrtBCI,
      &st);
    numPositions = (positionMap.vector.data[i + positionMap.size[0]] -
                    positionMap.vector.data[i]) + 1.0;
    if (numPositions > 0.0) {
      if (numPositions < 1.0) {
        array_real_T_2D_SetSize(&y, 1, 0);
      } else {
        array_real_T_2D_SetSize(&y, 1, (int32_T)(numPositions - 1.0) + 1);
        nm1d2 = (int32_T)(numPositions - 1.0);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y.vector.data[i1] = (real_T)i1 + 1.0;
        }
      }

      array_int32_T_2D_SetSize(&r1, 1, y.size[1]);
      nm1d2 = y.size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        err = idxCount + y.vector.data[i1];
        end = (int32_T)emlrtIntegerCheckR2012b(err, &tb_emlrtDCI, &st);
        r1.vector.data[i1] = emlrtDynamicBoundsCheckR2012b(end, 1,
          positionIndices.size[1], &xb_emlrtBCI, &st);
      }

      tol = positionMap.vector.data[i];
      err = positionMap.vector.data[i + positionMap.size[0]];
      if (muDoubleScalarIsNaN(tol) || muDoubleScalarIsNaN(err)) {
        array_real_T_2D_SetSize(&y, 1, 1);
        y.vector.data[0] = rtNaN;
      } else if (positionMap.vector.data[i + positionMap.size[0]] <
                 positionMap.vector.data[i]) {
        array_real_T_2D_SetSize(&y, 1, 0);
      } else if ((muDoubleScalarIsInf(tol) || muDoubleScalarIsInf(err)) &&
                 (positionMap.vector.data[i] == positionMap.vector.data[i +
                  positionMap.size[0]])) {
        array_real_T_2D_SetSize(&y, 1, 1);
        y.vector.data[0] = rtNaN;
      } else if (muDoubleScalarFloor(tol) == positionMap.vector.data[i]) {
        err = positionMap.vector.data[i];
        tol = positionMap.vector.data[i + positionMap.size[0]];
        array_real_T_2D_SetSize(&y, 1, (int32_T)(tol - err) + 1);
        nm1d2 = (int32_T)(tol - err);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y.vector.data[i1] = err + (real_T)i1;
        }
      } else {
        b_st.site = &uk_emlrtRSI;
        iter = muDoubleScalarFloor((positionMap.vector.data[i +
          positionMap.size[0]] - positionMap.vector.data[i]) + 0.5);
        apnd = positionMap.vector.data[i] + iter;
        cdiff = apnd - positionMap.vector.data[i + positionMap.size[0]];
        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(muDoubleScalarAbs(tol), muDoubleScalarAbs(err))) {
          iter++;
          apnd = positionMap.vector.data[i + positionMap.size[0]];
        } else if (cdiff > 0.0) {
          apnd = positionMap.vector.data[i] + (iter - 1.0);
        } else {
          iter++;
        }

        if (iter >= 0.0) {
          end = (int32_T)iter - 1;
        } else {
          end = -1;
        }

        c_st.site = &vk_emlrtRSI;
        if (iter > 2.147483647E+9) {
          for (i1 = 0; i1 < 21; i1++) {
            b_u[i1] = c_u[i1];
          }

          b_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&c_st, 21, m, &b_u[0]);
          emlrtAssign(&b_y, m);
          for (i1 = 0; i1 < 21; i1++) {
            b_u[i1] = c_u[i1];
          }

          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&c_st, 21, m, &b_u[0]);
          emlrtAssign(&c_y, m);
          d_st.site = &xl_emlrtRSI;
          b_error(&d_st, b_y, getString(&d_st, b_message(&d_st, c_y,
                    &gb_emlrtMCI), &gb_emlrtMCI), &gb_emlrtMCI);
        }

        array_real_T_2D_SetSize(&y, 1, end + 1);
        if (end + 1 > 0) {
          y.vector.data[0] = positionMap.vector.data[i];
          if (end + 1 > 1) {
            y.vector.data[end] = apnd;
            nm1d2 = div_nzp_s32(end, 2);
            i1 = nm1d2 - 2;
            for (k = 0; k <= i1; k++) {
              y.vector.data[k + 1] = tol + (real_T)(k + 1);
              y.vector.data[(end - k) - 1] = apnd - (real_T)(k + 1);
            }

            if (nm1d2 << 1 == end) {
              y.vector.data[nm1d2] = (positionMap.vector.data[i] + apnd) / 2.0;
            } else {
              y.vector.data[nm1d2] = positionMap.vector.data[i] + (real_T)nm1d2;
              y.vector.data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      emlrtSubAssignSizeCheck1dR2017a(r1.size[1], y.size[1], &k_emlrtECI, &st);
      nm1d2 = y.size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        positionIndices.vector.data[r1.vector.data[i1] - 1] = y.vector.data[i1];
      }

      idxCount += numPositions;
    }
  }

  array_real_T_2D_Destructor(&y);
  array_real_T_2D_Destructor(&positionMap);
  if (idxCount < 1.0) {
    b_i = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, positionIndices.size[1], &nb_emlrtBCI,
      &st);
    b_i = (int32_T)emlrtIntegerCheckR2012b(idxCount, &kb_emlrtDCI, &st);
    b_i = emlrtDynamicBoundsCheckR2012b(b_i, 1, positionIndices.size[1],
      &mb_emlrtBCI, &st);
  }

  array_real_T_2D_SetSize(&positionIndices, positionIndices.size[0], b_i);
  array_int32_T_2D_SetSize(&r1, 1, positionIndices.size[1]);
  nm1d2 = positionIndices.size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    err = positionIndices.vector.data[b_i];
    i1 = (int32_T)emlrtIntegerCheckR2012b(err, &sb_emlrtDCI, (emlrtConstCTX)sp);
    r1.vector.data[b_i] = emlrtDynamicBoundsCheckR2012b(i1, 1, 4, &wb_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  emlrtSubAssignSizeCheck1dR2017a(r1.size[1], positionIndices.size[1],
    &m_emlrtECI, (emlrtConstCTX)sp);
  nm1d2 = positionIndices.size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    QSol[r1.vector.data[b_i] - 1] = xSolPrev[(int32_T)
      positionIndices.vector.data[b_i] - 1];
  }

  array_int32_T_2D_Destructor(&r1);
  array_real_T_2D_Destructor(&positionIndices);
  st.site = &lg_emlrtRSI;
  b_st.site = &wk_emlrtRSI;
  tmp_size[0] = 4;
  for (b_i = 0; b_i < 4; b_i++) {
    tmp_data[b_i] = muDoubleScalarIsNaN(QSol[b_i]);
  }

  guard1 = false;
  if (vectorAny(tmp_data, tmp_size)) {
    guard1 = true;
  } else {
    b_tmp_size[0] = 4;
    for (b_i = 0; b_i < 4; b_i++) {
      tmp_data[b_i] = muDoubleScalarIsInf(QSol[b_i]);
    }

    if (vectorAny(tmp_data, b_tmp_size)) {
      guard1 = true;
    }
  }

  if (guard1) {
    c_st.site = &xk_emlrtRSI;
    d_st.site = &se_emlrtRSI;
    f_warning(&d_st);
  }

  *solutionInfo_ExitFlag = (real_T)exitFlagPrev;
  solutionInfo_Status_size[0] = 1;
  solutionInfo_Status_size[1] = sol_Status_size_idx_1;
  memcpy(&solutionInfo_Status_data[0], &sol_Status_data[0], (uint32_T)
         sol_Status_size_idx_1 * sizeof(char_T));
}

static void eml_find(const emlrtStack *sp, boolean_T x[4], int32_T i_data[],
                     int32_T i_size[1])
{
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 < 4)) {
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 4) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (idx < 1) {
    idx = 0;
  }

  iv[0] = 1;
  iv[1] = idx;
  st.site = &rg_emlrtRSI;
  indexShapeCheck(&st, 4, iv);
  i_size[0] = idx;
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }

  st.site = &sg_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &wl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &u_emlrtMCI),
             &u_emlrtMCI), &u_emlrtMCI);
  }
}

static void e_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 72 };

  static char_T b_msgID[72] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'C', 'o', 'n', 'f', 'i', 'g',
    'J', 'o', 'i', 'n', 't', 'L', 'i', 'm', 'i', 't', 's', 'V', 'i', 'o', 'l',
    'a', 't', 'i', 'o', 'n', 'A', 'u', 't', 'o', 'A', 'd', 'j', 'u', 's', 't',
    'e', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[72];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 72U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 72, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &em_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static emlrtTimespec tic(void)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec tstart;
  st.site = &bh_emlrtRSI;
  b_st.site = &ch_emlrtRSI;
  c_st.site = &dh_emlrtRSI;
  emlrtClockGettimeMonotonic(&tstart);
  return tstart;
}

static void ErrorDampedLevenbergMarquardt_solveInternal(const emlrtStack *sp,
  robotics_core_internal_ErrorDampedLevenbergMarquardt *obj, real_T xSol[4],
  robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *en, real_T *iter)
{
  static int8_T e_b[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T f_b[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  __m128d r2;
  __m128d r3;
  ptrdiff_t incx_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t n_t;
  coder_array_boolean_T c_b;
  coder_array_real_T b_args;
  coder_array_real_T b_b;
  coder_array_real_T c_args;
  coder_array_real_T d_args;
  coder_array_real_T ev;
  coder_array_real_T evprev;
  coder_array_real_T grad;
  coder_array_real_T_2D H0;
  coder_array_real_T_2D a__3;
  coder_array_real_T_2D y;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  robotics_core_internal_SystemTimeProvider *b_obj;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_IKExtraArgs *r;
  robotics_manip_internal_IKExtraArgs *r1;
  real_T W[36];
  real_T a__2[36];
  real_T b_H0[16];
  real_T _2[6];
  real_T b_y[4];
  real_T step_data[4];
  real_T xprev[4];
  real_T dv[2];
  real_T dv1[2];
  real_T a;
  real_T a__1;
  real_T alpha1;
  real_T beta1;
  real_T cc;
  real_T cost;
  real_T d;
  int32_T step_size[1];
  int32_T b_i;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T k;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T x[4];
  boolean_T d_b;
  boolean_T exitg3;
  boolean_T guard1;
  boolean_T guard2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i = 0; i < 4; i++) {
    xSol[i] = obj->SeedInternal[i];
  }

  st.site = &eh_emlrtRSI;
  b_obj = &obj->TimeObjInternal;
  b_st.site = &yg_emlrtRSI;
  expl_temp = tic();
  b_obj->StartTime.tv_sec = expl_temp.tv_sec;
  b_obj->StartTime.tv_nsec = expl_temp.tv_nsec;
  b_st.site = &ah_emlrtRSI;
  for (i = 0; i < 4; i++) {
    xprev[i] = xSol[i];
  }

  array_real_T_2D_Constructor(&a__3);
  st.site = &fh_emlrtRSI;
  IKHelpers_computeCost(&st, xSol, obj->ExtraArgs, &a__1, a__2, &a__3, &r);
  obj->ExtraArgs = r;
  st.site = &gh_emlrtRSI;
  args = obj->ExtraArgs;
  array_real_T_Constructor(&b_b);
  array_real_T_SetSize(&b_b, args->ErrTemp.size[0]);
  b_i = args->ErrTemp.size[0];
  for (k = 0; k < b_i; k++) {
    b_b.vector.data[k] = args->ErrTemp.vector.data[k];
  }

  b_st.site = &si_emlrtRSI;
  dynamic_size_checks(&b_st, &b_b, b_b.size[0]);
  array_real_T_Constructor(&b_args);
  array_real_T_SetSize(&b_args, args->ErrTemp.size[0]);
  b_i = args->ErrTemp.size[0];
  for (k = 0; k < b_i; k++) {
    b_args.vector.data[k] = args->ErrTemp.vector.data[k];
  }

  array_real_T_Constructor(&evprev);
  array_real_T_SetSize(&evprev, b_args.size[0]);
  b_i = b_args.size[0];
  for (k = 0; k < b_i; k++) {
    evprev.vector.data[k] = b_args.vector.data[k];
  }

  array_real_T_Destructor(&b_args);
  d = obj->MaxNumIterationInternal;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &g_emlrtRTEI, (emlrtConstCTX)sp);
  i = 0;
  array_real_T_Constructor(&grad);
  array_real_T_2D_Constructor(&H0);
  array_real_T_Constructor(&ev);
  array_real_T_2D_Constructor(&y);
  array_real_T_Constructor(&c_args);
  array_real_T_Constructor(&d_args);
  array_boolean_T_Constructor(&c_b);
  do {
    exitg1 = 0;
    if (i <= (int32_T)d - 1) {
      st.site = &hh_emlrtRSI;
      IKHelpers_computeCost(&st, xSol, obj->ExtraArgs, &cost, W, &a__3, &r1);
      obj->ExtraArgs = r1;
      st.site = &ih_emlrtRSI;
      args = obj->ExtraArgs;
      array_real_T_SetSize(&c_args, args->GradTemp.size[0]);
      b_i = args->GradTemp.size[0];
      for (k = 0; k < b_i; k++) {
        c_args.vector.data[k] = args->GradTemp.vector.data[k];
      }

      array_real_T_SetSize(&grad, c_args.size[0]);
      b_i = c_args.size[0];
      for (k = 0; k < b_i; k++) {
        grad.vector.data[k] = c_args.vector.data[k];
      }

      st.site = &jh_emlrtRSI;
      args = obj->ExtraArgs;
      for (k = 0; k < 36; k++) {
        a__2[k] = args->WeightMatrix[k];
      }

      array_real_T_SetSize(&b_b, args->ErrTemp.size[0]);
      b_i = args->ErrTemp.size[0];
      for (k = 0; k < b_i; k++) {
        b_b.vector.data[k] = args->ErrTemp.vector.data[k];
      }

      b_st.site = &si_emlrtRSI;
      dynamic_size_checks(&b_st, &b_b, b_b.size[0]);
      array_real_T_SetSize(&d_args, args->ErrTemp.size[0]);
      b_i = args->ErrTemp.size[0];
      for (k = 0; k < b_i; k++) {
        d_args.vector.data[k] = args->ErrTemp.vector.data[k];
      }

      array_real_T_SetSize(&ev, d_args.size[0]);
      b_i = d_args.size[0];
      for (k = 0; k < b_i; k++) {
        ev.vector.data[k] = d_args.vector.data[k];
      }

      for (k = 0; k < 6; k++) {
        _2[k] = 0.0;
        for (b_i = 0; b_i < 6; b_i++) {
          alpha1 = _2[k] + a__2[k + 6 * b_i] * b_b.vector.data[b_i];
          _2[k] = alpha1;
        }
      }

      *en = c_norm(_2);
      *iter = (real_T)i + 1.0;
      st.site = &kh_emlrtRSI;
      if (grad.size[0] == 0) {
        alpha1 = 0.0;
      } else {
        n_t = (ptrdiff_t)grad.size[0];
        incx_t = (ptrdiff_t)1;
        alpha1 = dnrm2(&n_t, &grad.vector.data[0], &incx_t);
        d_b = muDoubleScalarIsNaN(alpha1);
        if (d_b) {
          k = 0;
          do {
            exitg2 = 0;
            if (k <= grad.size[0] - 1) {
              if (muDoubleScalarIsNaN(grad.vector.data[k])) {
                exitg2 = 1;
              } else {
                k++;
              }
            } else {
              alpha1 = rtInf;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }
      }

      d_b = (alpha1 < obj->GradientTolerance);
      if (d_b) {
        *exitFlag = robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound;
        exitg1 = 1;
      } else {
        guard1 = false;
        guard2 = false;
        if ((real_T)i + 1.0 > 1.0) {
          st.site = &lh_emlrtRSI;
          for (k = 0; k <= 2; k += 2) {
            r2 = _mm_loadu_pd(&xSol[k]);
            r3 = _mm_loadu_pd(&xprev[k]);
            r2 = _mm_sub_pd(r2, r3);
            _mm_storeu_pd(&dv[0], r2);
            dv1[0] = muDoubleScalarAbs(dv[0]);
            dv1[1] = muDoubleScalarAbs(dv[1]);
            r3 = _mm_loadu_pd(&dv1[0]);
            _mm_storeu_pd(&b_y[k], r3);
            _mm_storeu_pd(&xprev[k], r2);
          }

          for (b_i = 0; b_i < 4; b_i++) {
            x[b_i] = (b_y[b_i] < obj->StepTolerance);
          }

          d_b = true;
          k = 0;
          exitg3 = false;
          while ((!exitg3) && (k <= 3)) {
            if (!x[k]) {
              d_b = false;
              exitg3 = true;
            } else {
              k++;
            }
          }

          if (d_b) {
            *exitFlag =
              robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum;
            exitg1 = 1;
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }

        if (guard2) {
          if ((real_T)i + 1.0 > 1.0) {
            st.site = &mh_emlrtRSI;
            if (ev.size[0] == evprev.size[0]) {
              array_real_T_SetSize(&evprev, ev.size[0]);
              b_i = ev.size[0];
              for (k = 0; k < b_i; k++) {
                evprev.vector.data[k] = ev.vector.data[k] - evprev.vector.data[k];
              }
            } else {
              minus(&evprev, &ev);
            }

            b_i = evprev.size[0];
            array_real_T_SetSize(&b_b, evprev.size[0]);
            for (k = 0; k < b_i; k++) {
              b_b.vector.data[k] = muDoubleScalarAbs(evprev.vector.data[k]);
            }

            array_boolean_T_SetSize(&c_b, b_b.size[0]);
            b_i = b_b.size[0];
            for (k = 0; k < b_i; k++) {
              c_b.vector.data[k] = (b_b.vector.data[k] <
                                    obj->ErrorChangeTolerance);
            }

            b_st.site = &ij_emlrtRSI;
            d_b = all(&b_st, &c_b);
            if (d_b) {
              *exitFlag =
                c_robotics_core_internal_NLPSolverExitFlags_ChangeInErrorBelowMi;
              exitg1 = 1;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }

        if (guard1) {
          st.site = &nh_emlrtRSI;
          b_st.site = &nh_emlrtRSI;
          alpha1 = SystemTimeProvider_getElapsedTime(&b_st,
            &obj->TimeObjInternal);
          d_b = (alpha1 > obj->MaxTimeInternal);
          if (d_b) {
            *exitFlag =
              robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded;
            exitg1 = 1;
          } else {
            array_real_T_SetSize(&evprev, ev.size[0]);
            b_i = ev.size[0];
            for (k = 0; k < b_i; k++) {
              evprev.vector.data[k] = ev.vector.data[k];
            }

            for (b_i = 0; b_i < 4; b_i++) {
              xprev[b_i] = xSol[b_i];
            }

            d_b = obj->UseErrorDamping;
            cc = (real_T)d_b * cost;
            a = cc + obj->DampingBias;
            st.site = &uh_emlrtRSI;
            if (a__3.size[1] == 0) {
              array_real_T_2D_SetSize(&y, 0, 6);
            } else {
              TRANSB1 = 'N';
              TRANSA1 = 'T';
              alpha1 = 1.0;
              beta1 = 0.0;
              incx_t = (ptrdiff_t)a__3.size[1];
              n_t = (ptrdiff_t)6;
              k_t = (ptrdiff_t)6;
              lda_t = (ptrdiff_t)6;
              ldb_t = (ptrdiff_t)6;
              ldc_t = (ptrdiff_t)a__3.size[1];
              array_real_T_2D_SetSize(&y, a__3.size[1], 6);
              dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &k_t, &alpha1,
                    &a__3.vector.data[0], &lda_t, &W[0], &ldb_t, &beta1,
                    &y.vector.data[0], &ldc_t);
            }

            st.site = &uh_emlrtRSI;
            d_mtimes(&y, &a__3, &H0);
            if ((H0.size[0] == 4) && (H0.size[1] == 4)) {
              for (k = 0; k < 16; k++) {
                b_H0[k] = -(H0.vector.data[k] + a * (real_T)f_b[k]);
              }

              st.site = &oh_emlrtRSI;
              mldivide(&st, b_H0, &grad, step_data, step_size);
            } else {
              st.site = &oh_emlrtRSI;
              binary_expand_op(&st, step_data, step_size, oh_emlrtRSI, &H0, a,
                               e_b, &grad);
            }

            for (k = 0; k <= 2; k += 2) {
              r2 = _mm_loadu_pd(&xSol[k]);
              r3 = _mm_loadu_pd(&step_data[k]);
              _mm_storeu_pd(&b_y[k], _mm_add_pd(r2, r3));
            }

            st.site = &ph_emlrtRSI;
            alpha1 = b_IKHelpers_computeCost(&st, b_y, obj->ExtraArgs);
            beta1 = 1.0;
            while (alpha1 > cost) {
              beta1 *= 2.5;
              a = cc + beta1 * obj->DampingBias;
              if ((H0.size[0] == 4) && (H0.size[1] == 4)) {
                for (k = 0; k < 16; k++) {
                  b_H0[k] = -(H0.vector.data[k] + a * (real_T)f_b[k]);
                }

                st.site = &qh_emlrtRSI;
                mldivide(&st, b_H0, &grad, step_data, step_size);
              } else {
                st.site = &qh_emlrtRSI;
                binary_expand_op(&st, step_data, step_size, qh_emlrtRSI, &H0, a,
                                 e_b, &grad);
              }

              for (k = 0; k <= 2; k += 2) {
                r2 = _mm_loadu_pd(&xSol[k]);
                r3 = _mm_loadu_pd(&step_data[k]);
                _mm_storeu_pd(&b_y[k], _mm_add_pd(r2, r3));
              }

              st.site = &rh_emlrtRSI;
              alpha1 = b_IKHelpers_computeCost(&st, b_y, obj->ExtraArgs);
            }

            for (k = 0; k <= 2; k += 2) {
              r2 = _mm_loadu_pd(&xSol[k]);
              r3 = _mm_loadu_pd(&step_data[k]);
              _mm_storeu_pd(&xSol[k], _mm_add_pd(r2, r3));
            }

            if (obj->ConstraintsOn) {
              st.site = &sh_emlrtRSI;
              args = obj->ExtraArgs;
              array_real_T_SetSize(&b_b, args->Limits.size[0]);
              b_i = args->Limits.size[0];
              for (k = 0; k < b_i; k++) {
                b_b.vector.data[k] = args->Limits.vector.data[k];
              }

              b_st.site = &qj_emlrtRSI;
              if (b_b.size[0] == 4) {
                for (k = 0; k < 4; k++) {
                  b_y[k] = function_handle_parenReference(b_b.vector.data[k],
                    xSol[k]);
                }
              } else {
                c_st.site = &sj_emlrtRSI;
                expand_max(&c_st, &b_b, xSol, b_y);
              }

              array_real_T_SetSize(&b_b, args->Limits.size[0]);
              b_i = args->Limits.size[0];
              for (k = 0; k < b_i; k++) {
                b_b.vector.data[k] = args->Limits.vector.data[k +
                  args->Limits.size[0]];
              }

              b_st.site = &rj_emlrtRSI;
              if (b_b.size[0] == 4) {
                for (k = 0; k < 4; k++) {
                  xSol[k] = b_function_handle_parenReference(b_b.vector.data[k],
                    b_y[k]);
                }
              } else {
                c_st.site = &sj_emlrtRSI;
                expand_min(&c_st, &b_b, b_y, xSol);
              }
            }

            i++;
          }
        }
      }
    } else {
      st.site = &th_emlrtRSI;
      args = obj->ExtraArgs;
      for (k = 0; k < 36; k++) {
        a__2[k] = args->WeightMatrix[k];
      }

      array_real_T_SetSize(&b_b, args->ErrTemp.size[0]);
      b_i = args->ErrTemp.size[0];
      for (k = 0; k < b_i; k++) {
        b_b.vector.data[k] = args->ErrTemp.vector.data[k];
      }

      b_st.site = &si_emlrtRSI;
      dynamic_size_checks(&b_st, &b_b, b_b.size[0]);
      for (k = 0; k < 6; k++) {
        _2[k] = 0.0;
        for (b_i = 0; b_i < 6; b_i++) {
          alpha1 = _2[k] + a__2[k + 6 * b_i] * b_b.vector.data[b_i];
          _2[k] = alpha1;
        }
      }

      *en = c_norm(_2);
      *iter = obj->MaxNumIterationInternal;
      *exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  array_boolean_T_Destructor(&c_b);
  array_real_T_Destructor(&d_args);
  array_real_T_Destructor(&c_args);
  array_real_T_Destructor(&b_b);
  array_real_T_2D_Destructor(&y);
  array_real_T_Destructor(&ev);
  array_real_T_2D_Destructor(&H0);
  array_real_T_Destructor(&grad);
  array_real_T_Destructor(&evprev);
  array_real_T_2D_Destructor(&a__3);
}

static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[4],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  coder_array_real_T_2D *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  coder_array_real_T_2D J;
  coder_array_real_T_2D y;
  emlrtStack st;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  real_T T_data[16];
  real_T Td[16];
  real_T b_e[6];
  real_T e[6];
  real_T bidx;
  int32_T T_size[2];
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  bidx = (*b_args)->BodyIndex;
  array_real_T_2D_Constructor(&J);
  st.site = &vh_emlrtRSI;
  RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bidx, T_data,
    T_size, &J);
  array_real_T_2D_SetSize(Jac, 6, J.size[1]);
  loop_ub = 6 * J.size[1];
  for (i = 0; i < loop_ub; i++) {
    Jac->vector.data[i] = -J.vector.data[i];
  }

  array_real_T_2D_Destructor(&J);
  st.site = &wh_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  array_real_T_SetSize(&(*b_args)->ErrTemp, 6);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp.vector.data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      bidx = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = bidx;
    }
  }

  bidx = 0.0;
  for (i = 0; i < 6; i++) {
    bidx += b_e[i] * e[i];
  }

  (*b_args)->CostTemp = bidx;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      bidx = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = bidx;
    }
  }

  array_real_T_2D_Constructor(&y);
  st.site = &uh_emlrtRSI;
  c_mtimes(b_e, Jac, &y);
  array_real_T_SetSize(&(*b_args)->GradTemp, y.size[1]);
  loop_ub = y.size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp.vector.data[i] = y.vector.data[i];
  }

  array_real_T_2D_Destructor(&y);
  bidx = (*b_args)->CostTemp;
  *cost = bidx;
}

static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[4], real_T bid1,
  real_T T_data[], int32_T T_size[2], coder_array_real_T_2D *Jac)
{
  __m128d r;
  coder_array_real_T_2D ancestorIndices1;
  coder_array_real_T_2D ancestorIndices2;
  coder_array_real_T_2D b_Jac;
  coder_array_real_T_2D kinematicPathIndices;
  emlrtStack b_st;
  emlrtStack st;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody *body1;
  robotics_manip_internal_RigidBody *nextBody;
  real_T JacSlice_data[36];
  real_T b_R[36];
  real_T y_data[36];
  real_T T1[16];
  real_T Tc2p[16];
  real_T Tj[16];
  real_T b_Tj[16];
  real_T R[9];
  real_T dv[9];
  real_T dv1[9];
  real_T qv_data[4];
  real_T qidx[2];
  real_T commonAncestorIndex;
  int32_T JacSlice_size[2];
  int32_T obj_Vector_size[2];
  int32_T y_size[2];
  int32_T qv_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T jointSign;
  int32_T loop_ub;
  int32_T minPathLength;
  int32_T vectorUB;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  boolean_T exitg1;
  boolean_T nextBodyIsParent;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (bid1 >= 0.0) {
    if (bid1 == 0.0) {
      body1 = &obj->Base;
    } else {
      i = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, (emlrtConstCTX)sp)
        - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 4, &hc_emlrtBCI,
        (emlrtConstCTX)sp)];
    }

    st.site = &xh_emlrtRSI;
    array_real_T_2D_Constructor(&ancestorIndices1);
    b_st.site = &di_emlrtRSI;
    RigidBodyTree_ancestorIndices(&b_st, obj, body1, &ancestorIndices1);
    array_real_T_2D_Constructor(&ancestorIndices2);
    b_st.site = &ei_emlrtRSI;
    RigidBodyTree_ancestorIndices(&b_st, obj, &obj->Base, &ancestorIndices2);
    minPathLength = (int32_T)muDoubleScalarMin((real_T)ancestorIndices1.size[1],
      (real_T)ancestorIndices2.size[1]);
    b_i = 1;
    exitg1 = false;
    while ((!exitg1) && (b_i - 1 <= minPathLength - 2)) {
      if (ancestorIndices1.vector.data[emlrtDynamicBoundsCheckR2012b
          (ancestorIndices1.size[1] - b_i, 1, ancestorIndices1.size[1],
           &ic_emlrtBCI, &st) - 1] !=
          ancestorIndices2.vector.data[emlrtDynamicBoundsCheckR2012b
          (ancestorIndices2.size[1] - b_i, 1, ancestorIndices2.size[1],
           &jc_emlrtBCI, &st) - 1]) {
        minPathLength = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }

    commonAncestorIndex =
      ancestorIndices1.vector.data[emlrtDynamicBoundsCheckR2012b
      ((ancestorIndices1.size[1] - minPathLength) + 1, 1, ancestorIndices1.size
       [1], &kc_emlrtBCI, &st) - 1];
    i = ancestorIndices1.size[1] - minPathLength;
    if (i < 1) {
      loop_ub = 0;
    } else {
      loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, ancestorIndices1.size[1],
        &fc_emlrtBCI, &st);
    }

    i = ancestorIndices2.size[1] - minPathLength;
    if (i < 1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      i = emlrtDynamicBoundsCheckR2012b(i, 1, ancestorIndices2.size[1],
        &gc_emlrtBCI, &st);
      i1 = -1;
      i2 = 1;
    }

    array_real_T_2D_Constructor(&kinematicPathIndices);
    b_st.site = &xh_emlrtRSI;
    array_real_T_2D_SetSize(&kinematicPathIndices, 1, (loop_ub + div_s32(&b_st,
      i2 - i, i1)) + 2);
    for (vectorUB = 0; vectorUB < loop_ub; vectorUB++) {
      kinematicPathIndices.vector.data[vectorUB] =
        ancestorIndices1.vector.data[vectorUB];
    }

    array_real_T_2D_Destructor(&ancestorIndices1);
    kinematicPathIndices.vector.data[loop_ub] = commonAncestorIndex;
    b_st.site = &xh_emlrtRSI;
    minPathLength = div_s32(&b_st, i2 - i, i1);
    for (i2 = 0; i2 <= minPathLength; i2++) {
      kinematicPathIndices.vector.data[(i2 + loop_ub) + 1] =
        ancestorIndices2.vector.data[(i + i1 * i2) - 1];
    }

    array_real_T_2D_Destructor(&ancestorIndices2);
    for (i = 0; i < 16; i++) {
      T1[i] = 0.0;
    }

    for (minPathLength = 0; minPathLength < 4; minPathLength++) {
      T1[minPathLength + (minPathLength << 2)] = 1.0;
    }

    commonAncestorIndex = emlrtNonNegativeCheckR2012b(obj->PositionNumber,
      &ub_emlrtDCI, (emlrtConstCTX)sp);
    commonAncestorIndex = emlrtIntegerCheckR2012b(commonAncestorIndex,
      &vb_emlrtDCI, (emlrtConstCTX)sp);
    array_real_T_2D_SetSize(Jac, 6, (int32_T)commonAncestorIndex);
    loop_ub = 6 * (int32_T)commonAncestorIndex;
    for (i = 0; i < loop_ub; i++) {
      Jac->vector.data[i] = 0.0;
    }

    i = kinematicPathIndices.size[1] - 2;
    for (b_i = 0; b_i <= i; b_i++) {
      if (kinematicPathIndices.vector.data[emlrtDynamicBoundsCheckR2012b(b_i + 1,
           1, kinematicPathIndices.size[1], &lc_emlrtBCI, (emlrtConstCTX)sp) - 1]
          != 0.0) {
        commonAncestorIndex =
          kinematicPathIndices.vector.data[emlrtDynamicBoundsCheckR2012b(b_i + 1,
          1, kinematicPathIndices.size[1], &oc_emlrtBCI, (emlrtConstCTX)sp) - 1];
        i1 = (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex, &ec_emlrtDCI,
          (emlrtConstCTX)sp) - 1;
        body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 4, &nc_emlrtBCI,
          (emlrtConstCTX)sp)];
      } else {
        body1 = &obj->Base;
      }

      if (kinematicPathIndices.vector.data[emlrtDynamicBoundsCheckR2012b(b_i + 2,
           1, kinematicPathIndices.size[1], &mc_emlrtBCI, (emlrtConstCTX)sp) - 1]
          != 0.0) {
        commonAncestorIndex =
          kinematicPathIndices.vector.data[emlrtDynamicBoundsCheckR2012b(b_i + 2,
          1, kinematicPathIndices.size[1], &qc_emlrtBCI, (emlrtConstCTX)sp) - 1];
        i1 = (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex, &fc_emlrtDCI,
          (emlrtConstCTX)sp) - 1;
        nextBody = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 4,
          &pc_emlrtBCI, (emlrtConstCTX)sp)];
      } else {
        nextBody = &obj->Base;
      }

      nextBodyIsParent = (nextBody->Index == body1->ParentIndex);
      if (nextBodyIsParent) {
        nextBody = body1;
        jointSign = 1;
      } else {
        jointSign = -1;
      }

      joint = nextBody->JointInternal;
      st.site = &yh_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      commonAncestorIndex = joint->TypeInternal.Length;
      for (i1 = 0; i1 < 200; i1++) {
        obj_Vector[i1] = joint->TypeInternal.Vector[i1];
      }

      if (commonAncestorIndex < 1.0) {
        loop_ub = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(commonAncestorIndex, &emlrtDCI,
          &b_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i1, 1, 200, &emlrtBCI, &b_st);
      }

      obj_Vector_size[0] = 1;
      obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (e_strcmp(obj_Vector_data, obj_Vector_size)) {
        st.site = &ai_emlrtRSI;
        rigidBodyJoint_transformBodyToParent(&st, joint, Tc2p);
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(nextBody->Index, &wb_emlrtDCI,
          (emlrtConstCTX)sp);
        minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 5, &yb_emlrtBCI,
          (emlrtConstCTX)sp);
        for (i1 = 0; i1 < 2; i1++) {
          qidx[i1] = obj->PositionDoFMap[(minPathLength + 5 * i1) - 1];
        }

        if (qidx[0] > qidx[1]) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &xb_emlrtDCI,
            (emlrtConstCTX)sp);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 4, &ac_emlrtBCI,
            (emlrtConstCTX)sp) - 1;
          i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &yb_emlrtDCI,
            (emlrtConstCTX)sp);
          i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 4, &bc_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        qv_size[0] = i2 - i1;
        loop_ub = i2 - i1;
        for (i2 = 0; i2 < loop_ub; i2++) {
          qv_data[i2] = qv[i1 + i2];
        }

        st.site = &bi_emlrtRSI;
        b_rigidBodyJoint_transformBodyToParent(&st, joint, qv_data, qv_size,
          Tc2p);
        i1 = (int32_T)emlrtIntegerCheckR2012b(nextBody->Index, &ac_emlrtDCI,
          (emlrtConstCTX)sp);
        minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 5, &cc_emlrtBCI,
          (emlrtConstCTX)sp);
        for (i1 = 0; i1 < 2; i1++) {
          qidx[i1] = obj->VelocityDoFMap[(minPathLength + 5 * i1) - 1];
        }

        if (nextBodyIsParent) {
          for (i1 = 0; i1 < 16; i1++) {
            Tj[i1] = joint->ChildToJointTransform[i1];
          }
        } else {
          tforminv(joint->JointToParentTransform, Tj);
        }

        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 4; i2++) {
            b_Tj[i1 + (i2 << 2)] = 0.0;
            for (vectorUB = 0; vectorUB < 4; vectorUB++) {
              b_Tj[i1 + (i2 << 2)] += Tj[i1 + (vectorUB << 2)] * T1[vectorUB +
                (i2 << 2)];
            }
          }
        }

        tforminv(b_Tj, Tj);
        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj[i2 + (i1 << 2)];
          }
        }

        st.site = &ci_emlrtRSI;
        rigidBodyJoint_get_MotionSubspace(&st, joint, JacSlice_data,
          JacSlice_size);
        dv[0] = 0.0;
        dv[3] = -Tj[14];
        dv[6] = Tj[13];
        dv[1] = Tj[14];
        dv[4] = 0.0;
        dv[7] = -Tj[12];
        dv[2] = -Tj[13];
        dv[5] = Tj[12];
        dv[8] = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            dv1[i1 + 3 * i2] = 0.0;
            for (vectorUB = 0; vectorUB < 3; vectorUB++) {
              dv1[i1 + 3 * i2] += dv[i1 + 3 * vectorUB] * R[vectorUB + 3 * i2];
            }

            b_R[i2 + 6 * i1] = R[i2 + 3 * i1];
            b_R[i2 + 6 * (i1 + 3)] = 0.0;
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_R[(i2 + 6 * i1) + 3] = dv1[i2 + 3 * i1];
            b_R[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
          }
        }

        st.site = &uh_emlrtRSI;
        mtimes(b_R, JacSlice_data, JacSlice_size, y_data, y_size);
        JacSlice_size[0] = 6;
        JacSlice_size[1] = y_size[1];
        loop_ub = 6 * y_size[1];
        minPathLength = loop_ub / 2 * 2;
        vectorUB = minPathLength - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          r = _mm_loadu_pd(&y_data[i1]);
          _mm_storeu_pd(&JacSlice_data[i1], _mm_mul_pd(r, _mm_set1_pd((real_T)
            jointSign)));
        }

        for (i1 = minPathLength; i1 < loop_ub; i1++) {
          JacSlice_data[i1] = y_data[i1] * (real_T)jointSign;
        }

        if (qidx[0] > qidx[1]) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &bc_emlrtDCI,
            (emlrtConstCTX)sp);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, Jac->size[1], &dc_emlrtBCI,
            (emlrtConstCTX)sp) - 1;
          i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &cc_emlrtDCI,
            (emlrtConstCTX)sp);
          i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, Jac->size[1], &ec_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        y_size[0] = 6;
        y_size[1] = i2 - i1;
        emlrtSubAssignSizeCheckR2012b(&y_size[0], 2, &JacSlice_size[0], 2,
          &n_emlrtECI, (void *)sp);
        minPathLength = i2 - i1;
        for (i2 = 0; i2 < minPathLength; i2++) {
          for (vectorUB = 0; vectorUB < 6; vectorUB++) {
            Jac->vector.data[vectorUB + 6 * (i1 + i2)] = JacSlice_data[vectorUB
              + 6 * i2];
          }
        }
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 4; i2++) {
            Tj[i1 + (i2 << 2)] = 0.0;
            for (vectorUB = 0; vectorUB < 4; vectorUB++) {
              Tj[i1 + (i2 << 2)] += Tc2p[i1 + (vectorUB << 2)] * T1[vectorUB +
                (i2 << 2)];
            }
          }
        }

        memcpy(&T1[0], &Tj[0], sizeof(real_T) << 4);
      } else {
        tforminv(Tc2p, Tj);
        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 4; i2++) {
            b_Tj[i1 + (i2 << 2)] = 0.0;
            for (vectorUB = 0; vectorUB < 4; vectorUB++) {
              b_Tj[i1 + (i2 << 2)] += Tj[i1 + (vectorUB << 2)] * T1[vectorUB +
                (i2 << 2)];
            }
          }
        }

        memcpy(&T1[0], &b_Tj[0], sizeof(real_T) << 4);
      }
    }

    array_real_T_2D_Destructor(&kinematicPathIndices);
    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < 3; i1++) {
        y_data[i1 + 6 * i] = T1[i1 + (i << 2)];
        y_data[i1 + 6 * (i + 3)] = 0.0;
        y_data[(i1 + 6 * i) + 3] = 0.0;
        y_data[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
      }
    }

    array_real_T_2D_Constructor(&b_Jac);
    array_real_T_2D_SetSize(&b_Jac, 6, Jac->size[1]);
    loop_ub = Jac->size[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        b_Jac.vector.data[i1 + 6 * i] = Jac->vector.data[i1 + 6 * i];
      }
    }

    st.site = &uh_emlrtRSI;
    b_mtimes(y_data, &b_Jac, Jac);
    array_real_T_2D_Destructor(&b_Jac);
    T_size[0] = 4;
    T_size[1] = 4;
    memcpy(&T_data[0], &T1[0], sizeof(real_T) << 4);
  } else {
    T_size[0] = 0;
    T_size[1] = 0;
    array_real_T_2D_SetSize(Jac, 6, 0);
  }
}

static void RigidBodyTree_ancestorIndices(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *body, coder_array_real_T_2D *indices)
{
  real_T d;
  int32_T i;
  int32_T loop_ub;
  uint32_T b_i;
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &hc_emlrtDCI, (emlrtConstCTX)sp);
  d = emlrtIntegerCheckR2012b(d, &gc_emlrtDCI, (emlrtConstCTX)sp);
  array_real_T_2D_SetSize(indices, 1, (int32_T)d);
  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    indices->vector.data[i] = 0.0;
  }

  b_i = 2U;
  emlrtDynamicBoundsCheckR2012b(1, 1, indices->size[1], &tc_emlrtBCI,
    (emlrtConstCTX)sp);
  indices->vector.data[0] = body->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &ic_emlrtDCI,
      (emlrtConstCTX)sp) - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 4, &uc_emlrtBCI,
      (emlrtConstCTX)sp)];
    indices->vector.data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1,
      indices->size[1], &wc_emlrtBCI, (emlrtConstCTX)sp) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    indices->vector.data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1,
      indices->size[1], &vc_emlrtBCI, (emlrtConstCTX)sp) - 1] =
      body->ParentIndex;
    b_i++;
  }

  emlrtDynamicBoundsCheckR2012b(1, 1, indices->size[1], &sc_emlrtBCI,
    (emlrtConstCTX)sp);
  emlrtDynamicBoundsCheckR2012b((int32_T)((real_T)b_i - 1.0), 1, indices->size[1],
    &rc_emlrtBCI, (emlrtConstCTX)sp);
  array_real_T_2D_SetSize(indices, indices->size[0], (int32_T)(b_i - 1U));
}

static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T b_v[3];
  real_T v[3];
  real_T obj_Length;
  int32_T switch_expression_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    a[loop_ub] = obj->JointToParentTransform[loop_ub];
  }

  st.site = &fi_emlrtRSI;
  b_st.site = &gi_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (loop_ub = 0; loop_ub < 200; loop_ub++) {
    obj_Vector[loop_ub] = obj->TypeInternal.Vector[loop_ub];
  }

  if (obj_Length < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    b_st.site = &hi_emlrtRSI;
    rigidBodyJoint_get_JointAxis(&b_st, obj, v);
    b_st.site = &ii_emlrtRSI;
    c_st.site = &li_emlrtRSI;
    d_st.site = &mi_emlrtRSI;
    e_st.site = &ni_emlrtRSI;
    normalizeRows(&e_st, v, b_v);
    for (loop_ub = 0; loop_ub < 16; loop_ub++) {
      b_b[loop_ub] = 0.0;
    }

    cat(b_v[0] * b_v[0] * 0.0 + 1.0, b_v[0] * b_v[1] * 0.0 - b_v[2] * 0.0, b_v[0]
        * b_v[2] * 0.0 + b_v[1] * 0.0, b_v[0] * b_v[1] * 0.0 + b_v[2] * 0.0,
        b_v[1] * b_v[1] * 0.0 + 1.0, b_v[1] * b_v[2] * 0.0 - b_v[0] * 0.0, b_v[0]
        * b_v[2] * 0.0 - b_v[1] * 0.0, b_v[1] * b_v[2] * 0.0 + b_v[0] * 0.0,
        b_v[2] * b_v[2] * 0.0 + 1.0, dv1);
    permute(dv1, dv);
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      for (i = 0; i < 3; i++) {
        b_b[i + (loop_ub << 2)] = dv[i + 3 * loop_ub];
      }
    }

    b_b[15] = 1.0;
    break;

   case 1:
    b_st.site = &ji_emlrtRSI;
    rigidBodyJoint_get_JointAxis(&b_st, obj, v);
    for (loop_ub = 0; loop_ub < 9; loop_ub++) {
      b_I[loop_ub] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      for (i = 0; i < 3; i++) {
        b_b[i + (loop_ub << 2)] = (real_T)b_I[i + 3 * loop_ub];
      }

      b_b[loop_ub + 12] = v[loop_ub] * 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[(loop_ub << 2) + 3] = (real_T)iv[loop_ub];
    }
    break;

   case 2:
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 5, 1, 1, &xc_emlrtBCI, &st);

      /* Check node always fails. would cause program termination and was eliminated */
    }

    /* Check node always fails. would cause program termination and was eliminated */
    break;

   default:
    for (loop_ub = 0; loop_ub < 16; loop_ub++) {
      b_b[loop_ub] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;
  }

  for (loop_ub = 0; loop_ub < 16; loop_ub++) {
    c_b[loop_ub] = obj->ChildToJointTransform[loop_ub];
  }

  for (loop_ub = 0; loop_ub < 4; loop_ub++) {
    for (i = 0; i < 4; i++) {
      b_a[loop_ub + (i << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[loop_ub + (i << 2)] += a[loop_ub + (i1 << 2)] * b_b[i1 + (i << 2)];
      }
    }

    for (i = 0; i < 4; i++) {
      T[loop_ub + (i << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[loop_ub + (i << 2)] += b_a[loop_ub + (i1 << 2)] * c_b[i1 + (i << 2)];
      }
    }
  }
}

static void rigidBodyJoint_get_JointAxis(const emlrtStack *sp, rigidBodyJoint
  *obj, real_T ax[3])
{
  static char_T cv1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  real_T obj_Length;
  int32_T exitg1;
  int32_T kstr;
  char_T obj_Vector[200];
  boolean_T b_bool;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ki_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &hb_emlrtRSI;
  obj_Length = obj->TypeInternal.Length;
  for (kstr = 0; kstr < 200; kstr++) {
    obj_Vector[kstr] = obj->TypeInternal.Vector[kstr];
  }

  if (obj_Length < 1.0) {
    kstr = 0;
  } else {
    kstr = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
    kstr = emlrtDynamicBoundsCheckR2012b(kstr, 1, 200, &emlrtBCI, &b_st);
  }

  b_bool = false;
  if (kstr != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (obj_Vector[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
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
    st.site = &ki_emlrtRSI;
    b_st.site = &hb_emlrtRSI;
    obj_Length = obj->TypeInternal.Length;
    for (kstr = 0; kstr < 200; kstr++) {
      obj_Vector[kstr] = obj->TypeInternal.Vector[kstr];
    }

    if (obj_Length < 1.0) {
      kstr = 0;
    } else {
      kstr = (int32_T)emlrtIntegerCheckR2012b(obj_Length, &emlrtDCI, &b_st);
      kstr = emlrtDynamicBoundsCheckR2012b(kstr, 1, 200, &emlrtBCI, &b_st);
    }

    b_bool = false;
    if (kstr != 9) {
    } else {
      kstr = 1;
      do {
        exitg1 = 0;
        if (kstr - 1 < 9) {
          if (obj_Vector[kstr - 1] != cv1[kstr - 1]) {
            exitg1 = 1;
          } else {
            kstr++;
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
      for (kstr = 0; kstr < 3; kstr++) {
        ax[kstr] = rtNaN;
      }
    }
  }

  if (guard1) {
    for (kstr = 0; kstr < 3; kstr++) {
      ax[kstr] = obj->JointAxisInternal[kstr];
    }
  }
}

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  __m128d r;
  emlrtStack st;
  real_T y[3];
  real_T b_matrix;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&y[0], _mm_mul_pd(r, r));
  }

  for (k = 2; k < 3; k++) {
    b_matrix = matrix[2];
    y[2] = b_matrix * b_matrix;
  }

  b_matrix = sumColumnB(y);
  st.site = &oi_emlrtRSI;
  b_sqrt(&st, &b_matrix);
  b_matrix = 1.0 / b_matrix;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&normRowMatrix[0], _mm_mul_pd(r, _mm_set1_pd(b_matrix)));
  }

  for (k = 2; k < 3; k++) {
    normRowMatrix[2] = matrix[2] * b_matrix;
  }
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
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

static void permute(real_T a[9], real_T b_b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b_b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 35 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T k_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T g_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T e_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T i_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T m_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T result_data[4];
  real_T v[3];
  real_T cth;
  real_T sth;
  int32_T switch_expression_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T obj_Vector[200];
  char_T switch_expression_data[200];
  char_T j_u[48];
  char_T d_u[45];
  char_T b_u[39];
  char_T h_u[35];
  char_T c_u[15];
  char_T l_u[5];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &fi_emlrtRSI;
  b_st.site = &gi_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  cth = obj->TypeInternal.Length;
  for (i = 0; i < 200; i++) {
    obj_Vector[i] = obj->TypeInternal.Vector[i];
  }

  if (cth < 1.0) {
    loop_ub = 0;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(cth, &emlrtDCI, &c_st);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 200, &emlrtBCI, &c_st);
  }

  switch_expression_size[0] = 1;
  switch_expression_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&switch_expression_data[0], &obj_Vector[0], (uint32_T)loop_ub *
           sizeof(char_T));
  }

  if (b_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 1;
  } else if (d_strcmp(switch_expression_data, switch_expression_size)) {
    loop_ub = 2;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    b_st.site = &hi_emlrtRSI;
    rigidBodyJoint_get_JointAxis(&b_st, obj, v);
    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &vl_emlrtRSI;
      b_error(&b_st, y, getString(&b_st, b_message(&b_st, d_y, &v_emlrtMCI),
               &v_emlrtMCI), &v_emlrtMCI);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    for (i = 0; i < loop_ub; i++) {
      result_data[3] = q_data[0];
    }

    b_st.site = &ii_emlrtRSI;
    c_st.site = &ti_emlrtRSI;
    d_st.site = &ui_emlrtRSI;
    e_st.site = &vb_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 35; i++) {
        h_u[i] = i_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&e_st, 35, m, &h_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 48; i++) {
        j_u[i] = k_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &j_u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        l_u[i] = m_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &l_u[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&j_y, m);
      f_st.site = &ul_emlrtRSI;
      b_error(&f_st, g_y, getString(&f_st, d_message(&f_st, h_y, i_y, j_y,
                &w_emlrtMCI), &w_emlrtMCI), &w_emlrtMCI);
    }

    c_st.site = &li_emlrtRSI;
    d_st.site = &mi_emlrtRSI;
    e_st.site = &ni_emlrtRSI;
    normalizeRows(&e_st, &result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &yc_emlrtBCI, &d_st);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[0] * v[1] * (1.0 - cth) - v[2] * sth,
        v[0] * v[2] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[1] * v[2] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, dv1);
    permute(dv1, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   case 1:
    b_st.site = &ji_emlrtRSI;
    rigidBodyJoint_get_JointAxis(&b_st, obj, v);
    b_st.site = &si_emlrtRSI;
    if (q_size[0] != 1) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &d_u[0]);
        emlrtAssign(&c_y, m);
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &d_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &sl_emlrtRSI;
        b_error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &y_emlrtMCI),
                 &y_emlrtMCI), &y_emlrtMCI);
      } else {
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &c_u[0]);
        emlrtAssign(&e_y, m);
        c_st.site = &tl_emlrtRSI;
        b_error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &x_emlrtMCI),
                 &x_emlrtMCI), &x_emlrtMCI);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * cth;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv4[i];
    }
    break;

   case 2:
    for (i = 0; i < 3; i++) {
      emlrtDynamicBoundsCheckR2012b(i + 5, 1, q_size[0], &ad_emlrtBCI, &st);

      /* Check node always fails. would cause program termination and was eliminated */
    }

    /* Check node always fails. would cause program termination and was eliminated */
    break;

   default:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void tforminv(real_T T[16], real_T Tinv[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  __m128d r;
  real_T R[9];
  real_T b_R[9];
  real_T c_R[3];
  int32_T i;
  int32_T i1;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 3 * i] = T[i + (i1 << 2)];
    }
  }

  for (i = 0; i <= 6; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&b_R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }

  for (i = 8; i < 9; i++) {
    b_R[8] = -R[8];
  }

  for (i = 0; i < 3; i++) {
    c_R[i] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      Tinv[i1 + (i << 2)] = R[i1 + 3 * i];
      c_R[i] += b_R[i + 3 * i1] * T[i1 + 12];
    }

    Tinv[i + 12] = c_R[i];
  }

  for (i = 0; i < 4; i++) {
    Tinv[(i << 2) + 3] = (real_T)iv[i];
  }
}

static void mtimes(real_T A[36], real_T B_data[], int32_T B_size[2], real_T
                   C_data[], int32_T C_size[2])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  coder_array_real_T_2D C;
  real_T alpha1;
  real_T beta1;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B_size[1] == 0) {
    C_size[0] = 6;
    C_size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B_size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    array_real_T_2D_Constructor(&C);
    array_real_T_2D_SetSize(&C, 6, B_size[1]);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B_data
          [0], &ldb_t, &beta1, &C.vector.data[0], &ldc_t);
    C_size[0] = 6;
    C_size[1] = C.size[1];
    loop_ub = 6 * C.size[1];
    if (loop_ub - 1 >= 0) {
      memcpy(&C_data[0], &C.vector.data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    array_real_T_2D_Destructor(&C);
  }
}

static void b_mtimes(real_T A[36], coder_array_real_T_2D *B,
                     coder_array_real_T_2D *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    array_real_T_2D_SetSize(C, 6, 0);
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    array_real_T_2D_SetSize(C, 6, B->size[1]);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t,
          &B->vector.data[0], &ldb_t, &beta1, &C->vector.data[0], &ldc_t);
  }
}

static void IKHelpers_poseError(const emlrtStack *sp, real_T Td[16], real_T
  T_data[], int32_T T_size[2], real_T errorvec[6])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  creal_T b_u;
  creal_T v;
  real_T U[9];
  real_T V[9];
  real_T b_I[9];
  real_T y[9];
  real_T c_v[4];
  real_T b_v[3];
  real_T vspecial_data[3];
  real_T ci;
  real_T q;
  int32_T iv[3];
  int32_T vspecial_size[2];
  int32_T b_i;
  int32_T i;
  int32_T iy;
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T rEQ0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &ed_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[1], &fd_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, T_size[1], &bd_emlrtBCI, (emlrtConstCTX)sp);
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &gd_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      y[i + 3 * b_i] = 0.0;
      for (iy = 0; iy < 3; iy++) {
        y[i + 3 * b_i] += Td[i + (iy << 2)] * T_data[b_i + T_size[0] * iy];
      }
    }
  }

  st.site = &vi_emlrtRSI;
  b_u.re = 0.5 * (((y[0] + y[4]) + y[8]) - 1.0);
  if (!(muDoubleScalarAbs(b_u.re) > 1.0)) {
    ci = b_u.re;
    b_u.re = muDoubleScalarAcos(ci);
  } else {
    v.re = b_u.re + 1.0;
    v.im = 0.0;
    c_sqrt(&v);
    ci = b_u.re;
    b_u.re = 1.0 - ci;
    b_u.im = 0.0;
    c_sqrt(&b_u);
    if ((-v.im == 0.0) && (b_u.im == 0.0)) {
    } else {
      ci = v.re * b_u.im + -v.im * b_u.re;
      if ((muDoubleScalarIsInf(ci) || muDoubleScalarIsNaN(ci)) &&
          (!muDoubleScalarIsNaN(v.re)) && (!muDoubleScalarIsNaN(-v.im)) &&
          (!muDoubleScalarIsNaN(b_u.re)) && (!muDoubleScalarIsNaN(b_u.im))) {
        ci = v.re;
        q = -v.im;
        rescale(&ci, &q);
        ci = b_u.re;
        q = b_u.im;
        rescale(&ci, &q);
      }
    }

    ci = b_u.re;
    b_u.re = 2.0 * muDoubleScalarAtan2(ci, v.re);
  }

  ci = 2.0 * muDoubleScalarSin(b_u.re);
  b_v[0] = (y[5] - y[7]) / ci;
  b_v[1] = (y[6] - y[2]) / ci;
  b_v[2] = (y[1] - y[3]) / ci;
  if (muDoubleScalarIsNaN(b_u.re) || muDoubleScalarIsInf(b_u.re)) {
    ci = rtNaN;
  } else if (b_u.re == 0.0) {
    ci = 0.0;
  } else {
    ci = muDoubleScalarRem(b_u.re, 3.1415926535897931);
    rEQ0 = (ci == 0.0);
    if (!rEQ0) {
      q = muDoubleScalarAbs(b_u.re / 3.1415926535897931);
      rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
               2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      ci = 0.0;
    } else if (ci < 0.0) {
      ci += 3.1415926535897931;
    }
  }

  for (i = 0; i < 3; i++) {
    x[i] = (b_v[i] == 0.0);
  }

  rEQ0 = true;
  iy = 0;
  exitg1 = false;
  while ((!exitg1) && (iy < 3)) {
    if (!x[iy]) {
      rEQ0 = false;
      exitg1 = true;
    } else {
      iy++;
    }
  }

  rEQ0 = ((ci == 0.0) || rEQ0);
  if (rEQ0) {
    vspecial_size[0] = 3;
    vspecial_size[1] = 1;
    for (b_i = 0; b_i < 1; b_i++) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 1, &dd_emlrtBCI, &st);
      for (i = 0; i < 9; i++) {
        b_I[i] = 0.0;
      }

      for (iy = 0; iy < 3; iy++) {
        b_I[iy + 3 * iy] = 1.0;
      }

      b_st.site = &xi_emlrtRSI;
      rEQ0 = true;
      for (iy = 0; iy < 9; iy++) {
        ci = b_I[iy] - y[iy];
        if (rEQ0 && ((!muDoubleScalarIsInf(ci)) && (!muDoubleScalarIsNaN(ci))))
        {
          rEQ0 = true;
        } else {
          rEQ0 = false;
        }

        b_I[iy] = ci;
      }

      if (rEQ0) {
        c_st.site = &yi_emlrtRSI;
        d_st.site = &bj_emlrtRSI;
        xzsvdc(&d_st, b_I, U, vspecial_data, V);
      } else {
        c_st.site = &aj_emlrtRSI;
        for (i = 0; i < 9; i++) {
          b_I[i] = 0.0;
        }

        d_st.site = &bj_emlrtRSI;
        xzsvdc(&d_st, b_I, U, vspecial_data, V);
        for (i = 0; i < 9; i++) {
          V[i] = rtNaN;
        }
      }

      emlrtDynamicBoundsCheckR2012b(1, 1, 1, &cd_emlrtBCI, &st);
      for (i = 0; i < 3; i++) {
        vspecial_data[i] = V[i + 6];
      }
    }

    iy = 0;
    for (b_i = 0; b_i < 1; b_i++) {
      iy++;
    }

    iv[0] = 1;
    iv[1] = 3;
    iv[2] = iy;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &vspecial_size[0], 2, &o_emlrtECI,
      &st);
    for (i = 0; i < iy; i++) {
      for (b_i = 0; b_i < 3; b_i++) {
        b_v[b_i] = vspecial_data[b_i];
      }
    }
  }

  for (i = 0; i < 3; i++) {
    vspecial_data[i] = b_v[i];
  }

  b_st.site = &wi_emlrtRSI;
  normalizeRows(&b_st, vspecial_data, b_v);
  iy = -1;
  for (b_i = 0; b_i < 3; b_i++) {
    iy++;
    c_v[iy] = b_v[b_i];
  }

  c_v[iy + 1] = b_u.re;
  for (i = 0; i <= 0; i += 2) {
    r = _mm_loadu_pd(&c_v[0]);
    _mm_storeu_pd(&errorvec[0], _mm_mul_pd(_mm_set1_pd(c_v[3]), r));
    r = _mm_loadu_pd(&Td[12]);
    r1 = _mm_loadu_pd(&T_data[T_size[0] * 3]);
    _mm_storeu_pd(&errorvec[3], _mm_sub_pd(r, r1));
  }

  for (i = 2; i < 3; i++) {
    errorvec[2] = c_v[2] * c_v[3];
    errorvec[5] = Td[14] - T_data[T_size[0] * 3 + 2];
  }
}

static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9])
{
  static char_T cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A',
    'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g',
    'e', 'n', 'c', 'e' };

  __m128d r;
  emlrtStack st;
  real_T e[3];
  real_T s[3];
  real_T work[3];
  real_T anrm;
  real_T b_b;
  real_T b_r;
  real_T cscale;
  real_T f;
  real_T nrm;
  real_T scale;
  real_T sm;
  real_T snorm;
  real_T sqds;
  int32_T exitg2;
  int32_T i;
  int32_T ii;
  int32_T k;
  int32_T m;
  int32_T q;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T doscale;
  boolean_T exitg1;
  boolean_T exitg3;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  for (ii = 0; ii < 9; ii++) {
    U[ii] = 0.0;
    V[ii] = 0.0;
  }

  doscale = false;
  anrm = xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    xzlascl(anrm, cscale, A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    xzlascl(anrm, cscale, A);
  }

  for (q = 0; q < 2; q++) {
    qp1 = q + 2;
    qq = (q + 3 * q) + 1;
    apply_transform = false;
    nrm = xnrm2(3 - q, A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[qq - 1] < 0.0) {
        nrm = -nrm;
      }

      s[q] = nrm;
      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        xscal(3 - q, 1.0 / s[q], A, qq);
      } else {
        ii = qq - q;
        i = ((ii - qq) + 3) / 2 * 2 + qq;
        qs = i - 2;
        for (k = qq; k <= qs; k += 2) {
          r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_div_pd(r, _mm_set1_pd(s[q])));
        }

        for (k = i; k <= ii + 2; k++) {
          A[k - 1] /= s[q];
        }
      }

      A[qq - 1]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (qs = qp1; qs < 4; qs++) {
      i = (q + 3 * (qs - 1)) + 1;
      if (apply_transform) {
        xaxpy(3 - q, -(xdotc(3 - q, A, qq, A, i) / A[q + 3 * q]), qq, A, i);
      }

      e[qs - 1] = A[i - 1];
    }

    memcpy(&U[q + q * 3], &A[q + q * 3], (uint32_T)(((q * 3 - q) - q * 3) + 3) *
           sizeof(real_T));
    if (q + 1 <= 1) {
      nrm = b_xnrm2(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          nrm = -nrm;
        }

        e[0] = nrm;
        if (muDoubleScalarAbs(nrm) >= 1.0020841800044864E-292) {
          b_xscal(1.0 / nrm, e, 2);
        } else {
          i = ((2 - q) / 2 * 2 + q) + 2;
          qs = i - 2;
          for (k = qp1; k <= qs; k += 2) {
            r = _mm_loadu_pd(&e[k - 1]);
            _mm_storeu_pd(&e[k - 1], _mm_div_pd(r, _mm_set1_pd(nrm)));
          }

          for (k = i; k < 4; k++) {
            e[k - 1] /= nrm;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (ii = qp1; ii < 4; ii++) {
          work[ii - 1] = 0.0;
        }

        for (qs = qp1; qs < 4; qs++) {
          b_xaxpy(2, e[qs - 1], A, 3 * (qs - 1) + 2, work, 2);
        }

        for (qs = qp1; qs < 4; qs++) {
          c_xaxpy(2, -e[qs - 1] / e[1], work, 2, A, 3 * (qs - 1) + 2);
        }
      }

      for (ii = qp1; ii < 4; ii++) {
        V[ii - 1] = e[ii - 1];
      }
    }
  }

  m = 1;
  s[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  for (ii = 0; ii < 3; ii++) {
    U[ii + 6] = 0.0;
  }

  U[8] = 1.0;
  for (q = 1; q >= 0; q--) {
    qq = q + 3 * q;
    if (s[q] != 0.0) {
      for (qs = q + 2; qs < 4; qs++) {
        i = (q + 3 * (qs - 1)) + 1;
        xaxpy(3 - q, -(xdotc(3 - q, U, qq + 1, U, i) / U[qq]), qq + 1, U, i);
      }

      for (ii = q + 1; ii < 4; ii++) {
        U[(ii + 3 * q) - 1] = -U[(ii + 3 * q) - 1];
      }

      U[qq]++;
      for (ii = 0; ii < q; ii++) {
        U[3 * q] = 0.0;
      }
    } else {
      for (ii = 0; ii < 3; ii++) {
        U[ii + 3 * q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      for (qs = 0; qs < 2; qs++) {
        i = 3 * (qs + 1) + 2;
        xaxpy(2, -(xdotc(2, V, 2, V, i) / V[1]), 2, V, i);
      }
    }

    for (ii = 0; ii < 3; ii++) {
      V[ii + 3 * q] = 0.0;
    }

    V[q + 3 * q] = 1.0;
  }

  qp1 = 0;
  snorm = 0.0;
  for (q = 0; q < 3; q++) {
    sm = e[q];
    if (s[q] != 0.0) {
      nrm = muDoubleScalarAbs(s[q]);
      b_r = s[q] / nrm;
      s[q] = nrm;
      if (q + 1 < 3) {
        sm /= b_r;
      }

      c_xscal(b_r, U, 3 * q + 1);
    }

    if ((q + 1 < 3) && (sm != 0.0)) {
      nrm = muDoubleScalarAbs(sm);
      b_r = nrm / sm;
      sm = nrm;
      s[q + 1] *= b_r;
      c_xscal(b_r, V, 3 * (q + 1) + 1);
    }

    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[q]),
      muDoubleScalarAbs(sm)));
    e[q] = sm;
  }

  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (qp1 >= 75) {
      st.site = &dl_emlrtRSI;
      b_error(&st, emlrt_marshallOut(&st, cv), getString(&st, b_message(&st,
                emlrt_marshallOut(&st, cv), &ab_emlrtMCI), &ab_emlrtMCI),
              &ab_emlrtMCI);
      exitg1 = true;
    } else {
      ii = m;
      do {
        exitg2 = 0;
        q = ii + 1;
        if (ii + 1 == 0) {
          exitg2 = 1;
        } else {
          nrm = muDoubleScalarAbs(e[ii]);
          if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[ii]) +
                muDoubleScalarAbs(s[ii + 1]))) || (nrm <=
               1.0020841800044864E-292) || ((qp1 > 20) && (nrm <=
                2.2204460492503131E-16 * snorm))) {
            e[ii] = 0.0;
            exitg2 = 1;
          } else {
            ii--;
          }
        }
      } while (exitg2 == 0);

      if (ii + 1 == m + 1) {
        i = 4;
      } else {
        qs = m + 2;
        i = m + 2;
        exitg3 = false;
        while ((!exitg3) && (i >= ii + 1)) {
          qs = i;
          if (i == ii + 1) {
            exitg3 = true;
          } else {
            nrm = 0.0;
            if (i < m + 2) {
              nrm = muDoubleScalarAbs(e[i - 1]);
            }

            if (i > ii + 2) {
              nrm += muDoubleScalarAbs(e[i - 2]);
            }

            b_r = muDoubleScalarAbs(s[i - 1]);
            if ((b_r <= 2.2204460492503131E-16 * nrm) || (b_r <=
                 1.0020841800044864E-292)) {
              s[i - 1] = 0.0;
              exitg3 = true;
            } else {
              i--;
            }
          }
        }

        if (qs == ii + 1) {
          i = 3;
        } else if (qs == m + 2) {
          i = 1;
        } else {
          i = 2;
          q = qs;
        }
      }

      switch (i) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (k = m + 1; k >= q + 1; k--) {
          sm = e[0];
          nrm = s[k - 1];
          st.site = &gj_emlrtRSI;
          xrotg(&nrm, &f, &b_r, &b_b);
          s[k - 1] = nrm;
          if (k > q + 1) {
            f = -b_b * e[0];
            sm = e[0] * b_r;
          }

          xrot(V, 3 * (k - 1) + 1, 3 * (m + 1) + 1, b_r, b_b);
          e[0] = sm;
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (k = q + 1; k <= m + 2; k++) {
          nrm = s[k - 1];
          st.site = &fj_emlrtRSI;
          xrotg(&nrm, &f, &b_r, &b_b);
          s[k - 1] = nrm;
          f = -b_b * e[k - 1];
          e[k - 1] *= b_r;
          xrot(U, 3 * (k - 1) + 1, 3 * (q - 1) + 1, b_r, b_b);
        }
        break;

       case 3:
        i = m + 1;
        scale = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
          (muDoubleScalarMax(muDoubleScalarAbs(s[m + 1]), muDoubleScalarAbs(s[m])),
           muDoubleScalarAbs(e[m])), muDoubleScalarAbs(s[q])), muDoubleScalarAbs
          (e[q]));
        sm = s[m + 1] / scale;
        nrm = s[m] / scale;
        b_r = e[m] / scale;
        sqds = s[q] / scale;
        b_b = ((nrm + sm) * (nrm - sm) + b_r * b_r) / 2.0;
        nrm = sm * b_r;
        nrm *= nrm;
        if ((b_b != 0.0) || (nrm != 0.0)) {
          b_r = b_b * b_b + nrm;
          st.site = &ej_emlrtRSI;
          b_sqrt(&st, &b_r);
          if (b_b < 0.0) {
            b_r = -b_r;
          }

          b_r = nrm / (b_b + b_r);
        } else {
          b_r = 0.0;
        }

        f = (sqds + sm) * (sqds - sm) + b_r;
        nrm = sqds * (e[q] / scale);
        for (k = q + 1; k <= i; k++) {
          st.site = &dj_emlrtRSI;
          xrotg(&f, &nrm, &b_r, &b_b);
          if (k > q + 1) {
            e[0] = f;
          }

          f = b_r * s[k - 1] + b_b * e[k - 1];
          e[k - 1] = b_r * e[k - 1] - b_b * s[k - 1];
          nrm = b_b * s[k];
          s[k] *= b_r;
          xrot(V, 3 * (k - 1) + 1, 3 * k + 1, b_r, b_b);
          st.site = &cj_emlrtRSI;
          xrotg(&f, &nrm, &b_r, &b_b);
          s[k - 1] = f;
          f = b_r * e[k - 1] + b_b * s[k];
          s[k] = -b_b * e[k - 1] + b_r * s[k];
          nrm = b_b * e[k];
          e[k] *= b_r;
          xrot(U, 3 * (k - 1) + 1, 3 * k + 1, b_r, b_b);
        }

        e[m] = f;
        qp1++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          c_xscal(-1.0, V, 3 * q + 1);
        }

        qp1 = q + 1;
        while ((q + 1 < 3) && (s[q] < s[qp1])) {
          nrm = s[q];
          s[q] = s[qp1];
          s[qp1] = nrm;
          xswap(V, 3 * q + 1, 3 * (q + 1) + 1);
          xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
          q = qp1;
          qp1++;
        }

        qp1 = 0;
        m--;
        break;
      }
    }
  }

  for (k = 0; k < 3; k++) {
    b_S[k] = s[k];
  }

  if (doscale) {
    b_xzlascl(cscale, anrm, b_S);
  }
}

static real_T xzlangeM(real_T x[9])
{
  real_T absxk;
  real_T y;
  int32_T k;
  boolean_T exitg1;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    absxk = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absxk)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }

      k++;
    }
  }

  return y;
}

static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T exitg1;
  int32_T k;
  int32_T kend;
  boolean_T b_b;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * muDoubleScalarSqrt(y);
  b_b = muDoubleScalarIsNaN(y);
  if (b_b) {
    k = ix0;
    do {
      exitg1 = 0;
      if (k <= kend) {
        if (muDoubleScalarIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = rtInf;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0)
{
  real_T d;
  int32_T i;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0 - 1;
  iy = iy0 - 1;
  i = (uint8_T)n;
  for (k = 0; k < i; k++) {
    d += x[ix] * y[iy];
    ix++;
    iy++;
  }

  return d;
}

static real_T b_xnrm2(real_T x[3], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T exitg1;
  int32_T k;
  boolean_T b_b;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * muDoubleScalarSqrt(y);
  b_b = muDoubleScalarIsNaN(y);
  if (b_b) {
    k = ix0;
    do {
      exitg1 = 0;
      if (k <= ix0 + 1) {
        if (muDoubleScalarIsNaN(x[k - 1])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = rtInf;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static void c_mtimes(real_T A[6], coder_array_real_T_2D *B,
                     coder_array_real_T_2D *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    array_real_T_2D_SetSize(C, 1, 0);
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)1;
    array_real_T_2D_SetSize(C, 1, B->size[1]);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t,
          &B->vector.data[0], &ldb_t, &beta1, &C->vector.data[0], &ldc_t);
  }
}

static void dynamic_size_checks(const emlrtStack *sp, coder_array_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &sl_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &tl_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    }
  }
}

static real_T c_norm(real_T x[6])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T exitg1;
  int32_T k;
  boolean_T b_b;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 6; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * muDoubleScalarSqrt(y);
  b_b = muDoubleScalarIsNaN(y);
  if (b_b) {
    k = 0;
    do {
      exitg1 = 0;
      if (k < 6) {
        if (muDoubleScalarIsNaN(x[k])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = rtInf;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

static boolean_T all(const emlrtStack *sp, coder_array_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &ol_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &bb_emlrtMCI),
             &bb_emlrtMCI), &bb_emlrtMCI);
  }

  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->vector.data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj)
{
  static const int32_T iv[2] = { 1, 66 };

  static const int32_T iv1[2] = { 1, 66 };

  static char_T c_u[66] = { 's', 'h', 'a', 'r', 'e', 'd', '_', 'r', 'o', 'b',
    'o', 't', 'i', 'c', 's', ':', 'r', 'o', 'b', 'o', 't', 'u', 't', 'i', 'l',
    's', ':', 't', 'i', 'm', 'e', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', ':',
    'T', 'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'N', 'o', 't',
    'I', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  char_T b_u[66];
  boolean_T valid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jj_emlrtRSI;
  valid = (obj->StartTime.tv_sec > 0.0);
  if (!valid) {
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 66, m, &b_u[0]);
    emlrtAssign(&y, m);
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 66, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &jj_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &cb_emlrtMCI),
             &cb_emlrtMCI), &cb_emlrtMCI);
  }

  st.site = &kj_emlrtRSI;
  return toc(obj->StartTime.tv_sec, obj->StartTime.tv_nsec);
}

static real_T toc(real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec tnow;
  st.site = &lj_emlrtRSI;
  b_st.site = &ch_emlrtRSI;
  c_st.site = &dh_emlrtRSI;
  emlrtClockGettimeMonotonic(&tnow);
  return (tnow.tv_sec - tstart_tv_sec) + (tnow.tv_nsec - tstart_tv_nsec) /
    1.0E+9;
}

static void d_mtimes(coder_array_real_T_2D *A, coder_array_real_T_2D *B,
                     coder_array_real_T_2D *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (B->size[1] == 0)) {
    array_real_T_2D_SetSize(C, A->size[0], B->size[1]);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->vector.data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[0];
    array_real_T_2D_SetSize(C, A->size[0], B->size[1]);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->vector.data[0],
          &lda_t, &B->vector.data[0], &ldb_t, &beta1, &C->vector.data[0], &ldc_t);
  }
}

static void mldivide(const emlrtStack *sp, real_T A[16], coder_array_real_T *B,
                     real_T Y_data[], int32_T Y_size[1])
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T b_A[16];
  real_T c_y;
  real_T smax;
  int32_T b_i;
  int32_T c;
  int32_T i;
  int32_T ijA;
  int32_T info;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T jy;
  int32_T k;
  char_T b_u[15];
  int8_T ipiv[4];
  int8_T b_ipiv;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (B->size[0] != 4) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &rl_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &db_emlrtMCI),
             &db_emlrtMCI), &db_emlrtMCI);
  }

  st.site = &mj_emlrtRSI;
  b_st.site = &nj_emlrtRSI;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 4);
  for (i = 0; i < 4; i++) {
    ipiv[i] = (int8_T)(i + 1);
  }

  info = 0;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    iy = 5 - j;
    jy = 1;
    ix = c;
    smax = muDoubleScalarAbs(b_A[c]);
    for (k = 2; k < iy; k++) {
      ix++;
      c_y = muDoubleScalarAbs(b_A[ix]);
      if (c_y > smax) {
        jy = k;
        smax = c_y;
      }
    }

    if (b_A[(c + jy) - 1] != 0.0) {
      if (jy - 1 != 0) {
        ipiv[j] = (int8_T)(j + jy);
        ix = j;
        iy = (j + jy) - 1;
        for (k = 0; k < 4; k++) {
          smax = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = smax;
          ix += 4;
          iy += 4;
        }
      }

      i = c - j;
      iy = (((i - c) + 3) / 2 * 2 + c) + 2;
      jy = iy - 2;
      for (b_i = c + 2; b_i <= jy; b_i += 2) {
        r = _mm_loadu_pd(&b_A[b_i - 1]);
        _mm_storeu_pd(&b_A[b_i - 1], _mm_div_pd(r, _mm_set1_pd(b_A[c])));
      }

      for (b_i = iy; b_i <= i + 4; b_i++) {
        b_A[b_i - 1] /= b_A[c];
      }
    } else {
      info = j + 1;
    }

    iy = c;
    jy = c + 4;
    i = 2 - j;
    for (k = 0; k <= i; k++) {
      smax = b_A[jy];
      if (b_A[jy] != 0.0) {
        ix = c;
        b_i = iy - j;
        for (ijA = iy + 6; ijA <= b_i + 8; ijA++) {
          b_A[ijA - 1] += b_A[ix + 1] * -smax;
          ix++;
        }
      }

      jy += 4;
      iy += 4;
    }
  }

  if ((info == 0) && (!(b_A[15] != 0.0))) {
    info = 4;
  }

  Y_size[0] = B->size[0];
  iy = B->size[0];
  for (i = 0; i < iy; i++) {
    Y_data[i] = B->vector.data[i];
  }

  for (b_i = 0; b_i < 3; b_i++) {
    b_ipiv = ipiv[b_i];
    if (b_ipiv != b_i + 1) {
      smax = Y_data[b_i];
      Y_data[b_i] = Y_data[b_ipiv - 1];
      Y_data[b_ipiv - 1] = smax;
    }
  }

  for (k = 0; k < 4; k++) {
    iy = (k << 2) - 1;
    if (Y_data[k] != 0.0) {
      for (b_i = k + 2; b_i < 5; b_i++) {
        Y_data[b_i - 1] -= Y_data[k] * b_A[b_i + iy];
      }
    }
  }

  for (k = 3; k >= 0; k--) {
    iy = k << 2;
    if (Y_data[k] != 0.0) {
      Y_data[k] /= b_A[k + iy];
      for (b_i = 0; b_i < k; b_i++) {
        Y_data[b_i] -= Y_data[k] * b_A[b_i + iy];
      }
    }
  }

  if (info > 0) {
    c_st.site = &oj_emlrtRSI;
    d_st.site = &pj_emlrtRSI;
    b_warning(&d_st);
  }
}

static real_T b_IKHelpers_computeCost(const emlrtStack *sp, real_T x[4],
  robotics_manip_internal_IKExtraArgs *args)
{
  coder_array_real_T_2D J;
  coder_array_real_T_2D b_J;
  coder_array_real_T_2D y;
  emlrtStack st;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  real_T weightMatrix[36];
  real_T T_data[16];
  real_T Td[16];
  real_T b_e[6];
  real_T e[6];
  real_T bidx;
  int32_T T_size[2];
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  treeInternal = args->Robot;
  for (i = 0; i < 16; i++) {
    Td[i] = args->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    weightMatrix[i] = args->WeightMatrix[i];
  }

  bidx = args->BodyIndex;
  array_real_T_2D_Constructor(&J);
  st.site = &vh_emlrtRSI;
  RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bidx, T_data,
    T_size, &J);
  st.site = &wh_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  array_real_T_SetSize(&args->ErrTemp, 6);
  for (i = 0; i < 6; i++) {
    args->ErrTemp.vector.data[i] = e[i];
  }

  bidx = 0.0;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_e[i] += 0.5 * e[loop_ub] * weightMatrix[loop_ub + 6 * i];
    }

    bidx += b_e[i] * e[i];
  }

  args->CostTemp = bidx;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_e[i] += e[loop_ub] * weightMatrix[loop_ub + 6 * i];
    }
  }

  array_real_T_2D_Constructor(&b_J);
  array_real_T_2D_SetSize(&b_J, 6, J.size[1]);
  loop_ub = J.size[0] * J.size[1];
  for (i = 0; i < loop_ub; i++) {
    b_J.vector.data[i] = -J.vector.data[i];
  }

  array_real_T_2D_Destructor(&J);
  array_real_T_2D_Constructor(&y);
  st.site = &uh_emlrtRSI;
  c_mtimes(b_e, &b_J, &y);
  array_real_T_2D_Destructor(&b_J);
  array_real_T_SetSize(&args->GradTemp, y.size[1]);
  loop_ub = y.size[1];
  for (i = 0; i < loop_ub; i++) {
    args->GradTemp.vector.data[i] = y.vector.data[i];
  }

  array_real_T_2D_Destructor(&y);
  return args->CostTemp;
}

static real_T function_handle_parenReference(real_T varargin_1, real_T
  varargin_2)
{
  return muDoubleScalarMax(varargin_1, varargin_2);
}

static void expand_max(const emlrtStack *sp, coder_array_real_T *a, real_T b_b[4],
  real_T c[4])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'z',
    'e', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T b_u[30];
  st.prev = sp;
  st.tls = sp->tls;
  if (a->size[0] != 1) {
    for (k = 0; k < 30; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 30; k++) {
      b_u[k] = c_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &ql_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &eb_emlrtMCI),
             &eb_emlrtMCI), &eb_emlrtMCI);
  }

  for (k = 0; k < 4; k++) {
    c[k] = muDoubleScalarMax(a->vector.data[0], b_b[k]);
  }
}

static real_T b_function_handle_parenReference(real_T varargin_1, real_T
  varargin_2)
{
  return muDoubleScalarMin(varargin_1, varargin_2);
}

static void expand_min(const emlrtStack *sp, coder_array_real_T *a, real_T b_b[4],
  real_T c[4])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'z',
    'e', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T b_u[30];
  st.prev = sp;
  st.tls = sp->tls;
  if (a->size[0] != 1) {
    for (k = 0; k < 30; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 30; k++) {
      b_u[k] = c_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &ql_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &eb_emlrtMCI),
             &eb_emlrtMCI), &eb_emlrtMCI);
  }

  for (k = 0; k < 4; k++) {
    c[k] = muDoubleScalarMin(a->vector.data[0], b_b[k]);
  }
}

static void IKHelpers_randomConfig(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_IKExtraArgs
  *args, real_T rc_data[], int32_T rc_size[1])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  __m128d b_r;
  __m128d r1;
  __m128d r2;
  coder_array_boolean_T b_tmp_data;
  coder_array_boolean_T e_tmp_data;
  coder_array_boolean_T g_tmp_data;
  coder_array_boolean_T j_tmp_data;
  coder_array_real_T qv;
  coder_array_real_T x;
  coder_array_real_T_2D qi;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBodyTree_1 *obj;
  real_T bounds_data[14];
  real_T obj_data[14];
  real_T h_tmp_data[7];
  real_T rn_data[7];
  real_T translbounds[6];
  real_T r[4];
  real_T lb[3];
  real_T rn[3];
  real_T ub[3];
  real_T bounds[2];
  real_T dv[2];
  real_T dv1[2];
  real_T p[2];
  real_T d;
  real_T posnum;
  int32_T bounds_size[2];
  int32_T obj_Vector_size[2];
  int32_T tmp_size[2];
  int32_T b_tmp_size[1];
  int32_T rn_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
  int32_T vectorUB;
  char_T obj_Vector[200];
  char_T obj_Vector_data[200];
  char_T b_u[30];
  int8_T iv2[2];
  boolean_T c_tmp_data[7];
  boolean_T d_tmp_data[7];
  boolean_T f_tmp_data[7];
  boolean_T i_tmp_data[7];
  boolean_T tmp_data[7];
  boolean_T k_tmp_data[4];
  boolean_T b_b[3];
  boolean_T c_y;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  obj = args->Robot;
  b_st.site = &uj_emlrtRSI;
  posnum = obj->PositionNumber;
  if (!(posnum <= 35.0)) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &pl_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &fb_emlrtMCI),
             &fb_emlrtMCI), &fb_emlrtMCI);
  }

  d = emlrtNonNegativeCheckR2012b(posnum, &pc_emlrtDCI, &st);
  rc_size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, &st);
  d = emlrtNonNegativeCheckR2012b(posnum, &pc_emlrtDCI, &st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    rc_data[i] = 0.0;
  }

  d = obj->NumBodies;
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &h_emlrtRTEI, &st);
  array_real_T_2D_Constructor(&qi);
  array_real_T_Constructor(&qv);
  array_real_T_Constructor(&x);
  for (b_i = 0; b_i < i; b_i++) {
    nx = emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 5,
      &hd_emlrtBCI, &st);
    for (i1 = 0; i1 < 2; i1++) {
      p[i1] = obj->PositionDoFMap[(nx + 5 * i1) - 1];
    }

    if (p[0] <= p[1]) {
      b_st.site = &vj_emlrtRSI;
      b_obj = obj->Bodies[b_i]->JointInternal;
      c_st.site = &wj_emlrtRSI;
      d_st.site = &bk_emlrtRSI;
      e_st.site = &hb_emlrtRSI;
      posnum = b_obj->TypeInternal.Length;
      for (i1 = 0; i1 < 200; i1++) {
        obj_Vector[i1] = b_obj->TypeInternal.Vector[i1];
      }

      if (posnum < 1.0) {
        loop_ub = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(posnum, &emlrtDCI, &e_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i1, 1, 200, &emlrtBCI, &e_st);
      }

      obj_Vector_size[0] = 1;
      obj_Vector_size[1] = loop_ub;
      if (loop_ub - 1 >= 0) {
        memcpy(&obj_Vector_data[0], &obj_Vector[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      if (!e_strcmp(obj_Vector_data, obj_Vector_size)) {
        d = b_obj->PositionNumber;
        if (d < 1.0) {
          i1 = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, &c_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 7, &md_emlrtBCI, &c_st);
        }

        tmp_size[0] = 1;
        tmp_size[1] = i1;
      } else {
        tmp_size[0] = 1;
        tmp_size[1] = 1;
      }

      for (i1 = 0; i1 < 2; i1++) {
        iv2[i1] = (int8_T)tmp_size[i1];
      }

      array_real_T_2D_SetSize(&qi, 1, (int32_T)iv2[1]);
      loop_ub = iv2[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        qi.vector.data[i1] = 0.0;
      }

      switch ((int32_T)emlrtIntegerCheckR2012b(b_obj->PositionNumber,
               &lc_emlrtDCI, &b_st)) {
       case 0:
        array_real_T_2D_SetSize(&qi, 1, 1);
        qi.vector.data[0] = rtNaN;
        break;

       case 7:
        c_st.site = &xj_emlrtRSI;
        d_st.site = &ck_emlrtRSI;
        randn(moduleInstance, &d_st, r);
        d_st.site = &dk_emlrtRSI;
        posnum = ((r[0] * r[0] + r[1] * r[1]) + r[2] * r[2]) + r[3] * r[3];
        e_st.site = &lk_emlrtRSI;
        b_sqrt(&e_st, &posnum);
        qi.vector.data[emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)iv2[1],
          &nd_emlrtBCI, &b_st) - 1] = r[0] / posnum;
        qi.vector.data[emlrtDynamicBoundsCheckR2012b(2, 1, (int32_T)iv2[1],
          &nd_emlrtBCI, &b_st) - 1] = r[1] / posnum;
        qi.vector.data[emlrtDynamicBoundsCheckR2012b(3, 1, (int32_T)iv2[1],
          &nd_emlrtBCI, &b_st) - 1] = r[2] / posnum;
        qi.vector.data[emlrtDynamicBoundsCheckR2012b(4, 1, (int32_T)iv2[1],
          &nd_emlrtBCI, &b_st) - 1] = r[3] / posnum;
        for (i1 = 0; i1 < 2; i1++) {
          for (vectorUB = 0; vectorUB < 3; vectorUB++) {
            translbounds[vectorUB + 3 * i1] = b_obj->PositionLimitsInternal
              [(vectorUB + 7 * i1) + 4];
          }
        }

        if (qi.size[1] < 5) {
          i1 = 0;
          vectorUB = 0;
        } else {
          i1 = 4;
          vectorUB = emlrtDynamicBoundsCheckR2012b(qi.size[1], 1, qi.size[1],
            &ld_emlrtBCI, &b_st);
        }

        emlrtSubAssignSizeCheck1dR2017a(vectorUB - i1, 3, &q_emlrtECI, &b_st);
        c_st.site = &yj_emlrtRSI;
        for (nx = 0; nx < 3; nx++) {
          posnum = translbounds[nx];
          ub[nx] = translbounds[nx + 3];
          b_b[nx] = ((!muDoubleScalarIsInf(posnum)) && (!muDoubleScalarIsNaN
                      (posnum)));
          lb[nx] = posnum;
        }

        c_y = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= 2)) {
          if (!b_b[k]) {
            c_y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }

        guard1 = false;
        guard2 = false;
        guard3 = false;
        if (c_y) {
          for (nx = 0; nx < 3; nx++) {
            posnum = ub[nx];
            b_b[nx] = ((!muDoubleScalarIsInf(posnum)) && (!muDoubleScalarIsNaN
                        (posnum)));
          }

          c_y = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k <= 2)) {
            if (!b_b[k]) {
              c_y = false;
              exitg1 = true;
            } else {
              k++;
            }
          }

          if (c_y) {
            d_st.site = &mk_emlrtRSI;
            c_rand(moduleInstance, &d_st, rn);
            for (nx = 0; nx <= 0; nx += 2) {
              b_r = _mm_loadu_pd(&ub[0]);
              r1 = _mm_loadu_pd(&lb[0]);
              r2 = _mm_loadu_pd(&rn[0]);
              _mm_storeu_pd(&ub[0], _mm_add_pd(r1, _mm_mul_pd(r2, _mm_sub_pd(b_r,
                r1))));
            }

            for (nx = 2; nx < 3; nx++) {
              posnum = lb[2];
              ub[2] = posnum + rn[2] * (ub[2] - posnum);
            }
          } else {
            guard3 = true;
          }
        } else {
          guard3 = true;
        }

        if (guard3) {
          for (nx = 0; nx < 3; nx++) {
            posnum = lb[nx];
            b_b[nx] = ((!muDoubleScalarIsInf(posnum)) && (!muDoubleScalarIsNaN
                        (posnum)));
          }

          c_y = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k <= 2)) {
            if (!b_b[k]) {
              c_y = false;
              exitg1 = true;
            } else {
              k++;
            }
          }

          if (c_y) {
            b_tmp_size[0] = 3;
            for (nx = 0; nx < 3; nx++) {
              posnum = ub[nx];
              k_tmp_data[nx] = (muDoubleScalarIsInf(posnum) ||
                                muDoubleScalarIsNaN(posnum));
            }

            if (vectorAny(k_tmp_data, b_tmp_size)) {
              d_st.site = &nk_emlrtRSI;
              b_randn(moduleInstance, &d_st, rn);
              for (k = 0; k <= 0; k += 2) {
                dv[0] = muDoubleScalarAbs(rn[0]);
                dv[1] = muDoubleScalarAbs(rn[1]);
                b_r = _mm_loadu_pd(&lb[0]);
                r1 = _mm_loadu_pd(&dv[0]);
                _mm_storeu_pd(&ub[0], _mm_add_pd(b_r, r1));
              }

              for (k = 2; k < 3; k++) {
                ub[2] = lb[2] + muDoubleScalarAbs(rn[2]);
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        }

        if (guard2) {
          b_tmp_size[0] = 3;
          for (nx = 0; nx < 3; nx++) {
            posnum = lb[nx];
            k_tmp_data[nx] = (muDoubleScalarIsInf(posnum) || muDoubleScalarIsNaN
                              (posnum));
          }

          if (vectorAny(k_tmp_data, b_tmp_size)) {
            for (nx = 0; nx < 3; nx++) {
              posnum = ub[nx];
              b_b[nx] = ((!muDoubleScalarIsInf(posnum)) && (!muDoubleScalarIsNaN
                          (posnum)));
            }

            c_y = true;
            k = 0;
            exitg1 = false;
            while ((!exitg1) && (k <= 2)) {
              if (!b_b[k]) {
                c_y = false;
                exitg1 = true;
              } else {
                k++;
              }
            }

            if (c_y) {
              d_st.site = &ok_emlrtRSI;
              b_randn(moduleInstance, &d_st, rn);
              for (k = 0; k <= 0; k += 2) {
                dv1[0] = muDoubleScalarAbs(rn[0]);
                dv1[1] = muDoubleScalarAbs(rn[1]);
                b_r = _mm_loadu_pd(&ub[0]);
                r1 = _mm_loadu_pd(&dv1[0]);
                _mm_storeu_pd(&ub[0], _mm_sub_pd(b_r, r1));
              }

              for (k = 2; k < 3; k++) {
                ub[2] -= muDoubleScalarAbs(rn[2]);
              }
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }

        if (guard1) {
          d_st.site = &pk_emlrtRSI;
          b_randn(moduleInstance, &d_st, ub);
        }

        nx = vectorUB - i1;
        for (vectorUB = 0; vectorUB < nx; vectorUB++) {
          qi.vector.data[i1 + vectorUB] = ub[vectorUB];
        }
        break;

       default:
        d = b_obj->PositionNumber;
        if (d < 1.0) {
          loop_ub = 0;
        } else {
          i1 = (int32_T)emlrtIntegerCheckR2012b(d, &mc_emlrtDCI, &b_st);
          loop_ub = emlrtDynamicBoundsCheckR2012b(i1, 1, 7, &kd_emlrtBCI, &b_st);
        }

        for (i1 = 0; i1 < 2; i1++) {
          for (vectorUB = 0; vectorUB < loop_ub; vectorUB++) {
            obj_data[vectorUB + loop_ub * i1] = b_obj->
              PositionLimitsInternal[vectorUB + 7 * i1];
          }
        }

        bounds_size[0] = loop_ub;
        bounds_size[1] = 2;
        nx = loop_ub << 1;
        if (nx - 1 >= 0) {
          memcpy(&bounds_data[0], &obj_data[0], (uint32_T)nx * sizeof(real_T));
        }

        c_st.site = &ak_emlrtRSI;
        for (i1 = 0; i1 < loop_ub; i1++) {
          posnum = bounds_data[i1];
          tmp_data[i1] = ((!muDoubleScalarIsInf(posnum)) &&
                          (!muDoubleScalarIsNaN(posnum)));
        }

        b_tmp_data.vector.data = &tmp_data[0];
        b_tmp_data.vector.numel = loop_ub;
        b_tmp_data.vector.allocated = loop_ub;
        b_tmp_data.vector.owner = false;
        b_tmp_data.size[0] = loop_ub;
        d_st.site = &qk_emlrtRSI;
        guard1 = false;
        guard2 = false;
        guard3 = false;
        if (all(&d_st, &b_tmp_data)) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_tmp_data[i1] = ((!muDoubleScalarIsInf(bounds_data[i1 + loop_ub])) &&
                              (!muDoubleScalarIsNaN(bounds_data[i1 + loop_ub])));
          }

          e_tmp_data.vector.data = &c_tmp_data[0];
          e_tmp_data.vector.numel = loop_ub;
          e_tmp_data.vector.allocated = loop_ub;
          e_tmp_data.vector.owner = false;
          e_tmp_data.size[0] = loop_ub;
          d_st.site = &qk_emlrtRSI;
          if (all(&d_st, &e_tmp_data)) {
            d_st.site = &mk_emlrtRSI;
            d_rand(moduleInstance, &d_st, (real_T)loop_ub, rn_data, rn_size);
            b_tmp_size[0] = loop_ub;
            k = loop_ub / 2 * 2;
            vectorUB = k - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              b_r = _mm_loadu_pd(&bounds_data[i1 + loop_ub]);
              r1 = _mm_loadu_pd(&bounds_data[i1]);
              _mm_storeu_pd(&h_tmp_data[i1], _mm_sub_pd(b_r, r1));
            }

            for (i1 = k; i1 < loop_ub; i1++) {
              h_tmp_data[i1] = bounds_data[i1 + loop_ub] - bounds_data[i1];
            }

            if (rn_size[0] == loop_ub) {
              nx = rn_size[0];
              k = rn_size[0] / 2 * 2;
              vectorUB = k - 2;
              for (i1 = 0; i1 <= vectorUB; i1 += 2) {
                b_r = _mm_loadu_pd(&rn_data[i1]);
                r1 = _mm_loadu_pd(&h_tmp_data[i1]);
                _mm_storeu_pd(&rn_data[i1], _mm_mul_pd(b_r, r1));
              }

              for (i1 = k; i1 < nx; i1++) {
                rn_data[i1] *= h_tmp_data[i1];
              }
            } else {
              times(rn_data, rn_size, h_tmp_data, b_tmp_size);
            }

            if (loop_ub == rn_size[0]) {
              array_real_T_SetSize(&qv, loop_ub);
              for (i1 = 0; i1 < loop_ub; i1++) {
                qv.vector.data[i1] = bounds_data[i1] + rn_data[i1];
              }
            } else {
              binary_expand_op_2(&qv, bounds_data, bounds_size, rn_data, rn_size);
            }
          } else {
            guard3 = true;
          }
        } else {
          guard3 = true;
        }

        if (guard3) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            posnum = bounds_data[i1];
            d_tmp_data[i1] = ((!muDoubleScalarIsInf(posnum)) &&
                              (!muDoubleScalarIsNaN(posnum)));
          }

          g_tmp_data.vector.data = &d_tmp_data[0];
          g_tmp_data.vector.numel = loop_ub;
          g_tmp_data.vector.allocated = loop_ub;
          g_tmp_data.vector.owner = false;
          g_tmp_data.size[0] = loop_ub;
          d_st.site = &rk_emlrtRSI;
          if (all(&d_st, &g_tmp_data)) {
            b_tmp_size[0] = loop_ub;
            for (i1 = 0; i1 < loop_ub; i1++) {
              f_tmp_data[i1] = (muDoubleScalarIsInf(bounds_data[i1 + loop_ub]) ||
                                muDoubleScalarIsNaN(bounds_data[i1 + loop_ub]));
            }

            d_st.site = &rk_emlrtRSI;
            if (any(&d_st, f_tmp_data, b_tmp_size)) {
              bounds[0] = (real_T)loop_ub;
              bounds[1] = 1.0;
              d_st.site = &nk_emlrtRSI;
              c_randn(moduleInstance, &d_st, bounds, h_tmp_data, b_tmp_size);
              array_real_T_SetSize(&x, b_tmp_size[0]);
              nx = b_tmp_size[0];
              for (i1 = 0; i1 < nx; i1++) {
                x.vector.data[i1] = h_tmp_data[i1];
              }

              nx = x.size[0];
              array_real_T_SetSize(&qv, x.size[0]);
              for (k = 0; k < nx; k++) {
                qv.vector.data[k] = muDoubleScalarAbs(x.vector.data[k]);
              }

              if (loop_ub == qv.size[0]) {
                array_real_T_SetSize(&qv, loop_ub);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  qv.vector.data[i1] += bounds_data[i1];
                }
              } else {
                binary_expand_op_3(&qv, bounds_data, bounds_size);
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        }

        if (guard2) {
          b_tmp_size[0] = loop_ub;
          for (i1 = 0; i1 < loop_ub; i1++) {
            posnum = bounds_data[i1];
            f_tmp_data[i1] = (muDoubleScalarIsInf(posnum) || muDoubleScalarIsNaN
                              (posnum));
          }

          d_st.site = &sk_emlrtRSI;
          if (any(&d_st, f_tmp_data, b_tmp_size)) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              i_tmp_data[i1] = ((!muDoubleScalarIsInf(bounds_data[i1 + loop_ub]))
                                && (!muDoubleScalarIsNaN(bounds_data[i1 +
                loop_ub])));
            }

            j_tmp_data.vector.data = &i_tmp_data[0];
            j_tmp_data.vector.numel = loop_ub;
            j_tmp_data.vector.allocated = loop_ub;
            j_tmp_data.vector.owner = false;
            j_tmp_data.size[0] = loop_ub;
            d_st.site = &sk_emlrtRSI;
            if (all(&d_st, &j_tmp_data)) {
              bounds[0] = (real_T)loop_ub;
              bounds[1] = 1.0;
              d_st.site = &ok_emlrtRSI;
              c_randn(moduleInstance, &d_st, bounds, h_tmp_data, b_tmp_size);
              array_real_T_SetSize(&x, b_tmp_size[0]);
              nx = b_tmp_size[0];
              for (i1 = 0; i1 < nx; i1++) {
                x.vector.data[i1] = h_tmp_data[i1];
              }

              nx = x.size[0];
              array_real_T_SetSize(&qv, x.size[0]);
              for (k = 0; k < nx; k++) {
                qv.vector.data[k] = muDoubleScalarAbs(x.vector.data[k]);
              }

              if (loop_ub == qv.size[0]) {
                array_real_T_SetSize(&qv, loop_ub);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  qv.vector.data[i1] = bounds_data[i1 + loop_ub] -
                    qv.vector.data[i1];
                }
              } else {
                binary_expand_op_4(&qv, bounds_data, bounds_size);
              }
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }

        if (guard1) {
          bounds[0] = (real_T)loop_ub;
          bounds[1] = 1.0;
          d_st.site = &pk_emlrtRSI;
          c_randn(moduleInstance, &d_st, bounds, h_tmp_data, b_tmp_size);
          array_real_T_SetSize(&qv, b_tmp_size[0]);
          loop_ub = b_tmp_size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            qv.vector.data[i1] = h_tmp_data[i1];
          }
        }

        array_real_T_2D_SetSize(&qi, qv.size[0], 1);
        loop_ub = qv.size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          qi.vector.data[i1] = qv.vector.data[i1];
        }
        break;
      }

      if (p[0] > p[1]) {
        i1 = 0;
        vectorUB = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(p[0], &jc_emlrtDCI, &st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, rc_size[0], &id_emlrtBCI, &st)
          - 1;
        vectorUB = (int32_T)emlrtIntegerCheckR2012b(p[1], &kc_emlrtDCI, &st);
        vectorUB = emlrtDynamicBoundsCheckR2012b(vectorUB, 1, rc_size[0],
          &jd_emlrtBCI, &st);
      }

      emlrtSubAssignSizeCheck1dR2017a(vectorUB - i1, qi.size[0] * qi.size[1],
        &p_emlrtECI, &st);
      nx = vectorUB - i1;
      for (vectorUB = 0; vectorUB < nx; vectorUB++) {
        rc_data[i1 + vectorUB] = qi.vector.data[vectorUB];
      }
    }
  }

  array_real_T_Destructor(&x);
  array_real_T_Destructor(&qv);
  array_real_T_2D_Destructor(&qi);
}

static void randn(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                  emlrtStack *sp, real_T r[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ek_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &fk_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  for (k = 0; k < 4; k++) {
    d_st.site = &gk_emlrtRSI;
    d = b_eml_rand_mt19937ar(&d_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static void c_rand(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                   emlrtStack *sp, real_T r[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &o_emlrtRSI;
  for (k = 0; k < 3; k++) {
    c_st.site = &p_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static boolean_T vectorAny(boolean_T x_data[], int32_T x_size[1])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= x_size[0] - 1)) {
    if (x_data[k]) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

static void b_randn(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                    emlrtStack *sp, real_T r[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ek_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &fk_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  for (k = 0; k < 3; k++) {
    d_st.site = &gk_emlrtRSI;
    d = b_eml_rand_mt19937ar(&d_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static void d_rand(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, real_T r_data[], int32_T
                   r_size[1])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &o_emlrtRSI;
  r_size[0] = (int32_T)varargin_1;
  i = (int32_T)varargin_1;
  for (k = 0; k < i; k++) {
    c_st.site = &p_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r_data[k] = d;
  }
}

static boolean_T any(const emlrtStack *sp, boolean_T x_data[], int32_T x_size[1])
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x_size[0] == 1) || (x_size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &ol_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &bb_emlrtMCI),
             &bb_emlrtMCI), &bb_emlrtMCI);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[0])) {
    if (x_data[ix]) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void c_randn(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance, const
                    emlrtStack *sp, real_T varargin_1[2], real_T r_data[],
                    int32_T r_size[1])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ek_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &fk_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  r_size[0] = (int32_T)varargin_1[0];
  i = (int32_T)varargin_1[0];
  for (k = 0; k < i; k++) {
    d_st.site = &gk_emlrtRSI;
    d = b_eml_rand_mt19937ar(&d_st, moduleInstance->c_state);
    r_data[k] = d;
  }
}

static void f_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 55 };

  static char_T b_msgID[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'I', 'n', 'v', 'a', 'l', 'i',
    'd', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'R', 'e', 's', 'u', 'l', 't' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[55];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 55; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 55, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &em_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  real_T t23_LocalPose[16];
  real_T t23_WorldPose[16];
  real_T t21_MeshScale[3];
  real_T t23_MeshScale[3];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    st.site = &yk_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &i_emlrtRTEI, &st);
    for (b_i = 0; b_i < i; b_i++) {
      b_st.site = &al_emlrtRSI;
      i1 = obj->CollisionGeometries.size[1] - 1;
      r = obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i,
        0, i1, &pd_emlrtBCI, &b_st)];
      memcpy(&t23_LocalPose[0], &r.LocalPose[0], sizeof(real_T) << 4);
      memcpy(&t23_WorldPose[0], &r.WorldPose[0], sizeof(real_T) << 4);
      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = r.MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t23_MeshScale[i1] = t21_MeshScale[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        t21_MeshScale[i1] = t23_MeshScale[i1];
      }

      c_st.site = &bl_emlrtRSI;
      collisioncodegen_destructGeometry(&r.CollisionPrimitive);
      i1 = obj->CollisionGeometries.size[1] - 1;
      for (i2 = 0; i2 < 3; i2++) {
        t23_MeshScale[i2] = t21_MeshScale[i2];
      }

      expl_temp.CollisionPrimitive = r.CollisionPrimitive;
      memcpy(&expl_temp.LocalPose[0], &t23_LocalPose[0], sizeof(real_T) << 4);
      memcpy(&expl_temp.WorldPose[0], &t23_WorldPose[0], sizeof(real_T) << 4);
      for (i2 = 0; i2 < 3; i2++) {
        expl_temp.MeshScale[i2] = t23_MeshScale[i2];
      }

      obj->CollisionGeometries.vector.data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &od_emlrtBCI, &st)] = expl_temp;
    }
  }
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  c_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30])
{
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 4, &pArrays[0],
    "message", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0], "feval",
    true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "feval",
                        true, location);
}

static const mxArray *d_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
    "message", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "sprintf", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0], "feval",
    true, location);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

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
    genrand_uint32_vector(e_state, b_u);
    u_idx_0 = b_u[0] >> 5U;
    u_idx_1 = b_u[1] >> 6U;
    if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
      if (!is_valid_state(e_state)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &ml_emlrtRSI;
        b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &b_emlrtMCI),
                 &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return 1.1102230246251565E-16 * ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)
    u_idx_1);
}

static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2])
{
  int32_T j;
  int32_T kk;
  uint32_T mti;
  uint32_T y;
  for (j = 0; j < 2; j++) {
    mti = mt[624] + 1U;
    if (mti >= 625U) {
      for (kk = 0; kk < 227; kk++) {
        y = (mt[kk] & 2147483648U) | (mt[kk + 1] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk] = mt[kk + 397] ^ y;
      }

      for (kk = 0; kk < 396; kk++) {
        y = (mt[kk + 227] & 2147483648U) | (mt[kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk + 227] = mt[kk] ^ y;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        y >>= 1U;
      } else {
        y = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ y;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    b_u[j] = y;
  }
}

static void CharacterVector_setVector(const emlrtStack *sp,
  robotics_manip_internal_CharacterVector *obj, char_T vec_data[], int32_T
  vec_size[2])
{
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T unnamed_idx_1;
  obj->Length = (real_T)vec_size[1];
  if (vec_size[1] < 1) {
    i = 0;
    unnamed_idx_1 = 0;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(vec_size[1], 1, vec_size[1], &qd_emlrtBCI,
      (emlrtConstCTX)sp);
    unnamed_idx_1 = emlrtDynamicBoundsCheckR2012b(vec_size[1], 1, 200,
      &rd_emlrtBCI, (emlrtConstCTX)sp);
  }

  iv[0] = 1;
  iv[1] = unnamed_idx_1;
  iv1[0] = 1;
  iv1[1] = i;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &emlrtECI, (void *)sp);
  if (unnamed_idx_1 - 1 >= 0) {
    memcpy(&obj->Vector[0], &vec_data[0], (uint32_T)unnamed_idx_1 * sizeof
           (char_T));
  }
}

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  char_T d_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &hl_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &q_emlrtMCI),
             &q_emlrtMCI), &q_emlrtMCI);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[4])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T c_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T f_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T m_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T e_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T k_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T o_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T j_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  coder_array_real_T_2D limits;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T sz[2];
  real_T b_sz;
  int32_T ii_data[4];
  int32_T indicesUpperBoundViolation_data[4];
  int32_T ii_size[1];
  int32_T b_ii_data;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  char_T b_u[52];
  char_T l_u[51];
  char_T d_u[46];
  char_T n_u[45];
  char_T g_u[38];
  char_T h_u[25];
  boolean_T b_ubOK[4];
  boolean_T lbOK[4];
  boolean_T ubOK[4];
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  b_st.site = &qg_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 52, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &gl_emlrtRSI;
    b_error(&d_st, y, getString(&d_st, message(&d_st, b_y, e_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  c_st.site = &vb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 52, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    d_st.site = &fl_emlrtRSI;
    b_error(&d_st, c_y, getString(&d_st, message(&d_st, f_y, i_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  c_st.site = &vb_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p && ((b_sz != b_sz) || ((!muDoubleScalarIsInf(b_sz)) && (b_sz >= 0.0) &&
          (b_sz == muDoubleScalarFloor(b_sz))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 38, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 38, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &nl_emlrtRSI;
    b_error(&d_st, d_y, getString(&d_st, b_message(&d_st, h_y, &s_emlrtMCI),
             &s_emlrtMCI), &s_emlrtMCI);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p) {
      if (b_sz != b_sz) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          i = 4;
        } else {
          i = 1;
        }

        if (b_sz == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&c_st, 51, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      n_u[i] = o_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &n_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&k_y, m);
    d_st.site = &el_emlrtRSI;
    b_error(&d_st, g_y, getString(&d_st, message(&d_st, j_y, k_y, &t_emlrtMCI),
             &t_emlrtMCI), &t_emlrtMCI);
  }

  array_real_T_2D_Constructor(&limits);
  st.site = &ng_emlrtRSI;
  RigidBodyTree_get_JointPositionLimits(&st, obj, &limits);
  if (limits.size[0] == 4) {
    for (i = 0; i < 4; i++) {
      ubOK[i] = (Q[i] <= limits.vector.data[i + 4] + 4.4408920985006262E-16);
    }
  } else {
    binary_expand_op_6(ubOK, Q, &limits);
  }

  if (limits.size[0] == 4) {
    for (i = 0; i < 4; i++) {
      lbOK[i] = (Q[i] >= limits.vector.data[i] - 4.4408920985006262E-16);
    }
  } else {
    binary_expand_op_5(lbOK, Q, &limits);
  }

  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= 3)) {
    if (!ubOK[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  guard1 = false;
  if (p) {
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= 3)) {
      if (!lbOK[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (p) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    for (i = 0; i < 4; i++) {
      b_ubOK[i] = !ubOK[i];
    }

    st.site = &pg_emlrtRSI;
    eml_find(&st, b_ubOK, ii_data, ii_size);
    k = ii_size[0];
    loop_ub = ii_size[0];
    for (i = 0; i < loop_ub; i++) {
      b_ii_data = ii_data[i];
      ii_data[i] = b_ii_data;
      indicesUpperBoundViolation_data[i] = b_ii_data;
    }

    for (i = 0; i < k; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1,
        limits.size[0], &sd_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &r_emlrtECI,
      (emlrtConstCTX)sp);
    for (i = 0; i < k; i++) {
      Q[ii_data[i] - 1] = limits.vector.data[(indicesUpperBoundViolation_data[i]
        + limits.size[0]) - 1];
    }

    for (i = 0; i < 4; i++) {
      ubOK[i] = !lbOK[i];
    }

    st.site = &pg_emlrtRSI;
    eml_find(&st, ubOK, ii_data, ii_size);
    k = ii_size[0];
    loop_ub = ii_size[0];
    for (i = 0; i < loop_ub; i++) {
      b_ii_data = ii_data[i];
      ii_data[i] = b_ii_data;
      indicesUpperBoundViolation_data[i] = b_ii_data;
    }

    for (i = 0; i < k; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1,
        limits.size[0], &td_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &s_emlrtECI,
      (emlrtConstCTX)sp);
    for (i = 0; i < k; i++) {
      Q[ii_data[i] - 1] = limits.vector.data[indicesUpperBoundViolation_data[i]
        - 1];
    }

    st.site = &og_emlrtRSI;
    b_st.site = &se_emlrtRSI;
    e_warning(&b_st);
  }

  array_real_T_2D_Destructor(&limits);
}

static void c_sqrt(creal_T *x)
{
  real_T absxi;
  real_T absxr;
  real_T xi;
  real_T xr;
  xr = x->re;
  xi = x->im;
  if (xi == 0.0) {
    if (xr < 0.0) {
      absxr = 0.0;
      absxi = muDoubleScalarSqrt(-xr);
    } else {
      absxr = muDoubleScalarSqrt(xr);
      absxi = 0.0;
    }
  } else if (xr == 0.0) {
    if (xi < 0.0) {
      absxr = muDoubleScalarSqrt(-xi / 2.0);
      absxi = -absxr;
    } else {
      absxr = muDoubleScalarSqrt(xi / 2.0);
      absxi = absxr;
    }
  } else if (muDoubleScalarIsNaN(xr)) {
    absxr = rtNaN;
    absxi = rtNaN;
  } else if (muDoubleScalarIsNaN(xi)) {
    absxr = rtNaN;
    absxi = rtNaN;
  } else if (muDoubleScalarIsInf(xi)) {
    absxr = muDoubleScalarAbs(xi);
    absxi = xi;
  } else if (muDoubleScalarIsInf(xr)) {
    if (xr < 0.0) {
      absxr = 0.0;
      absxi = xi * -xr;
    } else {
      absxr = xr;
      absxi = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(xr);
    absxi = muDoubleScalarAbs(xi);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi);
      if (absxi > absxr) {
        absxr = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi +
          1.0);
      } else {
        absxr = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) *
        0.5);
    }

    if (xr > 0.0) {
      absxi = 0.5 * (xi / absxr);
    } else {
      if (xi < 0.0) {
        absxi = -absxr;
      } else {
        absxi = absxr;
      }

      absxr = 0.5 * (xi / absxi);
    }
  }

  x->re = absxr;
  x->im = absxi;
}

static real_T rescale(real_T *re, real_T *im)
{
  real_T absim;
  real_T scale;
  scale = muDoubleScalarAbs(*re);
  absim = muDoubleScalarAbs(*im);
  if (scale > absim) {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    *im /= scale;
  } else if (absim > scale) {
    *re /= absim;
    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }

    scale = absim;
  } else {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }
  }

  return scale;
}

static void xzlascl(real_T cfrom, real_T cto, real_T A[9])
{
  __m128d r;
  real_T cfrom1;
  real_T cfromc;
  real_T cto1;
  real_T ctoc;
  real_T mul;
  int32_T i;
  int32_T j;
  int32_T offset;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) && (ctoc != 0.0))
    {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    for (j = 0; j < 3; j++) {
      offset = j * 3 - 1;
      for (i = 0; i <= 0; i += 2) {
        r = _mm_loadu_pd(&A[offset + 1]);
        _mm_storeu_pd(&A[offset + 1], _mm_mul_pd(r, _mm_set1_pd(mul)));
      }

      for (i = 2; i < 3; i++) {
        A[offset + 3] *= mul;
      }
    }
  }
}

static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  __m128d r;
  int32_T i;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  i = ix0 + n;
  scalarLB = (i - ix0) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k < i; k++) {
    x[k - 1] *= a;
  }
}

static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void b_xscal(real_T a, real_T x[3], int32_T ix0)
{
  __m128d r;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  scalarLB = ix0 + 2;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}

static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xscal(real_T a, real_T x[9], int32_T ix0)
{
  __m128d r;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  scalarLB = ix0 + 2;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s)
{
  *c = 0.0;
  *s = 0.0;
  drotg(a, b_b, c, s);
}

static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

static void b_xzlascl(real_T cfrom, real_T cto, real_T A[3])
{
  __m128d r;
  real_T cfrom1;
  real_T cfromc;
  real_T cto1;
  real_T ctoc;
  real_T mul;
  int32_T i;
  int32_T j;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) && (ctoc != 0.0))
    {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    for (j = 0; j < 1; j++) {
      for (i = 0; i <= 0; i += 2) {
        r = _mm_loadu_pd(&A[0]);
        _mm_storeu_pd(&A[0], _mm_mul_pd(r, _mm_set1_pd(mul)));
      }

      for (i = 2; i < 3; i++) {
        A[2] *= mul;
      }
    }
  }
}

static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
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

  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
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

  emlrtStack b_st;
  emlrtStack st;
  real_T b_u;
  real_T r;
  real_T x;
  int32_T exitg1;
  int32_T i;
  uint32_T u32[2];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)(u32[1] & 16777215U)) *
         2.2204460492503131E-16 - 1.0) * dv[i];
    if (muDoubleScalarAbs(r) <= dv[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      b_st.site = &ik_emlrtRSI;
      b_u = genrandu(&b_st, e_state);
      if (dv1[i] + b_u * (dv1[i - 1] - dv1[i]) < muDoubleScalarExp(-0.5 * r * r))
      {
        exitg1 = 1;
      }
    } else {
      do {
        b_st.site = &jk_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
        x = muDoubleScalarLog(b_u) * 0.273661237329758;
        b_st.site = &kk_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
      } while (!(-2.0 * muDoubleScalarLog(b_u) > x * x));

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

static real_T genrandu(const emlrtStack *sp, uint32_T mt[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;

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
    genrand_uint32_vector(mt, b_u);
    u_idx_0 = b_u[0] >> 5U;
    u_idx_1 = b_u[1] >> 6U;
    if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
      if (!is_valid_state(mt)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &ml_emlrtRSI;
        b_error(&st, y, getString(&st, b_message(&st, b_y, &b_emlrtMCI),
                 &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return 1.1102230246251565E-16 * ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)
    u_idx_1);
}

static void binary_expand_op(const emlrtStack *sp, real_T in1_data[], int32_T
  in1_size[1], emlrtRSInfo in2, coder_array_real_T_2D *in3, real_T in4, int8_T
  in5[16], coder_array_real_T *in6)
{
  coder_array_real_T b_in6;
  emlrtStack st;
  real_T b_in3[16];
  int32_T aux_0_0;
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_0;
  int32_T stride_0_1;
  st.prev = sp;
  st.tls = sp->tls;
  stride_0_0 = (in3->size[0] != 1);
  stride_0_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 4; i++) {
    aux_0_0 = 0;
    for (i1 = 0; i1 < 4; i1++) {
      b_in3[i1 + (i << 2)] = -(in3->vector.data[aux_0_0 + in3->size[0] * aux_0_1]
        + in4 * (real_T)in5[i1 + (i << 2)]);
      aux_0_0 += stride_0_0;
    }

    aux_0_1 += stride_0_1;
  }

  array_real_T_Constructor(&b_in6);
  array_real_T_SetSize(&b_in6, in6->size[0]);
  stride_0_0 = in6->size[0];
  for (i = 0; i < stride_0_0; i++) {
    b_in6.vector.data[i] = in6->vector.data[i];
  }

  st.site = &in2;
  mldivide(&st, b_in3, &b_in6, in1_data, in1_size);
  array_real_T_Destructor(&b_in6);
}

static void minus(coder_array_real_T *in1, coder_array_real_T *in2)
{
  coder_array_real_T b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  array_real_T_Constructor(&b_in2);
  if (in1->size[0] == 1) {
    i = in2->size[0];
  } else {
    i = in1->size[0];
  }

  array_real_T_SetSize(&b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2.vector.data[i] = in2->vector.data[aux_0_0] - in1->vector.data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  array_real_T_SetSize(in1, b_in2.size[0]);
  loop_ub = b_in2.size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->vector.data[i] = b_in2.vector.data[i];
  }

  array_real_T_Destructor(&b_in2);
}

static void binary_expand_op_2(coder_array_real_T *in1, real_T in2_data[],
  int32_T in2_size[2], real_T in3_data[], int32_T in3_size[1])
{
  coder_array_real_T b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T in2;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2 = in2_size[0];
  array_real_T_Constructor(&b_in2);
  if (in3_size[0] == 1) {
    i = in2;
  } else {
    i = in3_size[0];
  }

  array_real_T_SetSize(&b_in2, i);
  stride_0_0 = (in2 != 1);
  stride_1_0 = (in3_size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3_size[0] != 1) {
    in2 = in3_size[0];
  }

  for (i = 0; i < in2; i++) {
    b_in2.vector.data[i] = in2_data[aux_0_0] + in3_data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  array_real_T_SetSize(in1, b_in2.size[0]);
  in2 = b_in2.size[0];
  for (i = 0; i < in2; i++) {
    in1->vector.data[i] = b_in2.vector.data[i];
  }

  array_real_T_Destructor(&b_in2);
}

static void times(real_T in1_data[], int32_T in1_size[1], real_T in2_data[],
                  int32_T in2_size[1])
{
  real_T b_in1_data[7];
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T in1_size_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in2_size[0] == 1) {
    in1_size_idx_0 = in1_size[0];
  } else {
    in1_size_idx_0 = in2_size[0];
  }

  stride_0_0 = (in1_size[0] != 1);
  stride_1_0 = (in2_size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2_size[0] == 1) {
    loop_ub = in1_size[0];
  } else {
    loop_ub = in2_size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[aux_0_0] * in2_data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  in1_size[0] = in1_size_idx_0;
  for (i = 0; i < in1_size_idx_0; i++) {
    in1_data[i] = b_in1_data[i];
  }
}

static void binary_expand_op_3(coder_array_real_T *in1, real_T in2_data[],
  int32_T in2_size[2])
{
  coder_array_real_T b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T in2;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2 = in2_size[0];
  array_real_T_Constructor(&b_in2);
  if (in1->size[0] == 1) {
    i = in2;
  } else {
    i = in1->size[0];
  }

  array_real_T_SetSize(&b_in2, i);
  stride_0_0 = (in2 != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] != 1) {
    in2 = in1->size[0];
  }

  for (i = 0; i < in2; i++) {
    b_in2.vector.data[i] = in2_data[aux_0_0] + in1->vector.data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  array_real_T_SetSize(in1, b_in2.size[0]);
  in2 = b_in2.size[0];
  for (i = 0; i < in2; i++) {
    in1->vector.data[i] = b_in2.vector.data[i];
  }

  array_real_T_Destructor(&b_in2);
}

static void binary_expand_op_4(coder_array_real_T *in1, real_T in2_data[],
  int32_T in2_size[2])
{
  coder_array_real_T b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T in2;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2 = in2_size[0];
  array_real_T_Constructor(&b_in2);
  if (in1->size[0] == 1) {
    i = in2;
  } else {
    i = in1->size[0];
  }

  array_real_T_SetSize(&b_in2, i);
  stride_0_0 = (in2 != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] != 1) {
    in2 = in1->size[0];
  }

  for (i = 0; i < in2; i++) {
    b_in2.vector.data[i] = in2_data[aux_0_0 + in2_size[0]] - in1->
      vector.data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  array_real_T_SetSize(in1, b_in2.size[0]);
  in2 = b_in2.size[0];
  for (i = 0; i < in2; i++) {
    in1->vector.data[i] = b_in2.vector.data[i];
  }

  array_real_T_Destructor(&b_in2);
}

static void binary_expand_op_5(boolean_T in1[4], real_T in2[4],
  coder_array_real_T_2D *in3)
{
  int32_T aux_0_0;
  int32_T b_in3;
  int32_T i;
  boolean_T b_in2[4];
  b_in3 = in3->size[0];
  b_in3 = (b_in3 != 1);
  aux_0_0 = 0;
  for (i = 0; i < 4; i++) {
    b_in2[i] = (in2[i] >= in3->vector.data[aux_0_0] - 4.4408920985006262E-16);
    aux_0_0 += b_in3;
  }

  for (i = 0; i < 4; i++) {
    in1[i] = b_in2[i];
  }
}

static void binary_expand_op_6(boolean_T in1[4], real_T in2[4],
  coder_array_real_T_2D *in3)
{
  int32_T aux_0_0;
  int32_T b_in3;
  int32_T i;
  boolean_T b_in2[4];
  b_in3 = in3->size[0];
  b_in3 = (b_in3 != 1);
  aux_0_0 = 0;
  for (i = 0; i < 4; i++) {
    b_in2[i] = (in2[i] <= in3->vector.data[aux_0_0 + in3->size[0]] +
                4.4408920985006262E-16);
    aux_0_0 += b_in3;
  }

  for (i = 0; i < 4; i++) {
    in1[i] = b_in2[i];
  }
}

static void array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray, int32_T size0, int32_T size1)
{
  robotics_manip_internal_CollisionGeometry *newData;
  int32_T newCapacity;
  int32_T newNumel;
  coderArray->size[0] = size0;
  coderArray->size[1] = size1;
  newNumel = coderArray->size[0] * coderArray->size[1];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (robotics_manip_internal_CollisionGeometry *)emlrtMallocMex(sizeof
      (robotics_manip_internal_CollisionGeometry) * (uint32_T)newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof
             (robotics_manip_internal_CollisionGeometry) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void array_real_T_2D_SetSize(coder_array_real_T_2D *coderArray, int32_T
  size0, int32_T size1)
{
  real_T *newData;
  int32_T newCapacity;
  int32_T newNumel;
  coderArray->size[0] = size0;
  coderArray->size[1] = size1;
  newNumel = coderArray->size[0] * coderArray->size[1];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof(real_T) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void array_real_T_SetSize(coder_array_real_T *coderArray, int32_T size0)
{
  real_T *newData;
  int32_T newCapacity;
  int32_T newNumel;
  coderArray->size[0] = size0;
  newNumel = coderArray->size[0];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof(real_T) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void array_int32_T_SetSize(coder_array_int32_T *coderArray, int32_T size0)
{
  int32_T newCapacity;
  int32_T newNumel;
  int32_T *newData;
  coderArray->size[0] = size0;
  newNumel = coderArray->size[0];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void array_int32_T_2D_SetSize(coder_array_int32_T_2D *coderArray, int32_T
  size0, int32_T size1)
{
  int32_T newCapacity;
  int32_T newNumel;
  int32_T *newData;
  coderArray->size[0] = size0;
  coderArray->size[1] = size1;
  newNumel = coderArray->size[0] * coderArray->size[1];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void array_boolean_T_SetSize(coder_array_boolean_T *coderArray, int32_T
  size0)
{
  int32_T newCapacity;
  int32_T newNumel;
  boolean_T *newData;
  coderArray->size[0] = size0;
  newNumel = coderArray->size[0];
  if (newNumel > coderArray->vector.allocated) {
    newCapacity = coderArray->vector.allocated;
    if (newCapacity < 16) {
      newCapacity = 16;
    }

    while (newCapacity < newNumel) {
      if (newCapacity > 1073741823) {
        newCapacity = MAX_int32_T;
      } else {
        newCapacity <<= 1;
      }
    }

    newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      newCapacity);
    if (coderArray->vector.data != NULL) {
      memcpy(newData, coderArray->vector.data, sizeof(boolean_T) * (uint32_T)
             coderArray->vector.numel);
      if (coderArray->vector.owner) {
        emlrtFreeMex(coderArray->vector.data);
      }
    }

    coderArray->vector.data = newData;
    coderArray->vector.allocated = newCapacity;
    coderArray->vector.owner = true;
  }

  coderArray->vector.numel = newNumel;
}

static void b_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray)
{
  coderArray->vector.data = (robotics_manip_internal_CollisionGeometry *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
  coderArray->size[1] = 0;
}

static void c_array_robotics_manip_internal_C(coder_array_robotics_manip_inte
  *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data !=
       (robotics_manip_internal_CollisionGeometry *)NULL)) {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static void array_real_T_2D_Constructor(coder_array_real_T_2D *coderArray)
{
  coderArray->vector.data = (real_T *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
  coderArray->size[1] = 0;
}

static void array_real_T_Constructor(coder_array_real_T *coderArray)
{
  coderArray->vector.data = (real_T *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
}

static void array_real_T_2D_Destructor(coder_array_real_T_2D *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data != (real_T *)NULL)) {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static void array_real_T_Destructor(coder_array_real_T *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data != (real_T *)NULL)) {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static void array_int32_T_2D_Constructor(coder_array_int32_T_2D *coderArray)
{
  coderArray->vector.data = (int32_T *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
  coderArray->size[1] = 0;
}

static void array_int32_T_Constructor(coder_array_int32_T *coderArray)
{
  coderArray->vector.data = (int32_T *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
}

static void array_int32_T_2D_Destructor(coder_array_int32_T_2D *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data != (int32_T *)NULL))
  {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static void array_int32_T_Destructor(coder_array_int32_T *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data != (int32_T *)NULL))
  {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static void array_boolean_T_Constructor(coder_array_boolean_T *coderArray)
{
  coderArray->vector.data = (boolean_T *)NULL;
  coderArray->vector.numel = 0;
  coderArray->vector.allocated = 0;
  coderArray->vector.owner = true;
  coderArray->size[0] = 0;
}

static void array_boolean_T_Destructor(coder_array_boolean_T *coderArray)
{
  if (coderArray->vector.owner && (coderArray->vector.data != (boolean_T *)NULL))
  {
    emlrtFreeMex(coderArray->vector.data);
  }
}

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  if (numerator < 0) {
    absNumerator = ~(uint32_T)numerator + 1U;
  } else {
    absNumerator = (uint32_T)numerator;
  }

  if (denominator < 0) {
    absDenominator = ~(uint32_T)denominator + 1U;
  } else {
    absDenominator = (uint32_T)denominator;
  }

  absNumerator /= absDenominator;
  if ((numerator < 0) != (denominator < 0)) {
    quotient = -(int32_T)absNumerator;
  } else {
    quotient = (int32_T)absNumerator;
  }

  return quotient;
}

static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroWarningOrError2018b(NULL, (emlrtConstCTX)sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    absNumerator /= absDenominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[16])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u1 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (real_T (*)[4])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->b_y0 = (real_T (*)[4])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (ikblock_info_bus *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
}

/* CGXE Glue Code */
static void mdlOutputs_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S, int_T tid)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S, int_T tid)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static void mdlTerminate_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
  InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *moduleInstance =
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE *)calloc(1, sizeof
    (InstanceStruct_RlUt5YazEZ0A5u4lfJgXaE));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_RlUt5YazEZ0A5u4lfJgXaE);
  ssSetmdlInitializeConditions(S, mdlInitialize_RlUt5YazEZ0A5u4lfJgXaE);
  ssSetmdlUpdate(S, mdlUpdate_RlUt5YazEZ0A5u4lfJgXaE);
  ssSetmdlDerivatives(S, mdlDerivatives_RlUt5YazEZ0A5u4lfJgXaE);
  ssSetmdlTerminate(S, mdlTerminate_RlUt5YazEZ0A5u4lfJgXaE);
  ssSetmdlEnable(S, mdlEnable_RlUt5YazEZ0A5u4lfJgXaE);
  ssSetmdlDisable(S, mdlDisable_RlUt5YazEZ0A5u4lfJgXaE);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S)
{
}

void method_dispatcher_RlUt5YazEZ0A5u4lfJgXaE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_RlUt5YazEZ0A5u4lfJgXaE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_RlUt5YazEZ0A5u4lfJgXaE(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: RlUt5YazEZ0A5u4lfJgXaE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_RlUt5YazEZ0A5u4lfJgXaE_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,3);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("blas.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,2,elem_8);
  mxSetCell(elem_3,1,elem_5);
  elem_9 = mxCreateCellMatrix(1,3);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  elem_11 = mxCreateString("");
  mxSetCell(elem_9,1,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_9,2,elem_12);
  mxSetCell(elem_3,2,elem_9);
  elem_13 = mxCreateCellMatrix(1,3);
  elem_14 = mxCreateString("");
  mxSetCell(elem_13,0,elem_14);
  elem_15 = mxCreateString("");
  mxSetCell(elem_13,1,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_13,2,elem_16);
  mxSetCell(elem_3,3,elem_13);
  mxSetCell(elem_1,1,elem_3);
  elem_17 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_17);
  elem_18 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_18);
  elem_19 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_19);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_20);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_21 = mxCreateCellMatrix(1,3);
  elem_22 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_21,0,elem_22);
  elem_23 = mxCreateString("coder.internal.time.CoderTimeAPI");
  mxSetCell(elem_21,1,elem_23);
  elem_24 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_21,2,elem_24);
  mxSetCell(mxBIArgs,1,elem_21);
  elem_25 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_25);
  return mxBIArgs;
}

mxArray *cgxe_RlUt5YazEZ0A5u4lfJgXaE_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
