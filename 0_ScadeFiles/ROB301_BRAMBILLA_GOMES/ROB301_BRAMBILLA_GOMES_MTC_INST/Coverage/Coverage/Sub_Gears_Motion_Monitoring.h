/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:19:59
*************************************************************$ */
#ifndef _Sub_Gears_Motion_Monitoring_H_
#define _Sub_Gears_Motion_Monitoring_H_

#include "kcg_types.h"
#include "LATCHALL03_MTC.h"
#include "LATCHALL04_MTC.h"
#include "LATCHALL01_MTC.h"
#include "LATCHALL02_MTC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MTC_gears_anomaly/, gears_anomaly/ */ gears_anomaly;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @17/MTC_ALL1/ */ MTC_ALL1_Sub_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Gears_Motion_Monitoring_MTC_retract_extend_EV_last_MTC_INST_1;
  Result_MTC /* @15/MTC_ALL1/ */ _1_MTC_ALL1_Sub_Gears_Motion_Monitoring_PATHS6_MTC_OBS_1;
  Result_MTC /* @14/MTC_ALL1/ */ _2_MTC_ALL1_Sub_Gears_Motion_Monitoring_PATHS5_MTC_OBS_1;
  Result_MTC /* @13/MTC_ALL1/ */ _3_MTC_ALL1_Sub_Gears_Motion_Monitoring_PATHS4_MTC_OBS_1;
  Result_MTC /* @12/MTC_ALL1/ */ _4_MTC_ALL1_Sub_Gears_Motion_Monitoring_PATHS3_MTC_OBS_1;
  Result_MTC /* @1/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_3;
  Result_MTC /* @2/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_2;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_1;
  Result_MTC /* @5/MTC_ALL1/ */ _5_MTC_ALL1_Sub_Gears_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Gears_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;
  Result_MTC /* @6/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_3;
  Result_MTC /* @7/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_2;
  Result_MTC /* @8/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_1;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* MTC_retract_extend_EV/ */ MTC_retract_extend_EV;
  kcg_bool /* Sub_Doors_Motion_Monitoring: */ Sub_Doors_Motion_Monitoring_reset_act;
  SSM_ST_Sub_Doors_Motion_Monitoring /* Sub_Doors_Motion_Monitoring: */ Sub_Doors_Motion_Monitoring_state_nxt;
  kcg_int32 /* @9/_/v3/ */ v3_times_1_Sub_Gears_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1_int32;
  kcg_int32 /* @5/v3/ */ v3_Sub_Gears_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Gears_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;
  kcg_bool init;
  kcg_bool init6;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL02_MTC /* @17/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_Sub_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1_Sub_Gears_Motion_Monitoring_MTC_retract_extend_EV_last_MTC_INST_1;
  outC_LATCHALL03_MTC /* @15/MTC_ALL1=(MTC::LATCHALL03)/ */ Context_LATCHALL03_MTC_Sub_Gears_Motion_Monitoring_PATHS6_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */ _7_Context_LATCHALL03_MTC_Sub_Gears_Motion_Monitoring_PATHS5_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @13/MTC_ALL1=(MTC::LATCHALL03)/ */ _8_Context_LATCHALL03_MTC_Sub_Gears_Motion_Monitoring_PATHS4_MTC_OBS_1;
  outC_LATCHALL03_MTC /* @12/MTC_ALL1=(MTC::LATCHALL03)/ */ _9_Context_LATCHALL03_MTC_Sub_Gears_Motion_Monitoring_PATHS3_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @1/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_STATE_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @2/MTC_ALL1=(MTC::LATCHALL02)/ */ _10_Context_LATCHALL02_MTC_STATE_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */ _11_Context_LATCHALL02_MTC_STATE_MTC_OBS_1;
  outC_LATCHALL04_MTC /* @5/MTC_ALL1=(MTC::LATCHALL04)/ */ Context_LATCHALL04_MTC_Sub_Gears_Motion_Monitoring_PATHS2_MTC_OBS_1_Sub_Gears_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST_1;
  outC_LATCHALL01_MTC /* @6/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */ _12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @8/MTC_ALL1=(MTC::LATCHALL01)/ */ _13_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_Sub_Doors_Motion_Monitoring /* Sub_Doors_Motion_Monitoring: */ _14_Sub_Doors_Motion_Monitoring_state_act;
  SSM_ST_Sub_Doors_Motion_Monitoring /* Sub_Doors_Motion_Monitoring: */ _15_Sub_Doors_Motion_Monitoring_state_sel;
  kcg_bool /* Sub_Doors_Motion_Monitoring:WAITING:<2> */ tr_2_clock_WAITING_Sub_Doors_Motion_Monitoring;
  kcg_bool /* @4/MTC_guard/,
     @9/_/o/,
     Sub_Doors_Motion_Monitoring:WAITING:<1> */ tr_1_clock_WAITING_Sub_Doors_Motion_Monitoring;
  kcg_bool /* @10/MTC_guard/,
     @10/stimulus/,
     Sub_Doors_Motion_Monitoring:,
     Sub_Doors_Motion_Monitoring:NO_ANOMALY:<1> */ tr_1_clock_NO_ANOMALY_Sub_Doors_Motion_Monitoring;
} outC_Sub_Gears_Motion_Monitoring;

/* ===========  node initialization and cycle functions  =========== */
/* Sub_Gears_Motion_Monitoring/ */
extern void Sub_Gears_Motion_Monitoring(
  /* _L4/, retract_extend_EV/ */
  kcg_bool retract_extend_EV,
  /* _L13/, gear_status_front/ */
  kcg_bool gear_status_front,
  /* _L12/, gear_status_right/ */
  kcg_bool gear_status_right,
  /* _L15/, gear_status_left/ */
  kcg_bool gear_status_left,
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
  outC_Sub_Gears_Motion_Monitoring *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sub_Gears_Motion_Monitoring_reset(
  outC_Sub_Gears_Motion_Monitoring *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sub_Gears_Motion_Monitoring_init(
  outC_Sub_Gears_Motion_Monitoring *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Sub_Gears_Motion_Monitoring/
  @1: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @2: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @4: (MTCEx::MTC_Instrumenters::Sub_Gears_Motion_Monitoring_Sub_Doors_Motion_Monitoring_WAITING_1_MTC_INST#1)
  @5: @4/(MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_PATHS2_MTC_OBS#1)
  @6: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @7: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @8: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
  @9: @4/(times#1)
  @10: (MTCEx::MTC_Instrumenters::Sub_Gears_Motion_Monitoring_Sub_Doors_Motion_Monitoring_NO_ANOMALY_1_MTC_INST#1)
  @11: (MTCEx::MTC_Instrumenters::Sub_Gears_Motion_Monitoring_MTC_gears_anomaly_def_MTC_INST#1)
  @12: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_PATHS3_MTC_OBS#1)
  @13: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_PATHS4_MTC_OBS#1)
  @14: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_PATHS5_MTC_OBS#1)
  @15: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_PATHS6_MTC_OBS#1)
  @16: (MTCEx::MTC_Instrumenters::Sub_Gears_Motion_Monitoring_MTC_retract_extend_EV_last_MTC_INST#1)
  @17: @16/(MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_PATHS1_MTC_OBS#1)
*/

#endif /* _Sub_Gears_Motion_Monitoring_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub_Gears_Motion_Monitoring.h
** Generation date: 2020-02-07T16:19:59
*************************************************************$ */

