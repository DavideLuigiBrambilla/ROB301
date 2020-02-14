/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */
#ifndef _Sub2_Analogical_Switch_Mo_H_
#define _Sub2_Analogical_Switch_Mo_H_

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
  Result_MTC /* @21/MTC_ALL1/ */ MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1;
  Result_MTC /* @19/MTC_ALL1/ */ _1_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1;
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_4;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_3;
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_2;
  Result_MTC /* @6/MTC_ALL1/ */ MTC_ALL1_STATE_MTC_OBS_1;
  Result_MTC /* @7/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_5;
  Result_MTC /* @8/MTC_ALL1/ */ _2_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
  Result_MTC /* @9/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_4;
  Result_MTC /* @10/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_3;
  Result_MTC /* @12/MTC_ALL1/ */ _3_MTC_ALL1_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;
  Result_MTC /* @13/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_2;
  Result_MTC /* @14/MTC_ALL1/ */ MTC_ALL1_TRANSITION_MTC_OBS_1;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* MTC_handle/ */ MTC_handle;
  kcg_bool /* Sub2_Analogical_Switch_Monitoring: */ Sub2_Analogical_Switch_Monitoring_reset_act;
  SSM_ST_Sub2_Analogical_Switch_Monitoring /* Sub2_Analogical_Switch_Monitoring: */ _4_Sub2_Analogical_Switch_Monitoring_state_nxt;
  kcg_int32 /* @2/_/v3/ */ v3_times_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1_int32;
  kcg_int32 /* @8/v3/ */ v3_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
  kcg_int32 /* @17/_/v3/ */ v3_times_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2_int32;
  kcg_int32 /* @12/v3/ */ _5_v3_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;
  kcg_bool init;
  kcg_bool init6;
  kcg_bool init7;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL02_MTC /* @21/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST_1;
  outC_LATCHALL03_MTC /* @19/MTC_ALL1=(MTC::LATCHALL03)/ */ Context_LATCHALL03_MTC_Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_STATE_MTC_OBS_4;
  outC_LATCHALL02_MTC /* @4/MTC_ALL1=(MTC::LATCHALL02)/ */ _8_Context_LATCHALL02_MTC_STATE_MTC_OBS_3;
  outC_LATCHALL02_MTC /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */ _9_Context_LATCHALL02_MTC_STATE_MTC_OBS_2;
  outC_LATCHALL02_MTC /* @6/MTC_ALL1=(MTC::LATCHALL02)/ */ _10_Context_LATCHALL02_MTC_STATE_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @7/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5;
  outC_LATCHALL04_MTC /* @8/MTC_ALL1=(MTC::LATCHALL04)/ */ Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS_1_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST_1;
  outC_LATCHALL01_MTC /* @9/MTC_ALL1=(MTC::LATCHALL01)/ */ _11_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @10/MTC_ALL1=(MTC::LATCHALL01)/ */ _12_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3;
  outC_LATCHALL04_MTC /* @12/MTC_ALL1=(MTC::LATCHALL04)/ */ _13_Context_LATCHALL04_MTC_Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS_2_Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST_2;
  outC_LATCHALL01_MTC /* @13/MTC_ALL1=(MTC::LATCHALL01)/ */ _14_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @14/MTC_ALL1=(MTC::LATCHALL01)/ */ _15_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_Sub2_Analogical_Switch_Monitoring /* Sub2_Analogical_Switch_Monitoring: */ _16_Sub2_Analogical_Switch_Monitoring_state_act;
  SSM_ST_Sub2_Analogical_Switch_Monitoring /* Sub2_Analogical_Switch_Monitoring: */ _17_Sub2_Analogical_Switch_Monitoring_state_sel;
  kcg_bool /* @15/MTC_guard/,
     Sub2_Analogical_Switch_Monitoring:,
     Sub2_Analogical_Switch_Monitoring:HANDLE_CHANGED:<1> */ tr_1_clock_HANDLE_CHANGED_Sub2_Analogical_Switch_Monitoring;
  kcg_bool /* Sub2_Analogical_Switch_Monitoring:WAITING:<2> */ tr_2_clock_WAITING_Sub2_Analogical_Switch_Monitoring;
  kcg_bool /* @16/MTC_guard/,
     @16/analogical_Switch/,
     Sub2_Analogical_Switch_Monitoring:WAITING:<1> */ tr_1_clock_WAITING_Sub2_Analogical_Switch_Monitoring;
  kcg_bool /* Sub2_Analogical_Switch_Monitoring:NO_ANOMALY:<2> */ tr_2_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
  kcg_bool /* @11/MTC_guard/,
     @17/_/o/,
     Sub2_Analogical_Switch_Monitoring:NO_ANOMALY:<1> */ tr_1_clock_NO_ANOMALY_Sub2_Analogical_Switch_Monitoring;
} outC_Sub2_Analogical_Switch_Mo;

/* ===========  node initialization and cycle functions  =========== */
/* Sub2_Analogical_Switch_Monitoring/ */
extern void Sub2_Analogical_Switch_Mo(
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
  outC_Sub2_Analogical_Switch_Mo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sub2_Analogical_Switch_Mo_reset(
  outC_Sub2_Analogical_Switch_Mo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sub2_Analogical_Switch_Mo_init(
  outC_Sub2_Analogical_Switch_Mo *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Sub2_Analogical_Switch_Monitoring/
  @1: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_2_MTC_INST#1)
  @2: @1/(times#1)
  @3: (MTCEx::MTC_Observers::STATE_MTC_OBS#4)
  @4: (MTCEx::MTC_Observers::STATE_MTC_OBS#3)
  @5: (MTCEx::MTC_Observers::STATE_MTC_OBS#2)
  @6: (MTCEx::MTC_Observers::STATE_MTC_OBS#1)
  @7: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#5)
  @8: @1/(MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS3_MTC_OBS#1)
  @9: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#4)
  @10: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#3)
  @11: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_NO_ANOMALY_1_MTC_INST#2)
  @12: @11/(MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS2_MTC_OBS#2)
  @13: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#2)
  @14: (MTCEx::MTC_Observers::TRANSITION_MTC_OBS#1)
  @15: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_HANDLE_CHANGED_1_MTC_INST#1)
  @16: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_Sub2_Analogical_Switch_Monitoring_WAITING_1_MTC_INST#1)
  @17: @11/(times#2)
  @18: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_MTC_anomaly_def_MTC_INST#1)
  @19: (MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS4_MTC_OBS#1)
  @20: (MTCEx::MTC_Instrumenters::Sub2_Analogical_Switch_Monitoring_MTC_handle_last_MTC_INST#1)
  @21: @20/(MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_PATHS1_MTC_OBS#1)
*/

#endif /* _Sub2_Analogical_Switch_Mo_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Sub2_Analogical_Switch_Mo.h
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

