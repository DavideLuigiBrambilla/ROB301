/* ROB301_BRAMBILLA_GOMES_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "ROB301_BRAMBILLA_GOMES_type.h"
#include "ROB301_BRAMBILLA_GOMES_mapping.h"

/* iterators */

/* clock active helper functions */
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_56285256 (void* pHandle) { 
    int nResult = 0;
    nResult |= isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear(pHandle);
    nResult |= isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear(pHandle);
    return nResult;
}
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_TR_State_Machine_Extend_Gear*)pHandle == SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_RETRACTED_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_WAITING_DOWN_State_Machine_Extend_Gear); }

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_62, 3);
MAP_DECL(scope_61, 1);
MAP_DECL(scope_60, 3);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 1);
MAP_DECL(scope_57, 4);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 4);
MAP_DECL(scope_54, 1);
MAP_DECL(scope_53, 2);
MAP_DECL(scope_52, 1);
MAP_DECL(scope_51, 1);
MAP_DECL(scope_50, 4);
MAP_DECL(scope_49, 1);
MAP_DECL(scope_48, 1);
MAP_DECL(scope_47, 3);
MAP_DECL(scope_46, 1);
MAP_DECL(scope_45, 1);
MAP_DECL(scope_44, 3);
MAP_DECL(scope_43, 1);
MAP_DECL(scope_42, 1);
MAP_DECL(scope_41, 2);
MAP_DECL(scope_40, 1);
MAP_DECL(scope_39, 4);
MAP_DECL(scope_38, 3);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 4);
MAP_DECL(scope_35, 3);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 3);
MAP_DECL(scope_32, 3);
MAP_DECL(scope_31, 2);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 2);
MAP_DECL(scope_26, 3);
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 3);
MAP_DECL(scope_23, 3);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 4);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 3);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 4);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 3);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 4);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 2);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 1);
MAP_DECL(scope_2, 29);
MAP_DECL(scope_1, 92);
MAP_DECL(scope_0, 1);

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1 */
const MappingEntry scope_62_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg30", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_26_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_62 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1",
  scope_62_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN: */
const MappingEntry scope_61_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear, &scope_62, 1, 0}
};
const MappingScope scope_61 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:",
  scope_61_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1 */
const MappingEntry scope_60_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg28", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_25_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_60 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1",
  scope_60_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP: */
const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear, &scope_60, 1, 0}
};
const MappingScope scope_59 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:",
  scope_59_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1 */
const MappingEntry scope_58_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_58 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1",
  scope_58_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN: */
const MappingEntry scope_57_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &scope_58, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, NULL, 1, 2}
};
const MappingScope scope_57 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:",
  scope_57_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1 */
const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_56 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1",
  scope_56_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP: */
const MappingEntry scope_55_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &scope_56, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, NULL, 1, 2}
};
const MappingScope scope_55 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:",
  scope_55_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1 */
const MappingEntry scope_54_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_54 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1",
  scope_54_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1: */
const MappingEntry scope_53_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear, &scope_54, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_53 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:",
  scope_53_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2 */
const MappingEntry scope_52_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_52 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2",
  scope_52_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1 */
const MappingEntry scope_51_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_51 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1",
  scope_51_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF: */
const MappingEntry scope_50_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &scope_51, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &scope_52, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_50 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:",
  scope_50_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2 */
const MappingEntry scope_49_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_49 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2",
  scope_49_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1 */
const MappingEntry scope_48_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_48 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1",
  scope_48_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON: */
const MappingEntry scope_47_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear, &scope_48, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear, &scope_49, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_RETRACT_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_47 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:",
  scope_47_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2 */
const MappingEntry scope_46_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_46 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2",
  scope_46_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1 */
const MappingEntry scope_45_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_45 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1",
  scope_45_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1: */
const MappingEntry scope_44_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear, &scope_45, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear, &scope_46, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_CLOSE_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_44 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:",
  scope_44_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2 */
const MappingEntry scope_43_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_43 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2",
  scope_43_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1 */
