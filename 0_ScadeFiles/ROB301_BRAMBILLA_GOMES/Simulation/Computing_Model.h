/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/Simulation/config.txt
** Generation date: 2020-02-07T16:32:56
*************************************************************$ */
#ifndef _Computing_Model_H_
#define _Computing_Model_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* handle/ */ handle;
  kcg_bool /* gear_Extended_front/ */ gear_Extended_front;
  kcg_bool /* gear_Extended_right/ */ gear_Extended_right;
  kcg_bool /* gear_Extended_left/ */ gear_Extended_left;
  kcg_bool /* gear_Retracted_front/ */ gear_Retracted_front;
  kcg_bool /* gear_Retracted_right/ */ gear_Retracted_right;
  kcg_bool /* gear_Retracted_left/ */ gear_Retracted_left;
  kcg_bool /* gear_Shock_Absorber_front/ */ gear_Shock_Absorber_front;
  kcg_bool /* gear_Shock_Absorber_right/ */ gear_Shock_Absorber_right;
  kcg_bool /* gear_Shock_Absorber_left/ */ gear_Shock_Absorber_left;
  kcg_bool /* door_Closed_front/ */ door_Closed_front;
  kcg_bool /* door_Closed_right/ */ door_Closed_right;
  kcg_bool /* door_Closed_left/ */ door_Closed_left;
  kcg_bool /* door_Open_front/ */ door_Open_front;
  kcg_bool /* door_Open_right/ */ door_Open_right;
  kcg_bool /* door_Open_left/ */ door_Open_left;
} inC_Computing_Model;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* general_EV/ */ general_EV;
  kcg_bool /* close_EV/ */ close_EV;
  kcg_bool /* open_EV/ */ open_EV;
  kcg_bool /* retract_EV/ */ retract_EV;
  kcg_bool /* extend_EV/ */ extend_EV;
  kcg_bool /* gears_Locked_Down/ */ gears_Locked_Down;
  kcg_bool /* gears_Maneuvring/ */ gears_Maneuvring;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_bool init5;
  kcg_bool init6;
  kcg_bool init7;
  kcg_size /* @1/_/v3/ */ v3_times_22_size;
  kcg_size /* @2/_/v3/ */ v3_times_23_size;
  kcg_size /* @3/_/v3/ */ v3_times_21_size;
  kcg_size /* @4/_/v3/ */ v3_times_19_size;
  kcg_size /* @5/_/v3/ */ v3_times_20_size;
  kcg_size /* @6/_/v3/ */ v3_times_24_size;
  kcg_size /* @7/_/v3/ */ v3_times_25_size;
  kcg_size /* @8/_/v3/ */ v3_times_26_size;
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_state_nxt;
  kcg_bool /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_reset_act;
  kcg_bool /* State_Machine_Extend_Gear: */ _8_State_Machine_Extend_Gear_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ _9_State_Machine_Extend_Gear_state_sel;
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ _10_State_Machine_Extend_Gear_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_22_size;
  kcg_bool /* @1/_/c/ */ c_times_22_size;
  kcg_size /* @1/_/n/ */ n_times_22_size;
  kcg_size /* @1/_/v4/ */ v4_times_22_size;
  kcg_bool /* @2/_/o/ */ o_times_23_size;
  kcg_bool /* @2/_/c/ */ c_times_23_size;
  kcg_size /* @2/_/n/ */ n_times_23_size;
  kcg_size /* @2/_/v4/ */ v4_times_23_size;
  kcg_bool /* @3/_/o/ */ o_times_21_size;
  kcg_bool /* @3/_/c/ */ c_times_21_size;
  kcg_size /* @3/_/n/ */ n_times_21_size;
  kcg_size /* @3/_/v4/ */ v4_times_21_size;
  kcg_bool /* @4/_/o/ */ o_times_19_size;
  kcg_bool /* @4/_/c/ */ c_times_19_size;
  kcg_size /* @4/_/n/ */ n_times_19_size;
  kcg_size /* @4/_/v4/ */ v4_times_19_size;
  kcg_bool /* @5/_/o/ */ o_times_20_size;
  kcg_bool /* @5/_/c/ */ c_times_20_size;
  kcg_size /* @5/_/n/ */ n_times_20_size;
  kcg_size /* @5/_/v4/ */ v4_times_20_size;
  kcg_bool /* @6/_/o/ */ o_times_24_size;
  kcg_bool /* @6/_/c/ */ c_times_24_size;
  kcg_size /* @6/_/n/ */ n_times_24_size;
  kcg_size /* @6/_/v4/ */ v4_times_24_size;
  kcg_bool /* @7/_/o/ */ o_times_25_size;
  kcg_bool /* @7/_/c/ */ c_times_25_size;
  kcg_size /* @7/_/n/ */ n_times_25_size;
  kcg_size /* @7/_/v4/ */ v4_times_25_size;
  kcg_bool /* @8/_/o/ */ o_times_26_size;
  kcg_bool /* @8/_/c/ */ c_times_26_size;
  kcg_size /* @8/_/n/ */ n_times_26_size;
  kcg_size /* @8/_/v4/ */ v4_times_26_size;
  kcg_bool /* State_Machine_Extend_Gear:GEN_EV_ON:_L1/ */ _L1_GEN_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON:_L2/ */ _L2_OPEN_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON:_L1/ */ _L1_OPEN_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTEND_EV_ON:_L1/ */ _L1_EXTEND_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTEND_EV_OFF:_L2/ */ _L2_EXTEND_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTEND_EV_OFF:_L1/ */ _L1_EXTEND_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_ON:_L1/ */ _L1_CLOSE_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_OFF:_L3/ */ _L3_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_OFF:_L1/ */ _L1_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_OFF:_L1/ */ _L1_OPEN_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:GENERAL_EV_OFF:_L1/ */ _L1_GENERAL_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTENDED_DOWN:_L3/ */ _L3_EXTENDED_DOWN_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTENDED_DOWN:_L1/ */ _L1_EXTENDED_DOWN_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:GENERAL_EV_ON:_L1/ */ _L1_GENERAL_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_OFF1:_L1/ */ _L1_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:_L2/ */ _L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:_L1/ */ _L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON1:_L2/ */ _L2_OPEN_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON1:_L1/ */ _L1_OPEN_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_ON1:_L1/ */ _L1_CLOSE_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:RETRACT_EV_ON:_L1/ */ _L1_RETRACT_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:RETRAIT_EV_OFF:_L2/ */ _L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:RETRAIT_EV_OFF:_L1/ */ _L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:GENERAL_EV_OFF1:_L1/ */ _L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:INTERRUPTION_TO_UP:_L3/ */ _L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:INTERRUPTION_TO_UP:_L2/ */ _L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:INTERRUPTION_TO_UP:_L1/ */ _L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:INTERRUPTION_DOWN:_L3/ */ _L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:INTERRUPTION_DOWN:_L2/ */ _L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:INTERRUPTION_DOWN:_L1/ */ _L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
  SSM_TR_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_fired_strong;
  SSM_TR_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ _11_State_Machine_Extend_Gear_fired;
  kcg_bool /* all_gears_extended/ */ all_gears_extended;
  kcg_bool /* all_shock_absorber_false/ */ all_shock_absorber_false;
  kcg_bool /* all_doors_closed/ */ all_doors_closed;
  kcg_bool /* all_doors_open/ */ all_doors_open;
  kcg_bool /* all_gears_retracted/ */ all_gears_retracted;
  kcg_bool /* _L140/ */ _L140;
  kcg_bool /* _L139/ */ _L139;
  kcg_bool /* _L138/ */ _L138;
  kcg_bool /* _L137/ */ _L137;
  kcg_bool /* _L136/ */ _L136;
  kcg_bool /* _L135/ */ _L135;
  kcg_bool /* _L134/ */ _L134;
  kcg_bool /* _L133/ */ _L133;
  kcg_bool /* _L132/ */ _L132;
  kcg_bool /* _L131/ */ _L131;
  kcg_bool /* _L130/ */ _L130;
  kcg_bool /* _L129/ */ _L129;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L126/ */ _L126;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L119/ */ _L119;
  kcg_bool /* _L118/ */ _L118;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
} outC_Computing_Model;

/* ===========  node initialization and cycle functions  =========== */
/* Computing_Model/ */
extern void Computing_Model(
  inC_Computing_Model *inC,
  outC_Computing_Model *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Computing_Model_reset(outC_Computing_Model *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Computing_Model_init(outC_Computing_Model *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Computing_Model/
  @1: (times#22)
  @2: (times#23)
  @3: (times#21)
  @4: (times#19)
  @5: (times#20)
  @6: (times#24)
  @7: (times#25)
  @8: (times#26)
*/

#endif /* _Computing_Model_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Computing_Model.h
** Generation date: 2020-02-07T16:32:56
*************************************************************$ */

