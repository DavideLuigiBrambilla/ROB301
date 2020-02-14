/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sub2_Analogical_Switch_Mo.h"

/* Sub2_Analogical_Switch_Monitoring/ */
void Sub2_Analogical_Switch_Mo(
  /* _L2/, handle/ */
  kcg_bool handle,
  /* analogical_Switch/ */
  kcg_bool analogical_Switch,
  /* duration1/ */
  kcg_int32 duration1,
  /* duration2/ */
  kcg_int32 duration2,
  /* @18/MTC_INSTRU/,
     @19/MTC_INSTRU/,
     @20/MTC_INSTRU/,
     @21/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Sub2_Analogical_Switch_Mo *outC)
{
  /* _L3/, handle_Change/ */
  kcg_bool _L3;
  /* MTC_sig_fire_5/ */
  kcg_bool MTC_sig_fire_5;
  /* @1/MTC_guard/, @2/_/o/, Sub2_Analogical_Switch_Monitoring:WAITING:<2> */
  kcg_bool tr_2_guard_WAITING_Sub2_Analogical_Switch_Monitoring;
  /* @2/_/v4/ */
  kcg_int32 v4_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32;
  /* @8/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
  /* @8/v4/ */
  kcg_int32 v4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
  /* @17/_/v4/ */
  kcg_int32 v4_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32;
  /* @12/MTC_CC_4/ */
  kcg_bool _1_MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;
  /* @12/v4/ */
  kcg_int32 _2_v4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;

  outC->_17_Sub2_Analogical_Switch_Monitoring_state_sel =
    outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt;
  _L3 = handle != outC->MTC_handle;
  if (MTC_INSTRU) {
    /* @19/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      _L3,
      (kcg_bool) !_L3,
      &outC->Context_LATCHALL03_MTC_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
    outC->_1_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1 =
      outC->Context_LATCHALL03_MTC_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1.Output1;
    /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
    LATCHALL02_MTC(
      outC->init6,
      (kcg_bool) !outC->init6,
      &outC->Context_LATCHALL02_MTC_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
    outC->MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1 =
      outC->Context_LATCHALL02_MTC_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1.Output1;
  }
  else {
    outC->_1_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1 =
      kcg_lit_Result_MTC(0);
  }
  outC->init6 = kcg_false;
  /* Sub2_Analogical_Switch_Monitoring: */
  switch (outC->_17_Sub2_Analogical_Switch_Monitoring_state_sel) {
    case SSM_st_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring :
      outC->tr_1_clock_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring = kcg_true;
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
      }
      if (MTC_INSTRU) {
        /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_5 =
          outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5.Output1;
      }
      else {
        outC->MTC_ALL1_TRANSITION_MTC_OBS_5 = kcg_lit_Result_MTC(0);
      }
      outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
        SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
      outC->Sub2_Analogical_Switch_Monitoring_reset_act = kcg_true;
      MTC_sig_fire_5 = kcg_true;
      break;
    case SSM_st_ANOMALY_Sub2_Analogical_Switch_Monitoring :
      outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
        SSM_st_ANOMALY_Sub2_Analogical_Switch_Monitoring;
      outC->Sub2_Analogical_Switch_Monitoring_reset_act = kcg_false;
      MTC_sig_fire_5 = kcg_false;
      break;
    case SSM_st_WAITING_Sub2_Analogical_Switch_Monitoring :
      outC->tr_1_clock_WAITING_Sub2_Analogical_Switch_Monitoring = analogical_Switch;
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        outC->init = kcg_true;
        /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
        /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_11_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
        /* @8/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1);
      }
      /* @2/_/v4=, @8/v4= */
      if (outC->init) {
        v4_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 =
          duration2;
        v4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
          duration2;
      }
      else {
        v4_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 =
          outC->v3_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32;
        v4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
          outC->v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
      }
      /* @2/_/v3= */
      if (v4_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 <
        kcg_lit_int32(0)) {
        outC->v3_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 =
          v4_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32;
      }
      else {
        outC->v3_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 =
          v4_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 -
          kcg_lit_int32(1);
      }
      tr_2_guard_WAITING_Sub2_Analogical_Switch_Monitoring =
        outC->v3_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 ==
        kcg_lit_int32(0);
      MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
        v4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 <
        kcg_lit_int32(0);
      /* @8/v3= */
      if (MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1) {
        outC->v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
          v4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
      }
      else {
        outC->v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
          v4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 -
          kcg_lit_int32(1);
      }
      if (MTC_INSTRU) {
        /* @8/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC(
          (kcg_bool)
            (outC->v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 !=
              kcg_lit_int32(0)),
          (kcg_bool)
            (outC->v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 ==
              kcg_lit_int32(0)),
          kcg_false,
          MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1,
          &outC->Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1);
        outC->_2_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
          outC->Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1.Output1;
      }
      else {
        outC->_2_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
          kcg_lit_Result_MTC(0);
      }
      if (analogical_Switch) {
        outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
          SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
      }
      else if (tr_2_guard_WAITING_Sub2_Analogical_Switch_Monitoring) {
        outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
          SSM_st_ANOMALY_Sub2_Analogical_Switch_Monitoring;
      }
      else {
        outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
          SSM_st_WAITING_Sub2_Analogical_Switch_Monitoring;
      }
      /* Sub2_Analogical_Switch_Monitoring:WAITING:<1> */
      if (outC->tr_1_clock_WAITING_Sub2_Analogical_Switch_Monitoring) {
        if (MTC_INSTRU) {
          /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_3 =
            outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3.Output1;
        }
        else {
          outC->MTC_ALL1_TRANSITION_MTC_OBS_3 = kcg_lit_Result_MTC(0);
        }
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        outC->tr_2_clock_WAITING_Sub2_Analogical_Switch_Monitoring =
          tr_2_guard_WAITING_Sub2_Analogical_Switch_Monitoring;
        /* Sub2_Analogical_Switch_Monitoring:WAITING:<2> */
        if (outC->tr_2_clock_WAITING_Sub2_Analogical_Switch_Monitoring) {
          if (MTC_INSTRU) {
            /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
            LATCHALL01_MTC(
              kcg_true,
              &outC->_11_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
            outC->MTC_ALL1_TRANSITION_MTC_OBS_4 =
              outC->_11_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4.Output1;
          }
          else {
            outC->MTC_ALL1_TRANSITION_MTC_OBS_4 = kcg_lit_Result_MTC(0);
          }
          MTC_sig_fire_5 = kcg_true;
        }
        else {
          MTC_sig_fire_5 = kcg_false;
        }
      }
      outC->Sub2_Analogical_Switch_Monitoring_reset_act = analogical_Switch |
        tr_2_guard_WAITING_Sub2_Analogical_Switch_Monitoring;
      outC->init = kcg_false;
      break;
    case SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring :
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        outC->init7 = kcg_true;
        /* @14/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_15_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
        /* @13/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_14_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
        /* @12/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_13_Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2);
      }
      /* @12/v4=, @17/_/v4= */
      if (outC->init7) {
        v4_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 =
          duration1;
        _2_v4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
          duration1;
      }
      else {
        v4_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 =
          outC->v3_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32;
        _2_v4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
          outC->_5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;
      }
      /* @17/_/v3= */
      if (v4_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 <
        kcg_lit_int32(0)) {
        outC->v3_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 =
          v4_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32;
      }
      else {
        outC->v3_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 =
          v4_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 -
          kcg_lit_int32(1);
      }
      outC->tr_1_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring =
        outC->v3_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 ==
        kcg_lit_int32(0);
      _1_MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
        _2_v4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 <
        kcg_lit_int32(0);
      /* @12/v3= */
      if (_1_MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2) {
        outC->_5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
          _2_v4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;
      }
      else {
        outC->_5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
          _2_v4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 -
          kcg_lit_int32(1);
      }
      if (MTC_INSTRU) {
        /* @12/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC(
          (kcg_bool)
            (outC->_5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 !=
              kcg_lit_int32(0)),
          (kcg_bool)
            (outC->_5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 ==
              kcg_lit_int32(0)),
          kcg_false,
          _1_MTC_CC_4_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2,
          &outC->_13_Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2);
        outC->_3_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
          outC->_13_Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2.Output1;
      }
      else {
        outC->_3_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
          kcg_lit_Result_MTC(0);
      }
      /* Sub2_Analogical_Switch_Monitoring:NO_ANOMALY:<1> */
      if (outC->tr_1_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring) {
        if (MTC_INSTRU) {
          /* @14/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_15_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_1 =
            outC->_15_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1.Output1;
        }
        else {
          outC->MTC_ALL1_TRANSITION_MTC_OBS_1 = kcg_lit_Result_MTC(0);
        }
        outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
          SSM_st_WAITING_Sub2_Analogical_Switch_Monitoring;
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        outC->tr_2_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring = _L3;
        if (_L3) {
          outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
            SSM_st_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring;
        }
        else {
          outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
            SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
        }
        /* Sub2_Analogical_Switch_Monitoring:NO_ANOMALY:<2> */
        if (outC->tr_2_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring) {
          if (MTC_INSTRU) {
            /* @13/MTC_ALL1=(MTC::LATCHALL01)/ */
            LATCHALL01_MTC(
              kcg_true,
              &outC->_14_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
            outC->MTC_ALL1_TRANSITION_MTC_OBS_2 =
              outC->_14_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2.Output1;
          }
          else {
            outC->MTC_ALL1_TRANSITION_MTC_OBS_2 = kcg_lit_Result_MTC(0);
          }
          MTC_sig_fire_5 = kcg_true;
        }
        else {
          MTC_sig_fire_5 = kcg_false;
        }
      }
      outC->Sub2_Analogical_Switch_Monitoring_reset_act =
        outC->tr_1_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring | _L3;
      outC->init7 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Sub2_Analogical_Switch_Monitoring: */
  switch (outC->_16_Sub2_Analogical_Switch_Monitoring_state_act) {
    case SSM_st_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring :
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
      }
      if (MTC_INSTRU) {
        /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
        outC->MTC_ALL1_STATE_MTC_OBS_4 =
          outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_4.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_4 = kcg_lit_Result_MTC(0);
      }
      outC->anomaly = kcg_false;
      outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring;
      break;
    case SSM_st_ANOMALY_Sub2_Analogical_Switch_Monitoring :
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_8_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
      }
      if (MTC_INSTRU) {
        /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_8_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
        outC->MTC_ALL1_STATE_MTC_OBS_3 =
          outC->_8_Context_LATCHALL02_MTC_STATE_MTC_OBS_3.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_3 = kcg_lit_Result_MTC(0);
      }
      outC->anomaly = kcg_true;
      outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_ANOMALY_Sub2_Analogical_Switch_Monitoring;
      break;
    case SSM_st_WAITING_Sub2_Analogical_Switch_Monitoring :
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_9_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
      }
      if (MTC_INSTRU) {
        /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_9_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
        outC->MTC_ALL1_STATE_MTC_OBS_2 =
          outC->_9_Context_LATCHALL02_MTC_STATE_MTC_OBS_2.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_2 = kcg_lit_Result_MTC(0);
      }
      outC->anomaly = kcg_false;
      outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_WAITING_Sub2_Analogical_Switch_Monitoring;
      break;
    case SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring :
      if (outC->Sub2_Analogical_Switch_Monitoring_reset_act) {
        /* @6/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
      }
      if (MTC_INSTRU) {
        /* @6/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          kcg_true,
          (kcg_bool) !MTC_sig_fire_5,
          &outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
        outC->MTC_ALL1_STATE_MTC_OBS_1 =
          outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_1.Output1;
      }
      else {
        outC->MTC_ALL1_STATE_MTC_OBS_1 = kcg_lit_Result_MTC(0);
      }
      outC->anomaly = kcg_false;
      outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt =
        SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->MTC_handle = handle;
}

#ifndef KCG_USER_DEFINED_INIT
void Sub2_Analogical_Switch_Mo_init(outC_Sub2_Analogical_Switch_Mo *outC)
{
  outC->Sub2_Analogical_Switch_Monitoring_reset_act = kcg_false;
  outC->MTC_handle = kcg_false;
  outC->anomaly = kcg_true;
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->tr_1_clock_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring = kcg_true;
  outC->tr_2_clock_WAITING_Sub2_Analogical_Switch_Monitoring = kcg_true;
  outC->tr_1_clock_WAITING_Sub2_Analogical_Switch_Monitoring = kcg_true;
  outC->tr_2_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring = kcg_true;
  outC->tr_1_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_2);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_4);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_5);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_4);
  Result_MTC_init(
    &outC->_1_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
  outC->_17_Sub2_Analogical_Switch_Monitoring_state_sel =
    SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
  outC->_16_Sub2_Analogical_Switch_Monitoring_state_act =
    SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
  outC->_5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2 =
    kcg_lit_int32(0);
  outC->v3_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32 =
    kcg_lit_int32(0);
  outC->v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1 =
    kcg_lit_int32(0);
  outC->v3_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32 =
    kcg_lit_int32(0);
  /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
  /* @19/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
  /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_8_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_9_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @6/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
  /* @8/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1);
  /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_11_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
  /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @12/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_13_Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2);
  /* @13/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_14_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @14/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_15_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sub2_Analogical_Switch_Mo_reset(outC_Sub2_Analogical_Switch_Mo *outC)
{
  outC->Sub2_Analogical_Switch_Monitoring_reset_act = kcg_false;
  outC->MTC_handle = kcg_false;
  outC->init = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1);
  /* @19/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
  /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_8_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_9_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @6/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_10_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
  /* @8/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1);
  /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_11_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
  /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @12/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_13_Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2);
  /* @13/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_14_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @14/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_15_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->_4_Sub2_Analogical_Switch_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Sub2_Analogical_Switch_Monitoring/
  @1: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST#1)
  @2: @1/(times#1)
  @11: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST#2)
  @17: @11/(times#2)
  @20: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST#1)
  @21: @20/(MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS#1)
  @19: (MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#4)
  @4: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @6: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#5)
  @8: @1/(MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#4)
  @10: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @12: @11/(MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS#2)
  @13: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @14: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub2_Analogical_Switch_Mo.c
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

