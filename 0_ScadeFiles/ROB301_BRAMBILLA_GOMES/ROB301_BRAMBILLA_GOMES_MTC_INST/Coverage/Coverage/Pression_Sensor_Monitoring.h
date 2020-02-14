/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:03
*************************************************************$ */
#ifndef _Pression_Sensor_Monitoring_H_
#define _Pression_Sensor_Monitoring_H_

#include "kcg_types.h"
#include "Sub2_Pression_Sensor_Moni.h"
#include "Sub1_Pression_Sensor_Moni.h"
#include "LATCHALL01_MTC.h"
#include "LATCHALL02_MTC.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* _L1/, general_EV/ */ general_EV;
  kcg_bool /* _L2/, circuit_Pressurized/ */ circuit_Pressurized;
} inC_Pression_Sensor_Monitoring;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L5/, pressure_anomaly/ */ pressure_anomaly;
  /* -----------------------   local probes  ------------------------- */
  Result_MTC /* @3/MTC_ALL1/ */ MTC_ALL1_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1;
  Result_MTC /* @2/MTC_ALL1/ */ MTC_ALL1_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1;
  Result_MTC /* @1/MTC_ALL1/ */ MTC_ALL1_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LATCHALL01_MTC /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1;
  outC_LATCHALL01_MTC /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */ Context_LATCHALL01_MTC_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1;
  outC_LATCHALL02_MTC /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */ Context_LATCHALL02_MTC_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1;
  outC_Sub1_Pression_Sensor_Moni /* _L3=(Sub1_Pression_Sensor_Monitoring#1)/ */ Context_Sub1_Pression_Sensor_Monitoring_1;
  outC_Sub2_Pression_Sensor_Moni /* _L4=(Sub2_Pression_Sensor_Monitoring#1)/ */ Context_Sub2_Pression_Sensor_Monitoring_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Pression_Sensor_Monitoring;

/* ===========  node initialization and cycle functions  =========== */
/* Pression_Sensor_Monitoring/ */
extern void Pression_Sensor_Monitoring(
  inC_Pression_Sensor_Monitoring *inC,
  outC_Pression_Sensor_Monitoring *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Pression_Sensor_Monitoring_reset(
  outC_Pression_Sensor_Monitoring *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Pression_Sensor_Monitoring_init(
  outC_Pression_Sensor_Monitoring *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Pression_Sensor_Monitoring/
  @1: (MTCEx::MTC_Observers::Sub2_Pression_Sensor_Monitoring_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Sub1_Pression_Sensor_Monitoring_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Pression_Sensor_Monitoring_PATHS1_MTC_OBS#1)
*/

#endif /* _Pression_Sensor_Monitoring_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Pression_Sensor_Monitoring.h
** Generation date: 2020-02-07T16:14:03
*************************************************************$ */

