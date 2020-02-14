#include "ROB301_BRAMBILLA_GOMES_snapshot.h"
#include "ROB301_BRAMBILLA_GOMES_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "67673d8aa8d712bd5184350e9c7d77eb";

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
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_reset_act", (const void *)(&pValue->State_Machine_Extend_Gear_reset_act), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".State_Machine_Extend_Gear_state_nxt", (const void *)(&pValue->State_Machine_Extend_Gear_state_nxt), pBaseAddr, SSM_ST_State_Machine_Extend_Gear_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_26_size", (const void *)(&pValue->v3_times_26_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_25_size", (const void *)(&pValue->v3_times_25_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_24_size", (const void *)(&pValue->v3_times_24_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_20_size", (const void *)(&pValue->v3_times_20_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_19_size", (const void *)(&pValue->v3_times_19_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_21_size", (const void *)(&pValue->v3_times_21_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_23_size", (const void *)(&pValue->v3_times_23_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".v3_times_22_size", (const void *)(&pValue->v3_times_22_size), pBaseAddr, kcg_size_to_string, snsFile); 
    bOK &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init1", (const void *)(&pValue->init1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init2", (const void *)(&pValue->init2), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init3", (const void *)(&pValue->init3), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init4", (const void *)(&pValue->init4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init5", (const void *)(&pValue->init5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init6", (const void *)(&pValue->init6), pBaseAddr, kcg_bool_to_string, snsFile); 
    bOK &= save_field(cpath, ".init7", (const void *)(&pValue->init7), pBaseAddr, kcg_bool_to_string, snsFile); 
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
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_reset_act), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->State_Machine_Extend_Gear_state_nxt), string_to_SSM_ST_State_Machine_Extend_Gear, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_26_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_25_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_24_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_20_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_19_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_21_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_23_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->v3_times_22_size), string_to_kcg_size, snsFile); 
    bOK &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init1), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init2), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init3), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init4), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init5), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init6), string_to_kcg_bool, snsFile); 
    bOK &= load_var((void *)(&pValue->init7), string_to_kcg_bool, snsFile); 
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
