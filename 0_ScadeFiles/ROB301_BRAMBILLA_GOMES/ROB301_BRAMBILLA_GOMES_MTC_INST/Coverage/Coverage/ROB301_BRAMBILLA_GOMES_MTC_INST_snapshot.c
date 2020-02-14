#include "ROB301_BRAMBILLA_GOMES_MTC_INST_snapshot.h"
#include "ROB301_BRAMBILLA_GOMES_MTC_INST_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "184c808355bee1d2ec6d7a4734f00e33";

/*********************************************
 * Snapshot Save functions
 *********************************************/
int save_var(const char *cpath, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    bOK &= (pfnTypeToString(pValue, SimStringAppend, &strValue) != 0);
    bOK &= (fprintf(snsFile, "%s\t[offset=%u]\t%s\n", SimStringGet(&strValue), (size_t)pValue-(size_t)pBaseAddr, cpath) >= 0);
    SimStringFree(&strValue);
    return bOK;
}

int save_field(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bOK = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bOK = save_var(SimStringGet(&strCPath), pValue, pBaseAddr, pfnTypeToString, snsFile);
    SimStringFree(&strCPath);
    return bOK;
}

typedef int(*PFN_SAVE_CONTEXT)(const char *cpath, const void *pValue, const void *pBaseAddr, FILE *snsFile);

int save_context(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_SAVE_CONTEXT pfnSaveContext, FILE *snsFile) {
    int bOK = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bOK = pfnSaveContext(SimStringGet(&strCPath), pValue, pBaseAddr, snsFile);
    SimStringFree(&strCPath);
    return bOK;
}

int save_inC_Computing_Model(const char *cpath, const inC_Computing_Model *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".handle", (const void *)(&pValue->handle), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Extended_front", (const void *)(&pValue->gear_Extended_front), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Extended_right", (const void *)(&pValue->gear_Extended_right), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Extended_left", (const void *)(&pValue->gear_Extended_left), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Retracted_front", (const void *)(&pValue->gear_Retracted_front), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Retracted_right", (const void *)(&pValue->gear_Retracted_right), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Retracted_left", (const void *)(&pValue->gear_Retracted_left), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Shock_Absorber_front", (const void *)(&pValue->gear_Shock_Absorber_front), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Shock_Absorber_right", (const void *)(&pValue->gear_Shock_Absorber_right), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gear_Shock_Absorber_left", (const void *)(&pValue->gear_Shock_Absorber_left), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".door_Closed_front", (const void *)(&pValue->door_Closed_front), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".door_Closed_right", (const void *)(&pValue->door_Closed_right), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".door_Closed_left", (const void *)(&pValue->door_Closed_left), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".door_Open_front", (const void *)(&pValue->door_Open_front), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".door_Open_right", (const void *)(&pValue->door_Open_right), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".door_Open_left", (const void *)(&pValue->door_Open_left), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bOK;
}

