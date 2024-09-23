/*
 * ModelloTeam1Test.c
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

#include "ModelloTeam1Test.h"
#include "rtwtypes.h"
#include "ModelloTeam1Test_types.h"
#include <math.h>
#include <string.h>

/* Named constants for Chart: '<S1>/Chart2' */
#define M_IN_Button_up_down_manager_off ((uint8_T)1U)
#define Mo_IN_Button_up_down_manager_on ((uint8_T)2U)
#define Mode_IN_Longpressed_DOWN_button ((uint8_T)1U)
#define Modell_IN_Longpressed_UP_botton ((uint8_T)2U)
#define ModelloT_IN_PowerUD_manager_off ((uint8_T)1U)
#define ModelloT_IN_Pressed_DOWN_button ((uint8_T)3U)
#define ModelloT_IN_Wait_Up_Down_button ((uint8_T)5U)
#define ModelloTe_IN_PowerUD_manager_on ((uint8_T)2U)
#define ModelloTea_IN_Error_manager_off ((uint8_T)1U)
#define ModelloTea_IN_Pressed_UP_botton ((uint8_T)4U)
#define ModelloTeam1Te_IN_Check_buttons ((uint8_T)1U)
#define ModelloTeam1Te_IN_Wait_blinking ((uint8_T)3U)
#define ModelloTeam1Test_IN_Check_error ((uint8_T)1U)
#define ModelloTeam1Test_IN_PowerDown  ((uint8_T)2U)
#define ModelloTeam1Test_IN_PowerUp    ((uint8_T)3U)
#define ModelloTeam1Test_IN_Start_error ((uint8_T)2U)
#define ModelloTeam1_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ModelloTeam_IN_Error_manager_on ((uint8_T)2U)

/* Named constants for Chart: '<S1>/Chart3' */
#define ModelloTeam1T_IN_Blinking_stove ((uint8_T)1U)
#define ModelloTeam1T_IN_Starting_power ((uint8_T)2U)
#define ModelloTeam1Test_IN_Led_off    ((uint8_T)1U)
#define ModelloTeam1Test_IN_Led_on     ((uint8_T)2U)

/* Named constants for Chart: '<S1>/Chart4' */
#define ModelloT_IN_PowerOFF_manager_on ((uint8_T)2U)
#define ModelloTe_IN_Pressed_OFF_button ((uint8_T)1U)
#define ModelloTeam1_IN_W_post_power_on ((uint8_T)4U)
#define ModelloTeam1_IN_Wait_OFF_button ((uint8_T)2U)
#define ModelloTeam_IN_W_post_power_off ((uint8_T)3U)
#define Modello_IN_PowerOFF_manager_off ((uint8_T)1U)

/* Block signals (default storage) */
B_ModelloTeam1Test_T ModelloTeam1Test_B;

/* Block states (default storage) */
DW_ModelloTeam1Test_T ModelloTeam1Test_DW;

/* Real-time model */
static RT_MODEL_ModelloTeam1Test_T ModelloTeam1Test_M_;
RT_MODEL_ModelloTeam1Test_T *const ModelloTeam1Test_M = &ModelloTeam1Test_M_;

