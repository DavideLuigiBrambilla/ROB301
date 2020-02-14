/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:54:06
*************************************************************$ */
#ifndef _Computing_Model_H_
#define _Computing_Model_H_

#include "kcg_types.h"
#include "LATCHALL03_MTC.h"
#include "LATCHALL04_MTC.h"
#include "LATCHALL02_MTC.h"
#include "LATCHALL01_MTC.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* handle/ */ handle;
  kcg_bool /* _L130/, _L24/, gear_Extended_front/ */ gear_Extended_front;
  kcg_bool /* _L131/, _L25/, gear_Extended_right/ */ gear_Extended_right;
  kcg_bool /* _L133/, _L26/, gear_Extended_left/ */ gear_Extended_left;
  kcg_bool /* _L134/, _L33/, gear_Retracted_front/ */ gear_Retracted_front;
  kcg_bool /* _L132/, _L34/, gear_Retracted_right/ */ gear_Retracted_right;
  kcg_bool /* _L138/, _L92/, gear_Retracted_left/ */ gear_Retracted_left;
  kcg_bool /* _L42/, gear_Shock_Absorber_front/ */ gear_Shock_Absorber_front;
  kcg_bool /* _L43/, gear_Shock_Absorber_right/ */ gear_Shock_Absorber_right;
  kcg_bool /* _L44/, gear_Shock_Absorber_left/ */ gear_Shock_Absorber_left;
  kcg_bool /* _L127/, _L51/, door_Closed_front/ */ door_Closed_front;
  kcg_bool /* _L123/, _L52/, door_Closed_right/ */ door_Closed_right;
  kcg_bool /* _L119/, _L53/, door_Closed_left/ */ door_Closed_left;
  kcg_bool /* _L125/, _L60/, door_Open_front/ */ door_Open_front;
  kcg_bool /* _L124/, _L61/, door_Open_right/ */ door_Open_right;
  kcg_bool /* _L126/, _L62/, door_Open_left/ */ door_Open_left;
} inC_Computing_Model;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MTC_general_EV/, general_EV/ */ general_EV;
  kcg_bool /* MTC_close_EV/, close_EV/ */ close_EV;
  kcg_bool /* MTC_open_EV/, open_EV/ */ open_EV;
  kcg_bool /* MTC_retract_EV/, retract_EV/ */ retract_EV;
  kcg_bool /* MTC_extend_EV/, extend_EV/ */ extend_EV;
  kcg_bool /* MTC_gears_Locked_Down/, gears_Locked_Down/ */ gears_Locked_Down;
  kcg_bool /* MTC_gears_Maneuvring/, gears_Maneuvring/ */ gears_Maneuvring;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @99/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_1;
  Result_MTC /* @98/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12;
  Result_MTC /* @96/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_2;
  Result_MTC /* @95/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
  Result_MTC /* @93/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_3;
  Result_MTC /* @92/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_4;
  Result_MTC /* @91/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_5;
  Result_MTC /* @90/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_6;
  Result_MTC /* @89/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_7;
  Result_MTC /* @88/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_8;
  Result_MTC /* @87/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_9;
  Result_MTC /* @86/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_10;
  Result_MTC /* @85/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_11;
  Result_MTC /* @84/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_12;
  Result_MTC /* @83/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
  Result_MTC /* @82/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_13;
  Result_MTC /* @81/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_14;
  Result_MTC /* @80/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
  Result_MTC /* @79/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_15;
  Result_MTC /* @78/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_16;
  Result_MTC /* @77/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_17;
  Result_MTC /* @76/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
  Result_MTC /* @74/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_18;
  Result_MTC /* @73/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_19;
  Result_MTC /* @72/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19;
  Result_MTC /* @70/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
  Result_MTC /* @69/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_20;
  Result_MTC /* @68/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_21;
  Result_MTC /* @67/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21;
  Result_MTC /* @65/MTC_ALL1/ */ MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
  Result_MTC /* @64/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_22;
  Result_MTC /* @63/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_25;
  Result_MTC /* @62/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_23;
  Result_MTC /* @61/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_24;
  Result_MTC /* @60/MTC_ALL1/ */ _1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16;
  Result_MTC /* @58/MTC_ALL1/ */ _2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15;
  Result_MTC /* @56/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_26;
  Result_MTC /* @55/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_27;
  Result_MTC /* @54/MTC_ALL1/ */ _3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20;
  Result_MTC /* @52/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_28;
  Result_MTC /* @51/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_29;
  Result_MTC /* @50/MTC_ALL1/ */ _4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17;
  Result_MTC /* @48/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_30;
  Result_MTC /* @47/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_31;
  Result_MTC /* @46/MTC_ALL1/ */ _5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18;
  Result_MTC /* @44/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_32;
  Result_MTC /* @43/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_33;
  Result_MTC /* @42/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_34;
  Result_MTC /* @41/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_35;
  Result_MTC /* @40/MTC_ALL1/ */ _6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
  Result_MTC /* @38/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_36;
  Result_MTC /* @37/MTC_ALL1/ */ _7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
  Result_MTC /* @35/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_1;
  Result_MTC /* @34/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_2;
  Result_MTC /* @33/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_3;
  Result_MTC /* @32/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_4;
  Result_MTC /* @31/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_5;
  Result_MTC /* @30/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_6;
  Result_MTC /* @29/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_7;
  Result_MTC /* @28/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_8;
  Result_MTC /* @27/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_9;
  Result_MTC /* @26/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_10;
  Result_MTC /* @25/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_11;
  Result_MTC /* @24/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_12;
  Result_MTC /* @23/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_13;
  Result_MTC /* @22/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_14;
  Result_MTC /* @21/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_15;
  Result_MTC /* @20/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_16;
  Result_MTC /* @19/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_17;
  Result_MTC /* @18/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_18;
  Result_MTC /* @17/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_19;
  Result_MTC /* @16/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_20;
  Result_MTC /* @15/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_21;
  Result_MTC /* @14/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_22;
  Result_MTC /* @13/MTC_ALL1/ */ _8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1;
  Result_MTC /* @12/MTC_ALL1/ */ _9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1;
  Result_MTC /* @11/MTC_ALL1/ */ _10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1;
  Result_MTC /* @10/MTC_ALL1/ */ _11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1;
  Result_MTC /* @9/MTC_ALL1/ */ _12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init13;
  kcg_bool init14;
  kcg_bool init15;
  kcg_bool init16;
  kcg_bool init17;
  kcg_bool init18;
  kcg_bool init19;
  kcg_int32 /* @95/v3/ */ v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
  kcg_size /* @100/_/v3/ */ v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size;
  kcg_int32 /* @83/v3/ */ v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
  kcg_size /* @2/_/v3/ */ v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size;
  kcg_int32 /* @80/v3/ */ v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
  kcg_size /* @4/_/v3/ */ v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size;
  kcg_int32 /* @76/v3/ */ v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
  kcg_size /* @109/_/v3/ */ v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size;
  kcg_int32 /* @70/v3/ */ v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
  kcg_size /* @6/_/v3/ */ v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size;
  kcg_int32 /* @65/v3/ */ v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
  kcg_size /* @8/_/v3/ */ v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size;
  kcg_int32 /* @40/v3/ */ v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
  kcg_size /* @113/_/v3/ */ v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size;
  kcg_int32 /* @37/v3/ */ v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
  kcg_size /* @114/_/v3/ */ v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size;
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_state_nxt;
  kcg_bool /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_reset_act;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL03_MTC /* @9/MTC_ALL1=(MTC::LATCHALL03)/ */ Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @10/MTC_ALL1=(MTC::LATCHALL03)/ */ _20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @11/MTC_ALL1=(MTC::LATCHALL03)/ */ _21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */ _22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */ _23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @14/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_STATE_MTC_OBS_22;
  outC_LATCHALL02_MTC /* @15/MTC_ALL1=(MTC::LATCHALL02)/ */ _24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21;
  outC_LATCHALL02_MTC /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */ _25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20;
  outC_LATCHALL02_MTC /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */ _26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19;
  outC_LATCHALL02_MTC /* @18/MTC_ALL1=(MTC::LATCHALL02)/ */ _27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18;
  outC_LATCHALL02_MTC /* @19/MTC_ALL1=(MTC::LATCHALL02)/ */ _28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17;
  outC_LATCHALL02_MTC /* @20/MTC_ALL1=(MTC::LATCHALL02)/ */ _29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16;
  outC_LATCHALL02_MTC /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */ _30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15;
  outC_LATCHALL02_MTC /* @22/MTC_ALL1=(MTC::LATCHALL02)/ */ _31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14;
  outC_LATCHALL02_MTC /* @23/MTC_ALL1=(MTC::LATCHALL02)/ */ _32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13;
  outC_LATCHALL02_MTC /* @24/MTC_ALL1=(MTC::LATCHALL02)/ */ _33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12;
  outC_LATCHALL02_MTC /* @25/MTC_ALL1=(MTC::LATCHALL02)/ */ _34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11;
  outC_LATCHALL02_MTC /* @26/MTC_ALL1=(MTC::LATCHALL02)/ */ _35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10;
  outC_LATCHALL02_MTC /* @27/MTC_ALL1=(MTC::LATCHALL02)/ */ _36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9;
  outC_LATCHALL02_MTC /* @28/MTC_ALL1=(MTC::LATCHALL02)/ */ _37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8;
  outC_LATCHALL02_MTC /* @29/MTC_ALL1=(MTC::LATCHALL02)/ */ _38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7;
  outC_LATCHALL02_MTC /* @30/MTC_ALL1=(MTC::LATCHALL02)/ */ _39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6;
  outC_LATCHALL02_MTC /* @31/MTC_ALL1=(MTC::LATCHALL02)/ */ _40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5;
  outC_LATCHALL02_MTC /* @32/MTC_ALL1=(MTC::LATCHALL02)/ */ _41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4;
  outC_LATCHALL02_MTC /* @33/MTC_ALL1=(MTC::LATCHALL02)/ */ _42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @34/MTC_ALL1=(MTC::LATCHALL02)/ */ _43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @35/MTC_ALL1=(MTC::LATCHALL02)/ */ _44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1;
  outC_LATCHALL04_MTC /* @37/MTC_ALL1=(MTC::LATCHALL04)/ */ Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26;
  outC_LATCHALL01_MTC /* @38/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36;
  outC_LATCHALL04_MTC /* @40/MTC_ALL1=(MTC::LATCHALL04)/ */ _45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25;
  outC_LATCHALL01_MTC /* @41/MTC_ALL1=(MTC::LATCHALL01)/ */ _46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35;
  outC_LATCHALL01_MTC /* @42/MTC_ALL1=(MTC::LATCHALL01)/ */ _47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34;
  outC_LATCHALL01_MTC /* @43/MTC_ALL1=(MTC::LATCHALL01)/ */ _48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33;
  outC_LATCHALL01_MTC /* @44/MTC_ALL1=(MTC::LATCHALL01)/ */ _49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32;
  outC_LATCHALL02_MTC /* @46/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18;
  outC_LATCHALL01_MTC /* @47/MTC_ALL1=(MTC::LATCHALL01)/ */ _50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31;
  outC_LATCHALL01_MTC /* @48/MTC_ALL1=(MTC::LATCHALL01)/ */ _51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30;
  outC_LATCHALL02_MTC /* @50/MTC_ALL1=(MTC::LATCHALL02)/ */ _52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17;
  outC_LATCHALL01_MTC /* @51/MTC_ALL1=(MTC::LATCHALL01)/ */ _53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29;
  outC_LATCHALL01_MTC /* @52/MTC_ALL1=(MTC::LATCHALL01)/ */ _54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28;
  outC_LATCHALL02_MTC /* @54/MTC_ALL1=(MTC::LATCHALL02)/ */ _55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20;
  outC_LATCHALL01_MTC /* @55/MTC_ALL1=(MTC::LATCHALL01)/ */ _56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27;
  outC_LATCHALL01_MTC /* @56/MTC_ALL1=(MTC::LATCHALL01)/ */ _57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26;
  outC_LATCHALL02_MTC /* @58/MTC_ALL1=(MTC::LATCHALL02)/ */ _58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15;
  outC_LATCHALL02_MTC /* @60/MTC_ALL1=(MTC::LATCHALL02)/ */ _59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16;
  outC_LATCHALL01_MTC /* @61/MTC_ALL1=(MTC::LATCHALL01)/ */ _60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24;
  outC_LATCHALL01_MTC /* @62/MTC_ALL1=(MTC::LATCHALL01)/ */ _61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23;
  outC_LATCHALL01_MTC /* @63/MTC_ALL1=(MTC::LATCHALL01)/ */ _62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25;
  outC_LATCHALL01_MTC /* @64/MTC_ALL1=(MTC::LATCHALL01)/ */ _63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22;
  outC_LATCHALL04_MTC /* @65/MTC_ALL1=(MTC::LATCHALL04)/ */ _64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24;
  outC_LATCHALL02_MTC /* @67/MTC_ALL1=(MTC::LATCHALL02)/ */ _65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21;
  outC_LATCHALL01_MTC /* @68/MTC_ALL1=(MTC::LATCHALL01)/ */ _66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21;
  outC_LATCHALL01_MTC /* @69/MTC_ALL1=(MTC::LATCHALL01)/ */ _67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20;
  outC_LATCHALL04_MTC /* @70/MTC_ALL1=(MTC::LATCHALL04)/ */ _68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20;
  outC_LATCHALL02_MTC /* @72/MTC_ALL1=(MTC::LATCHALL02)/ */ _69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19;
  outC_LATCHALL01_MTC /* @73/MTC_ALL1=(MTC::LATCHALL01)/ */ _70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19;
  outC_LATCHALL01_MTC /* @74/MTC_ALL1=(MTC::LATCHALL01)/ */ _71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18;
  outC_LATCHALL04_MTC /* @76/MTC_ALL1=(MTC::LATCHALL04)/ */ _72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19;
  outC_LATCHALL01_MTC /* @77/MTC_ALL1=(MTC::LATCHALL01)/ */ _73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17;
  outC_LATCHALL01_MTC /* @78/MTC_ALL1=(MTC::LATCHALL01)/ */ _74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16;
  outC_LATCHALL01_MTC /* @79/MTC_ALL1=(MTC::LATCHALL01)/ */ _75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15;
  outC_LATCHALL04_MTC /* @80/MTC_ALL1=(MTC::LATCHALL04)/ */ _76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21;
  outC_LATCHALL01_MTC /* @81/MTC_ALL1=(MTC::LATCHALL01)/ */ _77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14;
  outC_LATCHALL01_MTC /* @82/MTC_ALL1=(MTC::LATCHALL01)/ */ _78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13;
  outC_LATCHALL04_MTC /* @83/MTC_ALL1=(MTC::LATCHALL04)/ */ _79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23;
  outC_LATCHALL01_MTC /* @84/MTC_ALL1=(MTC::LATCHALL01)/ */ _80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12;
  outC_LATCHALL01_MTC /* @85/MTC_ALL1=(MTC::LATCHALL01)/ */ _81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11;
  outC_LATCHALL01_MTC /* @86/MTC_ALL1=(MTC::LATCHALL01)/ */ _82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10;
  outC_LATCHALL01_MTC /* @87/MTC_ALL1=(MTC::LATCHALL01)/ */ _83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9;
  outC_LATCHALL01_MTC /* @88/MTC_ALL1=(MTC::LATCHALL01)/ */ _84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8;
  outC_LATCHALL01_MTC /* @89/MTC_ALL1=(MTC::LATCHALL01)/ */ _85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7;
  outC_LATCHALL01_MTC /* @90/MTC_ALL1=(MTC::LATCHALL01)/ */ _86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6;
  outC_LATCHALL01_MTC /* @91/MTC_ALL1=(MTC::LATCHALL01)/ */ _87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5;
  outC_LATCHALL01_MTC /* @92/MTC_ALL1=(MTC::LATCHALL01)/ */ _88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @93/MTC_ALL1=(MTC::LATCHALL01)/ */ _89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3;
  outC_LATCHALL04_MTC /* @95/MTC_ALL1=(MTC::LATCHALL04)/ */ _90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22;
  outC_LATCHALL01_MTC /* @96/MTC_ALL1=(MTC::LATCHALL01)/ */ _91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @98/MTC_ALL1=(MTC::LATCHALL02)/ */ _92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12;
  outC_LATCHALL01_MTC /* @99/MTC_ALL1=(MTC::LATCHALL01)/ */ _93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @97/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:RETRACTED_UP:<1> */ tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear;
  kcg_bool /* @100/_/o/,
     @94/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:GEN_EV_ON:<1> */ tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* @101/MTC_guard/,
     @101/handle/,
     State_Machine_Extend_Gear:OPEN_EV_ON:<1> */ tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON:<2> */ tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* @102/MTC_guard/,
     @102/handle/,
     State_Machine_Extend_Gear:EXTEND_EV_ON:<1> */ tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTEND_EV_ON:<2> */ tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* @103/MTC_guard/,
     @103/handle/,
     State_Machine_Extend_Gear:EXTEND_EV_OFF:<1> */ tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:EXTEND_EV_OFF:<2> */ tr_2_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* @104/MTC_guard/,
     @104/handle/,
     State_Machine_Extend_Gear:CLOSE_EV_ON:<1> */ tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_ON:<2> */ tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* @105/MTC_guard/,
     @105/handle/,
     State_Machine_Extend_Gear:CLOSE_EV_OFF:<1> */ tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_OFF:<2> */ tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* @106/MTC_guard/,
     @106/handle/,
     State_Machine_Extend_Gear:OPEN_EV_OFF:<1> */ tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_OFF:<2> */ tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* @107/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:GENERAL_EV_OFF:<1> */ tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* @108/MTC_guard/,
     @108/handle/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:EXTENDED_DOWN:<1> */ tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear;
  kcg_bool /* @109/_/o/,
     @75/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:GENERAL_EV_ON:<1> */ tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* @71/MTC_guard/,
     State_Machine_Extend_Gear:OPEN_EV_OFF1:<1> */ tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_OFF1:<2> */ tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* @66/MTC_guard/,
     State_Machine_Extend_Gear:CLOSE_EV_OFF1:<1> */ tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:<2> */ tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* @59/MTC_guard/,
     State_Machine_Extend_Gear:OPEN_EV_ON1:<1> */ tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2><1> */ tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2><2> */ tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2> */ tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* @53/MTC_guard/,
     State_Machine_Extend_Gear:CLOSE_EV_ON1:<1> */ tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:CLOSE_EV_ON1:<2> */ tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear;
  kcg_bool /* @49/MTC_guard/,
     State_Machine_Extend_Gear:RETRACT_EV_ON:<1> */ tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:RETRACT_EV_ON:<2> */ tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear;
  kcg_bool /* @45/MTC_guard/,
     State_Machine_Extend_Gear:RETRAIT_EV_OFF:<1> */ tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* State_Machine_Extend_Gear:RETRAIT_EV_OFF:<2> */ tr_2_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
  kcg_bool /* @110/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:GENERAL_EV_OFF1:<1> */ tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
  kcg_bool /* @111/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1> */ tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
  kcg_bool /* @112/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:INTERRUPTION_DOWN:<1> */ tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
  kcg_bool /* @113/_/o/,
     @39/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:WAITING_TO_UP:<1> */ tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear;
  kcg_bool /* @114/_/o/,
     @36/MTC_guard/,
     State_Machine_Extend_Gear:,
     State_Machine_Extend_Gear:WAITING_DOWN:<1> */ tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear;
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ _94_State_Machine_Extend_Gear_state_sel;
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ _95_State_Machine_Extend_Gear_state_act;
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
  @1: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST#23)
  @2: @1/(times#23)
  @3: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST#21)
  @4: @3/(times#21)
  @5: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST#20)
  @6: @5/(times#20)
  @7: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST#24)
  @8: @7/(times#24)
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
  @36: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST#26)
  @37: @36/(MTCEx::MTC_Observers::Computing_Model_PATHS16_MTC_OBS#26)
  @38: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#36)
  @39: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST#25)
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
  @57: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST#15)
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
  @75: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST#19)
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
  @94: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST#22)
  @95: @94/(MTCEx::MTC_Observers::Computing_Model_PATHS2_MTC_OBS#22)
  @96: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @97: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST#12)
  @98: @97/(MTCEx::MTC_Observers::Computing_Model_PATHS1_MTC_OBS#1)
  @99: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
  @100: @94/(times#22)
  @101: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON_1_MTC_INST#1)
  @102: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_ON_1_MTC_INST#1)
  @103: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_OFF_1_MTC_INST#1)
  @104: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON_1_MTC_INST#1)
  @105: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_1_MTC_INST#1)
  @106: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_1_MTC_INST#1)
  @107: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF_1_MTC_INST#1)
  @108: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTENDED_DOWN_1_MTC_INST#1)
  @109: @75/(times#19)
  @110: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF1_1_MTC_INST#1)
  @111: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_TO_UP_1_MTC_INST#1)
  @112: (MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_DOWN_1_MTC_INST#1)
  @113: @39/(times#25)
  @114: @36/(times#26)
*/

#endif /* _Computing_Model_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Computing_Model.h
** Generation date: 2020-02-07T16:54:06
*************************************************************$ */

