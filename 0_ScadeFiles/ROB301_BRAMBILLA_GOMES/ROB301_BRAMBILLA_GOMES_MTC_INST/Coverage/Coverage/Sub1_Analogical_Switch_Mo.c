/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sub1_Analogical_Switch_Mo.h"

/* Sub1_Analogical_Switch_Monitoring/ */
void Sub1_Analogical_Switch_Mo(
  /* _L3/, handle/ */
  kcg_bool handle,
  /* analogical_Switch/ */
  kcg_bool analogical_Switch,
  /* duration/ */
  kcg_int32 duration,
  /* @13/MTC_INSTRU/,
     @14/MTC_INSTRU/,
     @15/MTC_INSTRU/,
     @16/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Sub1_Analogical_Switch_Mo *outC)
{
  /* _L4/, handle_Change/ */
  kcg_bool _L4;
  /* MTC_sig_fire_5/ */
  kcg_bool MTC_sig_fire_5;
  /* @1/MTC_guard/, @2/_/o/, Sub1_Analogical_Switch_Monitoring:WAITING:<2> */
  kcg_bool tr_2_guard_WAITING_Sub1_Analogical_Switch_Monitoring;
  /* @2/_/v4/ */
  kcg_int32 v4_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32;
  /* @6/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;
  /* @6/v4/ */
  kcg_int32 v4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;

  outC->_12_Sub1_Analogical_Switch_Monitoring_state_sel =
    outC->_4_Sub1_Analogical_Switch_Monitoring_state_nxt;
  _L4 = handle != outC->MTC_handle;
  if (MTC_INSTRU) {
    /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      _L4,
      (kcg_bool) !_L4,
      &outC->Context_LATCHALL03_MTC_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
    outC->_1_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1 =
      outC->Context_LATCHALL03_MTC_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1.Output1;
    /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
    LATCHALL02_MTC(
      outC->init5,
      (kcg_bool) !outC->init5,
      &outC->Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
    outC->MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1 =
      outC->Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1.Output1;
  }
  else {
    outC->_1_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1 =
      kcg_lit_Result_MTC(0);
  }
  outC->init5 = kcg_false;
  /* Sub1_Analogical_Switch_Monitoring: */
  switch (outC->_12_Sub1_Analogical_Switch_Monitoring_state_sel) {
    case SSM_st_ANOMALY_Sub1_Analogical_Switch_Monitoring :
      outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
        SSM_st_ANOMALY_Sub1_Analogical_Switch_Monitoring;
      outC->Sub1_Analogical_Switch_Monitoring_reset_act = kcg_false;
      MTC_sig_fire_5 = kcg_false;
      break;
    case SSM_st_WAITING_Sub1_Analogical_Switch_Monitoring :
      outC->tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring = !analogical_Switch;
      if (outC->Sub1_Analogical_Switch_Monitoring_reset_act) {
        outC->init = kcg_true;
        /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
        /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
        /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_8_Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3);
        /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23);
      }
      /* @2/_/v4=, @6/v4= */
      if (outC->init) {
        v4_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 =
          duration;
        v4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
          duration;
      }
      else {
        v4_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 =
          outC->v3_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32;
        v4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
          outC->v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;
      }
      /* @2/_/v3= */
      if (v4_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 <
        kcg_lit_int32(0)) {
        outC->v3_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 =
          v4_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32;
      }
      else {
        outC->v3_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 =
          v4_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 -
          kcg_lit_int32(1);
      }
      tr_2_guard_WAITING_Sub1_Analogical_Switch_Monitoring =
        outC->v3_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 ==
        kcg_lit_int32(0);
      MTC_CC_4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
        v4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 <
        kcg_lit_int32(0);
      /* @6/v3= */
      if (MTC_CC_4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23) {
        outC->v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
          v4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;
      }
      else {
        outC->v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
          v4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 -
          kcg_lit_int32(1);
      }
      if (MTC_INSTRU) {
        /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          outC->tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring,
          (kcg_bool) !outC->tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring,
          &outC->_8_Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3);
        outC->_3_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3 =
          outC->_8_Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3.Output1;
        /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC(
          (kcg_bool)
            (outC->v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 !=
              kcg_lit_int32(0)),
          (kcg_bool)
            (outC->v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 ==
              kcg_lit_int32(0)),
          kcg_false,
          MTC_CC_4_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23,
          &outC->Context_LATCHALL04_MTC_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23);
        outC->_2_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
          outC->Context_LATCHALL04_MTC_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23.Output1;
      }
      else {
        outC->_3_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3 =
          kcg_lit_Result_MTC(0);
        outC->_2_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
          kcg_lit_Result_MTC(0);
      }
      /* Sub1_Analogical_Switch_Monitoring:WAITING:<1> */
      if (outC->tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring) {
        if (MTC_INSTRU) {
          /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_2 =
            outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2.Output1;
        }
        else {
          outC->MTC_ALL1_TRANSITION_MTC_OBS_2 = kcg_lit_Result_MTC(0);
        }
        outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
          SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        outC->tr_2_clock_WAITING_Sub1_Analogical_Switch_Monitoring =
          tr_2_guard_WAITING_Sub1_Analogical_Switch_Monitoring;
        if (tr_2_guard_WAITING_Sub1_Analogical_Switch_Monitoring) {
          outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
            SSM_st_ANOMALY_Sub1_Analogical_Switch_Monitoring;
        }
        else {
          outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
            SSM_st_WAITING_Sub1_Analogical_Switch_Monitoring;
        }
        /* Sub1_Analogical_Switch_Monitoring:WAITING:<2> */
        if (outC->tr_2_clock_WAITING_Sub1_Analogical_Switch_Monitoring) {
          if (MTC_INSTRU) {
            /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
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
      outC->Sub1_Analogical_Switch_Monitoring_reset_act =
        outC->tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring |
        tr_2_guard_WAITING_Sub1_Analogical_Switch_Monitoring;
      outC->init = kcg_false;
      break;
    case SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring :
      outC->tr_1_clock_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring = _L4;
      if (outC->Sub1_Analogical_Switch_Monitoring_reset_act) {
        /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
      }
      if (_L4) {
        outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
          SSM_st_WAITING_Sub1_Analogical_Switch_Monitoring;
      }
      else {
        outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
          SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
      }
      /* Sub1_Analogical_Switch_Monitoring:NO_ANOMALY:<1> */
      if (outC->tr_1_clock_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring) {
        if (MTC_INSTRU) {
          /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_1 =
            outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1.Output1;
        }
        else {
          outC->MTC_ALL1_TRANSITION_MTC_OBS_1 = kcg_lit_Result_MTC(0);
        }
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        MTC_sig_fire_5 = kcg_false;
      }
      outC->Sub1_Analogical_Switch_Monitoring_reset_act = _L4;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Sub1_Analogical_Switch_Monitoring: */
  switch (outC->_11_Sub1_Analogical_Switch_Monitoring_state_act) {
    case SSM_st_ANOMALY_Sub1_Analogical_Switch_Monitoring :
      if (outC->Sub1_Analogical_Switch_Monitoring_reset_act) {
        /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
      }
      if (MTC_INSTRU) {
        /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
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
      outC->anomaly = kcg_true;
      outC->_4_Sub1_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_ANOMALY_Sub1_Analogical_Switch_Monitoring;
      break;
    case SSM_st_WAITING_Sub1_Analogical_Switch_Monitoring :
      if (outC->Sub1_Analogical_Switch_Monitoring_reset_act) {
        /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
      }
      if (MTC_INSTRU) {
        /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
        outC->MTC_ALL1_STATE_MTC_OBS_2 =
          outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_2 = kcg_lit_Result_MTC(0);
      }
      outC->anomaly = kcg_false;
      outC->_4_Sub1_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_WAITING_Sub1_Analogical_Switch_Monitoring;
      break;
    case SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring :
      if (outC->Sub1_Analogical_Switch_Monitoring_reset_act) {
        /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
      }
      if (MTC_INSTRU) {
        /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
        outC->MTC_ALL1_STATE_MTC_OBS_1 =
          outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_1 = kcg_lit_Result_MTC(0);
      }
      outC->anomaly = kcg_false;
      outC->_4_Sub1_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->MTC_handle = handle;
}

#ifndef KCG_USER_DEFINED_INIT
void Sub1_Analogical_Switch_Mo_init(outC_Sub1_Analogical_Switch_Mo *outC)
{
  outC->Sub1_Analogical_Switch_Monitoring_reset_act = kcg_false;
  outC->MTC_handle = kcg_false;
  outC->anomaly = kcg_true;
  outC->init = kcg_true;
  outC->init5 = kcg_true;
  outC->tr_2_clock_WAITING_Sub1_Analogical_Switch_Monitoring = kcg_true;
  outC->tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring = kcg_true;
  outC->tr_1_clock_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_3);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_3);
  Result_MTC_init(
    &outC->_1_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
  outC->_12_Sub1_Analogical_Switch_Monitoring_state_sel =
    SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
  outC->_11_Sub1_Analogical_Switch_Monitoring_state_act =
    SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
  outC->v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23 =
    kcg_lit_int32(0);
  outC->v3_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32 =
    kcg_lit_int32(0);
  /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23);
  /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_8_Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3);
  /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->_4_Sub1_Analogical_Switch_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sub1_Analogical_Switch_Mo_reset(outC_Sub1_Analogical_Switch_Mo *outC)
{
  outC->Sub1_Analogical_Switch_Monitoring_reset_act = kcg_false;
  outC->MTC_handle = kcg_false;
  outC->init = kcg_true;
  outC->init5 = kcg_true;
  /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23);
  /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_8_Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3);
  /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->_4_Sub1_Analogical_Switch_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Sub1_Analogical_Switch_Monitoring/
  @1: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST#23)
  @2: @1/(times#23)
  @15: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST#1)
  @16: @15/(MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @4: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @5: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @6: @1/(MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS#23)
  @7: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST#3)
  @8: @7/(MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @10: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @11: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub1_Analogical_Switch_Mo.c
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

