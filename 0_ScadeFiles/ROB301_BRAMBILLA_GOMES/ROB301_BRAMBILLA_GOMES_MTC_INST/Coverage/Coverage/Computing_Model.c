/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:54:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Computing_Model.h"

/* Computing_Model/ */
void Computing_Model(inC_Computing_Model *inC, outC_Computing_Model *outC)
{
  /* @95/v4/ */
  kcg_int32 v4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
  /* @95/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
  /* @100/_/v4/ */
  kcg_size v4_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size;
  /* @83/v4/ */
  kcg_int32 v4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
  /* @83/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
  /* @2/_/v4/ */
  kcg_size v4_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size;
  /* @80/v4/ */
  kcg_int32 v4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
  /* @80/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
  /* @4/_/v4/ */
  kcg_size v4_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size;
  /* @76/v4/ */
  kcg_int32 v4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
  /* @76/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
  /* @109/_/v4/ */
  kcg_size v4_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size;
  /* @70/v4/ */
  kcg_int32 v4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
  /* @70/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
  /* @6/_/v4/ */
  kcg_size v4_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size;
  /* @65/v4/ */
  kcg_int32 v4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
  /* @65/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
  /* @8/_/v4/ */
  kcg_size v4_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size;
  /* @57/MTC_AC/, @57/MTC_AC_1/ */
  kcg_bool MTC_AC_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15;
  /* @40/v4/ */
  kcg_int32 v4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
  /* @40/MTC_CC_4/ */
  kcg_bool MTC_CC_4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
  /* @113/_/v4/ */
  kcg_size v4_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size;
  /* @37/v4/ */
  kcg_int32 v4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
  /* @37/MTC_CC_4/ */
  kcg_bool _1_MTC_CC_4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
  /* @114/_/v4/ */
  kcg_size v4_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size;
  /* @1/MTC_guard/, @2/_/o/, State_Machine_Extend_Gear:CLOSE_EV_OFF:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  /* @3/MTC_guard/, @4/_/o/, State_Machine_Extend_Gear:OPEN_EV_OFF:<2> */
  kcg_bool tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
  /* @5/MTC_guard/, @6/_/o/, State_Machine_Extend_Gear:OPEN_EV_OFF1:<2> */
  kcg_bool tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  /* @7/MTC_guard/, @8/_/o/, State_Machine_Extend_Gear:CLOSE_EV_OFF1:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  /* @57/MTC_guard/, State_Machine_Extend_Gear:OPEN_EV_ON1:<2><2> */
  kcg_bool tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2> */
  kcg_bool tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* MTC_sig_fire_15/ */
  kcg_bool MTC_sig_fire_15;
  /* State_Machine_Extend_Gear: */
  kcg_bool State_Machine_Extend_Gear_reset_prv;
  /* _L140/, all_shock_absorber_false/ */
  kcg_bool _L140;
  /* _L137/, all_gears_retracted/ */
  kcg_bool _L137;
  /* _L122/, all_doors_open/ */
  kcg_bool _L122;
  /* _L99/, all_doors_closed/ */
  kcg_bool _L99;
  /* _L94/, all_gears_extended/ */
  kcg_bool _L94;

  outC->_94_State_Machine_Extend_Gear_state_sel =
    outC->State_Machine_Extend_Gear_state_nxt;
  State_Machine_Extend_Gear_reset_prv = outC->State_Machine_Extend_Gear_reset_act;
  _L122 = inC->door_Open_front & inC->door_Open_right & inC->door_Open_left &
    (!(inC->door_Closed_front | inC->door_Closed_right | inC->door_Closed_left));
  _L94 = inC->gear_Extended_front & inC->gear_Extended_right &
    inC->gear_Extended_left & (!(inC->gear_Retracted_front |
        inC->gear_Retracted_right | inC->gear_Retracted_left));
  _L99 = inC->door_Closed_front & inC->door_Closed_right &
    inC->door_Closed_left & (!(inC->door_Open_front | inC->door_Open_right |
        inC->door_Open_left));
  _L140 = !(inC->gear_Shock_Absorber_front | inC->gear_Shock_Absorber_right |
      inC->gear_Shock_Absorber_left);
  _L137 = inC->gear_Retracted_front & inC->gear_Retracted_right &
    inC->gear_Retracted_left & (!(inC->gear_Extended_front |
        inC->gear_Extended_right | inC->gear_Extended_left));
  /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC(
    kcg_true,
    _L137,
    (kcg_bool) !_L137,
    &outC->_23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1);
  outC->_8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1 =
    outC->_23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1.Output1;
  /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC(
    kcg_true,
    _L122,
    (kcg_bool) !_L122,
    &outC->_22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1);
  outC->_9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1 =
    outC->_22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1.Output1;
  /* @11/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC(
    kcg_true,
    _L99,
    (kcg_bool) !_L99,
    &outC->_21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1);
  outC->_10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1 =
    outC->_21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1.Output1;
  /* @10/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC(
    kcg_true,
    _L140,
    (kcg_bool) !_L140,
    &outC->_20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1);
  outC->_11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1 =
    outC->_20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1.Output1;
  /* @9/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC(
    kcg_true,
    _L94,
    (kcg_bool) !_L94,
    &outC->Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1);
  outC->_12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1 =
    outC->Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1.Output1;
  /* State_Machine_Extend_Gear: */
  switch (outC->_94_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init = kcg_true;
      }
      /* @114/_/v4=, @37/v4= */
      if (outC->init) {
        v4_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size =
          1;
        v4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
          kcg_lit_int32(1);
      }
      else {
        v4_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size =
          outC->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size;
        v4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
          outC->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
      }
      /* @114/_/v3= */
      if (v4_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size <
        0) {
        outC->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size =
          v4_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size;
      }
      else {
        outC->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size =
          v4_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size -
          1;
      }
      outC->tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear =
        outC->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size ==
        0;
      _1_MTC_CC_4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
        v4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 <
        kcg_lit_int32(0);
      /* @37/v3= */
      if (_1_MTC_CC_4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26) {
        outC->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
          v4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
      }
      else {
        outC->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
          v4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 -
          kcg_lit_int32(1);
      }
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @38/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36);
        /* @37/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26);
      }
      /* @37/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 ==
            kcg_lit_int32(0)),
        kcg_false,
        _1_MTC_CC_4_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26,
        &outC->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26);
      outC->_7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
        outC->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26.Output1;
      /* State_Machine_Extend_Gear:WAITING_DOWN:<1> */
      if (outC->tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear) {
        /* @38/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_36 =
          outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        MTC_sig_fire_15 = kcg_false;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear;
      outC->init = kcg_false;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init13 = kcg_true;
      }
      /* @113/_/v4=, @40/v4= */
      if (outC->init13) {
        v4_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size =
          1;
        v4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
          kcg_lit_int32(1);
      }
      else {
        v4_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size =
          outC->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size;
        v4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
          outC->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
      }
      /* @113/_/v3= */
      if (v4_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size <
        0) {
        outC->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size =
          v4_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size;
      }
      else {
        outC->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size =
          v4_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size -
          1;
      }
      outC->tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear =
        outC->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size ==
        0;
      MTC_CC_4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
        v4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 <
        kcg_lit_int32(0);
      /* @40/v3= */
      if (MTC_CC_4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25) {
        outC->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
          v4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
      }
      else {
        outC->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
          v4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 -
          kcg_lit_int32(1);
      }
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @41/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35);
        /* @40/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25);
      }
      /* @40/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25,
        &outC->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25);
      outC->_6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
        outC->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25.Output1;
      /* State_Machine_Extend_Gear:WAITING_TO_UP:<1> */
      if (outC->tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear) {
        /* @41/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_35 =
          outC->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        MTC_sig_fire_15 = kcg_false;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear;
      outC->init13 = kcg_false;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      MTC_sig_fire_15 = kcg_true;
      outC->tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_true;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @42/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34);
      }
      /* @42/MTC_ALL1=(MTC::LATCHALL01)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34);
      outC->MTC_ALL1_TRANSITION_MTC_OBS_34 =
        outC->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34.Output1;
      outC->_95_State_Machine_Extend_Gear_state_act =
        SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      MTC_sig_fire_15 = kcg_true;
      outC->tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_true;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @43/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33);
      }
      /* @43/MTC_ALL1=(MTC::LATCHALL01)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33);
      outC->MTC_ALL1_TRANSITION_MTC_OBS_33 =
        outC->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33.Output1;
      outC->_95_State_Machine_Extend_Gear_state_act =
        SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      MTC_sig_fire_15 = kcg_true;
      outC->tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @44/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32);
      }
      /* @44/MTC_ALL1=(MTC::LATCHALL01)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32);
      outC->MTC_ALL1_TRANSITION_MTC_OBS_32 =
        outC->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32.Output1;
      outC->_95_State_Machine_Extend_Gear_state_act =
        SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      outC->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear = !inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @48/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30);
        /* @47/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31);
        /* @46/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18);
      }
      /* @46/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear,
        &outC->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18);
      outC->_5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18 =
        outC->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18.Output1;
      /* State_Machine_Extend_Gear:RETRAIT_EV_OFF:<1> */
      if (outC->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear) {
        /* @48/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_30 =
          outC->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        /* @47/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_31 =
          outC->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
        outC->tr_2_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      }
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      outC->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear = !inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @52/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28);
        /* @51/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29);
        /* @50/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17);
      }
      /* @50/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear,
        &outC->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17);
      outC->_4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17 =
        outC->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17.Output1;
      /* State_Machine_Extend_Gear:RETRACT_EV_ON:<1> */
      if (outC->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        /* @52/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_28 =
          outC->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else {
        outC->tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear = _L137;
        if (_L137) {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
        }
        else {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
        }
        /* State_Machine_Extend_Gear:RETRACT_EV_ON:<2> */
        if (outC->tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear) {
          /* @51/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_29 =
            outC->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear | _L137;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      outC->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear = !inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @56/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26);
        /* @55/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27);
        /* @54/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20);
      }
      /* @54/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear,
        &outC->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20);
      outC->_3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20 =
        outC->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20.Output1;
      /* State_Machine_Extend_Gear:CLOSE_EV_ON1:<1> */
      if (outC->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        /* @56/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_26 =
          outC->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else {
        outC->tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear = _L99;
        if (_L99) {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
        }
        else {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
        }
        /* State_Machine_Extend_Gear:CLOSE_EV_ON1:<2> */
        if (outC->tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
          /* @55/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_27 =
            outC->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear | _L99;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      outC->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear = !inC->handle;
      tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear = !_L140;
      tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear = _L122 & (_L140 |
          tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear);
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @64/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22);
        /* @63/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25);
        /* @62/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23);
        /* @61/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24);
        /* @60/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16);
        /* @58/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15);
      }
      /* @60/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear,
        &outC->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16);
      outC->_1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16 =
        outC->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16.Output1;
      MTC_AC_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15 =
        inC->handle & _L122 & tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
      /* @58/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        (kcg_bool)
          (tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear &
            MTC_AC_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15),
        (kcg_bool)
          ((!tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear) &
            MTC_AC_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15),
        &outC->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15);
      outC->_2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15 =
        outC->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15.Output1;
      /* State_Machine_Extend_Gear:OPEN_EV_ON1:<1> */
      if (outC->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        /* @64/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_22 =
          outC->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else {
        outC->tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear =
          tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
        if (tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
          if (_L140) {
            outC->_95_State_Machine_Extend_Gear_state_act =
              SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
          }
          else {
            outC->_95_State_Machine_Extend_Gear_state_act =
              SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
          }
        }
        else {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
        }
        /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2> */
        if (outC->tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear) {
          /* @63/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_25 =
            outC->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25.Output1;
          outC->tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear = _L140;
          if (outC->tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear) {
            /* @62/MTC_ALL1=(MTC::LATCHALL01)/ */
            LATCHALL01_MTC(
              kcg_true,
              &outC->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23);
            outC->MTC_ALL1_TRANSITION_MTC_OBS_23 =
              outC->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23.Output1;
          }
          else {
            outC->tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear =
              tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
            if (outC->tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear) {
              /* @61/MTC_ALL1=(MTC::LATCHALL01)/ */
              LATCHALL01_MTC(
                kcg_true,
                &outC->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24);
              outC->MTC_ALL1_TRANSITION_MTC_OBS_24 =
                outC->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24.Output1;
            }
          }
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear |
        tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init14 = kcg_true;
      }
      outC->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear = !inC->handle;
      /* @65/v4=, @8/_/v4= */
      if (outC->init14) {
        v4_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size =
          10;
        v4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
          kcg_lit_int32(10);
      }
      else {
        v4_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size =
          outC->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size;
        v4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
          outC->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
      }
      /* @8/_/v3= */
      if (v4_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size <
        0) {
        outC->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size =
          v4_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size;
      }
      else {
        outC->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size =
          v4_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size -
          1;
      }
      tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear =
        outC->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size ==
        0;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @69/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20);
        /* @68/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21);
        /* @67/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21);
        /* @65/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24);
      }
      /* @67/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear,
        &outC->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21);
      outC->MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21 =
        outC->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21.Output1;
      MTC_CC_4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
        v4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 <
        kcg_lit_int32(0);
      /* @65/v3= */
      if (MTC_CC_4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24) {
        outC->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
          v4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
      }
      else {
        outC->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
          v4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 -
          kcg_lit_int32(1);
      }
      /* @65/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24,
        &outC->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24);
      outC->MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
        outC->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24.Output1;
      /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:<1> */
      if (outC->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        /* @69/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_20 =
          outC->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        outC->tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear =
          tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
        if (tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
        }
        else {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
        }
        /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:<2> */
        if (outC->tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
          /* @68/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_21 =
            outC->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear |
        tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      outC->init14 = kcg_false;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init15 = kcg_true;
      }
      outC->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear = !inC->handle;
      /* @6/_/v4=, @70/v4= */
      if (outC->init15) {
        v4_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size =
          1;
        v4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
          kcg_lit_int32(1);
      }
      else {
        v4_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size =
          outC->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size;
        v4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
          outC->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
      }
      /* @6/_/v3= */
      if (v4_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size <
        0) {
        outC->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size =
          v4_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size;
      }
      else {
        outC->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size =
          v4_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size -
          1;
      }
      tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear =
        outC->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size ==
        0;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @74/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18);
        /* @73/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19);
        /* @72/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19);
        /* @70/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20);
      }
      /* @72/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear,
        &outC->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19);
      outC->MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19 =
        outC->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19.Output1;
      MTC_CC_4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
        v4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 <
        kcg_lit_int32(0);
      /* @70/v3= */
      if (MTC_CC_4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20) {
        outC->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
          v4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
      }
      else {
        outC->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
          v4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 -
          kcg_lit_int32(1);
      }
      /* @70/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20,
        &outC->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20);
      outC->MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
        outC->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20.Output1;
      /* State_Machine_Extend_Gear:OPEN_EV_OFF1:<1> */
      if (outC->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        /* @74/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_18 =
          outC->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        outC->tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear =
          tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
        if (tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
        }
        else {
          outC->_95_State_Machine_Extend_Gear_state_act =
            SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
        }
        /* State_Machine_Extend_Gear:OPEN_EV_OFF1:<2> */
        if (outC->tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
          /* @73/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_19 =
            outC->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear |
        tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      outC->init15 = kcg_false;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init16 = kcg_true;
      }
      /* @109/_/v4=, @76/v4= */
      if (outC->init16) {
        v4_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size =
          2;
        v4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
          kcg_lit_int32(2);
      }
      else {
        v4_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size =
          outC->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size;
        v4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
          outC->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
      }
      /* @109/_/v3= */
      if (v4_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size <
        0) {
        outC->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size =
          v4_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size;
      }
      else {
        outC->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size =
          v4_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size -
          1;
      }
      outC->tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear =
        outC->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size ==
        0;
      MTC_CC_4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
        v4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 <
        kcg_lit_int32(0);
      /* @76/v3= */
      if (MTC_CC_4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19) {
        outC->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
          v4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
      }
      else {
        outC->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
          v4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 -
          kcg_lit_int32(1);
      }
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @77/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17);
        /* @76/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19);
      }
      /* @76/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19,
        &outC->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19);
      outC->MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
        outC->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19.Output1;
      /* State_Machine_Extend_Gear:GENERAL_EV_ON:<1> */
      if (outC->tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear) {
        /* @77/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_17 =
          outC->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        MTC_sig_fire_15 = kcg_false;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear;
      outC->init16 = kcg_false;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      outC->tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear = inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @78/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16);
      }
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:EXTENDED_DOWN:<1> */
      if (outC->tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear) {
        /* @78/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_16 =
          outC->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        MTC_sig_fire_15 = kcg_false;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      outC->tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @79/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15);
      }
      /* @79/MTC_ALL1=(MTC::LATCHALL01)/ */
      LATCHALL01_MTC(
        kcg_true,
        &outC->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15);
      outC->MTC_ALL1_TRANSITION_MTC_OBS_15 =
        outC->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15.Output1;
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      MTC_sig_fire_15 = kcg_true;
      outC->_95_State_Machine_Extend_Gear_state_act =
        SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init17 = kcg_true;
      }
      outC->tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear = inC->handle;
      /* @4/_/v4=, @80/v4= */
      if (outC->init17) {
        v4_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size =
          1;
        v4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
          kcg_lit_int32(1);
      }
      else {
        v4_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size =
          outC->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size;
        v4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
          outC->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
      }
      /* @4/_/v3= */
      if (v4_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size <
        0) {
        outC->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size =
          v4_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size;
      }
      else {
        outC->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size =
          v4_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size -
          1;
      }
      tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear =
        outC->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size ==
        0;
      MTC_CC_4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
        v4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 <
        kcg_lit_int32(0);
      /* @80/v3= */
      if (MTC_CC_4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21) {
        outC->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
          v4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
      }
      else {
        outC->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
          v4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 -
          kcg_lit_int32(1);
      }
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @82/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13);
        /* @81/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14);
        /* @80/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21);
      }
      /* @80/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21,
        &outC->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21);
      outC->MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
        outC->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21.Output1;
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:OPEN_EV_OFF:<1> */
      if (outC->tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        /* @82/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_13 =
          outC->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        outC->tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear =
          tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
        /* State_Machine_Extend_Gear:OPEN_EV_OFF:<2> */
        if (outC->tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear) {
          /* @81/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_14 =
            outC->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle |
        tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
      outC->init17 = kcg_false;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init18 = kcg_true;
      }
      outC->tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear = inC->handle;
      /* @2/_/v4=, @83/v4= */
      if (outC->init18) {
        v4_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size =
          10;
        v4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
          kcg_lit_int32(10);
      }
      else {
        v4_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size =
          outC->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size;
        v4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
          outC->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
      }
      /* @2/_/v3= */
      if (v4_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size <
        0) {
        outC->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size =
          v4_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size;
      }
      else {
        outC->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size =
          v4_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size -
          1;
      }
      tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear =
        outC->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size ==
        0;
      MTC_CC_4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
        v4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 <
        kcg_lit_int32(0);
      /* @83/v3= */
      if (MTC_CC_4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23) {
        outC->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
          v4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
      }
      else {
        outC->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
          v4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 -
          kcg_lit_int32(1);
      }
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @85/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11);
        /* @84/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12);
        /* @83/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23);
      }
      /* @83/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23,
        &outC->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23);
      outC->MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
        outC->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23.Output1;
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:CLOSE_EV_OFF:<1> */
      if (outC->tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        /* @85/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_11 =
          outC->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        outC->tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear =
          tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
        /* State_Machine_Extend_Gear:CLOSE_EV_OFF:<2> */
        if (outC->tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
          /* @84/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_12 =
            outC->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle |
        tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      outC->init18 = kcg_false;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      outC->tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear = inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @87/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9);
        /* @86/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10);
      }
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (_L99) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:CLOSE_EV_ON:<1> */
      if (outC->tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear) {
        /* @87/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_9 =
          outC->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        outC->tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear = _L99;
        /* State_Machine_Extend_Gear:CLOSE_EV_ON:<2> */
        if (outC->tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear) {
          /* @86/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_10 =
            outC->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle | _L99;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      outC->tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear = inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @89/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7);
        /* @88/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8);
      }
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:EXTEND_EV_OFF:<1> */
      if (outC->tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear) {
        /* @89/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_7 =
          outC->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        /* @88/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_8 =
          outC->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->tr_2_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      }
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      outC->tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear = inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @91/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
        /* @90/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6);
      }
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (_L94) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:EXTEND_EV_ON:<1> */
      if (outC->tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear) {
        /* @91/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_5 =
          outC->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        outC->tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear = _L94;
        /* State_Machine_Extend_Gear:EXTEND_EV_ON:<2> */
        if (outC->tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear) {
          /* @90/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_6 =
            outC->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle | _L94;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      outC->tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear = inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @93/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
        /* @92/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
      }
      if (inC->handle) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (_L122) {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      /* State_Machine_Extend_Gear:OPEN_EV_ON:<1> */
      if (outC->tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear) {
        /* @93/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_3 =
          outC->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3.Output1;
        MTC_sig_fire_15 = kcg_true;
      }
      else {
        outC->tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear = _L122;
        /* State_Machine_Extend_Gear:OPEN_EV_ON:<2> */
        if (outC->tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear) {
          /* @92/MTC_ALL1=(MTC::LATCHALL01)/ */
          LATCHALL01_MTC(
            kcg_true,
            &outC->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
          outC->MTC_ALL1_TRANSITION_MTC_OBS_4 =
            outC->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4.Output1;
          MTC_sig_fire_15 = kcg_true;
        }
        else {
          MTC_sig_fire_15 = kcg_false;
        }
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle | _L122;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init19 = kcg_true;
      }
      /* @100/_/v4=, @95/v4= */
      if (outC->init19) {
        v4_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size =
          2;
        v4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
          kcg_lit_int32(2);
      }
      else {
        v4_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size =
          outC->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size;
        v4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
          outC->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
      }
      /* @100/_/v3= */
      if (v4_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size <
        0) {
        outC->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size =
          v4_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size;
      }
      else {
        outC->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size =
          v4_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size -
          1;
      }
      outC->tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear =
        outC->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size ==
        0;
      MTC_CC_4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
        v4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 <
        kcg_lit_int32(0);
      /* @95/v3= */
      if (MTC_CC_4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22) {
        outC->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
          v4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
      }
      else {
        outC->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
          v4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 -
          kcg_lit_int32(1);
      }
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @96/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
        /* @95/MTC_ALL1=(MTC::LATCHALL04)/ */
        LATCHALL04_MTC_reset(
          &outC->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22);
      }
      /* @95/MTC_ALL1=(MTC::LATCHALL04)/ */
      LATCHALL04_MTC(
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 !=
            kcg_lit_int32(0)),
        (kcg_bool)
          (outC->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 ==
            kcg_lit_int32(0)),
        kcg_false,
        MTC_CC_4_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22,
        &outC->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22);
      outC->MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
        outC->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22.Output1;
      /* State_Machine_Extend_Gear:GEN_EV_ON:<1> */
      if (outC->tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear) {
        /* @96/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_2 =
          outC->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        MTC_sig_fire_15 = kcg_false;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear;
      outC->init19 = kcg_false;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      outC->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear = !inC->handle;
      if (State_Machine_Extend_Gear_reset_prv) {
        /* @99/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC_reset(
          &outC->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
        /* @98/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12);
      }
      /* @98/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        outC->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear,
        (kcg_bool) !outC->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear,
        &outC->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12);
      outC->MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12 =
        outC->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12.Output1;
      /* State_Machine_Extend_Gear:RETRACTED_UP:<1> */
      if (outC->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear) {
        /* @99/MTC_ALL1=(MTC::LATCHALL01)/ */
        LATCHALL01_MTC(
          kcg_true,
          &outC->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
        outC->MTC_ALL1_TRANSITION_MTC_OBS_1 =
          outC->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1.Output1;
        MTC_sig_fire_15 = kcg_true;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        MTC_sig_fire_15 = kcg_false;
        outC->_95_State_Machine_Extend_Gear_state_act =
          SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        outC->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* State_Machine_Extend_Gear: */
  switch (outC->_95_State_Machine_Extend_Gear_state_act) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @14/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_22);
      }
      /* @14/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_22);
      outC->MTC_ALL1_STATE_MTC_OBS_22 =
        outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_22.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @15/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21);
      }
      /* @15/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21);
      outC->MTC_ALL1_STATE_MTC_OBS_21 =
        outC->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20);
      }
      /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20);
      outC->MTC_ALL1_STATE_MTC_OBS_20 =
        outC->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19);
      }
      /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19);
      outC->MTC_ALL1_STATE_MTC_OBS_19 =
        outC->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @18/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18);
      }
      /* @18/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18);
      outC->MTC_ALL1_STATE_MTC_OBS_18 =
        outC->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @19/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17);
      }
      /* @19/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17);
      outC->MTC_ALL1_STATE_MTC_OBS_17 =
        outC->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @20/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16);
      }
      /* @20/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16);
      outC->MTC_ALL1_STATE_MTC_OBS_16 =
        outC->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_true;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15);
      }
      /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15);
      outC->MTC_ALL1_STATE_MTC_OBS_15 =
        outC->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_true;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @22/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14);
      }
      /* @22/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14);
      outC->MTC_ALL1_STATE_MTC_OBS_14 =
        outC->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14.Output1;
      outC->gears_Maneuvring = kcg_true;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @23/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13);
      }
      /* @23/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13);
      outC->MTC_ALL1_STATE_MTC_OBS_13 =
        outC->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @24/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12);
      }
      /* @24/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12);
      outC->MTC_ALL1_STATE_MTC_OBS_12 =
        outC->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @25/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11);
      }
      /* @25/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11);
      outC->MTC_ALL1_STATE_MTC_OBS_11 =
        outC->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_true;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @26/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(
          &outC->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10);
      }
      /* @26/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10);
      outC->MTC_ALL1_STATE_MTC_OBS_10 =
        outC->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_true;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @27/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9);
      }
      /* @27/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9);
      outC->MTC_ALL1_STATE_MTC_OBS_9 =
        outC->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @28/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8);
      }
      /* @28/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8);
      outC->MTC_ALL1_STATE_MTC_OBS_8 =
        outC->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @29/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7);
      }
      /* @29/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7);
      outC->MTC_ALL1_STATE_MTC_OBS_7 =
        outC->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @30/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6);
      }
      /* @30/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6);
      outC->MTC_ALL1_STATE_MTC_OBS_6 =
        outC->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_true;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @31/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5);
      }
      /* @31/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5);
      outC->MTC_ALL1_STATE_MTC_OBS_5 =
        outC->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_true;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @32/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
      }
      /* @32/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
      outC->MTC_ALL1_STATE_MTC_OBS_4 =
        outC->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_true;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @33/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
      }
      /* @33/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
      outC->MTC_ALL1_STATE_MTC_OBS_3 =
        outC->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3.Output1;
      outC->gears_Maneuvring = kcg_true;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @34/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
      }
      /* @34/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
      outC->MTC_ALL1_STATE_MTC_OBS_2 =
        outC->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_true;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        /* @35/MTC_ALL1=(MTC::LATCHALL02)/ */
        LATCHALL02_MTC_reset(&outC->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
      }
      /* @35/MTC_ALL1=(MTC::LATCHALL02)/ */
      LATCHALL02_MTC(
        kcg_true,
        (kcg_bool) !MTC_sig_fire_15,
        &outC->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
      outC->MTC_ALL1_STATE_MTC_OBS_1 =
        outC->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1.Output1;
      outC->gears_Maneuvring = kcg_false;
      outC->gears_Locked_Down = kcg_false;
      outC->extend_EV = kcg_false;
      outC->retract_EV = kcg_false;
      outC->close_EV = kcg_false;
      outC->general_EV = kcg_false;
      outC->State_Machine_Extend_Gear_state_nxt =
        SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->open_EV = outC->gears_Maneuvring;
}

#ifndef KCG_USER_DEFINED_INIT
void Computing_Model_init(outC_Computing_Model *outC)
{
  outC->State_Machine_Extend_Gear_reset_act = kcg_false;
  outC->general_EV = kcg_true;
  outC->close_EV = kcg_true;
  outC->open_EV = kcg_true;
  outC->retract_EV = kcg_true;
  outC->extend_EV = kcg_true;
  outC->gears_Locked_Down = kcg_true;
  outC->gears_Maneuvring = kcg_true;
  outC->init = kcg_true;
  outC->init13 = kcg_true;
  outC->init14 = kcg_true;
  outC->init15 = kcg_true;
  outC->init16 = kcg_true;
  outC->init17 = kcg_true;
  outC->init18 = kcg_true;
  outC->init19 = kcg_true;
  outC->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_2_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear = kcg_true;
  outC->tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->_95_State_Machine_Extend_Gear_state_act =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
  outC->_94_State_Machine_Extend_Gear_state_sel =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
  Result_MTC_init(&outC->_12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1);
  Result_MTC_init(&outC->_11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1);
  Result_MTC_init(&outC->_10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1);
  Result_MTC_init(&outC->_9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1);
  Result_MTC_init(&outC->_8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_22);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_21);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_20);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_19);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_18);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_17);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_16);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_15);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_14);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_13);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_12);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_11);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_10);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_9);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_8);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_7);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_6);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_5);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_4);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_3);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_STATE_MTC_OBS_1);
  Result_MTC_init(
    &outC->_7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_36);
  Result_MTC_init(
    &outC->_6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_35);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_34);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_33);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_32);
  Result_MTC_init(
    &outC->_5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_31);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_30);
  Result_MTC_init(
    &outC->_4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_29);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_28);
  Result_MTC_init(
    &outC->_3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_27);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_26);
  Result_MTC_init(
    &outC->_2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15);
  Result_MTC_init(
    &outC->_1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_24);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_23);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_25);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_22);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_21);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_20);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_19);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_18);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_17);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_16);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_15);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_14);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_13);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_12);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_11);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_10);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_9);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_8);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_7);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_6);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_5);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_4);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_3);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_2);
  Result_MTC_init(
    &outC->MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12);
  Result_MTC_init(&outC->MTC_ALL1_TRANSITION_MTC_OBS_1);
  outC->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size =
    0;
  outC->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26 =
    kcg_lit_int32(0);
  outC->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size =
    0;
  outC->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25 =
    kcg_lit_int32(0);
  outC->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size =
    0;
  outC->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24 =
    kcg_lit_int32(0);
  outC->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size =
    0;
  outC->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20 =
    kcg_lit_int32(0);
  outC->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size =
    0;
  outC->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19 =
    kcg_lit_int32(0);
  outC->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size =
    0;
  outC->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21 =
    kcg_lit_int32(0);
  outC->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size =
    0;
  outC->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23 =
    kcg_lit_int32(0);
  outC->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size =
    0;
  outC->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22 =
    kcg_lit_int32(0);
  /* @9/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1);
  /* @10/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1);
  /* @11/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1);
  /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_init(
    &outC->_23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_22);
  /* @15/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21);
  /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20);
  /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19);
  /* @18/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18);
  /* @19/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17);
  /* @20/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16);
  /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15);
  /* @22/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14);
  /* @23/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13);
  /* @24/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12);
  /* @25/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11);
  /* @26/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10);
  /* @27/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9);
  /* @28/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8);
  /* @29/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7);
  /* @30/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6);
  /* @31/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5);
  /* @32/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
  /* @33/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @34/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @35/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(&outC->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @37/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26);
  /* @38/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36);
  /* @40/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25);
  /* @41/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35);
  /* @42/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34);
  /* @43/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33);
  /* @44/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32);
  /* @46/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18);
  /* @47/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31);
  /* @48/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30);
  /* @50/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17);
  /* @51/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29);
  /* @52/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28);
  /* @54/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20);
  /* @55/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27);
  /* @56/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26);
  /* @58/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15);
  /* @60/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16);
  /* @61/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24);
  /* @62/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23);
  /* @63/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25);
  /* @64/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22);
  /* @65/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24);
  /* @67/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21);
  /* @68/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21);
  /* @69/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20);
  /* @70/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20);
  /* @72/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19);
  /* @73/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19);
  /* @74/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18);
  /* @76/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19);
  /* @77/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17);
  /* @78/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16);
  /* @79/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15);
  /* @80/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21);
  /* @81/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14);
  /* @82/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13);
  /* @83/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23);
  /* @84/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12);
  /* @85/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11);
  /* @86/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10);
  /* @87/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9);
  /* @88/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8);
  /* @89/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7);
  /* @90/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6);
  /* @91/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
  /* @92/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
  /* @93/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @95/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_init(
    &outC->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22);
  /* @96/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @98/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12);
  /* @99/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(&outC->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->State_Machine_Extend_Gear_state_nxt =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Computing_Model_reset(outC_Computing_Model *outC)
{
  outC->State_Machine_Extend_Gear_reset_act = kcg_false;
  outC->init = kcg_true;
  outC->init13 = kcg_true;
  outC->init14 = kcg_true;
  outC->init15 = kcg_true;
  outC->init16 = kcg_true;
  outC->init17 = kcg_true;
  outC->init18 = kcg_true;
  outC->init19 = kcg_true;
  /* @9/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1);
  /* @10/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1);
  /* @11/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1);
  /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1);
  /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */
  LATCHALL03_MTC_reset(
    &outC->_23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1);
  /* @14/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->Context_LATCHALL02_MTC_STATE_MTC_OBS_22);
  /* @15/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21);
  /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20);
  /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19);
  /* @18/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18);
  /* @19/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17);
  /* @20/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16);
  /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15);
  /* @22/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14);
  /* @23/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13);
  /* @24/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12);
  /* @25/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11);
  /* @26/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10);
  /* @27/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9);
  /* @28/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8);
  /* @29/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7);
  /* @30/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6);
  /* @31/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5);
  /* @32/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4);
  /* @33/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3);
  /* @34/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2);
  /* @35/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(&outC->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1);
  /* @37/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26);
  /* @38/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36);
  /* @40/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25);
  /* @41/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35);
  /* @42/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34);
  /* @43/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33);
  /* @44/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32);
  /* @46/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18);
  /* @47/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31);
  /* @48/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30);
  /* @50/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17);
  /* @51/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29);
  /* @52/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28);
  /* @54/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20);
  /* @55/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27);
  /* @56/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26);
  /* @58/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15);
  /* @60/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16);
  /* @61/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24);
  /* @62/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23);
  /* @63/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25);
  /* @64/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22);
  /* @65/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24);
  /* @67/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21);
  /* @68/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21);
  /* @69/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20);
  /* @70/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20);
  /* @72/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19);
  /* @73/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19);
  /* @74/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18);
  /* @76/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19);
  /* @77/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17);
  /* @78/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16);
  /* @79/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15);
  /* @80/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21);
  /* @81/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14);
  /* @82/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13);
  /* @83/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23);
  /* @84/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12);
  /* @85/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11);
  /* @86/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10);
  /* @87/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9);
  /* @88/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8);
  /* @89/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7);
  /* @90/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6);
  /* @91/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5);
  /* @92/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4);
  /* @93/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3);
  /* @95/MTC_ALL1=(MTC::LATCHALL04)/ */
  LATCHALL04_MTC_reset(
    &outC->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22);
  /* @96/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2);
  /* @98/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12);
  /* @99/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(&outC->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1);
  outC->State_Machine_Extend_Gear_state_nxt =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Computing_Model/
  @1: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST#23)
  @3: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST#21)
  @5: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST#20)
  @7: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST#24)
  @57: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST#15)
  @36: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST#26)
  @114: @36/(times#26)
  @39: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST#25)
  @113: @39/(times#25)
  @8: @7/(times#24)
  @6: @5/(times#20)
  @75: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST#19)
  @109: @75/(times#19)
  @4: @3/(times#21)
  @2: @1/(times#23)
  @94: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST#22)
  @100: @94/(times#22)
  @9: (MTCEx::MTC_Observers::Computing_Model_PATHS21_MTC_OBS#1)
  @10: (MTCEx::MTC_Observers::Computing_Model_PATHS20_MTC_OBS#1)
  @11: (MTCEx::MTC_Observers::Computing_Model_PATHS19_MTC_OBS#1)
  @12: (MTCEx::MTC_Observers::Computing_Model_PATHS18_MTC_OBS#1)
  @13: (MTCEx::MTC_Observers::Computing_Model_PATHS17_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::STATE_MTC_OBS#22)
  @15: (MTCEx::MTC_Observers::STATE_MTC_OBS#21)
  @16: (MTCEx::MTC_Observers::STATE_MTC_OBS#20)
  @17: (MTCEx::MTC_Observers::STATE_MTC_OBS#19)
  @18: (MTCEx::MTC_Observers::STATE_MTC_OBS#18)
  @19: (MTCEx::MTC_Observers::STATE_MTC_OBS#17)
  @20: (MTCEx::MTC_Observers::STATE_MTC_OBS#16)
  @21: (MTCEx::MTC_Observers::STATE_MTC_OBS#15)
  @22: (MTCEx::MTC_Observers::STATE_MTC_OBS#14)
  @23: (MTCEx::MTC_Observers::STATE_MTC_OBS#13)
  @24: (MTCEx::MTC_Observers::STATE_MTC_OBS#12)
  @25: (MTCEx::MTC_Observers::STATE_MTC_OBS#11)
  @26: (MTCEx::MTC_Observers::STATE_MTC_OBS#10)
  @27: (MTCEx::MTC_Observers::STATE_MTC_OBS#9)
  @28: (MTCEx::MTC_Observers::STATE_MTC_OBS#8)
  @29: (MTCEx::MTC_Observers::STATE_MTC_OBS#7)
  @30: (MTCEx::MTC_Observers::STATE_MTC_OBS#6)
  @31: (MTCEx::MTC_Observers::STATE_MTC_OBS#5)
  @32: (MTCEx::MTC_Observers::STATE_MTC_OBS#4)
  @33: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @34: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @35: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @37: @36/(MTCEx::MTC_Observers::Computing_Model_PATHS16_MTC_OBS#26)
  @38: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#36)
  @40: @39/(MTCEx::MTC_Observers::Computing_Model_PATHS15_MTC_OBS#25)
  @41: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#35)
  @42: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#34)
  @43: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#33)
  @44: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#32)
  @45: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST#18)
  @46: @45/(MTCEx::MTC_Observers::Computing_Model_PATHS14_MTC_OBS#1)
  @47: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#31)
  @48: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#30)
  @49: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST#17)
  @50: @49/(MTCEx::MTC_Observers::Computing_Model_PATHS13_MTC_OBS#1)
  @51: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#29)
  @52: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#28)
  @53: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST#20)
  @54: @53/(MTCEx::MTC_Observers::Computing_Model_PATHS12_MTC_OBS#1)
  @55: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#27)
  @56: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#26)
  @58: @57/(MTCEx::MTC_Observers::Computing_Model_PATHS10_MTC_OBS#1)
  @59: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST#16)
  @60: @59/(MTCEx::MTC_Observers::Computing_Model_PATHS11_MTC_OBS#1)
  @61: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#24)
  @62: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#23)
  @63: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#25)
  @64: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#22)
  @65: @7/(MTCEx::MTC_Observers::Computing_Model_PATHS8_MTC_OBS#24)
  @66: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST#21)
  @67: @66/(MTCEx::MTC_Observers::Computing_Model_PATHS9_MTC_OBS#1)
  @68: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#21)
  @69: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#20)
  @70: @5/(MTCEx::MTC_Observers::Computing_Model_PATHS6_MTC_OBS#20)
  @71: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST#19)
  @72: @71/(MTCEx::MTC_Observers::Computing_Model_PATHS7_MTC_OBS#1)
  @73: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#19)
  @74: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#18)
  @76: @75/(MTCEx::MTC_Observers::Computing_Model_PATHS5_MTC_OBS#19)
  @77: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#17)
  @78: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#16)
  @79: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#15)
  @80: @3/(MTCEx::MTC_Observers::Computing_Model_PATHS4_MTC_OBS#21)
  @81: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#14)
  @82: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#13)
  @83: @1/(MTCEx::MTC_Observers::Computing_Model_PATHS3_MTC_OBS#23)
  @84: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#12)
  @85: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#11)
  @86: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#10)
  @87: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#9)
  @88: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#8)
  @89: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#7)
  @90: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#6)
  @91: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#5)
  @92: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#4)
  @93: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @95: @94/(MTCEx::MTC_Observers::Computing_Model_PATHS2_MTC_OBS#22)
  @96: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @97: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST#12)
  @98: @97/(MTCEx::MTC_Observers::Computing_Model_PATHS1_MTC_OBS#1)
  @99: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Computing_Model.c
** Generation date: 2020-02-07T16:54:06
*************************************************************$ */