int save_outC_Computing_Model(const char *cpath, const outC_Computing_Model *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    bOK &= save_field(cpath, ".general_EV", (const void *)(&pValue->general_EV), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".close_EV", (const void *)(&pValue->close_EV), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".open_EV", (const void *)(&pValue->open_EV), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".retract_EV", (const void *)(&pValue->retract_EV), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".extend_EV", (const void *)(&pValue->extend_EV), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gears_Locked_Down", (const void *)(&pValue->gears_Locked_Down), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".gears_Maneuvring", (const void *)(&pValue->gears_Maneuvring), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_1", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_2", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_2), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_3", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_3), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_4", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_4), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_5", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_5), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_6", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_6), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_7", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_7), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_8", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_8), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_9", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_9), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_10", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_10), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_11", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_11), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_12", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_12), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_13", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_13), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_14", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_14), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_15", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_15), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_16", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_16), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_17", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_17), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_18", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_18), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_19", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_19), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_20", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_20), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_21", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_21), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24", (const void *)(&pValue->MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_22", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_22), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_25", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_25), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_23", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_23), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_24", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_24), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16", (const void *)(&pValue->_1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15", (const void *)(&pValue->_2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_26", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_26), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_27", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_27), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20", (const void *)(&pValue->_3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_28", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_28), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_29", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_29), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17", (const void *)(&pValue->_4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_30", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_30), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_31", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_31), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18", (const void *)(&pValue->_5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_32", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_32), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_33", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_33), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_34", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_34), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_35", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_35), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25", (const void *)(&pValue->_6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_TRANSITION_MTC_OBS_36", (const void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_36), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26", (const void *)(&pValue->_7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_1", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_2", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_2), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_3", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_3), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_4", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_4), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_5", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_5), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_6", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_6), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_7", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_7), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_8", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_8), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_9", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_9), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_10", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_10), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_11", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_11), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_12", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_12), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_13", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_13), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_14", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_14), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_15", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_15), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_16", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_16), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_17", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_17), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_18", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_18), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_19", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_19), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_20", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_20), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_21", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_21), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".MTC_ALL1_STATE_MTC_OBS_22", (const void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_22), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1", (const void *)(&pValue->_8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1", (const void *)(&pValue->_9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1", (const void *)(&pValue->_10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1", (const void *)(&pValue->_11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, "._12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1", (const void *)(&pValue->_12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1), pBaseAddr, Result_MTC_to_string, snsFile); 
    bOK &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init13", (const void *)(&pValue->init13), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init14", (const void *)(&pValue->init14), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init15", (const void *)(&pValue->init15), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init16", (const void *)(&pValue->init16), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init17", (const void *)(&pValue->init17), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init18", (const void *)(&pValue->init18), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init19", (const void *)(&pValue->init19), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22", (const void *)(&pValue->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size", (const void *)(&pValue->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23", (const void *)(&pValue->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size", (const void *)(&pValue->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21", (const void *)(&pValue->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size", (const void *)(&pValue->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19", (const void *)(&pValue->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size", (const void *)(&pValue->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20", (const void *)(&pValue->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size", (const void *)(&pValue->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24", (const void *)(&pValue->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size", (const void *)(&pValue->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25", (const void *)(&pValue->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size", (const void *)(&pValue->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26", (const void *)(&pValue->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26), pBaseAddr, kcg_int32_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size", (const void *)(&pValue->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_state_nxt", (const void *)(&pValue->State_Machine_Extend_Gear_state_nxt), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_reset_act", (const void *)(&pValue->State_Machine_Extend_Gear_reset_act), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_context(cpath, ".Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1", (const void *)(&pValue->Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL03_MTC, snsFile);
    bOK &= save_context(cpath, "._20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1", (const void *)(&pValue->_20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL03_MTC, snsFile);
    bOK &= save_context(cpath, "._21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1", (const void *)(&pValue->_21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL03_MTC, snsFile);
    bOK &= save_context(cpath, "._22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1", (const void *)(&pValue->_22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL03_MTC, snsFile);
    bOK &= save_context(cpath, "._23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1", (const void *)(&pValue->_23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL03_MTC, snsFile);
    bOK &= save_context(cpath, ".Context_LATCHALL02_MTC_STATE_MTC_OBS_22", (const void *)(&pValue->Context_LATCHALL02_MTC_STATE_MTC_OBS_22), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21", (const void *)(&pValue->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20", (const void *)(&pValue->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19", (const void *)(&pValue->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18", (const void *)(&pValue->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17", (const void *)(&pValue->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16", (const void *)(&pValue->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15", (const void *)(&pValue->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14", (const void *)(&pValue->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13", (const void *)(&pValue->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12", (const void *)(&pValue->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11", (const void *)(&pValue->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10", (const void *)(&pValue->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9", (const void *)(&pValue->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8", (const void *)(&pValue->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7", (const void *)(&pValue->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6", (const void *)(&pValue->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5", (const void *)(&pValue->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4", (const void *)(&pValue->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3", (const void *)(&pValue->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2", (const void *)(&pValue->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1", (const void *)(&pValue->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, ".Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26", (const void *)(&pValue->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, ".Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36", (const void *)(&pValue->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25", (const void *)(&pValue->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35", (const void *)(&pValue->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34", (const void *)(&pValue->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33", (const void *)(&pValue->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32", (const void *)(&pValue->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, ".Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18", (const void *)(&pValue->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31", (const void *)(&pValue->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30", (const void *)(&pValue->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17", (const void *)(&pValue->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29", (const void *)(&pValue->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28", (const void *)(&pValue->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20", (const void *)(&pValue->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27", (const void *)(&pValue->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26", (const void *)(&pValue->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15", (const void *)(&pValue->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16", (const void *)(&pValue->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24", (const void *)(&pValue->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23", (const void *)(&pValue->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25", (const void *)(&pValue->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22", (const void *)(&pValue->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24", (const void *)(&pValue->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21", (const void *)(&pValue->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21", (const void *)(&pValue->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20", (const void *)(&pValue->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20", (const void *)(&pValue->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19", (const void *)(&pValue->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19", (const void *)(&pValue->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18", (const void *)(&pValue->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19", (const void *)(&pValue->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17", (const void *)(&pValue->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16", (const void *)(&pValue->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15", (const void *)(&pValue->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21", (const void *)(&pValue->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14", (const void *)(&pValue->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13", (const void *)(&pValue->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23", (const void *)(&pValue->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12", (const void *)(&pValue->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11", (const void *)(&pValue->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10", (const void *)(&pValue->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9", (const void *)(&pValue->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8", (const void *)(&pValue->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7", (const void *)(&pValue->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6", (const void *)(&pValue->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5", (const void *)(&pValue->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4", (const void *)(&pValue->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3", (const void *)(&pValue->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22", (const void *)(&pValue->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL04_MTC, snsFile);
    bOK &= save_context(cpath, "._91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2", (const void *)(&pValue->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_context(cpath, "._92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12", (const void *)(&pValue->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL02_MTC, snsFile);
    bOK &= save_context(cpath, "._93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1", (const void *)(&pValue->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_LATCHALL01_MTC, snsFile);
    bOK &= save_field(cpath, ".tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_2_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->tr_2_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._94_State_Machine_Extend_Gear_state_sel", (const void *)(&pValue->_94_State_Machine_Extend_Gear_state_sel), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, "._95_State_Machine_Extend_Gear_state_act", (const void *)(&pValue->_95_State_Machine_Extend_Gear_state_act), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    return bOK;
}

#ifdef __cplusplus
  #ifdef pSimoutC_LATCHALL01_MTCIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_LATCHALL01_MTCIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_LATCHALL01_MTCIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_LATCHALL01_MTCIOCVTable;
#endif

int save_outC_LATCHALL01_MTC(const char *cpath, const outC_LATCHALL01_MTC *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    if (pSimoutC_LATCHALL01_MTCIOCVTable != NULL
        && pSimoutC_LATCHALL01_MTCIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bOK &= pSimoutC_LATCHALL01_MTCIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bOK &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_LATCHALL01_MTC) && bOK ; i++, pCur++)
            bOK &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t[offset=%u]\t%s\n", (size_t)pValue-(size_t)pBaseAddr, cpath);
    SimStringFree(&strValue);
    return bOK;
}

#ifdef __cplusplus
  #ifdef pSimoutC_LATCHALL02_MTCIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_LATCHALL02_MTCIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_LATCHALL02_MTCIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_LATCHALL02_MTCIOCVTable;
#endif

int save_outC_LATCHALL02_MTC(const char *cpath, const outC_LATCHALL02_MTC *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    if (pSimoutC_LATCHALL02_MTCIOCVTable != NULL
        && pSimoutC_LATCHALL02_MTCIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bOK &= pSimoutC_LATCHALL02_MTCIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bOK &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_LATCHALL02_MTC) && bOK ; i++, pCur++)
            bOK &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t[offset=%u]\t%s\n", (size_t)pValue-(size_t)pBaseAddr, cpath);
    SimStringFree(&strValue);
    return bOK;
}

#ifdef __cplusplus
  #ifdef pSimoutC_LATCHALL03_MTCIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_LATCHALL03_MTCIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_LATCHALL03_MTCIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_LATCHALL03_MTCIOCVTable;
#endif

int save_outC_LATCHALL03_MTC(const char *cpath, const outC_LATCHALL03_MTC *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    if (pSimoutC_LATCHALL03_MTCIOCVTable != NULL
        && pSimoutC_LATCHALL03_MTCIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bOK &= pSimoutC_LATCHALL03_MTCIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bOK &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_LATCHALL03_MTC) && bOK ; i++, pCur++)
            bOK &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t[offset=%u]\t%s\n", (size_t)pValue-(size_t)pBaseAddr, cpath);
    SimStringFree(&strValue);
    return bOK;
}

#ifdef __cplusplus
  #ifdef pSimoutC_LATCHALL04_MTCIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_LATCHALL04_MTCIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_LATCHALL04_MTCIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_LATCHALL04_MTCIOCVTable;
#endif

int save_outC_LATCHALL04_MTC(const char *cpath, const outC_LATCHALL04_MTC *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bOK = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    if (pSimoutC_LATCHALL04_MTCIOCVTable != NULL
        && pSimoutC_LATCHALL04_MTCIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bOK &= pSimoutC_LATCHALL04_MTCIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bOK &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_LATCHALL04_MTC) && bOK ; i++, pCur++)
            bOK &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t[offset=%u]\t%s\n", (size_t)pValue-(size_t)pBaseAddr, cpath);
    SimStringFree(&strValue);
    return bOK;
}

int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_Computing_Model *inC,
                      outC_Computing_Model *outC) {
    int bOK = 1;
    char savRealFormat[MAX_REAL_FORMAT_LEN];
    FILE *snsFile = fopen(szFilePath, "w");
    if ( !snsFile )
        return 0;

    /* Force real number format to 17 significant digits */
    strcpy(savRealFormat, pConverter->m_RealFormat);
    strcpy(pConverter->m_RealFormat, "%.17g");

    /* Write mapping file checksum */
    bOK &= (fprintf(snsFile, "%s\n", szKcgTraceCheckSum) >= 0);

    /* Write cycle counter */
    bOK &= (fprintf(snsFile, "%u\n", nCycle) >= 0);

    /* Write all context variables */
    bOK &= save_inC_Computing_Model("inC", inC, (const void*)inC, snsFile);
    bOK &= save_outC_Computing_Model("outC", outC, (const void*)outC, snsFile);

    /* Restore real number format */
    strcpy(pConverter->m_RealFormat, savRealFormat);
    fclose(snsFile);
    return bOK;
}
/*********************************************
 * Snapshot Load functions
 *********************************************/
int read_line(FILE *snsFile, SimString *pstrLine) {
    char buf[1024];
    size_t bufLen;
    SimStringReset(pstrLine);
    if (feof(snsFile))
        return 0;
    /* Read entire line */
    while (fgets(buf, 100, snsFile) != NULL) {
        SimStringAppend(buf, pstrLine);
        if (buf[strlen(buf) - 1] == '\n')
            break;
    }
    /* Remove end of line characters */
    while (pstrLine->m_nLength >=0 && pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\n' || pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\r') {
        pstrLine->m_pszBase[pstrLine->m_nLength-1] = '\0';
        pstrLine->m_nLength--;
    }
    return 1;
}

int load_var(void *pValue, PFN_STRING_TO_TYPE pfnStringToType, FILE *snsFile) {
    int bOK = 1;
    char *endptr;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK)
        bOK = (pfnStringToType(SimStringGet(&strLine), pValue, &endptr) != 0
            && (*endptr=='\t' || *endptr=='\0' || *endptr==' '));
    SimStringFree(&strLine);
    return bOK;
}

int load_inC_Computing_Model(inC_Computing_Model *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->handle), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Extended_front), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Extended_right), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Extended_left), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Retracted_front), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Retracted_right), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Retracted_left), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Shock_Absorber_front), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Shock_Absorber_right), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gear_Shock_Absorber_left), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->door_Closed_front), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->door_Closed_right), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->door_Closed_left), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->door_Open_front), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->door_Open_right), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->door_Open_left), string_to_kcg_bool, snsFile); 
    return bOK;
}

int load_outC_Computing_Model(outC_Computing_Model *pValue, FILE *snsFile) {
    int bOK = 1;
    bOK &= load_var((void *)(&pValue->general_EV), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->close_EV), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->open_EV), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->retract_EV), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->extend_EV), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gears_Locked_Down), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->gears_Maneuvring), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_2), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_3), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_4), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_5), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_6), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_7), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_8), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_9), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_10), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_11), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_12), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_13), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_14), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_15), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_16), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_17), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_18), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_19), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_20), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_21), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_22), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_25), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_23), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_24), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_26), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_27), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_28), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_29), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_30), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_31), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_32), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_33), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_34), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_35), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_TRANSITION_MTC_OBS_36), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_2), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_3), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_4), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_5), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_6), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_7), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_8), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_9), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_10), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_11), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_12), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_13), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_14), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_15), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_16), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_17), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_18), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_19), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_20), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_21), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->MTC_ALL1_STATE_MTC_OBS_22), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->_12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1), string_to_Result_MTC, snsFile); 
    bOK &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init13), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init14), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init15), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init16), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init17), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init18), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init19), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26), string_to_kcg_int32, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_state_nxt), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_reset_act), string_to_kcg_bool, snsFile); 
    bOK &= load_outC_LATCHALL03_MTC(&pValue->Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1, snsFile);
    bOK &= load_outC_LATCHALL03_MTC(&pValue->_20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1, snsFile);
    bOK &= load_outC_LATCHALL03_MTC(&pValue->_21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1, snsFile);
    bOK &= load_outC_LATCHALL03_MTC(&pValue->_22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1, snsFile);
    bOK &= load_outC_LATCHALL03_MTC(&pValue->_23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->Context_LATCHALL02_MTC_STATE_MTC_OBS_22, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3, snsFile);
    bOK &= load_outC_LATCHALL04_MTC(&pValue->_90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2, snsFile);
    bOK &= load_outC_LATCHALL02_MTC(&pValue->_92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12, snsFile);
    bOK &= load_outC_LATCHALL01_MTC(&pValue->_93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1, snsFile);
    bOK &= load_var((void *)(&pValue->tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_2_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_94_State_Machine_Extend_Gear_state_sel), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->_95_State_Machine_Extend_Gear_state_act), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    return bOK;
}