const MappingEntry scope_42_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_42 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1",
  scope_42_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2 */
const MappingEntry scope_41_entries[2] = {
  /* 0 */ { MAP_FORK, ".1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear, &scope_42, 1, 0},
  /* 1 */ { MAP_FORK, ".2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear, &scope_43, 1, 1}
};
const MappingScope scope_41 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2",
  scope_41_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1 */
const MappingEntry scope_40_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_40 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1",
  scope_40_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1: */
const MappingEntry scope_39_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear, &scope_40, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_56285256, &scope_41, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_39 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:",
  scope_39_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2 */
const MappingEntry scope_38_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg26", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_24_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_38 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2",
  scope_38_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1 */
const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_37 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1",
  scope_37_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1: */
const MappingEntry scope_36_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &scope_37, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &scope_38, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_36 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:",
  scope_36_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2 */
const MappingEntry scope_35_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg24", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_20_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_35 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2",
  scope_35_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1 */
const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_34 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1",
  scope_34_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1: */
const MappingEntry scope_33_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear, &scope_34, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear, &scope_35, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_OPEN_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_33 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:",
  scope_33_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1 */
const MappingEntry scope_32_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg22", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_19_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_32 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1",
  scope_32_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON: */
const MappingEntry scope_31_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear, &scope_32, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_GENERAL_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_31 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:",
  scope_31_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1 */
const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_30 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1",
  scope_30_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN: */
const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear, &scope_30, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_EXTENDED_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_EXTENDED_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_29 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:",
  scope_29_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1 */
const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_28 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1",
  scope_28_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF: */
const MappingEntry scope_27_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear, &scope_28, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_GENERAL_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_27 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:",
  scope_27_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2 */
const MappingEntry scope_26_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg20", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_21_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg21", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_26 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2",
  scope_26_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1 */
const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_25 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1",
  scope_25_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF: */
const MappingEntry scope_24_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear, &scope_25, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear, &scope_26, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_OPEN_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_24 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:",
  scope_24_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2 */
const MappingEntry scope_23_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_23_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_23 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2",
  scope_23_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1 */
const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_22 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1",
  scope_22_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF: */
const MappingEntry scope_21_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear, &scope_22, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear, &scope_23, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_CLOSE_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_CLOSE_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_21 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:",
  scope_21_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2 */
const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_20 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2",
  scope_20_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1 */
const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_19 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1",
  scope_19_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON: */
const MappingEntry scope_18_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear, &scope_19, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear, &scope_20, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_CLOSE_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_18 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:",
  scope_18_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2 */
const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_17 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2",
  scope_17_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1 */
const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_16 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1",
  scope_16_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF: */
const MappingEntry scope_15_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear, &scope_16, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear, &scope_17, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_EXTEND_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_EXTEND_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_15 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:",
  scope_15_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2 */
const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_14 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2",
  scope_14_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1 */
const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_13 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1",
  scope_13_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON: */
const MappingEntry scope_12_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear, &scope_13, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear, &scope_14, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_EXTEND_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_12 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:",
  scope_12_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2 */
const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_11 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2",
  scope_11_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1 */
const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_10 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1",
  scope_10_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON: */
const MappingEntry scope_9_entries[4] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear, &scope_10, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear, &scope_11, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_OPEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_OPEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_9 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:",
  scope_9_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1 */
const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_22_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_8 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1",
  scope_8_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON: */
const MappingEntry scope_7_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear, &scope_8, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_GEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_7 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:",
  scope_7_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1 */
const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear, NULL, 1, 0}
};
const MappingScope scope_6 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1",
  scope_6_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP: */
const MappingEntry scope_5_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_State_Machine_Extend_Gear_SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear, &scope_6, 1, 0}
};
const MappingScope scope_5 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:",
  scope_5_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear: */
