/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pression_Sensor_Monitoring.h"

/* Pression_Sensor_Monitoring/ */
void Pression_Sensor_Monitoring(
  inC_Pression_Sensor_Monitoring *inC,
  outC_Pression_Sensor_Monitoring *outC)
{
  /* _L4=(Sub2_Pression_Sensor_Monitoring#1)/ */
  Sub2_Pression_Sensor_Moni(
    inC->general_EV,
    inC->circuit_Pressurized,
    kcg_lit_int32(10),
    kcg_true,
    &outC->Context_Sub2_Pression_Sensor_Monitoring_1);
  /* _L3=(Sub1_Pression_Sensor_Monitoring#1)/ */
  Sub1_Pression_Sensor_Moni(
    inC->general_EV,
    inC->circuit_Pressurized,
    kcg_lit_int32(2),
    kcg_true,
    &outC->Context_Sub1_Pression_Sensor_Monitoring_1);
  outC->pressure_anomaly =
    outC->Context_Sub1_Pression_Sensor_Monitoring_1.pressure_anomaly |
    outC->Context_Sub2_Pression_Sensor_Monitoring_1.pressure_anomaly;
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC(
    outC->pressure_anomaly,
    (kcg_bool) !outC->pressure_anomaly,
    &outC->Context_LATCHALL02_MTC_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1);
  outC->MTC_ALL1_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1 =
    outC->Context_LATCHALL02_MTC_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1.Output1;
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->Context_LATCHALL01_MTC_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1);
  outC->MTC_ALL1_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1 =
    outC->Context_LATCHALL01_MTC_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1.Output1;
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->Context_LATCHALL01_MTC_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1);
  outC->MTC_ALL1_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1 =
    outC->Context_LATCHALL01_MTC_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1.Output1;
}

#ifndef KCG_USER_DEFINED_INIT
void Pression_Sensor_Monitoring_init(outC_Pression_Sensor_Monitoring *outC)
{
  outC->pressure_anomaly = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1);
  /* _L3=(Sub1_Pression_Sensor_Monitoring#1)/ */
  Sub1_Pression_Sensor_Moni_init(
    &outC->Context_Sub1_Pression_Sensor_Monitoring_1);
  /* _L4=(Sub2_Pression_Sensor_Monitoring#1)/ */
  Sub2_Pression_Sensor_Moni_init(
    &outC->Context_Sub2_Pression_Sensor_Monitoring_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Pression_Sensor_Monitoring_reset(outC_Pression_Sensor_Monitoring *outC)
{
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_Sub2_Pression_Sensor_Monitoring_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_Sub1_Pression_Sensor_Monitoring_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Pression_Sensor_Monitoring_PATHS1_MTC_OBS_1);
  /* _L3=(Sub1_Pression_Sensor_Monitoring#1)/ */
  Sub1_Pression_Sensor_Moni_reset(
    &outC->Context_Sub1_Pression_Sensor_Monitoring_1);
  /* _L4=(Sub2_Pression_Sensor_Monitoring#1)/ */
  Sub2_Pression_Sensor_Moni_reset(
    &outC->Context_Sub2_Pression_Sensor_Monitoring_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Pression_Sensor_Monitoring/
  @1: (MTCEx::MTC_Observers::Sub2_Pression_Sensor_Monitoring_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Sub1_Pression_Sensor_Monitoring_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Pression_Sensor_Monitoring_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Pression_Sensor_Monitoring.c
** Generation date: 2020-02-07T16:14:03
*************************************************************$ */

