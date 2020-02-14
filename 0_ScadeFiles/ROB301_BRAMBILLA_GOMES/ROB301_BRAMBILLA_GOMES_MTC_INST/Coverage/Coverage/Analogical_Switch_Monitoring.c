/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Analogical_Switch_Monitoring.h"

/* Analogical_Switch_Monitoring/ */
void Analogical_Switch_Monitoring(
  inC_Analogical_Switch_Monitoring *inC,
  outC_Analogical_Switch_Monitoring *outC)
{
  /* _L6=(Sub2_Analogical_Switch_Monitoring#1)/ */
  Sub2_Analogical_Switch_Mo(
    inC->handle,
    inC->analogical_Switch,
    kcg_lit_int32(20),
    kcg_lit_int32(15),
    kcg_true,
    &outC->Context_Sub2_Analogical_Switch_Monitoring_1);
  /* _L4=(Sub1_Analogical_Switch_Monitoring#1)/ */
  Sub1_Analogical_Switch_Mo(
    inC->handle,
    inC->analogical_Switch,
    kcg_lit_int32(10),
    kcg_true,
    &outC->Context_Sub1_Analogical_Switch_Monitoring_1);
  outC->analogical_switch_anomaly =
    outC->Context_Sub1_Analogical_Switch_Monitoring_1.anomaly |
    outC->Context_Sub2_Analogical_Switch_Monitoring_1.anomaly;
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC(
    outC->analogical_switch_anomaly,
    (kcg_bool) !outC->analogical_switch_anomaly,
    &outC->Context_LATCHALL02_MTC_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1);
  outC->MTC_ALL1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1 =
    outC->Context_LATCHALL02_MTC_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1.Output1;
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->Context_LATCHALL01_MTC_Sub1_Analogical_Switch_Monitoring_MTC_OBS_1);
  outC->MTC_ALL1_Sub1_Analogical_Switch_Monitoring_MTC_OBS_1 =
    outC->Context_LATCHALL01_MTC_Sub1_Analogical_Switch_Monitoring_MTC_OBS_1.Output1;
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->Context_LATCHALL01_MTC_Sub2_Analogical_Switch_Monitoring_MTC_OBS_1);
  outC->MTC_ALL1_Sub2_Analogical_Switch_Monitoring_MTC_OBS_1 =
    outC->Context_LATCHALL01_MTC_Sub2_Analogical_Switch_Monitoring_MTC_OBS_1.Output1;
}

#ifndef KCG_USER_DEFINED_INIT
void Analogical_Switch_Monitoring_init(outC_Analogical_Switch_Monitoring *outC)
{
  outC->analogical_switch_anomaly = kcg_true;
  Result_MTC_init(&outC->MTC_ALL1_Sub2_Analogical_Switch_Monitoring_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Sub1_Analogical_Switch_Monitoring_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_Sub2_Analogical_Switch_Monitoring_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_Sub1_Analogical_Switch_Monitoring_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1);
  /* _L4=(Sub1_Analogical_Switch_Monitoring#1)/ */
  Sub1_Analogical_Switch_Mo_init(
    &outC->Context_Sub1_Analogical_Switch_Monitoring_1);
  /* _L6=(Sub2_Analogical_Switch_Monitoring#1)/ */
  Sub2_Analogical_Switch_Mo_init(
    &outC->Context_Sub2_Analogical_Switch_Monitoring_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Analogical_Switch_Monitoring_reset(outC_Analogical_Switch_Monitoring *outC)
{
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_Sub2_Analogical_Switch_Monitoring_MTC_OBS_1);
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_Sub1_Analogical_Switch_Monitoring_MTC_OBS_1);
  /* @3/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Analogical_Switch_Monitoring_PATHS1_MTC_OBS_1);
  /* _L4=(Sub1_Analogical_Switch_Monitoring#1)/ */
  Sub1_Analogical_Switch_Mo_reset(
    &outC->Context_Sub1_Analogical_Switch_Monitoring_1);
  /* _L6=(Sub2_Analogical_Switch_Monitoring#1)/ */
  Sub2_Analogical_Switch_Mo_reset(
    &outC->Context_Sub2_Analogical_Switch_Monitoring_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Analogical_Switch_Monitoring/
  @1: (MTCEx::MTC_Observers::Sub2_Analogical_Switch_Monitoring_MTC_OBS#1)
  @2: (MTCEx::MTC_Observers::Sub1_Analogical_Switch_Monitoring_MTC_OBS#1)
  @3: (MTCEx::MTC_Observers::Analogical_Switch_Monitoring_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Analogical_Switch_Monitoring.c
** Generation date: 2020-02-07T16:14:49
*************************************************************$ */