const MappingEntry scope_2_entries[29] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._10_State_Machine_Extend_Gear_state_act, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_State_Machine_Extend_Gear), (size_t)&outputs_ctx.State_Machine_Extend_Gear_fired_strong, &_Type_SSM_TR_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_State_Machine_Extend_Gear), (size_t)&outputs_ctx._11_State_Machine_Extend_Gear_fired, &_Type_SSM_TR_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx.State_Machine_Extend_Gear_state_nxt, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.State_Machine_Extend_Gear_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._8_State_Machine_Extend_Gear_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._9_State_Machine_Extend_Gear_state_sel, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "CLOSE_EV_OFF1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &scope_36, 1, 19},
  /* 8 */ { MAP_STATE, "CLOSE_EV_OFF:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, &scope_21, 1, 13},
  /* 9 */ { MAP_STATE, "CLOSE_EV_ON1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear, &scope_44, 1, 21},
  /* 10 */ { MAP_STATE, "CLOSE_EV_ON:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear, &scope_18, 1, 12},
  /* 11 */ { MAP_STATE, "EXTENDED_DOWN:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear, &scope_29, 1, 16},
  /* 12 */ { MAP_STATE, "EXTEND_EV_OFF:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear, &scope_15, 1, 11},
  /* 13 */ { MAP_STATE, "EXTEND_EV_ON:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear, &scope_12, 1, 10},
  /* 14 */ { MAP_STATE, "GENERAL_EV_OFF1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear, &scope_53, 1, 24},
  /* 15 */ { MAP_STATE, "GENERAL_EV_OFF:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear, &scope_27, 1, 15},
  /* 16 */ { MAP_STATE, "GENERAL_EV_ON:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear, &scope_31, 1, 17},
  /* 17 */ { MAP_STATE, "GEN_EV_ON:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear, &scope_7, 1, 8},
  /* 18 */ { MAP_STATE, "INTERRUPTION_DOWN:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &scope_57, 1, 26},
  /* 19 */ { MAP_STATE, "INTERRUPTION_TO_UP:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &scope_55, 1, 25},
  /* 20 */ { MAP_STATE, "OPEN_EV_OFF1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, &scope_33, 1, 18},
  /* 21 */ { MAP_STATE, "OPEN_EV_OFF:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear, &scope_24, 1, 14},
  /* 22 */ { MAP_STATE, "OPEN_EV_ON1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, &scope_39, 1, 20},
  /* 23 */ { MAP_STATE, "OPEN_EV_ON:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear, &scope_9, 1, 9},
  /* 24 */ { MAP_STATE, "RETRACTED_UP:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear, &scope_5, 1, 7},
  /* 25 */ { MAP_STATE, "RETRACT_EV_ON:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear, &scope_47, 1, 22},
  /* 26 */ { MAP_STATE, "RETRAIT_EV_OFF:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &scope_50, 1, 23},
  /* 27 */ { MAP_STATE, "WAITING_DOWN:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear, &scope_61, 1, 28},
  /* 28 */ { MAP_STATE, "WAITING_TO_UP:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear, &scope_59, 1, 27}
};
const MappingScope scope_2 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:",
  scope_2_entries, 29,
};

/* Computing_Model/ Computing_Model */
const MappingEntry scope_1_entries[92] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_22_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_23_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 10},
  /* 3 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 4 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 12},
  /* 5 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 6 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 14},
  /* 7 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 15},
  /* 8 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_21_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 2},
  /* 9 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_19_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 3},
  /* 10 */ { MAP_LOCAL, "@kcg32", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._9_State_Machine_Extend_Gear_state_sel, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 67},
  /* 11 */ { MAP_LOCAL, "@kcg33", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._10_State_Machine_Extend_Gear_state_act, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 68},
  /* 12 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_20_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 4},
  /* 13 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_24_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 5},
  /* 14 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_25_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 6},
  /* 15 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_26_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 7},
  /* 16 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 8},
  /* 17 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 18 */ { MAP_AUTOMATON, "State_Machine_Extend_Gear:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L100, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45},
  /* 20 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L105, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44},
  /* 21 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L118, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43},
  /* 22 */ { MAP_LOCAL, "_L119", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L119, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 23 */ { MAP_LOCAL, "_L120", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L120, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41},
  /* 24 */ { MAP_LOCAL, "_L121", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L121, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40},
  /* 25 */ { MAP_LOCAL, "_L122", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L122, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 26 */ { MAP_LOCAL, "_L123", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L123, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 27 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L124, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 28 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L125, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 29 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L126, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L127", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L127, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 31 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L129, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 32 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L130, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 33 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L131, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L132, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 35 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L133, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 36 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L134, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 37 */ { MAP_LOCAL, "_L135", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L135, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 38 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L136, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 39 */ { MAP_LOCAL, "_L137", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L137, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 40 */ { MAP_LOCAL, "_L138", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L138, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 41 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L139, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 42 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L140, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 43 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L24, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66},
  /* 44 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L25, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65},
  /* 45 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L26, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 64},
  /* 46 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L33, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53},
  /* 47 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L34, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 48 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L42, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63},
  /* 49 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L43, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 62},
  /* 50 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L44, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61},
  /* 51 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L51, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60},
  /* 52 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L52, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 59},
  /* 53 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L53, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58},
  /* 54 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L60, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57},
  /* 55 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L61, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56},
  /* 56 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L62, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55},
  /* 57 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L91, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54},
  /* 58 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L92, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 59 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L94, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50},
  /* 60 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L95, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49},
  /* 61 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48},
  /* 62 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L98, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47},
  /* 63 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L99, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46},
  /* 64 */ { MAP_LOCAL, "all_doors_closed", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.all_doors_closed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 65 */ { MAP_LOCAL, "all_doors_open", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.all_doors_open, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 66 */ { MAP_LOCAL, "all_gears_extended", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.all_gears_extended, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 67 */ { MAP_LOCAL, "all_gears_retracted", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.all_gears_retracted, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 68 */ { MAP_LOCAL, "all_shock_absorber_false", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.all_shock_absorber_false, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 69 */ { MAP_OUTPUT, "close_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.close_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70},
  /* 70 */ { MAP_INPUT, "door_Closed_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 86},
  /* 71 */ { MAP_INPUT, "door_Closed_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 88},
  /* 72 */ { MAP_INPUT, "door_Closed_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 87},
  /* 73 */ { MAP_INPUT, "door_Open_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 89},
  /* 74 */ { MAP_INPUT, "door_Open_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 91},
  /* 75 */ { MAP_INPUT, "door_Open_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 90},
  /* 76 */ { MAP_OUTPUT, "extend_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.extend_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73},
  /* 77 */ { MAP_INPUT, "gear_Extended_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77},
  /* 78 */ { MAP_INPUT, "gear_Extended_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79},
  /* 79 */ { MAP_INPUT, "gear_Extended_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78},
  /* 80 */ { MAP_INPUT, "gear_Retracted_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 80},
  /* 81 */ { MAP_INPUT, "gear_Retracted_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 82},
  /* 82 */ { MAP_INPUT, "gear_Retracted_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 81},
  /* 83 */ { MAP_INPUT, "gear_Shock_Absorber_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 83},
  /* 84 */ { MAP_INPUT, "gear_Shock_Absorber_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 85},
  /* 85 */ { MAP_INPUT, "gear_Shock_Absorber_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 84},
  /* 86 */ { MAP_OUTPUT, "gears_Locked_Down", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.gears_Locked_Down, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74},
  /* 87 */ { MAP_OUTPUT, "gears_Maneuvring", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.gears_Maneuvring, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75},
  /* 88 */ { MAP_OUTPUT, "general_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.general_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 69},
  /* 89 */ { MAP_INPUT, "handle", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.handle, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76},
  /* 90 */ { MAP_OUTPUT, "open_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.open_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71},
  /* 91 */ { MAP_OUTPUT, "retract_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.retract_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72}
};
const MappingScope scope_1 = {
  "Computing_Model/ Computing_Model",
  scope_1_entries, 92,
};

/*  */
const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "Computing_Model", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

