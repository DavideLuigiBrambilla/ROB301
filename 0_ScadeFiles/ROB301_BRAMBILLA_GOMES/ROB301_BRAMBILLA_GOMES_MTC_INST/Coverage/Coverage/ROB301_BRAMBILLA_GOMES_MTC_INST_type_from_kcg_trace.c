#include <stdlib.h>
#include <stddef.h>
#include <float.h>
#include "kcg_types.h"
#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"
#include "ROB301_BRAMBILLA_GOMES_MTC_INST_type.h"

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */

#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int set_kcg_bool_default_value(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    set_kcg_bool_default_value,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int set_kcg_char_default_value(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    set_kcg_char_default_value,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, &rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    SimTolerance defaultTol = {FLT_MIN, 0};
    if (!pTol)
        pTol = &defaultTol;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == &defaultTol
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int set_kcg_float32_default_value(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    set_kcg_float32_default_value,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, &rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    SimTolerance defaultTol = {DBL_MIN, 0};
    if (!pTol)
        pTol = &defaultTol;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == &defaultTol
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int set_kcg_float64_default_value(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    set_kcg_float64_default_value,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, &rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int set_kcg_int16_default_value(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    set_kcg_int16_default_value,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, &rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int set_kcg_int32_default_value(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    set_kcg_int32_default_value,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, &rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int set_kcg_int64_default_value(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    set_kcg_int64_default_value,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, &rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int set_kcg_int8_default_value(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    set_kcg_int8_default_value,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, &rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int set_kcg_size_default_value(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    set_kcg_size_default_value,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, &rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int set_kcg_uint16_default_value(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    set_kcg_uint16_default_value,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, &rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int set_kcg_uint32_default_value(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    set_kcg_uint32_default_value,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, &rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int set_kcg_uint64_default_value(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    set_kcg_uint64_default_value,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, &rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int set_kcg_uint8_default_value(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    set_kcg_uint8_default_value,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** Result_MTC 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimResult_MTCVTable_defined
    extern struct SimTypeVTable *pSimResult_MTCVTable;
  #else 
    struct SimTypeVTable *pSimResult_MTCVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimResult_MTCVTable;
#endif

int Result_MTC_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimResult_MTCVTable != NULL
        && pSimResult_MTCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimResult_MTCVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pfnStrAppend("n/a", pStrObj);
}

int check_Result_MTC_string(const char *str, char **endptr)
{
    static Result_MTC rTemp;
    return string_to_Result_MTC(str, &rTemp, endptr);
}

int string_to_Result_MTC(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimResult_MTCVTable != NULL) {
        nRet = string_to_VTable(str, pSimResult_MTCVTable, pValue, endptr);
    }
    if (nRet == 0) {
        return 0;
    }
    return nRet;
}

int is_Result_MTC_double_conversion_allowed()
{
    if (pSimResult_MTCVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimResult_MTCVTable);
    }
    return 1;
}

int Result_MTC_to_double(const void *pValue, double *nValue)
{
    if (pSimResult_MTCVTable != NULL) {
        return VTable_to_double(pValue, pSimResult_MTCVTable, nValue);
    }
    *nValue = (double)*((Result_MTC*)pValue);
    return 1;
}

int is_Result_MTC_long_conversion_allowed()
{
    if (pSimResult_MTCVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimResult_MTCVTable);
    }
    return 1;
}

int Result_MTC_to_long(const void *pValue, long *nValue)
{
    if (pSimResult_MTCVTable != NULL) {
        return VTable_to_long(pValue, pSimResult_MTCVTable, nValue);
    }
    *nValue = (long)*((Result_MTC*)pValue);
    return 1;
}

void compare_Result_MTC(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimResult_MTCVTable != NULL
        && pSimResult_MTCVTable->m_version >= Scv612
        && pSimResult_MTCVTable->m_pfnCompare != NULL) {
        if (pSimResult_MTCVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimResult_MTCVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimResult_MTCVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Result_MTC_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    pfnStrAppend("?", pStrObj);
    return 1;
}

int set_Result_MTC_default_value(void *pValue)
{
    return 0;
}

SimTypeUtils _Type_Result_MTC_Utils = {
    Result_MTC_to_string,
    check_Result_MTC_string,
    string_to_Result_MTC,
    is_Result_MTC_double_conversion_allowed,
    Result_MTC_to_double,
    is_Result_MTC_long_conversion_allowed,
    Result_MTC_to_long,
    compare_Result_MTC,
    get_Result_MTC_signature,
    set_Result_MTC_default_value,
    sizeof(Result_MTC)
};

/****************************************************************
 ** SSM_ST_State_Machine_Extend_Gear 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_State_Machine_Extend_GearVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_State_Machine_Extend_GearVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_State_Machine_Extend_GearVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_State_Machine_Extend_GearVTable;
#endif

static SimEnumValUtils SSM_ST_State_Machine_Extend_Gear_values[] = {
    { "RETRACTED_UP", SSM_st_RETRACTED_UP_State_Machine_Extend_Gear},
    { "RETRACTED_UP", SSM_st_RETRACTED_UP_State_Machine_Extend_Gear},
    { "GEN_EV_ON", SSM_st_GEN_EV_ON_State_Machine_Extend_Gear},
    { "GEN_EV_ON", SSM_st_GEN_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_ON", SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_ON", SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_ON", SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_ON", SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_OFF", SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear},
    { "EXTEND_EV_OFF", SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON", SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON", SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF", SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF", SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF", SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF", SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF", SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF", SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear},
    { "EXTENDED_DOWN", SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear},
    { "EXTENDED_DOWN", SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear},
    { "GENERAL_EV_ON", SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear},
    { "GENERAL_EV_ON", SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF1", SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF1", SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF1", SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF1", SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1", SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1", SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON1", SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON1", SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear},
    { "RETRACT_EV_ON", SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear},
    { "RETRACT_EV_ON", SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear},
    { "RETRAIT_EV_OFF", SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear},
    { "RETRAIT_EV_OFF", SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF1", SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF1", SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear},
    { "INTERRUPTION_TO_UP", SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear},
    { "INTERRUPTION_TO_UP", SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear},
    { "INTERRUPTION_DOWN", SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear},
    { "INTERRUPTION_DOWN", SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear},
    { "WAITING_TO_UP", SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear},
    { "WAITING_TO_UP", SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear},
    { "WAITING_DOWN", SSM_st_WAITING_DOWN_State_Machine_Extend_Gear},
    { "WAITING_DOWN", SSM_st_WAITING_DOWN_State_Machine_Extend_Gear},
};
const int SSM_ST_State_Machine_Extend_Gear_nb_values = 44;

int SSM_ST_State_Machine_Extend_Gear_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL
        && pSimSSM_ST_State_Machine_Extend_GearVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_State_Machine_Extend_GearVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_State_Machine_Extend_Gear*)pValue, SSM_ST_State_Machine_Extend_Gear_values, SSM_ST_State_Machine_Extend_Gear_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_State_Machine_Extend_Gear_string(const char *str, char **endptr)
{
    static SSM_ST_State_Machine_Extend_Gear rTemp;
    return string_to_SSM_ST_State_Machine_Extend_Gear(str, &rTemp, endptr);
}

int string_to_SSM_ST_State_Machine_Extend_Gear(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_State_Machine_Extend_GearVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_State_Machine_Extend_Gear_values, SSM_ST_State_Machine_Extend_Gear_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_State_Machine_Extend_Gear*)pValue = (SSM_ST_State_Machine_Extend_Gear)nTemp;
    }
    return nRet;
}

int is_SSM_ST_State_Machine_Extend_Gear_double_conversion_allowed()
{
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_State_Machine_Extend_GearVTable);
    }
    return 1;
}

int SSM_ST_State_Machine_Extend_Gear_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_State_Machine_Extend_GearVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_State_Machine_Extend_Gear*)pValue);
    return 1;
}

int is_SSM_ST_State_Machine_Extend_Gear_long_conversion_allowed()
{
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_State_Machine_Extend_GearVTable);
    }
    return 1;
}

int SSM_ST_State_Machine_Extend_Gear_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_State_Machine_Extend_GearVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_State_Machine_Extend_Gear*)pValue);
    return 1;
}

void compare_SSM_ST_State_Machine_Extend_Gear(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_State_Machine_Extend_GearVTable != NULL
        && pSimSSM_ST_State_Machine_Extend_GearVTable->m_version >= Scv612
        && pSimSSM_ST_State_Machine_Extend_GearVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_State_Machine_Extend_GearVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_State_Machine_Extend_GearVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_State_Machine_Extend_GearVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_State_Machine_Extend_Gear*)pValue1), (int)(*(SSM_ST_State_Machine_Extend_Gear*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_State_Machine_Extend_Gear_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_State_Machine_Extend_Gear_values, SSM_ST_State_Machine_Extend_Gear_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_ST_State_Machine_Extend_Gear_default_value(void *pValue)
{
    *(SSM_ST_State_Machine_Extend_Gear*)pValue = SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
    return 1;
}

SimTypeUtils _Type_SSM_ST_State_Machine_Extend_Gear_Utils = {
    SSM_ST_State_Machine_Extend_Gear_to_string,
    check_SSM_ST_State_Machine_Extend_Gear_string,
    string_to_SSM_ST_State_Machine_Extend_Gear,
    is_SSM_ST_State_Machine_Extend_Gear_double_conversion_allowed,
    SSM_ST_State_Machine_Extend_Gear_to_double,
    is_SSM_ST_State_Machine_Extend_Gear_long_conversion_allowed,
    SSM_ST_State_Machine_Extend_Gear_to_long,
    compare_SSM_ST_State_Machine_Extend_Gear,
    get_SSM_ST_State_Machine_Extend_Gear_signature,
    set_SSM_ST_State_Machine_Extend_Gear_default_value,
    sizeof(SSM_ST_State_Machine_Extend_Gear)
};

/****************************************************************
 ** SSM_TR_State_Machine_Extend_Gear 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_State_Machine_Extend_GearVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_State_Machine_Extend_GearVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_State_Machine_Extend_GearVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_State_Machine_Extend_GearVTable;
#endif

static SimEnumValUtils SSM_TR_State_Machine_Extend_Gear_values[] = {
    { "RETRACTED_UP:<1>", SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear},
    { "RETRACTED_UP:<1>", SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear},
    { "GEN_EV_ON:<1>", SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear},
    { "GEN_EV_ON:<1>", SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_ON:<1>", SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_ON:<1>", SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_ON:<2>", SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_ON:<2>", SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_ON:<1>", SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_ON:<1>", SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_ON:<2>", SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_ON:<2>", SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear},
    { "EXTEND_EV_OFF:<1>", SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear},
    { "EXTEND_EV_OFF:<1>", SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear},
    { "EXTEND_EV_OFF:<2>", SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear},
    { "EXTEND_EV_OFF:<2>", SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON:<1>", SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON:<1>", SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON:<2>", SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON:<2>", SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF:<1>", SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF:<1>", SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF:<2>", SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF:<2>", SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF:<1>", SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF:<1>", SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF:<2>", SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF:<2>", SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF:<1>", SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF:<1>", SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear},
    { "EXTENDED_DOWN:<1>", SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear},
    { "EXTENDED_DOWN:<1>", SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear},
    { "GENERAL_EV_ON:<1>", SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear},
    { "GENERAL_EV_ON:<1>", SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF1:<1>", SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF1:<1>", SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF1:<2>", SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear},
    { "OPEN_EV_OFF1:<2>", SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF1:<1>", SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF1:<1>", SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF1:<2>", SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear},
    { "CLOSE_EV_OFF1:<2>", SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1:<1>", SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1:<1>", SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1:<2.1>", SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1:<2.1>", SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1:<2.2>", SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "OPEN_EV_ON1:<2.2>", SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON1:<1>", SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON1:<1>", SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON1:<2>", SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear},
    { "CLOSE_EV_ON1:<2>", SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear},
    { "RETRACT_EV_ON:<1>", SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear},
    { "RETRACT_EV_ON:<1>", SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear},
    { "RETRACT_EV_ON:<2>", SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear},
    { "RETRACT_EV_ON:<2>", SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear},
    { "RETRAIT_EV_OFF:<1>", SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear},
    { "RETRAIT_EV_OFF:<1>", SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear},
    { "RETRAIT_EV_OFF:<2>", SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear},
    { "RETRAIT_EV_OFF:<2>", SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF1:<1>", SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear},
    { "GENERAL_EV_OFF1:<1>", SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear},
    { "INTERRUPTION_TO_UP:<1>", SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear},
    { "INTERRUPTION_TO_UP:<1>", SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear},
    { "INTERRUPTION_DOWN:<1>", SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear},
    { "INTERRUPTION_DOWN:<1>", SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear},
    { "WAITING_TO_UP:<1>", SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear},
    { "WAITING_TO_UP:<1>", SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear},
    { "WAITING_DOWN:<1>", SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear},
    { "WAITING_DOWN:<1>", SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear},
    { "SSM_TR_State_Machine_Extend_Gear_no_trans", 0},
    { "SSM_TR_State_Machine_Extend_Gear_no_trans", 0},
};
const int SSM_TR_State_Machine_Extend_Gear_nb_values = 72;

int SSM_TR_State_Machine_Extend_Gear_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL
        && pSimSSM_TR_State_Machine_Extend_GearVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_State_Machine_Extend_GearVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_State_Machine_Extend_Gear*)pValue, SSM_TR_State_Machine_Extend_Gear_values, SSM_TR_State_Machine_Extend_Gear_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_State_Machine_Extend_Gear_string(const char *str, char **endptr)
{
    static SSM_TR_State_Machine_Extend_Gear rTemp;
    return string_to_SSM_TR_State_Machine_Extend_Gear(str, &rTemp, endptr);
}

int string_to_SSM_TR_State_Machine_Extend_Gear(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_State_Machine_Extend_GearVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_State_Machine_Extend_Gear_values, SSM_TR_State_Machine_Extend_Gear_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_State_Machine_Extend_Gear*)pValue = (SSM_TR_State_Machine_Extend_Gear)nTemp;
    }
    return nRet;
}

int is_SSM_TR_State_Machine_Extend_Gear_double_conversion_allowed()
{
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_State_Machine_Extend_GearVTable);
    }
    return 1;
}

int SSM_TR_State_Machine_Extend_Gear_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_State_Machine_Extend_GearVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_State_Machine_Extend_Gear*)pValue);
    return 1;
}

int is_SSM_TR_State_Machine_Extend_Gear_long_conversion_allowed()
{
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_State_Machine_Extend_GearVTable);
    }
    return 1;
}

int SSM_TR_State_Machine_Extend_Gear_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_State_Machine_Extend_GearVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_State_Machine_Extend_Gear*)pValue);
    return 1;
}

void compare_SSM_TR_State_Machine_Extend_Gear(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_State_Machine_Extend_GearVTable != NULL
        && pSimSSM_TR_State_Machine_Extend_GearVTable->m_version >= Scv612
        && pSimSSM_TR_State_Machine_Extend_GearVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_State_Machine_Extend_GearVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_State_Machine_Extend_GearVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_State_Machine_Extend_GearVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_State_Machine_Extend_Gear*)pValue1), (int)(*(SSM_TR_State_Machine_Extend_Gear*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_State_Machine_Extend_Gear_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_State_Machine_Extend_Gear_values, SSM_TR_State_Machine_Extend_Gear_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_TR_State_Machine_Extend_Gear_default_value(void *pValue)
{
    *(SSM_TR_State_Machine_Extend_Gear*)pValue = SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear;
    return 1;
}

SimTypeUtils _Type_SSM_TR_State_Machine_Extend_Gear_Utils = {
    SSM_TR_State_Machine_Extend_Gear_to_string,
    check_SSM_TR_State_Machine_Extend_Gear_string,
    string_to_SSM_TR_State_Machine_Extend_Gear,
    is_SSM_TR_State_Machine_Extend_Gear_double_conversion_allowed,
    SSM_TR_State_Machine_Extend_Gear_to_double,
    is_SSM_TR_State_Machine_Extend_Gear_long_conversion_allowed,
    SSM_TR_State_Machine_Extend_Gear_to_long,
    compare_SSM_TR_State_Machine_Extend_Gear,
    get_SSM_TR_State_Machine_Extend_Gear_signature,
    set_SSM_TR_State_Machine_Extend_Gear_default_value,
    sizeof(SSM_TR_State_Machine_Extend_Gear)
};

/****************************************************************
 ** TruthTableValues_truthtables 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimTruthTableValues_truthtablesVTable_defined
    extern struct SimTypeVTable *pSimTruthTableValues_truthtablesVTable;
  #else 
    struct SimTypeVTable *pSimTruthTableValues_truthtablesVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimTruthTableValues_truthtablesVTable;
#endif

static SimEnumValUtils TruthTableValues_truthtables_values[] = {
    { "truthtables::T", T_truthtables},
    { "T", T_truthtables},
    { "truthtables::F", F_truthtables},
    { "F", F_truthtables},
    { "truthtables::X", X_truthtables},
    { "X", X_truthtables},
};
const int TruthTableValues_truthtables_nb_values = 6;

int TruthTableValues_truthtables_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTruthTableValues_truthtablesVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(TruthTableValues_truthtables*)pValue, TruthTableValues_truthtables_values, TruthTableValues_truthtables_nb_values, pfnStrAppend, pStrObj); 
}

int check_TruthTableValues_truthtables_string(const char *str, char **endptr)
{
    static TruthTableValues_truthtables rTemp;
    return string_to_TruthTableValues_truthtables(str, &rTemp, endptr);
}

int string_to_TruthTableValues_truthtables(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        nRet = string_to_VTable(str, pSimTruthTableValues_truthtablesVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, TruthTableValues_truthtables_values, TruthTableValues_truthtables_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(TruthTableValues_truthtables*)pValue = (TruthTableValues_truthtables)nTemp;
    }
    return nRet;
}

int is_TruthTableValues_truthtables_double_conversion_allowed()
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTruthTableValues_truthtablesVTable);
    }
    return 1;
}

int TruthTableValues_truthtables_to_double(const void *pValue, double *nValue)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return VTable_to_double(pValue, pSimTruthTableValues_truthtablesVTable, nValue);
    }
    *nValue = (double)*((TruthTableValues_truthtables*)pValue);
    return 1;
}

int is_TruthTableValues_truthtables_long_conversion_allowed()
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimTruthTableValues_truthtablesVTable);
    }
    return 1;
}

int TruthTableValues_truthtables_to_long(const void *pValue, long *nValue)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return VTable_to_long(pValue, pSimTruthTableValues_truthtablesVTable, nValue);
    }
    *nValue = (long)*((TruthTableValues_truthtables*)pValue);
    return 1;
}

void compare_TruthTableValues_truthtables(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_version >= Scv612
        && pSimTruthTableValues_truthtablesVTable->m_pfnCompare != NULL) {
        if (pSimTruthTableValues_truthtablesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimTruthTableValues_truthtablesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimTruthTableValues_truthtablesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(TruthTableValues_truthtables*)pValue1), (int)(*(TruthTableValues_truthtables*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_TruthTableValues_truthtables_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(TruthTableValues_truthtables_values, TruthTableValues_truthtables_nb_values, pfnStrAppend, pStrObj);
}

int set_TruthTableValues_truthtables_default_value(void *pValue)
{
    *(TruthTableValues_truthtables*)pValue = T_truthtables;
    return 1;
}

SimTypeUtils _Type_TruthTableValues_truthtables_Utils = {
    TruthTableValues_truthtables_to_string,
    check_TruthTableValues_truthtables_string,
    string_to_TruthTableValues_truthtables,
    is_TruthTableValues_truthtables_double_conversion_allowed,
    TruthTableValues_truthtables_to_double,
    is_TruthTableValues_truthtables_long_conversion_allowed,
    TruthTableValues_truthtables_to_long,
    compare_TruthTableValues_truthtables,
    get_TruthTableValues_truthtables_signature,
    set_TruthTableValues_truthtables_default_value,
    sizeof(TruthTableValues_truthtables)
};

