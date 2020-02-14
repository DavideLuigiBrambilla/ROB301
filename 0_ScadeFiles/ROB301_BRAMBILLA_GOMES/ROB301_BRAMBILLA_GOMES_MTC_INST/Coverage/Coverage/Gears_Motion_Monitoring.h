/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:19:59
*************************************************************$ */
#ifndef _Gears_Motion_Monitoring_H_
#define _Gears_Motion_Monitoring_H_

#include "kcg_types.h"
#include "Sub_Gears_Motion_Monitoring.h"
#include "LATCHALL01_MTC.h"
#include "LATCHALL02_MTC.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* _L20/, _L30/, gear_extension_front/ */ gear_extension_front;
  kcg_bool /* _L21/, _L29/, gear_extension_left/ */ gear_extension_left;
  kcg_bool /* _L22/, _L31/, gear_extension_right/ */ gear_extension_right;
  kcg_bool /* _L14/, _L18/, gear_retraction_front/ */ gear_retraction_front;
  kcg_bool /* _L15/, _L19/, gear_retraction_left/ */ gear_retraction_left;
  kcg_bool /* _L16/, _L17/, gear_retraction_right/ */ gear_retraction_right;
  kcg_bool /* _L6/, _L7/, retraction_EV/ */ retraction_EV;
  kcg_bool /* _L8/, _L9/, extension_EV/ */ extension_EV;
} inC_Gears_Motion_Monitoring;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L5/, gear_anomaly/ */ gear_anomaly;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @5/MTC_ALL1/ */ MTC_ALL1_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1;
  Result_MTC /* @4/MTC_ALL1/ */ MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_1;
  Result_MTC /* @3/MTC_ALL1/ */ _1_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_2;
  Result_MTC /* @2/MTC_ALL1/ */ _2_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_3;
  Result_MTC /* @1/MTC_ALL1/ */ _3_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_4;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL01_MTC /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_4;
  outC_LATCHALL01_MTC /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */ _4_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_3;
  outC_LATCHALL01_MTC /* @3/MTC_ALL1=(MTC::LATCHALL01)/ */ _5_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_2;
  outC_LATCHALL01_MTC /* @4/MTC_ALL1=(MTC::LATCHALL01)/ */ _6_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1;
  outC_Sub_Gears_Motion_Monitoring /* _L1=(Sub_Gears_Motion_Monitoring#1)/ */ Context_Sub_Gears_Motion_Monitoring_1;
  outC_Sub_Gears_Motion_Monitoring /* _L2=(Sub_Gears_Motion_Monitoring#2)/ */ _7_Context_Sub_Gears_Motion_Monitoring_2;
  outC_Sub_Gears_Motion_Monitoring /* _L3=(Sub_Gears_Motion_Monitoring#3)/ */ _8_Context_Sub_Gears_Motion_Monitoring_3;
  outC_Sub_Gears_Motion_Monitoring /* _L4=(Sub_Gears_Motion_Monitoring#4)/ */ _9_Context_Sub_Gears_Motion_Monitoring_4;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Gears_Motion_Monitoring;

/* ===========  node initialization and cycle functions  =========== */
/* Gears_Motion_Monitoring/ */
extern void Gears_Motion_Monitoring(
  inC_Gears_Motion_Monitoring *inC,
  outC_Gears_Motion_Monitoring *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Gears_Motion_Monitoring_reset(outC_Gears_Motion_Monitoring *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Gears_Motion_Monitoring_init(outC_Gears_Motion_Monitoring *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Gears_Motion_Monitoring/
  @1: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#4)
  @2: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#3)
  @3: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#2)
  @4: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#1)
  @5: (MTCEx::MTC_Observers::Gears_Motion_Monitoring_PATHS1_MTC_OBS#1)
*/

#endif /* _Gears_Motion_Monitoring_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Gears_Motion_Monitoring.h
** Generation date: 2020-02-07T16:19:59
*************************************************************$ */

