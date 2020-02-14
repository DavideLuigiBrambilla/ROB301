/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/ROB301_BRAMBILLA_GOMES_MTC_INST/Coverage/Coverage/config.txt
** Generation date: 2020-02-07T16:19:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gears_Motion_Monitoring.h"

/* Gears_Motion_Monitoring/ */
void Gears_Motion_Monitoring(
  inC_Gears_Motion_Monitoring *inC,
  outC_Gears_Motion_Monitoring *outC)
{
  /* _L4=(Sub_Gears_Motion_Monitoring#4)/ */
  Sub_Gears_Motion_Monitoring(
    inC->extension_EV,
    inC->gear_extension_front,
    inC->gear_extension_left,
    inC->gear_extension_right,
    kcg_true,
    kcg_lit_int32(10),
    kcg_true,
    &outC->_9_Context_Sub_Gears_Motion_Monitoring_4);
  /* _L3=(Sub_Gears_Motion_Monitoring#3)/ */
  Sub_Gears_Motion_Monitoring(
    inC->extension_EV,
    inC->gear_extension_front,
    inC->gear_extension_left,
    inC->gear_extension_right,
    kcg_false,
    kcg_lit_int32(7),
    kcg_true,
    &outC->_8_Context_Sub_Gears_Motion_Monitoring_3);
  /* _L2=(Sub_Gears_Motion_Monitoring#2)/ */
  Sub_Gears_Motion_Monitoring(
    inC->retraction_EV,
    inC->gear_retraction_front,
    inC->gear_retraction_left,
    inC->gear_retraction_right,
    kcg_true,
    kcg_lit_int32(10),
    kcg_true,
    &outC->_7_Context_Sub_Gears_Motion_Monitoring_2);
  /* _L1=(Sub_Gears_Motion_Monitoring#1)/ */
  Sub_Gears_Motion_Monitoring(
    inC->retraction_EV,
    inC->gear_retraction_front,
    inC->gear_retraction_left,
    inC->gear_retraction_right,
    kcg_false,
    kcg_lit_int32(7),
    kcg_true,
    &outC->Context_Sub_Gears_Motion_Monitoring_1);
  outC->gear_anomaly =
    outC->Context_Sub_Gears_Motion_Monitoring_1.gears_anomaly |
    outC->_7_Context_Sub_Gears_Motion_Monitoring_2.gears_anomaly |
    outC->_8_Context_Sub_Gears_Motion_Monitoring_3.gears_anomaly |
    outC->_9_Context_Sub_Gears_Motion_Monitoring_4.gears_anomaly;
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC(
    outC->gear_anomaly,
    (kcg_bool) !outC->gear_anomaly,
    &outC->Context_LATCHALL02_MTC_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1);
  outC->MTC_ALL1_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1 =
    outC->Context_LATCHALL02_MTC_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1.Output1;
  /* @4/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->_6_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_1);
  outC->MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_1 =
    outC->_6_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_1.Output1;
  /* @3/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->_5_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_2);
  outC->_1_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_2 =
    outC->_5_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_2.Output1;
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->_4_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_3);
  outC->_2_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_3 =
    outC->_4_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_3.Output1;
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC(
    kcg_true,
    &outC->Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_4);
  outC->_3_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_4 =
    outC->Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_4.Output1;
}

#ifndef KCG_USER_DEFINED_INIT
void Gears_Motion_Monitoring_init(outC_Gears_Motion_Monitoring *outC)
{
  outC->gear_anomaly = kcg_true;
  Result_MTC_init(&outC->_3_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_4);
  Result_MTC_init(&outC->_2_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_3);
  Result_MTC_init(&outC->_1_MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_2);
  Result_MTC_init(&outC->MTC_ALL1_Sub_Gears_Motion_Monitoring_MTC_OBS_1);
  Result_MTC_init(&outC->MTC_ALL1_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1);
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_4);
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->_4_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_3);
  /* @3/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->_5_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_2);
  /* @4/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_init(
    &outC->_6_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_init(
    &outC->Context_LATCHALL02_MTC_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1);
  /* _L1=(Sub_Gears_Motion_Monitoring#1)/ */
  Sub_Gears_Motion_Monitoring_init(
    &outC->Context_Sub_Gears_Motion_Monitoring_1);
  /* _L2=(Sub_Gears_Motion_Monitoring#2)/ */
  Sub_Gears_Motion_Monitoring_init(
    &outC->_7_Context_Sub_Gears_Motion_Monitoring_2);
  /* _L3=(Sub_Gears_Motion_Monitoring#3)/ */
  Sub_Gears_Motion_Monitoring_init(
    &outC->_8_Context_Sub_Gears_Motion_Monitoring_3);
  /* _L4=(Sub_Gears_Motion_Monitoring#4)/ */
  Sub_Gears_Motion_Monitoring_init(
    &outC->_9_Context_Sub_Gears_Motion_Monitoring_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gears_Motion_Monitoring_reset(outC_Gears_Motion_Monitoring *outC)
{
  /* @1/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_4);
  /* @2/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->_4_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_3);
  /* @3/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->_5_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_2);
  /* @4/MTC_ALL1=(MTC::LATCHALL01)/ */
  LATCHALL01_MTC_reset(
    &outC->_6_Context_LATCHALL01_MTC_Sub_Gears_Motion_Monitoring_MTC_OBS_1);
  /* @5/MTC_ALL1=(MTC::LATCHALL02)/ */
  LATCHALL02_MTC_reset(
    &outC->Context_LATCHALL02_MTC_Gears_Motion_Monitoring_PATHS1_MTC_OBS_1);
  /* _L1=(Sub_Gears_Motion_Monitoring#1)/ */
  Sub_Gears_Motion_Monitoring_reset(
    &outC->Context_Sub_Gears_Motion_Monitoring_1);
  /* _L2=(Sub_Gears_Motion_Monitoring#2)/ */
  Sub_Gears_Motion_Monitoring_reset(
    &outC->_7_Context_Sub_Gears_Motion_Monitoring_2);
  /* _L3=(Sub_Gears_Motion_Monitoring#3)/ */
  Sub_Gears_Motion_Monitoring_reset(
    &outC->_8_Context_Sub_Gears_Motion_Monitoring_3);
  /* _L4=(Sub_Gears_Motion_Monitoring#4)/ */
  Sub_Gears_Motion_Monitoring_reset(
    &outC->_9_Context_Sub_Gears_Motion_Monitoring_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Gears_Motion_Monitoring/
  @1: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#4)
  @2: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#3)
  @3: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#2)
  @4: (MTCEx::MTC_Observers::Sub_Gears_Motion_Monitoring_MTC_OBS#1)
  @5: (MTCEx::MTC_Observers::Gears_Motion_Monitoring_PATHS1_MTC_OBS#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Gears_Motion_Monitoring.c
** Generation date: 2020-02-07T16:19:59
*************************************************************$ */

