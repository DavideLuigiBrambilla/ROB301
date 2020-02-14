/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/Coverage/config.txt
** Generation date: 2020-02-07T16:30:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Computing_Model.h"

/* Computing_Model/ */
void Computing_Model(inC_Computing_Model *inC, outC_Computing_Model *outC)
{
  /* _L122/, all_doors_open/ */
  kcg_bool _L122;
  /* _L137/, all_gears_retracted/ */
  kcg_bool _L137;
  /* _L99/, all_doors_closed/ */
  kcg_bool all_doors_closed;
  /* _L140/, all_shock_absorber_false/ */
  kcg_bool all_shock_absorber_false;
  /* _L94/, all_gears_extended/ */
  kcg_bool all_gears_extended;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear State_Machine_Extend_Gear_state_act;
  /* State_Machine_Extend_Gear:RETRACT_EV_ON:<1> */
  kcg_bool tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:CLOSE_EV_ON1:<1> */
  kcg_bool tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<1> */
  kcg_bool tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2> */
  kcg_bool tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:<1> */
  kcg_bool tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  /* @3/_/o/, State_Machine_Extend_Gear:CLOSE_EV_OFF1:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_OFF1:<1> */
  kcg_bool tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  /* @4/_/o/, State_Machine_Extend_Gear:OPEN_EV_OFF1:<2> */
  kcg_bool tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  /* @6/_/o/, State_Machine_Extend_Gear:OPEN_EV_OFF:<2> */
  kcg_bool tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
  /* @7/_/o/, State_Machine_Extend_Gear:CLOSE_EV_OFF:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  /* @1/_/v4/ */
  kcg_size v4_times_26_size;
  /* @2/_/v4/ */
  kcg_size v4_times_25_size;
  /* @3/_/v4/ */
  kcg_size v4_times_24_size;
  /* @4/_/v4/ */
  kcg_size v4_times_20_size;
  /* @5/_/v4/ */
  kcg_size v4_times_19_size;
  /* @6/_/v4/ */
  kcg_size v4_times_21_size;
  /* @7/_/v4/ */
  kcg_size v4_times_23_size;
  /* @8/_/v4/ */
  kcg_size v4_times_22_size;

  all_gears_extended = inC->gear_Extended_front & inC->gear_Extended_right &
    inC->gear_Extended_left & (!(inC->gear_Retracted_front |
        inC->gear_Retracted_right | inC->gear_Retracted_left));
  all_doors_closed = inC->door_Closed_front & inC->door_Closed_right &
    inC->door_Closed_left & (!(inC->door_Open_front | inC->door_Open_right |
        inC->door_Open_left));
  _L137 = inC->gear_Retracted_front & inC->gear_Retracted_right &
    inC->gear_Retracted_left & (!(inC->gear_Extended_front |
        inC->gear_Extended_right | inC->gear_Extended_left));
  all_shock_absorber_false = !(inC->gear_Shock_Absorber_front |
      inC->gear_Shock_Absorber_right | inC->gear_Shock_Absorber_left);
  _L122 = inC->door_Open_front & inC->door_Open_right & inC->door_Open_left &
    (!(inC->door_Closed_front | inC->door_Closed_right | inC->door_Closed_left));
  /* State_Machine_Extend_Gear: */
  switch (outC->State_Machine_Extend_Gear_state_nxt) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init7 = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init7) {
        v4_times_26_size = 1;
      }
      else {
        v4_times_26_size = outC->v3_times_26_size;
      }
      /* @1/_/v3= */
      if (v4_times_26_size < 0) {
        outC->v3_times_26_size = v4_times_26_size;
      }
      else {
        outC->v3_times_26_size = v4_times_26_size - 1;
      }
      outC->State_Machine_Extend_Gear_reset_act = outC->v3_times_26_size == 0;
      if (outC->State_Machine_Extend_Gear_reset_act) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      outC->init7 = kcg_false;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init6 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init6) {
        v4_times_25_size = 1;
      }
      else {
        v4_times_25_size = outC->v3_times_25_size;
      }
      /* @2/_/v3= */
      if (v4_times_25_size < 0) {
        outC->v3_times_25_size = v4_times_25_size;
      }
      else {
        outC->v3_times_25_size = v4_times_25_size - 1;
      }
      outC->State_Machine_Extend_Gear_reset_act = outC->v3_times_25_size == 0;
      if (outC->State_Machine_Extend_Gear_reset_act) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      outC->init6 = kcg_false;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      State_Machine_Extend_Gear_state_act =
        SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      State_Machine_Extend_Gear_state_act =
        SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      State_Machine_Extend_Gear_state_act =
        SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else if (_L137) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear | _L137;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else if (all_doors_closed) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear | all_doors_closed;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear = _L122 &
        (all_shock_absorber_false | (!all_shock_absorber_false));
      tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        if (all_shock_absorber_false) {
          State_Machine_Extend_Gear_state_act =
            SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
        }
        else {
          State_Machine_Extend_Gear_state_act =
            SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
        }
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear |
        tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init5 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init5) {
        v4_times_24_size = 10;
      }
      else {
        v4_times_24_size = outC->v3_times_24_size;
      }
      /* @3/_/v3= */
      if (v4_times_24_size < 0) {
        outC->v3_times_24_size = v4_times_24_size;
      }
      else {
        outC->v3_times_24_size = v4_times_24_size - 1;
      }
      tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear =
        outC->v3_times_24_size == 0;
      tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear |
        tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      outC->init5 = kcg_false;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init4 = kcg_true;
      }
      /* @4/_/v4= */
      if (outC->init4) {
        v4_times_20_size = 1;
      }
      else {
        v4_times_20_size = outC->v3_times_20_size;
      }
      /* @4/_/v3= */
      if (v4_times_20_size < 0) {
        outC->v3_times_20_size = v4_times_20_size;
      }
      else {
        outC->v3_times_20_size = v4_times_20_size - 1;
      }
      tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear = outC->v3_times_20_size == 0;
      tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear |
        tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      outC->init4 = kcg_false;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init3 = kcg_true;
      }
      /* @5/_/v4= */
      if (outC->init3) {
        v4_times_19_size = 2;
      }
      else {
        v4_times_19_size = outC->v3_times_19_size;
      }
      /* @5/_/v3= */
      if (v4_times_19_size < 0) {
        outC->v3_times_19_size = v4_times_19_size;
      }
      else {
        outC->v3_times_19_size = v4_times_19_size - 1;
      }
      outC->State_Machine_Extend_Gear_reset_act = outC->v3_times_19_size == 0;
      if (outC->State_Machine_Extend_Gear_reset_act) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      outC->init3 = kcg_false;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      State_Machine_Extend_Gear_state_act =
        SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init2 = kcg_true;
      }
      /* @6/_/v4= */
      if (outC->init2) {
        v4_times_21_size = 1;
      }
      else {
        v4_times_21_size = outC->v3_times_21_size;
      }
      /* @6/_/v3= */
      if (v4_times_21_size < 0) {
        outC->v3_times_21_size = v4_times_21_size;
      }
      else {
        outC->v3_times_21_size = v4_times_21_size - 1;
      }
      tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear = outC->v3_times_21_size == 0;
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle |
        tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
      outC->init2 = kcg_false;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init1 = kcg_true;
      }
      /* @7/_/v4= */
      if (outC->init1) {
        v4_times_23_size = 10;
      }
      else {
        v4_times_23_size = outC->v3_times_23_size;
      }
      /* @7/_/v3= */
      if (v4_times_23_size < 0) {
        outC->v3_times_23_size = v4_times_23_size;
      }
      else {
        outC->v3_times_23_size = v4_times_23_size - 1;
      }
      tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear = outC->v3_times_23_size == 0;
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle |
        tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      outC->init1 = kcg_false;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (all_doors_closed) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle | all_doors_closed;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = kcg_true;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (all_gears_extended) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle | all_gears_extended;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      if (inC->handle) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (_L122) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act = inC->handle | _L122;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      if (outC->State_Machine_Extend_Gear_reset_act) {
        outC->init = kcg_true;
      }
      /* @8/_/v4= */
      if (outC->init) {
        v4_times_22_size = 2;
      }
      else {
        v4_times_22_size = outC->v3_times_22_size;
      }
      /* @8/_/v3= */
      if (v4_times_22_size < 0) {
        outC->v3_times_22_size = v4_times_22_size;
      }
      else {
        outC->v3_times_22_size = v4_times_22_size - 1;
      }
      outC->State_Machine_Extend_Gear_reset_act = outC->v3_times_22_size == 0;
      if (outC->State_Machine_Extend_Gear_reset_act) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      outC->init = kcg_false;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      outC->State_Machine_Extend_Gear_reset_act = !inC->handle;
      if (outC->State_Machine_Extend_Gear_reset_act) {
        State_Machine_Extend_Gear_state_act =
          SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        State_Machine_Extend_Gear_state_act =
          SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* State_Machine_Extend_Gear: */
  switch (State_Machine_Extend_Gear_state_act) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
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
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->v3_times_22_size = 0;
  outC->v3_times_23_size = 0;
  outC->v3_times_21_size = 0;
  outC->v3_times_19_size = 0;
  outC->v3_times_20_size = 0;
  outC->v3_times_24_size = 0;
  outC->v3_times_25_size = 0;
  outC->v3_times_26_size = 0;
  outC->State_Machine_Extend_Gear_state_nxt =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Computing_Model_reset(outC_Computing_Model *outC)
{
  outC->State_Machine_Extend_Gear_reset_act = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->State_Machine_Extend_Gear_state_nxt =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Computing_Model/
  @1: (times#26)
  @2: (times#25)
  @3: (times#24)
  @4: (times#20)
  @5: (times#19)
  @6: (times#21)
  @7: (times#23)
  @8: (times#22)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Computing_Model.c
** Generation date: 2020-02-07T16:30:49
*************************************************************$ */

