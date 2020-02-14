#include "ROB301_BRAMBILLA_GOMES_snapshot.h"
#include "ROB301_BRAMBILLA_GOMES_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "4d71481bf230a1c97f18a90ab1364703";

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
    bOK &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init1", (const void *)(&pValue->init1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init2", (const void *)(&pValue->init2), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init3", (const void *)(&pValue->init3), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init4", (const void *)(&pValue->init4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init5", (const void *)(&pValue->init5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init6", (const void *)(&pValue->init6), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init7", (const void *)(&pValue->init7), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_22_size", (const void *)(&pValue->v3_times_22_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_23_size", (const void *)(&pValue->v3_times_23_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_21_size", (const void *)(&pValue->v3_times_21_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_19_size", (const void *)(&pValue->v3_times_19_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_20_size", (const void *)(&pValue->v3_times_20_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_24_size", (const void *)(&pValue->v3_times_24_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_25_size", (const void *)(&pValue->v3_times_25_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_26_size", (const void *)(&pValue->v3_times_26_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_state_nxt", (const void *)(&pValue->State_Machine_Extend_Gear_state_nxt), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_reset_act", (const void *)(&pValue->State_Machine_Extend_Gear_reset_act), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._8_State_Machine_Extend_Gear_reset_nxt", (const void *)(&pValue->_8_State_Machine_Extend_Gear_reset_nxt), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._9_State_Machine_Extend_Gear_state_sel", (const void *)(&pValue->_9_State_Machine_Extend_Gear_state_sel), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, "._10_State_Machine_Extend_Gear_state_act", (const void *)(&pValue->_10_State_Machine_Extend_Gear_state_act), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_22_size", (const void *)(&pValue->o_times_22_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_22_size", (const void *)(&pValue->c_times_22_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_22_size", (const void *)(&pValue->n_times_22_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_22_size", (const void *)(&pValue->v4_times_22_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_23_size", (const void *)(&pValue->o_times_23_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_23_size", (const void *)(&pValue->c_times_23_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_23_size", (const void *)(&pValue->n_times_23_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_23_size", (const void *)(&pValue->v4_times_23_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_21_size", (const void *)(&pValue->o_times_21_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_21_size", (const void *)(&pValue->c_times_21_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_21_size", (const void *)(&pValue->n_times_21_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_21_size", (const void *)(&pValue->v4_times_21_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_19_size", (const void *)(&pValue->o_times_19_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_19_size", (const void *)(&pValue->c_times_19_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_19_size", (const void *)(&pValue->n_times_19_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_19_size", (const void *)(&pValue->v4_times_19_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_20_size", (const void *)(&pValue->o_times_20_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_20_size", (const void *)(&pValue->c_times_20_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_20_size", (const void *)(&pValue->n_times_20_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_20_size", (const void *)(&pValue->v4_times_20_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_24_size", (const void *)(&pValue->o_times_24_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_24_size", (const void *)(&pValue->c_times_24_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_24_size", (const void *)(&pValue->n_times_24_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_24_size", (const void *)(&pValue->v4_times_24_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_25_size", (const void *)(&pValue->o_times_25_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_25_size", (const void *)(&pValue->c_times_25_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_25_size", (const void *)(&pValue->n_times_25_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_25_size", (const void *)(&pValue->v4_times_25_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".o_times_26_size", (const void *)(&pValue->o_times_26_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".c_times_26_size", (const void *)(&pValue->c_times_26_size), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".n_times_26_size", (const void *)(&pValue->n_times_26_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v4_times_26_size", (const void *)(&pValue->v4_times_26_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_GEN_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_GEN_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_OPEN_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_OPEN_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_OPEN_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_OPEN_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_EXTEND_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_EXTEND_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_EXTEND_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_EXTEND_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_EXTEND_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_EXTEND_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_CLOSE_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_CLOSE_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L3_CLOSE_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L3_CLOSE_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_CLOSE_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_CLOSE_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_OPEN_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_OPEN_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_GENERAL_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_GENERAL_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L3_EXTENDED_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->_L3_EXTENDED_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_EXTENDED_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_EXTENDED_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_GENERAL_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_GENERAL_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_OPEN_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_OPEN_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_OPEN_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_OPEN_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_OPEN_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_OPEN_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_CLOSE_EV_ON1_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_CLOSE_EV_ON1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_RETRACT_EV_ON_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_RETRACT_EV_ON_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear", (const void *)(&pValue->_L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->_L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->_L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear", (const void *)(&pValue->_L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_fired_strong", (const void *)(&pValue->State_Machine_Extend_Gear_fired_strong), pBaseAddr, SSM_TR_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, "._11_State_Machine_Extend_Gear_fired", (const void *)(&pValue->_11_State_Machine_Extend_Gear_fired), pBaseAddr, SSM_TR_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, ".all_gears_extended", (const void *)(&pValue->all_gears_extended), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".all_shock_absorber_false", (const void *)(&pValue->all_shock_absorber_false), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".all_doors_closed", (const void *)(&pValue->all_doors_closed), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".all_doors_open", (const void *)(&pValue->all_doors_open), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".all_gears_retracted", (const void *)(&pValue->all_gears_retracted), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L140", (const void *)(&pValue->_L140), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L139", (const void *)(&pValue->_L139), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L138", (const void *)(&pValue->_L138), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L137", (const void *)(&pValue->_L137), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L136", (const void *)(&pValue->_L136), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L135", (const void *)(&pValue->_L135), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L134", (const void *)(&pValue->_L134), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L133", (const void *)(&pValue->_L133), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L132", (const void *)(&pValue->_L132), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L131", (const void *)(&pValue->_L131), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L130", (const void *)(&pValue->_L130), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L129", (const void *)(&pValue->_L129), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L127", (const void *)(&pValue->_L127), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L126", (const void *)(&pValue->_L126), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L125", (const void *)(&pValue->_L125), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L124", (const void *)(&pValue->_L124), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L123", (const void *)(&pValue->_L123), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L122", (const void *)(&pValue->_L122), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L121", (const void *)(&pValue->_L121), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L120", (const void *)(&pValue->_L120), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L119", (const void *)(&pValue->_L119), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L118", (const void *)(&pValue->_L118), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L105", (const void *)(&pValue->_L105), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L100", (const void *)(&pValue->_L100), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L99", (const void *)(&pValue->_L99), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L98", (const void *)(&pValue->_L98), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L96", (const void *)(&pValue->_L96), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L95", (const void *)(&pValue->_L95), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L94", (const void *)(&pValue->_L94), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L92", (const void *)(&pValue->_L92), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L34", (const void *)(&pValue->_L34), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L33", (const void *)(&pValue->_L33), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L91", (const void *)(&pValue->_L91), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L62", (const void *)(&pValue->_L62), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L61", (const void *)(&pValue->_L61), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L60", (const void *)(&pValue->_L60), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L53", (const void *)(&pValue->_L53), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L52", (const void *)(&pValue->_L52), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L51", (const void *)(&pValue->_L51), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L43", (const void *)(&pValue->_L43), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L42", (const void *)(&pValue->_L42), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_bool_to_string, snsFile); 
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
    bOK &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init1), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init2), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init3), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init4), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init5), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init6), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init7), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_22_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_23_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_21_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_19_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_20_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_24_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_25_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_26_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_state_nxt), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_reset_act), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_8_State_Machine_Extend_Gear_reset_nxt), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_9_State_Machine_Extend_Gear_state_sel), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->_10_State_Machine_Extend_Gear_state_act), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_22_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_22_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_22_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_22_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_23_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_23_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_23_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_23_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_21_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_21_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_21_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_21_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_19_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_19_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_19_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_19_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_20_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_20_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_20_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_20_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_24_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_24_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_24_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_24_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_25_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_25_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_25_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_25_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->o_times_26_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->c_times_26_size), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->n_times_26_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v4_times_26_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_GEN_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_OPEN_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_OPEN_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_EXTEND_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_EXTEND_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_EXTEND_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_CLOSE_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L3_CLOSE_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_CLOSE_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_OPEN_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_GENERAL_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L3_EXTENDED_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_EXTENDED_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_GENERAL_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_OPEN_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_OPEN_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_OPEN_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_CLOSE_EV_ON1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_RETRACT_EV_ON_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_fired_strong), string_to_SSM_TR_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->_11_State_Machine_Extend_Gear_fired), string_to_SSM_TR_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->all_gears_extended), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->all_shock_absorber_false), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->all_doors_closed), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->all_doors_open), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->all_gears_retracted), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L140), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L139), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L138), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L137), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L136), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L135), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L134), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L133), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L132), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L131), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L130), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L129), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L127), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L126), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L125), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L124), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L123), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L122), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L121), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L120), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L119), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L118), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L105), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L100), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L99), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L98), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L96), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L95), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L94), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L92), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L34), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L33), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L91), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L62), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L61), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L60), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L53), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L52), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L51), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L44), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L43), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L42), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L26), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L25), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->_L24), string_to_kcg_bool, snsFile); 
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
