/*
 * ModelloTeam1Test_types.h
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

#ifndef RTW_HEADER_ModelloTeam1Test_types_h_
#define RTW_HEADER_ModelloTeam1Test_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<Root>/Digital Write2' */
#include "MW_SVD.h"
#ifndef struct_tag_5FwKk6wA1XPbMoI1XCDeDF
#define struct_tag_5FwKk6wA1XPbMoI1XCDeDF

struct tag_5FwKk6wA1XPbMoI1XCDeDF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
  real_T SampleTime;
};

#endif                                 /* struct_tag_5FwKk6wA1XPbMoI1XCDeDF */

#ifndef typedef_mbed_DigitalRead_ModelloTeam1_T
#define typedef_mbed_DigitalRead_ModelloTeam1_T

typedef struct tag_5FwKk6wA1XPbMoI1XCDeDF mbed_DigitalRead_ModelloTeam1_T;

#endif                             /* typedef_mbed_DigitalRead_ModelloTeam1_T */

#ifndef struct_tag_KxFW01GBdhqk5JOEHU3GlD
#define struct_tag_KxFW01GBdhqk5JOEHU3GlD

struct tag_KxFW01GBdhqk5JOEHU3GlD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
};

#endif                                 /* struct_tag_KxFW01GBdhqk5JOEHU3GlD */

#ifndef typedef_mbed_DigitalWrite_ModelloTeam_T
#define typedef_mbed_DigitalWrite_ModelloTeam_T

typedef struct tag_KxFW01GBdhqk5JOEHU3GlD mbed_DigitalWrite_ModelloTeam_T;

#endif                             /* typedef_mbed_DigitalWrite_ModelloTeam_T */

/* Parameters (default storage) */
typedef struct P_ModelloTeam1Test_T_ P_ModelloTeam1Test_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ModelloTeam1Test_T RT_MODEL_ModelloTeam1Test_T;

#endif                                /* RTW_HEADER_ModelloTeam1Test_types_h_ */
