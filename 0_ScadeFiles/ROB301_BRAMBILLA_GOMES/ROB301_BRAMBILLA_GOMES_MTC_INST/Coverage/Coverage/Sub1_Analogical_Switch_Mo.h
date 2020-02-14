/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */
#ifndef _Sub1_Analogical_Switch_Mo_H_
#define _Sub1_Analogical_Switch_Mo_H_

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
  kcg_bool /* MTC_anomaly/, anomaly/ */ anomaly;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @16/MTC_ALL1/ */ MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1;
  Result_MTC /* @14/MTC_ALL1/ */ _1_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_3;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_2;
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_1;
  Result_MTC /* @6/MTC_ALL1/ */ _2_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;
  Result_MTC /* @8/MTC_ALL1/ */ _3_MTC_ALL1_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3;
  Result_MTC /* @9/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_3;
  Result_MTC /* @10/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_2;
  Result_MTC /* @11/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_1;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* MTC_handle/ */ MTC_handle;
  kcg_bool /* Sub1_Analogical_Switch_Monitoring: */ Sub1_Analogical_Switch_Monitoring_reset_act;
  SSM_ST_Sub1_Analogical_Switch_Monitoring /* Sub1_Analogical_Switch_Monitoring: */ _4_Sub1_Analogical_Switch_Monitoring_state_nxt;
  kcg_int32 /* @2/_/v3/ */ v3_times_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23_int32;
  kcg_int32 /* @6/v3/ */ v3_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;
  kcg_bool init;
  kcg_bool init5;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL02_MTC /* @16/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1;
  outC_LATCHALL03_MTC /* @14/MTC_ALL1=(MTC::LATCHALL03)/ */ Context_LATCHALL03_MTC_Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_STATE_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */ _6_Context_LATCHALL02_MTC_STATE_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */ _7_Context_LATCHALL02_MTC_STATE_MTC_OBS_1;
  outC_LATCHALL04_MTC /* @6/MTC_ALL1=(MTC::LATCHALL04)/ */ Context_LATCHALL04_MTC_Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_23_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_23;
  outC_LATCHALL02_MTC /* @8/MTC_ALL1=(MTC::LATCHALL02)/ */ _8_Context_LATCHALL02_MTC_Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST_3;
  outC_LATCHALL01_MTC /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */ _9_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @11/MTC_ALL1=(MTC::LATCHALL01)/ */ _10_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_Sub1_Analogical_Switch_Monitoring /* Sub1_Analogical_Switch_Monitoring: */ _11_Sub1_Analogical_Switch_Monitoring_state_act;
  SSM_ST_Sub1_Analogical_Switch_Monitoring /* Sub1_Analogical_Switch_Monitoring: */ _12_Sub1_Analogical_Switch_Monitoring_state_sel;
  kcg_bool /* Sub1_Analogical_Switch_Monitoring:WAITING:<2> */ tr_2_clock_WAITING_Sub1_Analogical_Switch_Monitoring;
  kcg_bool /* @7/MTC_guard/,
     Sub1_Analogical_Switch_Monitoring:WAITING:<1> */ tr_1_clock_WAITING_Sub1_Analogical_Switch_Monitoring;
  kcg_bool /* @12/MTC_guard/,
     @12/handle_Change/,
     Sub1_Analogical_Switch_Monitoring:,
     Sub1_Analogical_Switch_Monitoring:NO_ANOMALY:<1> */ tr_1_clock_NO_ANOMALY_Sub1_Analogical_Switch_Monitoring;
} outC_Sub1_Analogical_Switch_Mo;

/* ===========  node initialization and cycle functions  =========== */
/* Sub1_Analogical_Switch_Monitoring/ */
extern void Sub1_Analogical_Switch_Mo(
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
  outC_Sub1_Analogical_Switch_Mo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sub1_Analogical_Switch_Mo_reset(
  outC_Sub1_Analogical_Switch_Mo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sub1_Analogical_Switch_Mo_init(
  outC_Sub1_Analogical_Switch_Mo *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Sub1_Analogical_Switch_Monitoring/
  @1: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_2_MTC_INST#23)
  @2: @1/(times#23)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @4: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @5: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @6: @1/(MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS2_MTC_OBS#23)
  @7: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_WAITING_1_MTC_INST#3)
  @8: @7/(MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS3_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @10: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @11: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
  @12: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_Sub1_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST#1)
  @13: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_MTC_anomaly_def_MTC_INST#1)
  @14: (MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS4_MTC_OBS#1)
  @15: (MTCEx::MTC_Instrumenters::Sub1_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST#1)
  @16: @15/(MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS#1)
*/

#endif /* _Sub1_Analogical_Switch_Mo_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub1_Analogical_Switch_Mo.h
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