/* Model step function */
void ModelloTeam1Test_step(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T rtb_DigitalRead1_0;
  boolean_T rtb_DigitalRead2_0;
  boolean_T rtb_DigitalRead3_0;

  /* MATLABSystem: '<Root>/Digital Read2' */
  if (ModelloTeam1Test_DW.obj_g.SampleTime !=
      ModelloTeam1Test_P.DigitalRead2_SampleTime) {
    ModelloTeam1Test_DW.obj_g.SampleTime =
      ModelloTeam1Test_P.DigitalRead2_SampleTime;
  }

  rtb_DigitalRead2_0 = MW_digitalIO_read
    (ModelloTeam1Test_DW.obj_g.MW_DIGITALIO_HANDLE);

  /* Chart: '<S1>/Chart4' incorporates:
   *  MATLABSystem: '<Root>/Digital Read2'
   */
  if (ModelloTeam1Test_DW.temporalCounter_i1 < MAX_uint32_T) {
    ModelloTeam1Test_DW.temporalCounter_i1++;
  }

  if (ModelloTeam1Test_DW.is_active_c4_ModelloTeam1Test == 0U) {
    ModelloTeam1Test_DW.is_active_c4_ModelloTeam1Test = 1U;
    ModelloTeam1Test_DW.is_PowerOFF_management = Modello_IN_PowerOFF_manager_off;
    ModelloTeam1Test_B.stato = ModelloTeam1Test_DW.OFF;
    ModelloTeam1Test_B.L_onoff = ModelloTeam1Test_DW.OFF;
  } else {
    switch (ModelloTeam1Test_DW.is_PowerOFF_management) {
     case Modello_IN_PowerOFF_manager_off:
      if (rtb_DigitalRead2_0 == ModelloTeam1Test_DW.PRESSED) {
        ModelloTeam1Test_DW.is_PowerOFF_management =
          ModelloTeam1_IN_W_post_power_on;
        ModelloTeam1Test_B.stato = ModelloTeam1Test_DW.ON;
        ModelloTeam1Test_B.L_onoff = ModelloTeam1Test_DW.ON;
      }
      break;

     case ModelloT_IN_PowerOFF_manager_on:
      if (ModelloTeam1Test_DW.bonoff_second == ModelloTeam1Test_DW.PRESSED) {
        ModelloTeam1Test_DW.is_PowerOFF_manager_on =
          ModelloTeam1_IN_NO_ACTIVE_CHILD;
        ModelloTeam1Test_DW.is_PowerOFF_management =
          ModelloTeam_IN_W_post_power_off;
        ModelloTeam1Test_B.L_onoff = ModelloTeam1Test_DW.OFF;
        ModelloTeam1Test_B.stato = ModelloTeam1Test_DW.OFF;
      } else if (ModelloTeam1Test_DW.is_PowerOFF_manager_on ==
                 ModelloTe_IN_Pressed_OFF_button) {
        if (rtb_DigitalRead2_0 == ModelloTeam1Test_DW.RELEASED) {
          ModelloTeam1Test_DW.is_PowerOFF_manager_on =
            ModelloTeam1_IN_Wait_OFF_button;
          ModelloTeam1Test_DW.bonoff_second = ModelloTeam1Test_DW.RELEASED;
        } else if (ModelloTeam1Test_DW.temporalCounter_i1 >= (uint32_T)ceil
                   (ModelloTeam1Test_DW.BUTTONDURATION * 4.0)) {
          ModelloTeam1Test_DW.bonoff_second = ModelloTeam1Test_DW.PRESSED;
        }

        /* case IN_Wait_OFF_button: */
      } else if (rtb_DigitalRead2_0 == ModelloTeam1Test_DW.PRESSED) {
        ModelloTeam1Test_DW.is_PowerOFF_manager_on =
          ModelloTe_IN_Pressed_OFF_button;
        ModelloTeam1Test_DW.temporalCounter_i1 = 0U;
        ModelloTeam1Test_DW.bonoff_second = ModelloTeam1Test_DW.RELEASED;
      }
      break;

     case ModelloTeam_IN_W_post_power_off:
      if (rtb_DigitalRead2_0 == ModelloTeam1Test_DW.RELEASED) {
        ModelloTeam1Test_DW.is_PowerOFF_management =
          Modello_IN_PowerOFF_manager_off;
        ModelloTeam1Test_B.stato = ModelloTeam1Test_DW.OFF;
        ModelloTeam1Test_B.L_onoff = ModelloTeam1Test_DW.OFF;
      }
      break;

     default:
      /* case IN_W_post_power_on: */
      if (rtb_DigitalRead2_0 == ModelloTeam1Test_DW.RELEASED) {
        ModelloTeam1Test_DW.is_PowerOFF_management =
          ModelloT_IN_PowerOFF_manager_on;
        ModelloTeam1Test_DW.is_PowerOFF_manager_on =
          ModelloTeam1_IN_Wait_OFF_button;
        ModelloTeam1Test_DW.bonoff_second = ModelloTeam1Test_DW.RELEASED;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart4' */

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(ModelloTeam1Test_DW.obj_gt.MW_DIGITALIO_HANDLE,
                     ModelloTeam1Test_B.L_onoff);

  /* MATLABSystem: '<Root>/Digital Read' */
  if (ModelloTeam1Test_DW.obj_a.SampleTime !=
      ModelloTeam1Test_P.DigitalRead_SampleTime) {
    ModelloTeam1Test_DW.obj_a.SampleTime =
      ModelloTeam1Test_P.DigitalRead_SampleTime;
  }

  rtb_DigitalRead2_0 = MW_digitalIO_read
    (ModelloTeam1Test_DW.obj_a.MW_DIGITALIO_HANDLE);

  /* MATLABSystem: '<Root>/Digital Read1' */
  if (ModelloTeam1Test_DW.obj_d.SampleTime !=
      ModelloTeam1Test_P.DigitalRead1_SampleTime) {
    ModelloTeam1Test_DW.obj_d.SampleTime =
      ModelloTeam1Test_P.DigitalRead1_SampleTime;
  }

  rtb_DigitalRead1_0 = MW_digitalIO_read
    (ModelloTeam1Test_DW.obj_d.MW_DIGITALIO_HANDLE);

  /* MATLABSystem: '<Root>/Digital Read3' */
  if (ModelloTeam1Test_DW.obj.SampleTime !=
      ModelloTeam1Test_P.DigitalRead3_SampleTime) {
    ModelloTeam1Test_DW.obj.SampleTime =
      ModelloTeam1Test_P.DigitalRead3_SampleTime;
  }

  rtb_DigitalRead3_0 = MW_digitalIO_read
    (ModelloTeam1Test_DW.obj.MW_DIGITALIO_HANDLE);

  /* Chart: '<S1>/Chart2' incorporates:
   *  MATLABSystem: '<Root>/Digital Read'
   *  MATLABSystem: '<Root>/Digital Read1'
   *  MATLABSystem: '<Root>/Digital Read3'
   */
  if (ModelloTeam1Test_DW.temporalCounter_i1_j < MAX_uint32_T) {
    ModelloTeam1Test_DW.temporalCounter_i1_j++;
  }

  if (ModelloTeam1Test_DW.temporalCounter_i2 < MAX_uint32_T) {
    ModelloTeam1Test_DW.temporalCounter_i2++;
  }

  if (ModelloTeam1Test_DW.temporalCounter_i3 < MAX_uint32_T) {
    ModelloTeam1Test_DW.temporalCounter_i3++;
  }

  if (ModelloTeam1Test_DW.is_active_c2_ModelloTeam1Test == 0U) {
    ModelloTeam1Test_DW.is_active_c2_ModelloTeam1Test = 1U;
    ModelloTeam1Test_DW.is_Power_management = ModelloT_IN_PowerUD_manager_off;
    ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
    ModelloTeam1Test_B.power = ModelloTeam1Test_DW.MAX_TIMING_d;
    ModelloTeam1Test_DW.is_Button_up_down_management =
      M_IN_Button_up_down_manager_off;
    ModelloTeam1Test_DW.is_Error_management = ModelloTea_IN_Error_manager_off;
    ModelloTeam1Test_B.L_err = ModelloTeam1Test_DW.OFF_p;
  } else {
    if (ModelloTeam1Test_DW.is_Power_management ==
        ModelloT_IN_PowerUD_manager_off) {
      if (ModelloTeam1Test_B.stato == ModelloTeam1Test_DW.ON_d) {
        ModelloTeam1Test_DW.is_Power_management =
          ModelloTe_IN_PowerUD_manager_on;
        ModelloTeam1Test_DW.is_PowerUD_manager_on =
          ModelloTeam1Te_IN_Check_buttons;
        ModelloTeam1Test_B.power = ModelloTeam1Test_DW.temp_power;
      }

      /* case IN_PowerUD_manager_on: */
    } else if (ModelloTeam1Test_B.stato == ModelloTeam1Test_DW.OFF_p) {
      ModelloTeam1Test_DW.is_PowerUD_manager_on =
        ModelloTeam1_IN_NO_ACTIVE_CHILD;
      ModelloTeam1Test_DW.is_Power_management = ModelloT_IN_PowerUD_manager_off;
      ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
      ModelloTeam1Test_B.power = ModelloTeam1Test_DW.MAX_TIMING_d;
    } else {
      guard1 = false;
      guard2 = false;
      switch (ModelloTeam1Test_DW.is_PowerUD_manager_on) {
       case ModelloTeam1Te_IN_Check_buttons:
        if ((ModelloTeam1Test_B.power != ModelloTeam1Test_DW.MIN_TIMING) &&
            (ModelloTeam1Test_DW.bup_second == ModelloTeam1Test_DW.PRESSED_c)) {
          ModelloTeam1Test_DW.is_PowerUD_manager_on =
            ModelloTeam1Test_IN_PowerUp;
          ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
          ModelloTeam1Test_DW.temp_power /= 2.0;
        } else if ((ModelloTeam1Test_B.power != ModelloTeam1Test_DW.MAX_TIMING_d)
                   && (ModelloTeam1Test_DW.bdown_second ==
                       ModelloTeam1Test_DW.PRESSED_c)) {
          ModelloTeam1Test_DW.is_PowerUD_manager_on =
            ModelloTeam1Test_IN_PowerDown;
          ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
          ModelloTeam1Test_DW.temp_power *= 2.0;
        }
        break;

       case ModelloTeam1Test_IN_PowerDown:
        if (ModelloTeam1Test_DW.bup_second == ModelloTeam1Test_DW.PRESSED_c) {
          ModelloTeam1Test_DW.is_PowerUD_manager_on =
            ModelloTeam1Test_IN_PowerUp;
          ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
          ModelloTeam1Test_DW.temp_power /= 2.0;
        } else if (ModelloTeam1Test_DW.temporalCounter_i2 >= (uint32_T)ceil
                   (ModelloTeam1Test_DW.TIMER * 4.0)) {
          guard2 = true;
        } else if ((ModelloTeam1Test_DW.temp_power !=
                    ModelloTeam1Test_DW.MAX_TIMING_d) &&
                   (ModelloTeam1Test_DW.bdown_second ==
                    ModelloTeam1Test_DW.PRESSED_c)) {
          ModelloTeam1Test_DW.is_PowerUD_manager_on =
            ModelloTeam1Test_IN_PowerDown;
          ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
          ModelloTeam1Test_DW.temp_power *= 2.0;
        } else if ((ModelloTeam1Test_B.power == ModelloTeam1Test_DW.MAX_TIMING_d)
                   && (rtb_DigitalRead3_0 != ModelloTeam1Test_DW.ACTIVE)) {
          ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
          guard2 = true;
        }
        break;

       default:
        /* case IN_PowerUp: */
        if (ModelloTeam1Test_DW.bdown_second == ModelloTeam1Test_DW.PRESSED_c) {
          ModelloTeam1Test_DW.is_PowerUD_manager_on =
            ModelloTeam1Test_IN_PowerDown;
          ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
          ModelloTeam1Test_DW.temp_power *= 2.0;
        } else if (ModelloTeam1Test_DW.temporalCounter_i2 >= (uint32_T)ceil
                   (ModelloTeam1Test_DW.TIMER * 4.0)) {
          guard1 = true;
        } else if ((ModelloTeam1Test_DW.temp_power !=
                    ModelloTeam1Test_DW.MIN_TIMING) &&
                   (ModelloTeam1Test_DW.bup_second ==
                    ModelloTeam1Test_DW.PRESSED_c)) {
          ModelloTeam1Test_DW.is_PowerUD_manager_on =
            ModelloTeam1Test_IN_PowerUp;
          ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
          ModelloTeam1Test_DW.temp_power /= 2.0;
        } else if ((ModelloTeam1Test_B.power == ModelloTeam1Test_DW.MAX_TIMING_d)
                   && (rtb_DigitalRead3_0 != ModelloTeam1Test_DW.ACTIVE)) {
          ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
          guard1 = true;
        }
        break;
      }

      if (guard2) {
        ModelloTeam1Test_DW.is_PowerUD_manager_on =
          ModelloTeam1Te_IN_Check_buttons;
        ModelloTeam1Test_B.power = ModelloTeam1Test_DW.temp_power;
      }

      if (guard1) {
        ModelloTeam1Test_DW.is_PowerUD_manager_on =
          ModelloTeam1Te_IN_Check_buttons;
        ModelloTeam1Test_B.power = ModelloTeam1Test_DW.temp_power;
      }
    }

    if (ModelloTeam1Test_DW.is_Button_up_down_management ==
        M_IN_Button_up_down_manager_off) {
      if (ModelloTeam1Test_B.stato == ModelloTeam1Test_DW.ON_d) {
        ModelloTeam1Test_DW.is_Button_up_down_management =
          Mo_IN_Button_up_down_manager_on;
        ModelloTeam1Test_DW.is_Button_up_down_manager_on =
          ModelloT_IN_Wait_Up_Down_button;
        ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
        ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
      }

      /* case IN_Button_up_down_manager_on: */
    } else if (ModelloTeam1Test_B.stato == ModelloTeam1Test_DW.OFF_p) {
      ModelloTeam1Test_DW.is_Button_up_down_manager_on =
        ModelloTeam1_IN_NO_ACTIVE_CHILD;
      ModelloTeam1Test_DW.is_Button_up_down_management =
        M_IN_Button_up_down_manager_off;
    } else {
      switch (ModelloTeam1Test_DW.is_Button_up_down_manager_on) {
       case Mode_IN_Longpressed_DOWN_button:
        if (rtb_DigitalRead1_0 == ModelloTeam1Test_DW.RELEASED_i) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            ModelloT_IN_Wait_Up_Down_button;
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
        }
        break;

       case Modell_IN_Longpressed_UP_botton:
        if (rtb_DigitalRead2_0 == ModelloTeam1Test_DW.RELEASED_i) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            ModelloT_IN_Wait_Up_Down_button;
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
        }
        break;

       case ModelloT_IN_Pressed_DOWN_button:
        if ((ModelloTeam1Test_DW.bdown_second == ModelloTeam1Test_DW.PRESSED_c) &&
            (rtb_DigitalRead1_0 == ModelloTeam1Test_DW.PRESSED_c)) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            Mode_IN_Longpressed_DOWN_button;
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
        } else if ((rtb_DigitalRead1_0 == ModelloTeam1Test_DW.RELEASED_i) ||
                   (rtb_DigitalRead3_0 != ModelloTeam1Test_DW.ACTIVE)) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            ModelloT_IN_Wait_Up_Down_button;
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
        } else if (ModelloTeam1Test_DW.temporalCounter_i1_j >= (uint32_T)ceil
                   (ModelloTeam1Test_DW.BUTTONDURATION_l * 4.0)) {
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.PRESSED_c;
        }
        break;

       case ModelloTea_IN_Pressed_UP_botton:
        if ((rtb_DigitalRead2_0 == ModelloTeam1Test_DW.RELEASED_i) ||
            (rtb_DigitalRead3_0 != ModelloTeam1Test_DW.ACTIVE)) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            ModelloT_IN_Wait_Up_Down_button;
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
        } else if ((ModelloTeam1Test_DW.bup_second ==
                    ModelloTeam1Test_DW.PRESSED_c) && (rtb_DigitalRead2_0 ==
                    ModelloTeam1Test_DW.PRESSED_c)) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            Modell_IN_Longpressed_UP_botton;
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
        } else if (ModelloTeam1Test_DW.temporalCounter_i1_j >= (uint32_T)ceil
                   (ModelloTeam1Test_DW.BUTTONDURATION_l * 4.0)) {
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.PRESSED_c;
        }
        break;

       default:
        /* case IN_Wait_Up_Down_button: */
        if ((rtb_DigitalRead1_0 == ModelloTeam1Test_DW.PRESSED_c) &&
            (rtb_DigitalRead3_0 == ModelloTeam1Test_DW.ACTIVE)) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            ModelloT_IN_Pressed_DOWN_button;
          ModelloTeam1Test_DW.temporalCounter_i1_j = 0U;
          ModelloTeam1Test_DW.bdown_second = ModelloTeam1Test_DW.RELEASED_i;
        } else if ((rtb_DigitalRead2_0 == ModelloTeam1Test_DW.PRESSED_c) &&
                   (rtb_DigitalRead3_0 == ModelloTeam1Test_DW.ACTIVE)) {
          ModelloTeam1Test_DW.is_Button_up_down_manager_on =
            ModelloTea_IN_Pressed_UP_botton;
          ModelloTeam1Test_DW.temporalCounter_i1_j = 0U;
          ModelloTeam1Test_DW.bup_second = ModelloTeam1Test_DW.RELEASED_i;
        }
        break;
      }
    }

    if (ModelloTeam1Test_DW.is_Error_management ==
        ModelloTea_IN_Error_manager_off) {
      if (ModelloTeam1Test_B.stato == ModelloTeam1Test_DW.ON_d) {
        ModelloTeam1Test_DW.is_Error_management =
          ModelloTeam_IN_Error_manager_on;
        ModelloTeam1Test_DW.is_Error_manager_on =
          ModelloTeam1Te_IN_Wait_blinking;
        ModelloTeam1Test_B.power = ModelloTeam1Test_DW.MAX_TIMING_d;
        ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
      }

      /* case IN_Error_manager_on: */
    } else if (ModelloTeam1Test_B.stato == ModelloTeam1Test_DW.OFF_p) {
      ModelloTeam1Test_DW.is_Error_manager_on = ModelloTeam1_IN_NO_ACTIVE_CHILD;
      ModelloTeam1Test_DW.is_Error_management = ModelloTea_IN_Error_manager_off;
      ModelloTeam1Test_B.L_err = ModelloTeam1Test_DW.OFF_p;
    } else {
      switch (ModelloTeam1Test_DW.is_Error_manager_on) {
       case ModelloTeam1Test_IN_Check_error:
        if (rtb_DigitalRead3_0 != ModelloTeam1Test_DW.ACTIVE) {
          ModelloTeam1Test_DW.is_Error_manager_on =
            ModelloTeam1Test_IN_Start_error;
          ModelloTeam1Test_DW.temporalCounter_i3 = 0U;
          ModelloTeam1Test_B.L_err = ModelloTeam1Test_DW.ON_d;
        } else if (ModelloTeam1Test_B.power == ModelloTeam1Test_DW.MAX_TIMING_d)
        {
          ModelloTeam1Test_DW.is_Error_manager_on =
            ModelloTeam1Te_IN_Wait_blinking;
          ModelloTeam1Test_B.power = ModelloTeam1Test_DW.MAX_TIMING_d;
          ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
        }
        break;

       case ModelloTeam1Test_IN_Start_error:
        if (rtb_DigitalRead3_0 == ModelloTeam1Test_DW.ACTIVE) {
          ModelloTeam1Test_B.L_err = ModelloTeam1Test_DW.OFF_p;
          ModelloTeam1Test_DW.is_Error_manager_on =
            ModelloTeam1Test_IN_Check_error;
        } else if (ModelloTeam1Test_DW.temporalCounter_i3 >= (uint32_T)ceil
                   (ModelloTeam1Test_DW.ERR_TIMER * 4.0)) {
          ModelloTeam1Test_B.L_err = ModelloTeam1Test_DW.OFF_p;
          ModelloTeam1Test_DW.is_Error_manager_on =
            ModelloTeam1Te_IN_Wait_blinking;
          ModelloTeam1Test_B.power = ModelloTeam1Test_DW.MAX_TIMING_d;
          ModelloTeam1Test_DW.temp_power = ModelloTeam1Test_DW.MAX_TIMING_d;
        }
        break;

       default:
        /* case IN_Wait_blinking: */
        if (ModelloTeam1Test_B.power < ModelloTeam1Test_DW.MAX_TIMING_d) {
          ModelloTeam1Test_DW.is_Error_manager_on =
            ModelloTeam1Test_IN_Check_error;
        }
        break;
      }
    }
  }

  /* End of Chart: '<S1>/Chart2' */

  /* MATLABSystem: '<Root>/Digital Write1' */
  MW_digitalIO_write(ModelloTeam1Test_DW.obj_b.MW_DIGITALIO_HANDLE,
                     ModelloTeam1Test_B.L_err);

  /* Chart: '<S1>/Chart3' */
  if (ModelloTeam1Test_DW.temporalCounter_i1_i < MAX_uint32_T) {
    ModelloTeam1Test_DW.temporalCounter_i1_i++;
  }

  if (ModelloTeam1Test_DW.is_active_c1_ModelloTeam1Test == 0U) {
    ModelloTeam1Test_DW.is_active_c1_ModelloTeam1Test = 1U;
    ModelloTeam1Test_DW.is_Stove_management = ModelloTeam1T_IN_Starting_power;
    ModelloTeam1Test_B.L_stove = ModelloTeam1Test_DW.OFF_d;
  } else if (ModelloTeam1Test_DW.is_Stove_management ==
             ModelloTeam1T_IN_Blinking_stove) {
    if (ModelloTeam1Test_B.power == ModelloTeam1Test_DW.MAX_TIMING) {
      ModelloTeam1Test_DW.is_Blinking_stove = ModelloTeam1_IN_NO_ACTIVE_CHILD;
      ModelloTeam1Test_DW.is_Stove_management = ModelloTeam1T_IN_Starting_power;
      ModelloTeam1Test_B.L_stove = ModelloTeam1Test_DW.OFF_d;
    } else if (ModelloTeam1Test_DW.is_Blinking_stove ==
               ModelloTeam1Test_IN_Led_off) {
      if (ModelloTeam1Test_DW.temporalCounter_i1_i >= (uint32_T)ceil
          (ModelloTeam1Test_B.power * 4.0)) {
        ModelloTeam1Test_DW.is_Blinking_stove = ModelloTeam1Test_IN_Led_on;
        ModelloTeam1Test_DW.temporalCounter_i1_i = 0U;
        ModelloTeam1Test_B.L_stove = ModelloTeam1Test_DW.ON_p;
      }

      /* case IN_Led_on: */
    } else if (ModelloTeam1Test_DW.temporalCounter_i1_i >= (uint32_T)ceil
               (ModelloTeam1Test_B.power * 4.0)) {
      ModelloTeam1Test_DW.is_Blinking_stove = ModelloTeam1Test_IN_Led_off;
      ModelloTeam1Test_DW.temporalCounter_i1_i = 0U;
      ModelloTeam1Test_B.L_stove = ModelloTeam1Test_DW.OFF_d;
    }

    /* case IN_Starting_power: */
  } else if (ModelloTeam1Test_B.power < ModelloTeam1Test_DW.MAX_TIMING) {
    ModelloTeam1Test_DW.is_Stove_management = ModelloTeam1T_IN_Blinking_stove;
    ModelloTeam1Test_DW.is_Blinking_stove = ModelloTeam1Test_IN_Led_on;
    ModelloTeam1Test_DW.temporalCounter_i1_i = 0U;
    ModelloTeam1Test_B.L_stove = ModelloTeam1Test_DW.ON_p;
  }

  /* End of Chart: '<S1>/Chart3' */

  /* MATLABSystem: '<Root>/Digital Write2' */
  MW_digitalIO_write(ModelloTeam1Test_DW.obj_e.MW_DIGITALIO_HANDLE,
                     ModelloTeam1Test_B.L_stove);
}

