/*
 * ModelloTeam1Test.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ModelloTeam1Test".
 *
 * Model version              : 1.87
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Jun 15 16:43:28 2023
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ModelloTeam1Test_h_
#define RTW_HEADER_ModelloTeam1Test_h_
#ifndef ModelloTeam1Test_COMMON_INCLUDES_
#define ModelloTeam1Test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* ModelloTeam1Test_COMMON_INCLUDES_ */

#include "ModelloTeam1Test_types.h"
#include <stddef.h>
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T power;                        /* '<S1>/Chart2' */
  boolean_T L_onoff;                   /* '<S1>/Chart4' */
  boolean_T stato;                     /* '<S1>/Chart4' */
  boolean_T L_stove;                   /* '<S1>/Chart3' */
  boolean_T L_err;                     /* '<S1>/Chart2' */
} B_ModelloTeam1Test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  mbed_DigitalRead_ModelloTeam1_T obj; /* '<Root>/Digital Read3' */
  mbed_DigitalRead_ModelloTeam1_T obj_g;/* '<Root>/Digital Read2' */
  mbed_DigitalRead_ModelloTeam1_T obj_d;/* '<Root>/Digital Read1' */
  mbed_DigitalRead_ModelloTeam1_T obj_a;/* '<Root>/Digital Read' */
  mbed_DigitalWrite_ModelloTeam_T obj_e;/* '<Root>/Digital Write2' */
  mbed_DigitalWrite_ModelloTeam_T obj_b;/* '<Root>/Digital Write1' */
  mbed_DigitalWrite_ModelloTeam_T obj_gt;/* '<Root>/Digital Write' */
  real_T BUTTONDURATION;               /* '<S1>/Chart4' */
  real_T MAX_TIMING;                   /* '<S1>/Chart3' */
  real_T BUTTONDURATION_l;             /* '<S1>/Chart2' */
  real_T ACTIVE;                       /* '<S1>/Chart2' */
  real_T ERR_TIMER;                    /* '<S1>/Chart2' */
  real_T TIMER;                        /* '<S1>/Chart2' */
  real_T temp_power;                   /* '<S1>/Chart2' */
  real_T MAX_TIMING_d;                 /* '<S1>/Chart2' */
  real_T MIN_TIMING;                   /* '<S1>/Chart2' */
  uint32_T temporalCounter_i1;         /* '<S1>/Chart4' */
  uint32_T temporalCounter_i1_i;       /* '<S1>/Chart3' */
  uint32_T temporalCounter_i1_j;       /* '<S1>/Chart2' */
  uint32_T temporalCounter_i2;         /* '<S1>/Chart2' */
  uint32_T temporalCounter_i3;         /* '<S1>/Chart2' */
  uint8_T is_PowerOFF_management;      /* '<S1>/Chart4' */
  uint8_T is_PowerOFF_manager_on;      /* '<S1>/Chart4' */
  uint8_T is_active_c4_ModelloTeam1Test;/* '<S1>/Chart4' */
  uint8_T is_Stove_management;         /* '<S1>/Chart3' */
  uint8_T is_Blinking_stove;           /* '<S1>/Chart3' */
  uint8_T is_active_c1_ModelloTeam1Test;/* '<S1>/Chart3' */
  uint8_T is_Power_management;         /* '<S1>/Chart2' */
  uint8_T is_PowerUD_manager_on;       /* '<S1>/Chart2' */
  uint8_T is_Button_up_down_management;/* '<S1>/Chart2' */
  uint8_T is_Button_up_down_manager_on;/* '<S1>/Chart2' */
  uint8_T is_Error_management;         /* '<S1>/Chart2' */
  uint8_T is_Error_manager_on;         /* '<S1>/Chart2' */
  uint8_T is_active_c2_ModelloTeam1Test;/* '<S1>/Chart2' */
  boolean_T RELEASED;                  /* '<S1>/Chart4' */
  boolean_T PRESSED;                   /* '<S1>/Chart4' */
  boolean_T bonoff_second;             /* '<S1>/Chart4' */
  boolean_T ON;                        /* '<S1>/Chart4' */
  boolean_T OFF;                       /* '<S1>/Chart4' */
  boolean_T ON_p;                      /* '<S1>/Chart3' */
  boolean_T OFF_d;                     /* '<S1>/Chart3' */
  boolean_T RELEASED_i;                /* '<S1>/Chart2' */
  boolean_T PRESSED_c;                 /* '<S1>/Chart2' */
  boolean_T bup_second;                /* '<S1>/Chart2' */
  boolean_T bdown_second;              /* '<S1>/Chart2' */
  boolean_T ON_d;                      /* '<S1>/Chart2' */
  boolean_T OFF_p;                     /* '<S1>/Chart2' */
  boolean_T objisempty;                /* '<Root>/Digital Write2' */
  boolean_T objisempty_a;              /* '<Root>/Digital Write1' */
  boolean_T objisempty_c;              /* '<Root>/Digital Write' */
  boolean_T objisempty_cd;             /* '<Root>/Digital Read3' */
  boolean_T objisempty_c5;             /* '<Root>/Digital Read2' */
  boolean_T objisempty_j;              /* '<Root>/Digital Read1' */
  boolean_T objisempty_h;              /* '<Root>/Digital Read' */
} DW_ModelloTeam1Test_T;

/* Parameters (default storage) */
struct P_ModelloTeam1Test_T_ {
  real_T DigitalRead_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read'
                                        */
  real_T DigitalRead1_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read1'
                                        */
  real_T DigitalRead2_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read2'
                                        */
  real_T DigitalRead3_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Digital Read3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ModelloTeam1Test_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_ModelloTeam1Test_T ModelloTeam1Test_P;

/* Block signals (default storage) */
extern B_ModelloTeam1Test_T ModelloTeam1Test_B;

/* Block states (default storage) */
extern DW_ModelloTeam1Test_T ModelloTeam1Test_DW;

/* Model entry point functions */
extern void ModelloTeam1Test_initialize(void);
extern void ModelloTeam1Test_step(void);
extern void ModelloTeam1Test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ModelloTeam1Test_T *const ModelloTeam1Test_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'ModelloTeam1Test'
 * '<S1>'   : 'ModelloTeam1Test/Subsystem'
 * '<S2>'   : 'ModelloTeam1Test/Subsystem/Chart2'
 * '<S3>'   : 'ModelloTeam1Test/Subsystem/Chart3'
 * '<S4>'   : 'ModelloTeam1Test/Subsystem/Chart4'
 */
#endif                                 /* RTW_HEADER_ModelloTeam1Test_h_ */