int load_outC_LATCHALL01_MTC(outC_LATCHALL01_MTC *pValue, FILE *snsFile) {
    int bOK = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_LATCHALL01_MTCIOCVTable != NULL
            && pSimoutC_LATCHALL01_MTCIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bOK &= pSimoutC_LATCHALL01_MTCIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_LATCHALL01_MTC) && bOK; i++, pCurValue++, pCurString+=2)
                bOK &= sscanf(pCurString, "%02X", pCurValue)==1;
        }
    }
    bOK &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bOK;
}

int load_outC_LATCHALL02_MTC(outC_LATCHALL02_MTC *pValue, FILE *snsFile) {
    int bOK = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_LATCHALL02_MTCIOCVTable != NULL
            && pSimoutC_LATCHALL02_MTCIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bOK &= pSimoutC_LATCHALL02_MTCIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_LATCHALL02_MTC) && bOK; i++, pCurValue++, pCurString+=2)
                bOK &= sscanf(pCurString, "%02X", pCurValue)==1;
        }
    }
    bOK &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bOK;
}

int load_outC_LATCHALL03_MTC(outC_LATCHALL03_MTC *pValue, FILE *snsFile) {
    int bOK = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_LATCHALL03_MTCIOCVTable != NULL
            && pSimoutC_LATCHALL03_MTCIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bOK &= pSimoutC_LATCHALL03_MTCIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_LATCHALL03_MTC) && bOK; i++, pCurValue++, pCurString+=2)
                bOK &= sscanf(pCurString, "%02X", pCurValue)==1;
        }
    }
    bOK &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bOK;
}