/* Model initialize function */
void ModelloTeam1Test_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ModelloTeam1Test_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ModelloTeam1Test_B), 0,
                sizeof(B_ModelloTeam1Test_T));

  /* states (dwork) */
  (void) memset((void *)&ModelloTeam1Test_DW, 0,
                sizeof(DW_ModelloTeam1Test_T));

  {
    uint32_T pinname;
    mbed_DigitalRead_ModelloTeam1_T *obj;
    mbed_DigitalWrite_ModelloTeam_T *obj_0;

    /* Start for MATLABSystem: '<Root>/Digital Read2' */
    ModelloTeam1Test_DW.obj_g.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty_c5 = true;
    ModelloTeam1Test_DW.obj_g.SampleTime =
      ModelloTeam1Test_P.DigitalRead2_SampleTime;
    obj = &ModelloTeam1Test_DW.obj_g;
    ModelloTeam1Test_DW.obj_g.isInitialized = 1;
    pinname = PC_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    ModelloTeam1Test_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    ModelloTeam1Test_DW.obj_gt.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty_c = true;
    obj_0 = &ModelloTeam1Test_DW.obj_gt;
    ModelloTeam1Test_DW.obj_gt.isInitialized = 1;
    pinname = PA_5;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    ModelloTeam1Test_DW.obj_gt.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read' */
    ModelloTeam1Test_DW.obj_a.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty_h = true;
    ModelloTeam1Test_DW.obj_a.SampleTime =
      ModelloTeam1Test_P.DigitalRead_SampleTime;
    obj = &ModelloTeam1Test_DW.obj_a;
    ModelloTeam1Test_DW.obj_a.isInitialized = 1;
    pinname = PC_2;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    ModelloTeam1Test_DW.obj_a.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read1' */
    ModelloTeam1Test_DW.obj_d.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty_j = true;
    ModelloTeam1Test_DW.obj_d.SampleTime =
      ModelloTeam1Test_P.DigitalRead1_SampleTime;
    obj = &ModelloTeam1Test_DW.obj_d;
    ModelloTeam1Test_DW.obj_d.isInitialized = 1;
    pinname = PC_3;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    ModelloTeam1Test_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read3' */
    ModelloTeam1Test_DW.obj.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty_cd = true;
    ModelloTeam1Test_DW.obj.SampleTime =
      ModelloTeam1Test_P.DigitalRead3_SampleTime;
    obj = &ModelloTeam1Test_DW.obj;
    ModelloTeam1Test_DW.obj.isInitialized = 1;
    pinname = PC_10;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    ModelloTeam1Test_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    ModelloTeam1Test_DW.obj_b.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty_a = true;
    obj_0 = &ModelloTeam1Test_DW.obj_b;
    ModelloTeam1Test_DW.obj_b.isInitialized = 1;
    pinname = PA_7;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    ModelloTeam1Test_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write2' */
    ModelloTeam1Test_DW.obj_e.matlabCodegenIsDeleted = false;
    ModelloTeam1Test_DW.objisempty = true;
    obj_0 = &ModelloTeam1Test_DW.obj_e;
    ModelloTeam1Test_DW.obj_e.isInitialized = 1;
    pinname = PA_6;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    ModelloTeam1Test_DW.obj_e.isSetupComplete = true;
  }

  /* SystemInitialize for Chart: '<S1>/Chart4' */
  ModelloTeam1Test_DW.is_PowerOFF_management = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.is_PowerOFF_manager_on = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.temporalCounter_i1 = 0U;
  ModelloTeam1Test_DW.is_active_c4_ModelloTeam1Test = 0U;
  ModelloTeam1Test_DW.RELEASED = true;
  ModelloTeam1Test_DW.PRESSED = false;
  ModelloTeam1Test_DW.bonoff_second = false;
  ModelloTeam1Test_DW.ON = true;
  ModelloTeam1Test_DW.OFF = false;
  ModelloTeam1Test_DW.BUTTONDURATION = 1.0;
  ModelloTeam1Test_B.L_onoff = false;
  ModelloTeam1Test_B.stato = false;

  /* SystemInitialize for Chart: '<S1>/Chart2' */
  ModelloTeam1Test_DW.is_Button_up_down_management =
    ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.is_Button_up_down_manager_on =
    ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.temporalCounter_i1_j = 0U;
  ModelloTeam1Test_DW.is_Error_management = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.is_Error_manager_on = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.temporalCounter_i3 = 0U;
  ModelloTeam1Test_DW.is_Power_management = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.is_PowerUD_manager_on = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.temporalCounter_i2 = 0U;
  ModelloTeam1Test_DW.is_active_c2_ModelloTeam1Test = 0U;
  ModelloTeam1Test_DW.RELEASED_i = true;
  ModelloTeam1Test_DW.PRESSED_c = false;
  ModelloTeam1Test_DW.BUTTONDURATION_l = 1.0;
  ModelloTeam1Test_DW.bup_second = false;
  ModelloTeam1Test_DW.bdown_second = false;
  ModelloTeam1Test_DW.ACTIVE = 0.0;
  ModelloTeam1Test_DW.ERR_TIMER = 10.0;
  ModelloTeam1Test_DW.ON_d = true;
  ModelloTeam1Test_DW.OFF_p = false;
  ModelloTeam1Test_DW.TIMER = 5.0;
  ModelloTeam1Test_DW.temp_power = 0.0;
  ModelloTeam1Test_DW.MAX_TIMING_d = 4.0;
  ModelloTeam1Test_DW.MIN_TIMING = 0.25;
  ModelloTeam1Test_B.L_err = false;
  ModelloTeam1Test_B.power = 0.0;

  /* SystemInitialize for Chart: '<S1>/Chart3' */
  ModelloTeam1Test_DW.is_Stove_management = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.is_Blinking_stove = ModelloTeam1_IN_NO_ACTIVE_CHILD;
  ModelloTeam1Test_DW.temporalCounter_i1_i = 0U;
  ModelloTeam1Test_DW.is_active_c1_ModelloTeam1Test = 0U;
  ModelloTeam1Test_DW.ON_p = true;
  ModelloTeam1Test_DW.OFF_d = false;
  ModelloTeam1Test_DW.MAX_TIMING = 4.0;
  ModelloTeam1Test_B.L_stove = false;
}

