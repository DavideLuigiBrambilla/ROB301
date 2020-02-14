/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:18:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sub_Doors_Motion_Monitoring.h"

/* Sub_Doors_Motion_Monitoring/ */
void Sub_Doors_Motion_Monitoring(
  /* _L4/, open_close_EV/ */
  kcg_bool open_close_EV,
  /* _L13/, doors_status_front/ */
  kcg_bool doors_status_front,
  /* _L12/, doors_status_right/ */
  kcg_bool doors_status_right,
  /* _L15/, doors_status_left/ */
  kcg_bool doors_status_left,
  /* _L10/, _L16/, ctrl_status/ */
  kcg_bool ctrl_status,
  /* duration/ */
  kcg_int32 duration,
  /* @11/MTC_INSTRU/,
     @12/MTC_INSTRU/,
     @13/MTC_INSTRU/,
     @14/MTC_INSTRU/,
     @15/MTC_INSTRU/,
     @16/MTC_INSTRU/,
     @17/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Sub_Doors_Motion_Monitoring *outC)
{
  /* _L28/, stimulus/ */
  kcg_bool _L28;
  /* _L24/ */
  kcg_bool _L24;
  /* _L22/, behaviour_expected/ */
  kcg_bool _L22;
  /* MTC_sig_fire_5/, _L11/, _L18/, all_close_true/ */
  kcg_bool MTC_sig_fire_5;
  /* @9/_/v4/ */
  kcg_int32 v4_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32;
  /* @5/MTC_CC_4/, _L17/, _L8/, all_open_true/ */
  kcg_bool MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;
  /* @5/v4/ */
  kcg_int32 v4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;

  outC->_15_Sub_Doors_Motion_Monitoring_state_sel =
    outC->Sub_Doors_Motion_Monitoring_state_nxt;
  _L28 = open_close_EV & (!outC->MTC_open_close_EV);
  MTC_sig_fire_5 = !(ctrl_status | doors_status_front | doors_status_right |
      doors_status_left);
  _L24 = !MTC_sig_fire_5;
  MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
    ctrl_status & doors_status_front & doors_status_right & doors_status_left;
  _L22 = ((!(ctrl_status &
          MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1)) &
      MTC_sig_fire_5) |
    (MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 &
      ctrl_status & _L24);
  if (MTC_INSTRU) {
    /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      _L28,
      (kcg_bool) !_L28,
      &outC->_9_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1);
    outC->_4_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1 =
      outC->_9_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1.Output1;
    /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      _L22,
      (kcg_bool) !_L22,
      &outC->_8_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1);
    outC->_3_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1 =
      outC->_8_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1.Output1;
    /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1,
      (kcg_bool)
        !MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1,
      &outC->_7_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1);
    outC->_2_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1 =
      outC->_7_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1.Output1;
    /* @15/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      MTC_sig_fire_5,
      _L24,
      &outC->Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1);
    outC->_1_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1 =
      outC->Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1.Output1;
    /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
    LATCHALL02_MTC(
      outC->init,
      (kcg_bool) !outC->init,
      &outC->Context_LATCHALL02_MTC_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1);
    outC->MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1 =
      outC->Context_LATCHALL02_MTC_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1.Output1;
  }
  else {
    outC->_4_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->_3_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->_2_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->_1_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1 =
      kcg_lit_Result_MTC(0);
  }
  outC->init = kcg_false;
  /* Sub_Doors_Motion_Monitoring: */
  switch (outC->_15_Sub_Doors_Motion_Monitoring_state_sel) {
    case SSM_st_WAITING_Sub_Doors_Motion_Monitoring :
      if (outC->Sub_Doors_Motion_Monitoring_reset_act) {
        outC->init6 = kcg_true;
        /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
        /* @6/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
        /* @5/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1);
      }
      /* @5/v4=, @9/_/v4= */
      if (outC->init6) {
        v4_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 =
          duration;
        v4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
          duration;
      }
      else {
        v4_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 =
          outC->v3_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32;
        v4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
          outC->v3_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;
      }
      /* @9/_/v3= */
      if (v4_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 <
        kcg_lit_int32(0)) {
        outC->v3_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 =
          v4_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32;
      }
      else {
        outC->v3_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 =
          v4_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 -
          kcg_lit_int32(1);
      }
      outC->tr_1_clock_WAITING_Sub_Doors_Motion_Monitoring =
        outC->v3_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 ==
        kcg_lit_int32(0);
      MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
        v4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 <
        kcg_lit_int32(0);
      /* @5/v3= */
      if (MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1) {
        outC->v3_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
          v4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;
      }
      else {
        outC->v3_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
          v4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 -
          kcg_lit_int32(1);
      }
      if (MTC_INSTRU) {
        /* @5/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC(
          (kcg_bool)
            (outC->v3_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 !=
              kcg_lit_int32(0)),
          (kcg_bool)
            (outC->v3_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 ==
              kcg_lit_int32(0)),
          kcg_false,
          MTC_CC_4_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1,
          &outC->Context_LATCHALL04_MTC_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1);
        outC->_5_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
          outC->Context_LATCHALL04_MTC_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1.Output1;
      }
      else {
        outC->_5_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
          kcg_lit_Result_MTC(0);
      }
      /* Sub_Doors_Motion_Monitoring:WAITING:<1> */
      if (outC->tr_1_clock_WAITING_Sub_Doors_Motion_Monitoring) {
        if (MTC_INSTRU) {
          /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_2 =
            outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2.Output1;
        }
        else {
          outC->MTC_ALL1_TRANSITION_MTC_OBS_2 = kcg_lit_Result_MTC(0);
        }
        outC->_14_Sub_Doors_Motion_Monitoring_state_act =
          SSM_st_ANOMALY_Sub_Doors_Motion_Monitoring;
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        outC->tr_2_clock_WAITING_Sub_Doors_Motion_Monitoring = _L22;
        if (_L22) {
          outC->_14_Sub_Doors_Motion_Monitoring_state_act =
            SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
        }
        else {
          outC->_14_Sub_Doors_Motion_Monitoring_state_act =
            SSM_st_WAITING_Sub_Doors_Motion_Monitoring;
        }
        /* Sub_Doors_Motion_Monitoring:WAITING:<2> */
        if (outC->tr_2_clock_WAITING_Sub_Doors_Motion_Monitoring) {
          if (MTC_INSTRU) {
            /* @6/MTC_ALL1=(MTC::LATCHALL01)/ */
            LATCHALL01_MTC(
              kcg_true,
              &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
            outC->MTC_ALL1_TRANSITION_MTC_OBS_3 =
              outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3.Output1;
          }
          else {
            outC->MTC_ALL1_TRANSITION_MTC_OBS_3 = kcg_lit_Result_MTC(0);
          }
          MTC_sig_fire_5 = kcg_true;
        }
        else {
          MTC_sig_fire_5 = kcg_false;
        }
      }
      outC->Sub_Doors_Motion_Monitoring_reset_act =
        outC->tr_1_clock_WAITING_Sub_Doors_Motion_Monitoring | _L22;
      outC->init6 = kcg_false;
      break;
    case SSM_st_ANOMALY_Sub_Doors_Motion_Monitoring :
      outC->_14_Sub_Doors_Motion_Monitoring_state_act =
        SSM_st_ANOMALY_Sub_Doors_Motion_Monitoring;
      outC->Sub_Doors_Motion_Monitoring_reset_act = kcg_false;
      MTC_sig_fire_5 = kcg_false;
      break;
    case SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring :
      outC->tr_1_clock_NO_ANOMALY_Sub_Doors_Motion_Monitoring = _L28;
      if (outC->Sub_Doors_Motion_Monitoring_reset_act) {
        /* @8/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_13_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
      }
      if (_L28) {
        outC->_14_Sub_Doors_Motion_Monitoring_state_act =
          SSM_st_WAITING_Sub_Doors_Motion_Monitoring;
      }
      else {
        outC->_14_Sub_Doors_Motion_Monitoring_state_act =
          SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
      }
      /* Sub_Doors_Motion_Monitoring:NO_ANOMALY:<1> */
      if (outC->tr_1_clock_NO_ANOMALY_Sub_Doors_Motion_Monitoring) {
        if (MTC_INSTRU) {
          /* @8/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_13_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_1 =
            outC->_13_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1.Output1;
        }
        else {
          outC->MTC_ALL1_TRANSITION_MTC_OBS_1 = kcg_lit_Result_MTC(0);
        }
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        MTC_sig_fire_5 = kcg_false;
      }
      outC->Sub_Doors_Motion_Monitoring_reset_act = _L28;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Sub_Doors_Motion_Monitoring: */
  switch (outC->_14_Sub_Doors_Motion_Monitoring_state_act) {
    case SSM_st_WAITING_Sub_Doors_Motion_Monitoring :
      if (outC->Sub_Doors_Motion_Monitoring_reset_act) {
        /* @1/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
      }
      if (MTC_INSTRU) {
        /* @1/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
        outC->MTC_ALL1_STATE_MTC_OBS_3 =
          outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_3 = kcg_lit_Result_MTC(0);
      }
      outC->doors_anomaly = kcg_false;
      outC->Sub_Doors_Motion_Monitoring_state_nxt =
        SSM_st_WAITING_Sub_Doors_Motion_Monitoring;
      break;
    case SSM_st_ANOMALY_Sub_Doors_Motion_Monitoring :
      if (outC->Sub_Doors_Motion_Monitoring_reset_act) {
        /* @2/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
      }
      if (MTC_INSTRU) {
        /* @2/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
        outC->MTC_ALL1_STATE_MTC_OBS_2 =
          outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_2.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_2 = kcg_lit_Result_MTC(0);
      }
      outC->doors_anomaly = kcg_true;
      outC->Sub_Doors_Motion_Monitoring_state_nxt =
        SSM_st_ANOMALY_Sub_Doors_Motion_Monitoring;
      break;
    case SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring :
      if (outC->Sub_Doors_Motion_Monitoring_reset_act) {
        /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_11_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
      }
      if (MTC_INSTRU) {
        /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_11_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
        outC->MTC_ALL1_STATE_MTC_OBS_1 =
          outC->_11_Context_LATCHALL02_MTC_STATE_MTC_OBS_1.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_1 = kcg_lit_Result_MTC(0);
      }
      outC->doors_anomaly = kcg_false;
      outC->Sub_Doors_Motion_Monitoring_state_nxt =
        SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->MTC_open_close_EV = open_close_EV;
}

#ifndef KCG_USER_DEFINED_INIT
void Sub_Doors_Motion_Monitoring_init(outC_Sub_Doors_Motion_Monitoring *outC)
{
  outC->Sub_Doors_Motion_Monitoring_reset_act = kcg_false;
  outC->MTC_open_close_EV = kcg_false;
  outC->doors_anomaly = kcg_true;
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  outC->tr_2_clock_WAITING_Sub_Doors_Motion_Monitoring = kcg_true;
  outC->tr_1_clock_WAITING_Sub_Doors_Motion_Monitoring = kcg_true;
  outC->tr_1_clock_NO_ANOMALY_Sub_Doors_Motion_Monitoring = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_3);
  Result_MTC_init(
    &outC->_5_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_3);
  Result_MTC_init(
    &outC->_4_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1);
  Result_MTC_init(
    &outC->_1_MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1);
  outC->_15_Sub_Doors_Motion_Monitoring_state_sel =
    SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
  outC->_14_Sub_Doors_Motion_Monitoring_state_act =
    SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
  outC->v3_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1 =
    kcg_lit_int32(0);
  outC->v3_times_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32 =
    kcg_lit_int32(0);
  /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1);
  /* @15/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_7_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_8_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1);
  /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_9_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @2/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_11_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_13_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->Sub_Doors_Motion_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sub_Doors_Motion_Monitoring_reset(outC_Sub_Doors_Motion_Monitoring *outC)
{
  outC->Sub_Doors_Motion_Monitoring_reset_act = kcg_false;
  outC->MTC_open_close_EV = kcg_false;
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST_1);
  /* @15/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_7_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_8_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS_1);
  /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_9_Context_LATCHALL03_MTC_Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @2/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_11_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @8/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_13_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->Sub_Doors_Motion_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Sub_Doors_Motion_Monitoring/
  @4: (MTCEx::MTC_Instrumenters::Sub_Doors_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST#1)
  @9: @4/(times#1)
  @16: (MTCEx::MTC_Instrumenters::Sub_Doors_Motion_Monitoring_MTC_open_close_EV_last_MTC_INST#1)
  @17: @16/(MTCEx::MTC_Observers::Sub_Doors_Motion_Monitoring_PATHS1_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::Sub_Doors_Motion_Monitoring_PATHS6_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::Sub_Doors_Motion_Monitoring_PATHS5_MTC_OBS#1)
  @13: (MTCEx::MTC_Observers::Sub_Doors_Motion_Monitoring_PATHS4_MTC_OBS#1)
  @12: (MTCEx::MTC_Observers::Sub_Doors_Motion_Monitoring_PATHS3_MTC_OBS#1)
  @1: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @2: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @5: @4/(MTCEx::MTC_Observers::Sub_Doors_Motion_Monitoring_PATHS2_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @7: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @8: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub_Doors_Motion_Monitoring.c
** Generation date: 2020-02-07T16:18:02
*************************************************************$ */