int load_outC_LATCHALL04_MTC(outC_LATCHALL04_MTC *pValue, FILE *snsFile) {
    int bOK = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bOK = read_line(snsFile, &strLine);
    if (bOK) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_LATCHALL04_MTCIOCVTable != NULL
            && pSimoutC_LATCHALL04_MTCIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bOK &= pSimoutC_LATCHALL04_MTCIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_LATCHALL04_MTC) && bOK; i++, pCurValue++, pCurString+=2)
                bOK &= sscanf(pCurString, "%02X", pCurValue)==1;
        }
    }
    bOK &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bOK;
}

int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_Computing_Model *inC,
                      outC_Computing_Model *outC) {
    int bOK = 1;
    FILE *snsFile = fopen(szFilePath, "r");
    SimString strLine;
    SimStringAlloc(&strLine);
    if ( !snsFile )
        return 0;

    /* Read and verify mapping file checksum */
    bOK = read_line(snsFile, &strLine);
    if (bOK)
        bOK = strcmp(SimStringGet(&strLine), szKcgTraceCheckSum)==0;

    /* Read cycle counter */
    if (bOK)
        bOK = (fscanf(snsFile, "%u\n", nCycle) == 1);

    /* Read all context variables */
    if (bOK) {
        bOK &= load_inC_Computing_Model(inC, snsFile);
        bOK &= load_outC_Computing_Model(outC, snsFile);
    }

    fclose(snsFile);
    SimStringFree(&strLine);
    return bOK;
}