/* Model terminate function */
void ModelloTeam1Test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Read2' */
  if (!ModelloTeam1Test_DW.obj_g.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj_g.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj_g.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj_g.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read2' */

  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  if (!ModelloTeam1Test_DW.obj_gt.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj_gt.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj_gt.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj_gt.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj_gt.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Write' */

  /* Terminate for MATLABSystem: '<Root>/Digital Read' */
  if (!ModelloTeam1Test_DW.obj_a.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj_a.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj_a.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj_a.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj_a.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read' */

  /* Terminate for MATLABSystem: '<Root>/Digital Read1' */
  if (!ModelloTeam1Test_DW.obj_d.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj_d.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj_d.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj_d.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj_d.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Read3' */
  if (!ModelloTeam1Test_DW.obj.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Read3' */

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  if (!ModelloTeam1Test_DW.obj_b.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj_b.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj_b.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj_b.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Write1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Write2' */
  if (!ModelloTeam1Test_DW.obj_e.matlabCodegenIsDeleted) {
    ModelloTeam1Test_DW.obj_e.matlabCodegenIsDeleted = true;
    if ((ModelloTeam1Test_DW.obj_e.isInitialized == 1) &&
        ModelloTeam1Test_DW.obj_e.isSetupComplete) {
      MW_digitalIO_close(ModelloTeam1Test_DW.obj_e.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Write2' */
}
