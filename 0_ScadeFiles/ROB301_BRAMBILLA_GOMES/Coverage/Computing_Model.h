/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/Coverage/config.txt
** Generation date: 2020-02-07T16:30:49
*************************************************************$ */
#ifndef _Computing_Model_H_
#define _Computing_Model_H_

#include "kcg_types.h"

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
  kcg_bool /* general_EV/ */ general_EV;
  kcg_bool /* close_EV/ */ close_EV;
  kcg_bool /* open_EV/ */ open_EV;
  kcg_bool /* retract_EV/ */ retract_EV;
  kcg_bool /* extend_EV/ */ extend_EV;
  kcg_bool /* gears_Locked_Down/ */ gears_Locked_Down;
  kcg_bool /* gears_Maneuvring/ */ gears_Maneuvring;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_reset_act;
  SSM_ST_State_Machine_Extend_Gear /* State_Machine_Extend_Gear: */ State_Machine_Extend_Gear_state_nxt;
  kcg_size /* @1/_/v3/ */ v3_times_26_size;
  kcg_size /* @2/_/v3/ */ v3_times_25_size;
  kcg_size /* @3/_/v3/ */ v3_times_24_size;
  kcg_size /* @4/_/v3/ */ v3_times_20_size;
  kcg_size /* @5/_/v3/ */ v3_times_19_size;
  kcg_size /* @6/_/v3/ */ v3_times_21_size;
  kcg_size /* @7/_/v3/ */ v3_times_23_size;
  kcg_size /* @8/_/v3/ */ v3_times_22_size;
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_bool init5;
  kcg_bool init6;
  kcg_bool init7;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
  @1: (times#26)
  @2: (times#25)
  @3: (times#24)
  @4: (times#20)
  @5: (times#19)
  @6: (times#21)
  @7: (times#23)
  @8: (times#22)
*/

#endif /* _Computing_Model_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Computing_Model.h
** Generation date: 2020-02-07T16:30:49
*************************************************************$ */

