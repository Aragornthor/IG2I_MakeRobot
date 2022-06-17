/*
 * Subsystem4.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem4".
 *
 * Model version              : 4.0
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C source code generated on : Fri Jun 17 09:11:48 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Subsystem4_h_
#define RTW_HEADER_Subsystem4_h_
#ifndef Subsystem4_COMMON_INCLUDES_
#define Subsystem4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Subsystem4_COMMON_INCLUDES_ */

#include "Subsystem4_types.h"
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Sum9;                         /* '<S2>/Sum9' */
  real_T dx_est[3];                    /* '<S9>/Sum5' */
  real_T Sum9_c;                       /* '<S3>/Sum9' */
  real_T dx_est_e[3];                  /* '<S11>/Sum5' */
} B_Subsystem4_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator4_CSTATE;           /* '<S3>/Integrator4' */
  real_T x_est_CSTATE[3];              /* '<S11>/x_est' */
  real_T Integrator4_CSTATE_d;         /* '<S2>/Integrator4' */
  real_T x_est_CSTATE_p[3];            /* '<S9>/x_est' */
} X_Subsystem4_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator4_CSTATE;           /* '<S3>/Integrator4' */
  real_T x_est_CSTATE[3];              /* '<S11>/x_est' */
  real_T Integrator4_CSTATE_d;         /* '<S2>/Integrator4' */
  real_T x_est_CSTATE_p[3];            /* '<S9>/x_est' */
} XDot_Subsystem4_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator4_CSTATE;        /* '<S3>/Integrator4' */
  boolean_T x_est_CSTATE[3];           /* '<S11>/x_est' */
  boolean_T Integrator4_CSTATE_d;      /* '<S2>/Integrator4' */
  boolean_T x_est_CSTATE_p[3];         /* '<S9>/x_est' */
} XDis_Subsystem4_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T x;                            /* '<Root>/x+' */
  real_T position_mesuree;             /* '<Root>/position_mesuree' */
  real_T x_e;                          /* '<Root>/x' */
  real_T y;                            /* '<Root>/y' */
  real_T y_f;                          /* '<Root>/y+' */
  real_T theta;                        /* '<Root>/theta' */
  real_T position_mesuree1;            /* '<Root>/position_mesuree1' */
} ExtU_Subsystem4_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T u;                            /* '<Root>/u' */
  real_T u1;                           /* '<Root>/u1' */
} ExtY_Subsystem4_T;

/* Parameters (default storage) */
struct P_Subsystem4_T_ {
  real_T A0[9];                        /* Variable: A0
                                        * Referenced by:
                                        *   '<S9>/Gain10'
                                        *   '<S11>/Gain10'
                                        */
  real_T B0[3];                        /* Variable: B0
                                        * Referenced by:
                                        *   '<S9>/Gain9'
                                        *   '<S11>/Gain9'
                                        */
  real_T C0[3];                        /* Variable: C0
                                        * Referenced by:
                                        *   '<S9>/Gain11'
                                        *   '<S11>/Gain11'
                                        */
  real_T G;                            /* Variable: G
                                        * Referenced by:
                                        *   '<S5>/Gain'
                                        *   '<S7>/Gain2'
                                        */
  real_T K;                            /* Variable: K
                                        * Referenced by:
                                        *   '<S5>/Gain1'
                                        *   '<S7>/Gain3'
                                        */
  real_T Ki;                           /* Variable: Ki
                                        * Referenced by:
                                        *   '<S2>/Gain3'
                                        *   '<S3>/Gain3'
                                        */
  real_T Kx;                           /* Variable: Kx
                                        * Referenced by:
                                        *   '<S2>/Gain6'
                                        *   '<S3>/Gain6'
                                        */
  real_T L;                            /* Variable: L
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T L0[3];                        /* Variable: L0
                                        * Referenced by:
                                        *   '<S9>/Gain12'
                                        *   '<S11>/Gain12'
                                        */
  real_T l;                            /* Variable: l
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Integrator4_IC;               /* Expression: 0
                                        * Referenced by: '<S3>/Integrator4'
                                        */
  real_T x_est_IC;                     /* Expression: 0
                                        * Referenced by: '<S11>/x_est'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 9
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -9
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Integrator4_IC_a;             /* Expression: 0
                                        * Referenced by: '<S2>/Integrator4'
                                        */
  real_T x_est_IC_d;                   /* Expression: 0
                                        * Referenced by: '<S9>/x_est'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 9
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: -9
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S4>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Subsystem4_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  X_Subsystem4_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[8];
  real_T odeF[3][8];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Subsystem4_T Subsystem4_P;

/* Block signals (default storage) */
extern B_Subsystem4_T Subsystem4_B;

/* Continuous states (default storage) */
extern X_Subsystem4_T Subsystem4_X;

/* External inputs (root inport signals with default storage) */
extern ExtU_Subsystem4_T Subsystem4_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Subsystem4_T Subsystem4_Y;

/* Model entry point functions */
extern void Subsystem4_initialize(void);
extern void Subsystem4_step(void);
extern void Subsystem4_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Subsystem4_T *const Subsystem4_M;

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
 * hilite_system('model/Subsystem4')    - opens subsystem model/Subsystem4
 * hilite_system('model/Subsystem4/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'model'
 * '<S1>'   : 'model/Subsystem4'
 * '<S2>'   : 'model/Subsystem4/Asservissement droit'
 * '<S3>'   : 'model/Subsystem4/Asservissement gauche'
 * '<S4>'   : 'model/Subsystem4/M_theta_moins'
 * '<S5>'   : 'model/Subsystem4/Subsystem'
 * '<S6>'   : 'model/Subsystem4/Subsystem1'
 * '<S7>'   : 'model/Subsystem4/Subsystem2'
 * '<S8>'   : 'model/Subsystem4/Asservissement droit/observateur'
 * '<S9>'   : 'model/Subsystem4/Asservissement droit/observateur/Subsystem'
 * '<S10>'  : 'model/Subsystem4/Asservissement gauche/observateur'
 * '<S11>'  : 'model/Subsystem4/Asservissement gauche/observateur/Subsystem'
 */
#endif                                 /* RTW_HEADER_Subsystem4_h_ */
