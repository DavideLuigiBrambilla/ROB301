/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sub2_Pression_Sensor_Moni.h"

/* Sub2_Pression_Sensor_Monitoring/ */
void Sub2_Pression_Sensor_Moni(
  /* _L4/, general_EV/ */
  kcg_bool general_EV,
  /* circuit_Pressurized/ */
  kcg_bool circuit_Pressurized,
  /* duration/ */
  kcg_int32 duration,
  /* @13/MTC_INSTRU/,
     @14/MTC_INSTRU/,
     @15/MTC_INSTRU/,
     @16/MTC_INSTRU/,
     MTC_INSTRU/ */
  kcg_bool MTC_INSTRU,
  outC_Sub2_Pression_Sensor_Moni *outC)
{
  /* _L9/, stimulus/ */
  kcg_bool _L9;
  /* MTC_sig_fire_5/ */
  kcg_bool MTC_sig_fire_5;
  /* @1/MTC_guard/, @2/_/o/, Sub2_Pression_Sensor_Monitoring:WAITING:<2> */
  kcg_bool tr_2_guard_WAITING_Sub2_Pression_Sensor_Monitoring;
  /* @2/_/v4/ */
  kcg_int32 v4_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32;
  /* @6/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1;
  /* @6/v4/ */
  kcg_int32 v4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1;

  outC->_12_Sub2_Pression_Sensor_Monitoring_state_sel =
    outC->_4_Sub2_Pression_Sensor_Monitoring_state_nxt;
  _L9 = (!general_EV) & outC->MTC_general_EV;
  if (MTC_INSTRU) {
    /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
    LATCHALL03_MTC(
      kcg_true,
      _L9,
      (kcg_bool) !_L9,
      &outC->Context_LATCHALL03_MTC_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1);
    outC->_1_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1 =
      outC->Context_LATCHALL03_MTC_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1.Output1;
    /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
    LATCHALL02_MTC(
      outC->init5,
      (kcg_bool) !outC->init5,
      &outC->Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1);
    outC->MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1 =
      outC->Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1.Output1;
  }
  else {
    outC->_1_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1 =
      kcg_lit_Result_MTC(0);
    outC->MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1 =
      kcg_lit_Result_MTC(0);
  }
  outC->init5 = kcg_false;
  /* Sub2_Pression_Sensor_Monitoring: */
  switch (outC->_12_Sub2_Pression_Sensor_Monitoring_state_sel) {
    case SSM_st_ANOMALY_Sub2_Pression_Sensor_Monitoring :
      outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
        SSM_st_ANOMALY_Sub2_Pression_Sensor_Monitoring;
      outC->Sub2_Pression_Sensor_Monitoring_reset_act = kcg_false;
      MTC_sig_fire_5 = kcg_false;
      break;
    case SSM_st_WAITING_Sub2_Pression_Sensor_Monitoring :
      outC->tr_1_clock_WAITING_Sub2_Pression_Sensor_Monitoring = !circuit_Pressurized;
      if (outC->Sub2_Pression_Sensor_Monitoring_reset_act) {
        outC->init = kcg_true;
        /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
        /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
        /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_8_Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2);
        /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1);
      }
      /* @2/_/v4=, @6/v4= */
      if (outC->init) {
        v4_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 =
          duration;
        v4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
          duration;
      }
      else {
        v4_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 =
          outC->v3_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32;
        v4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
          outC->v3_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1;
      }
      /* @2/_/v3= */
      if (v4_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 <
        kcg_lit_int32(0)) {
        outC->v3_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 =
          v4_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32;
      }
      else {
        outC->v3_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 =
          v4_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 -
          kcg_lit_int32(1);
      }
      tr_2_guard_WAITING_Sub2_Pression_Sensor_Monitoring =
        outC->v3_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 ==
        kcg_lit_int32(0);
      MTC_CC_4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
        v4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 <
        kcg_lit_int32(0);
      /* @6/v3= */
      if (MTC_CC_4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1) {
        outC->v3_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
          v4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1;
      }
      else {
        outC->v3_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
          v4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 -
          kcg_lit_int32(1);
      }
      if (MTC_INSTRU) {
        /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC(
          outC->tr_1_clock_WAITING_Sub2_Pression_Sensor_Monitoring,
          (kcg_bool) !outC->tr_1_clock_WAITING_Sub2_Pression_Sensor_Monitoring,
          &outC->_8_Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2);
        outC->_3_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2 =
          outC->_8_Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2.Output1;
        /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC(
          (kcg_bool)
            (outC->v3_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 !=
              kcg_lit_int32(0)),
          (kcg_bool)
            (outC->v3_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 ==
              kcg_lit_int32(0)),
          kcg_false,
          MTC_CC_4_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1,
          &outC->Context_LATCHALL04_MTC_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1);
        outC->_2_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
          outC->Context_LATCHALL04_MTC_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1.Output1;
      }
      else {
        outC->_3_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2 =
          kcg_lit_Result_MTC(0);
        outC->_2_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
          kcg_lit_Result_MTC(0);
      }
      /* Sub2_Pression_Sensor_Monitoring:WAITING:<1> */
      if (outC->tr_1_clock_WAITING_Sub2_Pression_Sensor_Monitoring) {
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
        outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
          SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
        MTC_sig_fire_5 = kcg_true;
      }
      else {
        outC->tr_2_clock_WAITING_Sub2_Pression_Sensor_Monitoring =
          tr_2_guard_WAITING_Sub2_Pression_Sensor_Monitoring;
        if (tr_2_guard_WAITING_Sub2_Pression_Sensor_Monitoring) {
          outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
            SSM_st_ANOMALY_Sub2_Pression_Sensor_Monitoring;
        }
        else {
          outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
            SSM_st_WAITING_Sub2_Pression_Sensor_Monitoring;
        }
        /* Sub2_Pression_Sensor_Monitoring:WAITING:<2> */
        if (outC->tr_2_clock_WAITING_Sub2_Pression_Sensor_Monitoring) {
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
      outC->Sub2_Pression_Sensor_Monitoring_reset_act =
        outC->tr_1_clock_WAITING_Sub2_Pression_Sensor_Monitoring |
        tr_2_guard_WAITING_Sub2_Pression_Sensor_Monitoring;
      outC->init = kcg_false;
      break;
    case SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring :
      outC->tr_1_clock_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring = _L9;
      if (outC->Sub2_Pression_Sensor_Monitoring_reset_act) {
        /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
      }
      if (_L9) {
        outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
          SSM_st_WAITING_Sub2_Pression_Sensor_Monitoring;
      }
      else {
        outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
          SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
      }
      /* Sub2_Pression_Sensor_Monitoring:NO_ANOMALY:<1> */
      if (outC->tr_1_clock_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring) {
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
      outC->Sub2_Pression_Sensor_Monitoring_reset_act = _L9;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Sub2_Pression_Sensor_Monitoring: */
  switch (outC->_11_Sub2_Pression_Sensor_Monitoring_state_act) {
    case SSM_st_ANOMALY_Sub2_Pression_Sensor_Monitoring :
      if (outC->Sub2_Pression_Sensor_Monitoring_reset_act) {
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
      outC->pressure_anomaly = kcg_true;
      outC->_4_Sub2_Pression_Sensor_Monitoring_state_nxt =
        SSM_st_ANOMALY_Sub2_Pression_Sensor_Monitoring;
      break;
    case SSM_st_WAITING_Sub2_Pression_Sensor_Monitoring :
      if (outC->Sub2_Pression_Sensor_Monitoring_reset_act) {
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
      outC->pressure_anomaly = kcg_false;
      outC->_4_Sub2_Pression_Sensor_Monitoring_state_nxt =
        SSM_st_WAITING_Sub2_Pression_Sensor_Monitoring;
      break;
    case SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring :
      if (outC->Sub2_Pression_Sensor_Monitoring_reset_act) {
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
      outC->pressure_anomaly = kcg_false;
      outC->_4_Sub2_Pression_Sensor_Monitoring_state_nxt =
        SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->MTC_general_EV = general_EV;
}

#ifndef KCG_USER_DEFINED_INIT
void Sub2_Pression_Sensor_Moni_init(outC_Sub2_Pression_Sensor_Moni *outC)
{
  outC->Sub2_Pression_Sensor_Monitoring_reset_act = kcg_false;
  outC->MTC_general_EV = kcg_false;
  outC->pressure_anomaly = kcg_true;
  outC->init = kcg_true;
  outC->init5 = kcg_true;
  outC->tr_2_clock_WAITING_Sub2_Pression_Sensor_Monitoring = kcg_true;
  outC->tr_1_clock_WAITING_Sub2_Pression_Sensor_Monitoring = kcg_true;
  outC->tr_1_clock_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_3);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_3);
  Result_MTC_init(
    &outC->_1_MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1);
  Result_MTC_init(
    &outC->MTC_ALL1_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1);
  outC->_12_Sub2_Pression_Sensor_Monitoring_state_sel =
    SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
  outC->_11_Sub2_Pression_Sensor_Monitoring_state_act =
    SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
  outC->v3_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1 =
    kcg_lit_int32(0);
  outC->v3_times_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1_int32 =
    kcg_lit_int32(0);
  /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1);
  /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_8_Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2);
  /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->_4_Sub2_Pression_Sensor_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sub2_Pression_Sensor_Moni_reset(outC_Sub2_Pression_Sensor_Moni *outC)
{
  outC->Sub2_Pression_Sensor_Monitoring_reset_act = kcg_false;
  outC->MTC_general_EV = kcg_false;
  outC->init = kcg_true;
  outC->init5 = kcg_true;
  /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST_1);
  /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_8_Context_LATCHALL02_MTC_Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS_1_Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST_2);
  /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->_4_Sub2_Pression_Sensor_Monitoring_state_nxt =
    SSM_st_NO_ANOMALY_Sub2_Pression_Sensor_Monitoring;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Sub2_Pression_Sensor_Monitoring/
  @1: (MTCEx::MTC_Instrumenters::Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_2_MTC_INST#1)
  @2: @1/(times#1)
  @15: (MTCEx::MTC_Instrumenters::Sub2_Pression_Sensor_Monitoring_MTC_general_EV_last_MTC_INST#1)
  @16: @15/(MTCEx::MTC_Observers::Sub2_Pression_Sensor_Monitoring_PATHS1_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::Sub2_Pression_Sensor_Monitoring_PATHS4_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @4: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @5: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @6: @1/(MTCEx::MTC_Observers::Sub2_Pression_Sensor_Monitoring_PATHS2_MTC_OBS#1)
  @7: (MTCEx::MTC_Instrumenters::Sub2_Pression_Sensor_Monitoring_Sub2_Pression_Sensor_Monitoring_WAITING_1_MTC_INST#2)
  @8: @7/(MTCEx::MTC_Observers::Sub2_Pression_Sensor_Monitoring_PATHS3_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @10: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @11: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub2_Pression_Sensor_Moni.c
** Generation date: 2020-02-07T16:14:03
*************************************************************$ */

