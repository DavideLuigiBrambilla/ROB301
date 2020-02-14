/* ROB301_BRAMBILLA_GOMES_MTC_INST_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "ROB301_BRAMBILLA_GOMES_MTC_INST_type.h"
#include "ROB301_BRAMBILLA_GOMES_MTC_INST_mapping.h"

/* iterators */

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_WAITING_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_GEN_EV_ON_State_Machine_Extend_Gear); }
static int isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear (void* pHandle) { return (*(SSM_ST_State_Machine_Extend_Gear*)pHandle == SSM_st_RETRACTED_UP_State_Machine_Extend_Gear); }

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_188, 1);
MAP_DECL(scope_187, 1);
MAP_DECL(scope_186, 1);
MAP_DECL(scope_185, 1);
MAP_DECL(scope_184, 2);
MAP_DECL(scope_183, 2);
MAP_DECL(scope_182, 2);
MAP_DECL(scope_181, 3);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 2);
MAP_DECL(scope_178, 2);
MAP_DECL(scope_177, 2);
MAP_DECL(scope_176, 2);
MAP_DECL(scope_175, 3);
MAP_DECL(scope_174, 2);
MAP_DECL(scope_173, 2);
MAP_DECL(scope_172, 2);
MAP_DECL(scope_171, 1);
MAP_DECL(scope_170, 3);
MAP_DECL(scope_169, 2);
MAP_DECL(scope_168, 2);
MAP_DECL(scope_167, 2);
MAP_DECL(scope_166, 1);
MAP_DECL(scope_165, 3);
MAP_DECL(scope_164, 2);
MAP_DECL(scope_163, 2);
MAP_DECL(scope_162, 2);
MAP_DECL(scope_161, 1);
MAP_DECL(scope_160, 3);
MAP_DECL(scope_159, 2);
MAP_DECL(scope_158, 2);
MAP_DECL(scope_157, 2);
MAP_DECL(scope_155, 3);
MAP_DECL(scope_154, 2);
MAP_DECL(scope_153, 2);
MAP_DECL(scope_152, 2);
MAP_DECL(scope_151, 3);
MAP_DECL(scope_150, 2);
MAP_DECL(scope_149, 3);
MAP_DECL(scope_148, 2);
MAP_DECL(scope_146, 3);
MAP_DECL(scope_145, 2);
MAP_DECL(scope_144, 2);
MAP_DECL(scope_143, 2);
MAP_DECL(scope_142, 3);
MAP_DECL(scope_141, 2);
MAP_DECL(scope_140, 3);
MAP_DECL(scope_139, 2);
MAP_DECL(scope_137, 3);
MAP_DECL(scope_136, 2);
MAP_DECL(scope_135, 2);
MAP_DECL(scope_134, 2);
MAP_DECL(scope_133, 3);
MAP_DECL(scope_132, 2);
MAP_DECL(scope_131, 3);
MAP_DECL(scope_130, 2);
MAP_DECL(scope_129, 2);
MAP_DECL(scope_128, 1);
MAP_DECL(scope_127, 3);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_124, 3);
MAP_DECL(scope_123, 2);
MAP_DECL(scope_121, 4);
MAP_DECL(scope_120, 2);
MAP_DECL(scope_119, 2);
MAP_DECL(scope_118, 2);
MAP_DECL(scope_117, 3);
MAP_DECL(scope_116, 2);
MAP_DECL(scope_115, 3);
MAP_DECL(scope_114, 2);
MAP_DECL(scope_113, 2);
MAP_DECL(scope_112, 1);
MAP_DECL(scope_111, 3);
MAP_DECL(scope_110, 2);
MAP_DECL(scope_109, 2);
MAP_DECL(scope_108, 2);
MAP_DECL(scope_107, 3);
MAP_DECL(scope_106, 2);
MAP_DECL(scope_105, 3);
MAP_DECL(scope_104, 2);
MAP_DECL(scope_103, 2);
MAP_DECL(scope_102, 1);
MAP_DECL(scope_101, 3);
MAP_DECL(scope_100, 2);
MAP_DECL(scope_99, 2);
MAP_DECL(scope_98, 2);
MAP_DECL(scope_97, 3);
MAP_DECL(scope_96, 2);
MAP_DECL(scope_95, 3);
MAP_DECL(scope_94, 2);
MAP_DECL(scope_93, 2);
MAP_DECL(scope_92, 2);
MAP_DECL(scope_91, 3);
MAP_DECL(scope_90, 2);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 2);
MAP_DECL(scope_87, 1);
MAP_DECL(scope_86, 3);
MAP_DECL(scope_85, 2);
MAP_DECL(scope_84, 2);
MAP_DECL(scope_83, 2);
MAP_DECL(scope_82, 1);
MAP_DECL(scope_81, 3);
MAP_DECL(scope_80, 2);
MAP_DECL(scope_79, 2);
MAP_DECL(scope_78, 2);
MAP_DECL(scope_77, 2);
MAP_DECL(scope_76, 1);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 2);
MAP_DECL(scope_73, 1);
MAP_DECL(scope_72, 3);
MAP_DECL(scope_71, 2);
MAP_DECL(scope_70, 3);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 2);
MAP_DECL(scope_67, 1);
MAP_DECL(scope_66, 3);
MAP_DECL(scope_65, 2);
MAP_DECL(scope_64, 1);
MAP_DECL(scope_63, 3);
MAP_DECL(scope_62, 2);
MAP_DECL(scope_61, 3);
MAP_DECL(scope_60, 2);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 2);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 3);
MAP_DECL(scope_54, 2);
MAP_DECL(scope_53, 3);
MAP_DECL(scope_52, 2);
MAP_DECL(scope_50, 3);
MAP_DECL(scope_49, 2);
MAP_DECL(scope_48, 1);
MAP_DECL(scope_47, 3);
MAP_DECL(scope_46, 2);
MAP_DECL(scope_45, 3);
MAP_DECL(scope_44, 2);
MAP_DECL(scope_42, 3);
MAP_DECL(scope_41, 2);
MAP_DECL(scope_40, 1);
MAP_DECL(scope_39, 3);
MAP_DECL(scope_38, 2);
MAP_DECL(scope_37, 3);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_34, 3);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 3);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 2);
MAP_DECL(scope_27, 2);
MAP_DECL(scope_26, 2);
MAP_DECL(scope_25, 3);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 2);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 2);
MAP_DECL(scope_19, 3);
MAP_DECL(scope_18, 2);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_14, 26);
MAP_DECL(scope_13, 2);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 2);
MAP_DECL(scope_10, 2);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_1, 84);
MAP_DECL(scope_0, 1);

/* MTC::LATCHALL04/ LATCHALL04_MTC */
const MappingEntry scope_188_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL04_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_188 = {
  "MTC::LATCHALL04/ LATCHALL04_MTC",
  scope_188_entries, 1,
};

/* MTC::LATCHALL01/ LATCHALL01_MTC */
const MappingEntry scope_187_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL01_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_187 = {
  "MTC::LATCHALL01/ LATCHALL01_MTC",
  scope_187_entries, 1,
};

/* MTC::LATCHALL02/ LATCHALL02_MTC */
const MappingEntry scope_186_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL02_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_186 = {
  "MTC::LATCHALL02/ LATCHALL02_MTC",
  scope_186_entries, 1,
};

/* MTC::LATCHALL03/ LATCHALL03_MTC */
const MappingEntry scope_185_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(Result_MTC), offsetof(outC_LATCHALL03_MTC, Output1), &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_185 = {
  "MTC::LATCHALL03/ LATCHALL03_MTC",
  scope_185_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 36/ */
const MappingEntry scope_184_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx.Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_36, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_36, &_Type_Result_MTC_Utils, &scope_1_entries[40], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_184 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 36/",
  scope_184_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST 26/MTCEx::MTC_Observers::Computing_Model_PATHS16_MTC_OBS 26/ */
const MappingEntry scope_183_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx.Context_LATCHALL04_MTC_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._7_MTC_ALL1_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_183 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST 26/MTCEx::MTC_Observers::Computing_Model_PATHS16_MTC_OBS 26/",
  scope_183_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST 26/ */
const MappingEntry scope_182_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS16_MTC_OBS 26", NULL, 0, 0, NULL, NULL, NULL, &scope_183, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_182 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST 26/",
  scope_182_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1 */
const MappingEntry scope_181_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST 26", NULL, 0, 0, NULL, NULL, NULL, &scope_182, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 36", NULL, 0, 0, NULL, NULL, NULL, &scope_184, 1, 1}
};
const MappingScope scope_181 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1",
  scope_181_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:MTCEx::MTC_Observers::STATE_MTC_OBS 22/ */
const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx.Context_LATCHALL02_MTC_STATE_MTC_OBS_22, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_22, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_180 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:MTCEx::MTC_Observers::STATE_MTC_OBS 22/",
  scope_180_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN: */
const MappingEntry scope_179_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_181, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 22", NULL, 0, 0, NULL, NULL, NULL, &scope_180, 1, 0}
};
const MappingScope scope_179 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:",
  scope_179_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 35/ */
const MappingEntry scope_178_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._46_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_35, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_35, &_Type_Result_MTC_Utils, &scope_1_entries[39], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_178 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 35/",
  scope_178_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST 25/MTCEx::MTC_Observers::Computing_Model_PATHS15_MTC_OBS 25/ */
const MappingEntry scope_177_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._45_Context_LATCHALL04_MTC_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._6_MTC_ALL1_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_177 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST 25/MTCEx::MTC_Observers::Computing_Model_PATHS15_MTC_OBS 25/",
  scope_177_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST 25/ */
const MappingEntry scope_176_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS15_MTC_OBS 25", NULL, 0, 0, NULL, NULL, NULL, &scope_177, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_176 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST 25/",
  scope_176_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1 */
const MappingEntry scope_175_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST 25", NULL, 0, 0, NULL, NULL, NULL, &scope_176, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 35", NULL, 0, 0, NULL, NULL, NULL, &scope_178, 1, 1}
};
const MappingScope scope_175 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1",
  scope_175_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:MTCEx::MTC_Observers::STATE_MTC_OBS 21/ */
const MappingEntry scope_174_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._24_Context_LATCHALL02_MTC_STATE_MTC_OBS_21, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_21, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_174 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:MTCEx::MTC_Observers::STATE_MTC_OBS 21/",
  scope_174_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP: */
const MappingEntry scope_173_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_175, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 21", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 0}
};
const MappingScope scope_173 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:",
  scope_173_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 34/ */
const MappingEntry scope_172_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._47_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_34, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_34, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_172 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 34/",
  scope_172_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_DOWN_1_MTC_INST 1/ */
const MappingEntry scope_171_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_171 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_DOWN_1_MTC_INST 1/",
  scope_171_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1 */
const MappingEntry scope_170_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_DOWN_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_171, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 34", NULL, 0, 0, NULL, NULL, NULL, &scope_172, 1, 1}
};
const MappingScope scope_170 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1",
  scope_170_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:MTCEx::MTC_Observers::STATE_MTC_OBS 20/ */
const MappingEntry scope_169_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._25_Context_LATCHALL02_MTC_STATE_MTC_OBS_20, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_20, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_169 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:MTCEx::MTC_Observers::STATE_MTC_OBS 20/",
  scope_169_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN: */
const MappingEntry scope_168_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_170, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 20", NULL, 0, 0, NULL, NULL, NULL, &scope_169, 1, 0}
};
const MappingScope scope_168 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:",
  scope_168_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 33/ */
const MappingEntry scope_167_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._48_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_33, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_33, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_167 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 33/",
  scope_167_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_TO_UP_1_MTC_INST 1/ */
const MappingEntry scope_166_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_166 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_TO_UP_1_MTC_INST 1/",
  scope_166_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1 */
const MappingEntry scope_165_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_INTERRUPTION_TO_UP_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_166, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 33", NULL, 0, 0, NULL, NULL, NULL, &scope_167, 1, 1}
};
const MappingScope scope_165 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1",
  scope_165_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:MTCEx::MTC_Observers::STATE_MTC_OBS 19/ */
const MappingEntry scope_164_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._26_Context_LATCHALL02_MTC_STATE_MTC_OBS_19, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_19, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_164 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:MTCEx::MTC_Observers::STATE_MTC_OBS 19/",
  scope_164_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP: */
const MappingEntry scope_163_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_165, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 19", NULL, 0, 0, NULL, NULL, NULL, &scope_164, 1, 0}
};
const MappingScope scope_163 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:",
  scope_163_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 32/ */
const MappingEntry scope_162_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._49_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_32, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_32, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_162 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 32/",
  scope_162_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF1_1_MTC_INST 1/ */
const MappingEntry scope_161_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_GENERAL_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_161 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF1_1_MTC_INST 1/",
  scope_161_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1 */
const MappingEntry scope_160_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF1_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_161, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 32", NULL, 0, 0, NULL, NULL, NULL, &scope_162, 1, 1}
};
const MappingScope scope_160 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1",
  scope_160_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:MTCEx::MTC_Observers::STATE_MTC_OBS 18/ */
const MappingEntry scope_159_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._27_Context_LATCHALL02_MTC_STATE_MTC_OBS_18, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_18, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_159 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:MTCEx::MTC_Observers::STATE_MTC_OBS 18/",
  scope_159_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1: */
const MappingEntry scope_158_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_160, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 18", NULL, 0, 0, NULL, NULL, NULL, &scope_159, 1, 0}
};
const MappingScope scope_158 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:",
  scope_158_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 31/ */
const MappingEntry scope_157_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._50_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_31, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_31, &_Type_Result_MTC_Utils, &scope_1_entries[38], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
const MappingScope scope_157 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 31/",
  scope_157_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2 */
const MappingEntry scope_155_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 31", NULL, 0, 0, NULL, NULL, NULL, &scope_157, 1, 1}
};
const MappingScope scope_155 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2",
  scope_155_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 30/ */
const MappingEntry scope_154_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._51_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_30, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_30, &_Type_Result_MTC_Utils, &scope_1_entries[38], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_154 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 30/",
  scope_154_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST 18/MTCEx::MTC_Observers::Computing_Model_PATHS14_MTC_OBS 1/ */
const MappingEntry scope_153_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx.Context_LATCHALL02_MTC_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._5_MTC_ALL1_Computing_Model_PATHS14_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST_18, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_153 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST 18/MTCEx::MTC_Observers::Computing_Model_PATHS14_MTC_OBS 1/",
  scope_153_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST 18/ */
const MappingEntry scope_152_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS14_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_153, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_152 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST 18/",
  scope_152_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1 */
const MappingEntry scope_151_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRAIT_EV_OFF_1_MTC_INST 18", NULL, 0, 0, NULL, NULL, NULL, &scope_152, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 30", NULL, 0, 0, NULL, NULL, NULL, &scope_154, 1, 1}
};
const MappingScope scope_151 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1",
  scope_151_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 17/ */
const MappingEntry scope_150_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._28_Context_LATCHALL02_MTC_STATE_MTC_OBS_17, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_17, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_150 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 17/",
  scope_150_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF: */
const MappingEntry scope_149_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_151, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_155, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 17", NULL, 0, 0, NULL, NULL, NULL, &scope_150, 1, 0}
};
const MappingScope scope_149 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:",
  scope_149_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 29/ */
const MappingEntry scope_148_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._53_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_29, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_29, &_Type_Result_MTC_Utils, &scope_1_entries[37], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_148 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 29/",
  scope_148_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2 */
const MappingEntry scope_146_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 29", NULL, 0, 0, NULL, NULL, NULL, &scope_148, 1, 1}
};
const MappingScope scope_146 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2",
  scope_146_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 28/ */
const MappingEntry scope_145_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._54_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_28, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_28, &_Type_Result_MTC_Utils, &scope_1_entries[36], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_145 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 28/",
  scope_145_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST 17/MTCEx::MTC_Observers::Computing_Model_PATHS13_MTC_OBS 1/ */
const MappingEntry scope_144_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._52_Context_LATCHALL02_MTC_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._4_MTC_ALL1_Computing_Model_PATHS13_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST_17, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_144 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST 17/MTCEx::MTC_Observers::Computing_Model_PATHS13_MTC_OBS 1/",
  scope_144_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST 17/ */
const MappingEntry scope_143_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS13_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_144, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_143 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST 17/",
  scope_143_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1 */
const MappingEntry scope_142_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACT_EV_ON_1_MTC_INST 17", NULL, 0, 0, NULL, NULL, NULL, &scope_143, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 28", NULL, 0, 0, NULL, NULL, NULL, &scope_145, 1, 1}
};
const MappingScope scope_142 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1",
  scope_142_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 16/ */
const MappingEntry scope_141_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._29_Context_LATCHALL02_MTC_STATE_MTC_OBS_16, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_16, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_141 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 16/",
  scope_141_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON: */
const MappingEntry scope_140_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_142, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_146, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 16", NULL, 0, 0, NULL, NULL, NULL, &scope_141, 1, 0}
};
const MappingScope scope_140 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:",
  scope_140_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 27/ */
const MappingEntry scope_139_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._56_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_27, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_27, &_Type_Result_MTC_Utils, &scope_1_entries[35], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_139 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 27/",
  scope_139_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2 */
const MappingEntry scope_137_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 27", NULL, 0, 0, NULL, NULL, NULL, &scope_139, 1, 1}
};
const MappingScope scope_137 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2",
  scope_137_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 26/ */
const MappingEntry scope_136_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._57_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_26, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_26, &_Type_Result_MTC_Utils, &scope_1_entries[33], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_136 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 26/",
  scope_136_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST 20/MTCEx::MTC_Observers::Computing_Model_PATHS12_MTC_OBS 1/ */
const MappingEntry scope_135_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._55_Context_LATCHALL02_MTC_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._3_MTC_ALL1_Computing_Model_PATHS12_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST_20, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_135 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST 20/MTCEx::MTC_Observers::Computing_Model_PATHS12_MTC_OBS 1/",
  scope_135_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST 20/ */
const MappingEntry scope_134_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS12_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_134 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST 20/",
  scope_134_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1 */
const MappingEntry scope_133_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON1_1_MTC_INST 20", NULL, 0, 0, NULL, NULL, NULL, &scope_134, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 26", NULL, 0, 0, NULL, NULL, NULL, &scope_136, 1, 1}
};
const MappingScope scope_133 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1",
  scope_133_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:MTCEx::MTC_Observers::STATE_MTC_OBS 15/ */
const MappingEntry scope_132_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._30_Context_LATCHALL02_MTC_STATE_MTC_OBS_15, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_15, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_132 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:MTCEx::MTC_Observers::STATE_MTC_OBS 15/",
  scope_132_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1: */
const MappingEntry scope_131_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_133, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_137, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 15", NULL, 0, 0, NULL, NULL, NULL, &scope_132, 1, 0}
};
const MappingScope scope_131 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:",
  scope_131_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 24/ */
const MappingEntry scope_130_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._60_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_24, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_24, &_Type_Result_MTC_Utils, &scope_1_entries[31], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_130 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 24/",
  scope_130_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST 15/MTCEx::MTC_Observers::Computing_Model_PATHS10_MTC_OBS 1/ */
const MappingEntry scope_129_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._58_Context_LATCHALL02_MTC_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._2_MTC_ALL1_Computing_Model_PATHS10_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST_15, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_129 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST 15/MTCEx::MTC_Observers::Computing_Model_PATHS10_MTC_OBS 1/",
  scope_129_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST 15/ */
const MappingEntry scope_128_entries[1] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS10_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_129, 1, 0}
};
const MappingScope scope_128 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST 15/",
  scope_128_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2 */
const MappingEntry scope_127_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_2_MTC_INST 15", NULL, 0, 0, NULL, NULL, NULL, &scope_128, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 24", NULL, 0, 0, NULL, NULL, NULL, &scope_130, 1, 1}
};
const MappingScope scope_127 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2",
  scope_127_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 23/ */
const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._61_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_23, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_23, &_Type_Result_MTC_Utils, &scope_1_entries[30], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_126 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 23/",
  scope_126_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1 */
const MappingEntry scope_124_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 23", NULL, 0, 0, NULL, NULL, NULL, &scope_126, 1, 1}
};
const MappingScope scope_124 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1",
  scope_124_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 25/ */
const MappingEntry scope_123_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._62_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_25, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_25, &_Type_Result_MTC_Utils, &scope_1_entries[32], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_123 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 25/",
  scope_123_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2 */
const MappingEntry scope_121_entries[4] = {
  /* 0 */ { MAP_FORK, ".1", NULL, 0, 0, NULL, NULL, NULL, &scope_124, 1, 2},
  /* 1 */ { MAP_FORK, ".2", NULL, 0, 0, NULL, NULL, NULL, &scope_127, 1, 3},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 25", NULL, 0, 0, NULL, NULL, NULL, &scope_123, 1, 1}
};
const MappingScope scope_121 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2",
  scope_121_entries, 4,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 22/ */
const MappingEntry scope_120_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._63_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_22, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_22, &_Type_Result_MTC_Utils, &scope_1_entries[29], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_120 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 22/",
  scope_120_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST 16/MTCEx::MTC_Observers::Computing_Model_PATHS11_MTC_OBS 1/ */
const MappingEntry scope_119_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._59_Context_LATCHALL02_MTC_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._1_MTC_ALL1_Computing_Model_PATHS11_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST_16, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_119 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST 16/MTCEx::MTC_Observers::Computing_Model_PATHS11_MTC_OBS 1/",
  scope_119_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST 16/ */
const MappingEntry scope_118_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS11_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_119, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_118 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST 16/",
  scope_118_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1 */
const MappingEntry scope_117_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON1_1_MTC_INST 16", NULL, 0, 0, NULL, NULL, NULL, &scope_118, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 22", NULL, 0, 0, NULL, NULL, NULL, &scope_120, 1, 1}
};
const MappingScope scope_117 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1",
  scope_117_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:MTCEx::MTC_Observers::STATE_MTC_OBS 14/ */
const MappingEntry scope_116_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._31_Context_LATCHALL02_MTC_STATE_MTC_OBS_14, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_14, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_116 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:MTCEx::MTC_Observers::STATE_MTC_OBS 14/",
  scope_116_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1: */
const MappingEntry scope_115_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_117, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_121, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 14", NULL, 0, 0, NULL, NULL, NULL, &scope_116, 1, 0}
};
const MappingScope scope_115 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:",
  scope_115_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 21/ */
const MappingEntry scope_114_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._66_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_21, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_21, &_Type_Result_MTC_Utils, &scope_1_entries[28], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_114 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 21/",
  scope_114_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST 24/MTCEx::MTC_Observers::Computing_Model_PATHS8_MTC_OBS 24/ */
const MappingEntry scope_113_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._64_Context_LATCHALL04_MTC_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_113 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST 24/MTCEx::MTC_Observers::Computing_Model_PATHS8_MTC_OBS 24/",
  scope_113_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST 24/ */
const MappingEntry scope_112_entries[1] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS8_MTC_OBS 24", NULL, 0, 0, NULL, NULL, NULL, &scope_113, 1, 0}
};
const MappingScope scope_112 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST 24/",
  scope_112_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2 */
const MappingEntry scope_111_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST 24", NULL, 0, 0, NULL, NULL, NULL, &scope_112, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 21", NULL, 0, 0, NULL, NULL, NULL, &scope_114, 1, 1}
};
const MappingScope scope_111 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2",
  scope_111_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 20/ */
const MappingEntry scope_110_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._67_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_20, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_20, &_Type_Result_MTC_Utils, &scope_1_entries[27], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_110 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 20/",
  scope_110_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST 21/MTCEx::MTC_Observers::Computing_Model_PATHS9_MTC_OBS 1/ */
const MappingEntry scope_109_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._65_Context_LATCHALL02_MTC_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS9_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST_21, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_109 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST 21/MTCEx::MTC_Observers::Computing_Model_PATHS9_MTC_OBS 1/",
  scope_109_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST 21/ */
const MappingEntry scope_108_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS9_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_109, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_108 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST 21/",
  scope_108_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1 */
const MappingEntry scope_107_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_1_MTC_INST 21", NULL, 0, 0, NULL, NULL, NULL, &scope_108, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 20", NULL, 0, 0, NULL, NULL, NULL, &scope_110, 1, 1}
};
const MappingScope scope_107 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1",
  scope_107_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:MTCEx::MTC_Observers::STATE_MTC_OBS 13/ */
const MappingEntry scope_106_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._32_Context_LATCHALL02_MTC_STATE_MTC_OBS_13, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_13, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_106 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:MTCEx::MTC_Observers::STATE_MTC_OBS 13/",
  scope_106_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1: */
const MappingEntry scope_105_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_107, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_111, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 13", NULL, 0, 0, NULL, NULL, NULL, &scope_106, 1, 0}
};
const MappingScope scope_105 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:",
  scope_105_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 19/ */
const MappingEntry scope_104_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._70_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_19, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_19, &_Type_Result_MTC_Utils, &scope_1_entries[26], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_104 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 19/",
  scope_104_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST 20/MTCEx::MTC_Observers::Computing_Model_PATHS6_MTC_OBS 20/ */
const MappingEntry scope_103_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._68_Context_LATCHALL04_MTC_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_103 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST 20/MTCEx::MTC_Observers::Computing_Model_PATHS6_MTC_OBS 20/",
  scope_103_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST 20/ */
const MappingEntry scope_102_entries[1] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS6_MTC_OBS 20", NULL, 0, 0, NULL, NULL, NULL, &scope_103, 1, 0}
};
const MappingScope scope_102 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST 20/",
  scope_102_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2 */
const MappingEntry scope_101_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST 20", NULL, 0, 0, NULL, NULL, NULL, &scope_102, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 19", NULL, 0, 0, NULL, NULL, NULL, &scope_104, 1, 1}
};
const MappingScope scope_101 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2",
  scope_101_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 18/ */
const MappingEntry scope_100_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._71_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_18, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_18, &_Type_Result_MTC_Utils, &scope_1_entries[25], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_100 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 18/",
  scope_100_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST 19/MTCEx::MTC_Observers::Computing_Model_PATHS7_MTC_OBS 1/ */
const MappingEntry scope_99_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._69_Context_LATCHALL02_MTC_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS7_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST_19, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_99 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST 19/MTCEx::MTC_Observers::Computing_Model_PATHS7_MTC_OBS 1/",
  scope_99_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST 19/ */
const MappingEntry scope_98_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS7_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_99, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_98 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST 19/",
  scope_98_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1 */
const MappingEntry scope_97_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_1_MTC_INST 19", NULL, 0, 0, NULL, NULL, NULL, &scope_98, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 18", NULL, 0, 0, NULL, NULL, NULL, &scope_100, 1, 1}
};
const MappingScope scope_97 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1",
  scope_97_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:MTCEx::MTC_Observers::STATE_MTC_OBS 12/ */
const MappingEntry scope_96_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._33_Context_LATCHALL02_MTC_STATE_MTC_OBS_12, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_12, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_96 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:MTCEx::MTC_Observers::STATE_MTC_OBS 12/",
  scope_96_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1: */
const MappingEntry scope_95_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_97, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_101, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 12", NULL, 0, 0, NULL, NULL, NULL, &scope_96, 1, 0}
};
const MappingScope scope_95 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:",
  scope_95_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 17/ */
const MappingEntry scope_94_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._73_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_17, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_17, &_Type_Result_MTC_Utils, &scope_1_entries[24], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_94 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 17/",
  scope_94_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST 19/MTCEx::MTC_Observers::Computing_Model_PATHS5_MTC_OBS 19/ */
const MappingEntry scope_93_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._72_Context_LATCHALL04_MTC_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_93 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST 19/MTCEx::MTC_Observers::Computing_Model_PATHS5_MTC_OBS 19/",
  scope_93_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST 19/ */
const MappingEntry scope_92_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS5_MTC_OBS 19", NULL, 0, 0, NULL, NULL, NULL, &scope_93, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_92 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST 19/",
  scope_92_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1 */
const MappingEntry scope_91_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST 19", NULL, 0, 0, NULL, NULL, NULL, &scope_92, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 17", NULL, 0, 0, NULL, NULL, NULL, &scope_94, 1, 1}
};
const MappingScope scope_91 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1",
  scope_91_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 11/ */
const MappingEntry scope_90_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._34_Context_LATCHALL02_MTC_STATE_MTC_OBS_11, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_11, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_90 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 11/",
  scope_90_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON: */
const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_91, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 11", NULL, 0, 0, NULL, NULL, NULL, &scope_90, 1, 0}
};
const MappingScope scope_89 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:",
  scope_89_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 16/ */
const MappingEntry scope_88_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._74_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_16, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_16, &_Type_Result_MTC_Utils, &scope_1_entries[22], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_88 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 16/",
  scope_88_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTENDED_DOWN_1_MTC_INST 1/ */
const MappingEntry scope_87_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_87 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTENDED_DOWN_1_MTC_INST 1/",
  scope_87_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1 */
const MappingEntry scope_86_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTENDED_DOWN_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_87, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 16", NULL, 0, 0, NULL, NULL, NULL, &scope_88, 1, 1}
};
const MappingScope scope_86 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1",
  scope_86_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:MTCEx::MTC_Observers::STATE_MTC_OBS 10/ */
const MappingEntry scope_85_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._35_Context_LATCHALL02_MTC_STATE_MTC_OBS_10, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_10, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_85 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:MTCEx::MTC_Observers::STATE_MTC_OBS 10/",
  scope_85_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN: */
const MappingEntry scope_84_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_86, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 10", NULL, 0, 0, NULL, NULL, NULL, &scope_85, 1, 0}
};
const MappingScope scope_84 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:",
  scope_84_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 15/ */
const MappingEntry scope_83_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._75_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_15, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_15, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_83 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 15/",
  scope_83_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF_1_MTC_INST 1/ */
const MappingEntry scope_82_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_GENERAL_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_82 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF_1_MTC_INST 1/",
  scope_82_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1 */
const MappingEntry scope_81_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_OFF_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_82, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 15", NULL, 0, 0, NULL, NULL, NULL, &scope_83, 1, 1}
};
const MappingScope scope_81 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1",
  scope_81_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 9/ */
const MappingEntry scope_80_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._36_Context_LATCHALL02_MTC_STATE_MTC_OBS_9, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_9, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_80 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 9/",
  scope_80_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF: */
const MappingEntry scope_79_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 9", NULL, 0, 0, NULL, NULL, NULL, &scope_80, 1, 0}
};
const MappingScope scope_79 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:",
  scope_79_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 14/ */
const MappingEntry scope_78_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._77_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_14, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_14, &_Type_Result_MTC_Utils, &scope_1_entries[21], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_78 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 14/",
  scope_78_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST 21/MTCEx::MTC_Observers::Computing_Model_PATHS4_MTC_OBS 21/ */
const MappingEntry scope_77_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._76_Context_LATCHALL04_MTC_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_77 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST 21/MTCEx::MTC_Observers::Computing_Model_PATHS4_MTC_OBS 21/",
  scope_77_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST 21/ */
const MappingEntry scope_76_entries[1] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS4_MTC_OBS 21", NULL, 0, 0, NULL, NULL, NULL, &scope_77, 1, 0}
};
const MappingScope scope_76 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST 21/",
  scope_76_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2 */
const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST 21", NULL, 0, 0, NULL, NULL, NULL, &scope_76, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 14", NULL, 0, 0, NULL, NULL, NULL, &scope_78, 1, 1}
};
const MappingScope scope_75 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2",
  scope_75_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 13/ */
const MappingEntry scope_74_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._78_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_13, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_13, &_Type_Result_MTC_Utils, &scope_1_entries[20], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_74 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 13/",
  scope_74_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_1_MTC_INST 1/ */
const MappingEntry scope_73_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_73 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_1_MTC_INST 1/",
  scope_73_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1 */
const MappingEntry scope_72_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_73, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 13", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 1}
};
const MappingScope scope_72 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1",
  scope_72_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 8/ */
const MappingEntry scope_71_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._37_Context_LATCHALL02_MTC_STATE_MTC_OBS_8, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_8, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_71 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 8/",
  scope_71_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF: */
const MappingEntry scope_70_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_72, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_75, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 8", NULL, 0, 0, NULL, NULL, NULL, &scope_71, 1, 0}
};
const MappingScope scope_70 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:",
  scope_70_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 12/ */
const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._80_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_12, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_12, &_Type_Result_MTC_Utils, &scope_1_entries[19], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_69 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 12/",
  scope_69_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST 23/MTCEx::MTC_Observers::Computing_Model_PATHS3_MTC_OBS 23/ */
const MappingEntry scope_68_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._79_Context_LATCHALL04_MTC_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_68 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST 23/MTCEx::MTC_Observers::Computing_Model_PATHS3_MTC_OBS 23/",
  scope_68_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST 23/ */
const MappingEntry scope_67_entries[1] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS3_MTC_OBS 23", NULL, 0, 0, NULL, NULL, NULL, &scope_68, 1, 0}
};
const MappingScope scope_67 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST 23/",
  scope_67_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2 */
const MappingEntry scope_66_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST 23", NULL, 0, 0, NULL, NULL, NULL, &scope_67, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 12", NULL, 0, 0, NULL, NULL, NULL, &scope_69, 1, 1}
};
const MappingScope scope_66 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2",
  scope_66_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 11/ */
const MappingEntry scope_65_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._81_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_11, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_11, &_Type_Result_MTC_Utils, &scope_1_entries[18], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_65 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 11/",
  scope_65_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_1_MTC_INST 1/ */
const MappingEntry scope_64_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_64 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_1_MTC_INST 1/",
  scope_64_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1 */
const MappingEntry scope_63_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_64, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 11", NULL, 0, 0, NULL, NULL, NULL, &scope_65, 1, 1}
};
const MappingScope scope_63 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1",
  scope_63_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 7/ */
const MappingEntry scope_62_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._38_Context_LATCHALL02_MTC_STATE_MTC_OBS_7, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_7, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_62 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 7/",
  scope_62_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF: */
const MappingEntry scope_61_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_63, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_66, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 7", NULL, 0, 0, NULL, NULL, NULL, &scope_62, 1, 0}
};
const MappingScope scope_61 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:",
  scope_61_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 10/ */
const MappingEntry scope_60_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._82_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_10, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_10, &_Type_Result_MTC_Utils, &scope_1_entries[17], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_60 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 10/",
  scope_60_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2 */
const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 10", NULL, 0, 0, NULL, NULL, NULL, &scope_60, 1, 1}
};
const MappingScope scope_58 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2",
  scope_58_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 9/ */
const MappingEntry scope_57_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._83_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_9, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_9, &_Type_Result_MTC_Utils, &scope_1_entries[16], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_57 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 9/",
  scope_57_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON_1_MTC_INST 1/ */
const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_56 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON_1_MTC_INST 1/",
  scope_56_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1 */
const MappingEntry scope_55_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_ON_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 9", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 1}
};
const MappingScope scope_55 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1",
  scope_55_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 6/ */
const MappingEntry scope_54_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._39_Context_LATCHALL02_MTC_STATE_MTC_OBS_6, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_6, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_54 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 6/",
  scope_54_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON: */
const MappingEntry scope_53_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_58, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 6", NULL, 0, 0, NULL, NULL, NULL, &scope_54, 1, 0}
};
const MappingScope scope_53 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:",
  scope_53_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 8/ */
const MappingEntry scope_52_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._84_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_8, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_8, &_Type_Result_MTC_Utils, &scope_1_entries[15], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
const MappingScope scope_52 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 8/",
  scope_52_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2 */
const MappingEntry scope_50_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_OFF_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 8", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 1}
};
const MappingScope scope_50 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2",
  scope_50_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 7/ */
const MappingEntry scope_49_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._85_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_7, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_7, &_Type_Result_MTC_Utils, &scope_1_entries[15], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_49 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 7/",
  scope_49_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_OFF_1_MTC_INST 1/ */
const MappingEntry scope_48_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_48 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_OFF_1_MTC_INST 1/",
  scope_48_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1 */
const MappingEntry scope_47_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_OFF_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 7", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 1}
};
const MappingScope scope_47 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1",
  scope_47_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 5/ */
const MappingEntry scope_46_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._40_Context_LATCHALL02_MTC_STATE_MTC_OBS_5, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_5, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_46 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:MTCEx::MTC_Observers::STATE_MTC_OBS 5/",
  scope_46_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF: */
const MappingEntry scope_45_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 0}
};
const MappingScope scope_45 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:",
  scope_45_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 6/ */
const MappingEntry scope_44_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._86_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_6, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_6, &_Type_Result_MTC_Utils, &scope_1_entries[14], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_44 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 6/",
  scope_44_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2 */
const MappingEntry scope_42_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_ON_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 6", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 1}
};
const MappingScope scope_42 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2",
  scope_42_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 5/ */
const MappingEntry scope_41_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._87_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_5, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_5, &_Type_Result_MTC_Utils, &scope_1_entries[13], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_41 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 5/",
  scope_41_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_ON_1_MTC_INST 1/ */
const MappingEntry scope_40_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_40 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_ON_1_MTC_INST 1/",
  scope_40_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1 */
const MappingEntry scope_39_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_EXTEND_EV_ON_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 5", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 1}
};
const MappingScope scope_39 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1",
  scope_39_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 4/ */
const MappingEntry scope_38_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._41_Context_LATCHALL02_MTC_STATE_MTC_OBS_4, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_4, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_38 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 4/",
  scope_38_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON: */
const MappingEntry scope_37_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 0}
};
const MappingScope scope_37 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:",
  scope_37_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 4/ */
const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._88_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_4, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_4, &_Type_Result_MTC_Utils, &scope_1_entries[11], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_36 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2MTCEx::MTC_Observers::TRANSITION_MTC_OBS 4/",
  scope_36_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2 */
const MappingEntry scope_34_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON_2_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 4", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 1}
};
const MappingScope scope_34 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2",
  scope_34_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 3/ */
const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._89_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_3, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_3, &_Type_Result_MTC_Utils, &scope_1_entries[10], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_33 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 3/",
  scope_33_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON_1_MTC_INST 1/ */
const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_32 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON_1_MTC_INST 1/",
  scope_32_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1 */
const MappingEntry scope_31_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_OPEN_EV_ON_1_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 1}
};
const MappingScope scope_31 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1",
  scope_31_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 3/ */
const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._42_Context_LATCHALL02_MTC_STATE_MTC_OBS_3, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_3, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_30 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 3/",
  scope_30_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON: */
const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 1},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 2},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 3", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 0}
};
const MappingScope scope_29 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:",
  scope_29_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 2/ */
const MappingEntry scope_28_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._91_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_2, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_2, &_Type_Result_MTC_Utils, &scope_1_entries[9], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_28 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 2/",
  scope_28_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST 22/MTCEx::MTC_Observers::Computing_Model_PATHS2_MTC_OBS 22/ */
const MappingEntry scope_27_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL04", NULL, sizeof(outC_LATCHALL04_MTC), (size_t)&outputs_ctx._90_Context_LATCHALL04_MTC_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22, NULL, NULL, NULL, &scope_188, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_27 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST 22/MTCEx::MTC_Observers::Computing_Model_PATHS2_MTC_OBS 22/",
  scope_27_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST 22/ */
const MappingEntry scope_26_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS2_MTC_OBS 22", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_26 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST 22/",
  scope_26_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1 */
const MappingEntry scope_25_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST 22", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 1}
};
const MappingScope scope_25 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1",
  scope_25_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 2/ */
const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._43_Context_LATCHALL02_MTC_STATE_MTC_OBS_2, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_2, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_24 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:MTCEx::MTC_Observers::STATE_MTC_OBS 2/",
  scope_24_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON: */
const MappingEntry scope_23_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 2", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 0}
};
const MappingScope scope_23 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:",
  scope_23_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 1/ */
const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL01", NULL, sizeof(outC_LATCHALL01_MTC), (size_t)&outputs_ctx._93_Context_LATCHALL01_MTC_TRANSITION_MTC_OBS_1, NULL, NULL, NULL, &scope_187, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_TRANSITION_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_1_entries[8], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_22 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1MTCEx::MTC_Observers::TRANSITION_MTC_OBS 1/",
  scope_22_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST 12/MTCEx::MTC_Observers::Computing_Model_PATHS1_MTC_OBS 1/ */
const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._92_Context_LATCHALL02_MTC_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_Computing_Model_PATHS1_MTC_OBS_1_Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST_12, &_Type_Result_MTC_Utils, &scope_14_entries[3], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_21 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST 12/MTCEx::MTC_Observers::Computing_Model_PATHS1_MTC_OBS 1/",
  scope_21_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST 12/ */
const MappingEntry scope_20_entries[2] = {
  /* 0 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS1_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 1},
  /* 1 */ { MAP_OUTPUT, "MTC_guard", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_20 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST 12/",
  scope_20_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1 */
const MappingEntry scope_19_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_State_Machine_Extend_Gear_RETRACTED_UP_1_MTC_INST 12", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 0},
  /* 2 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::TRANSITION_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 1}
};
const MappingScope scope_19 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1",
  scope_19_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:MTCEx::MTC_Observers::STATE_MTC_OBS 1/ */
const MappingEntry scope_18_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL02", NULL, sizeof(outC_LATCHALL02_MTC), (size_t)&outputs_ctx._44_Context_LATCHALL02_MTC_STATE_MTC_OBS_1, NULL, NULL, NULL, &scope_186, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx.MTC_ALL1_STATE_MTC_OBS_1, &_Type_Result_MTC_Utils, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear, NULL, 1, 1}
};
const MappingScope scope_18 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:MTCEx::MTC_Observers::STATE_MTC_OBS 1/",
  scope_18_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP: */
const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 1},
  /* 1 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::STATE_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 0}
};
const MappingScope scope_17 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:",
  scope_17_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear: */
const MappingEntry scope_14_entries[26] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._95_State_Machine_Extend_Gear_state_act, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx.State_Machine_Extend_Gear_state_nxt, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 2},
  /* 2 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.State_Machine_Extend_Gear_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 3 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._94_State_Machine_Extend_Gear_state_sel, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_STATE, "CLOSE_EV_OFF1:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &scope_105, 1, 16},
  /* 5 */ { MAP_STATE, "CLOSE_EV_OFF:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, &scope_61, 1, 10},
  /* 6 */ { MAP_STATE, "CLOSE_EV_ON1:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear, &scope_131, 1, 18},
  /* 7 */ { MAP_STATE, "CLOSE_EV_ON:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear, &scope_53, 1, 9},
  /* 8 */ { MAP_STATE, "EXTENDED_DOWN:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear, &scope_84, 1, 13},
  /* 9 */ { MAP_STATE, "EXTEND_EV_OFF:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear, &scope_45, 1, 8},
  /* 10 */ { MAP_STATE, "EXTEND_EV_ON:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear, &scope_37, 1, 7},
  /* 11 */ { MAP_STATE, "GENERAL_EV_OFF1:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear, &scope_158, 1, 21},
  /* 12 */ { MAP_STATE, "GENERAL_EV_OFF:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear, &scope_79, 1, 12},
  /* 13 */ { MAP_STATE, "GENERAL_EV_ON:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear, &scope_89, 1, 14},
  /* 14 */ { MAP_STATE, "GEN_EV_ON:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear, &scope_23, 1, 5},
  /* 15 */ { MAP_STATE, "INTERRUPTION_DOWN:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear, &scope_168, 1, 23},
  /* 16 */ { MAP_STATE, "INTERRUPTION_TO_UP:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear, &scope_163, 1, 22},
  /* 17 */ { MAP_STATE, "OPEN_EV_OFF1:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, &scope_95, 1, 15},
  /* 18 */ { MAP_STATE, "OPEN_EV_OFF:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear, &scope_70, 1, 11},
  /* 19 */ { MAP_STATE, "OPEN_EV_ON1:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, &scope_115, 1, 17},
  /* 20 */ { MAP_STATE, "OPEN_EV_ON:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear, &scope_29, 1, 6},
  /* 21 */ { MAP_STATE, "RETRACTED_UP:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear, &scope_17, 1, 4},
  /* 22 */ { MAP_STATE, "RETRACT_EV_ON:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear, &scope_140, 1, 19},
  /* 23 */ { MAP_STATE, "RETRAIT_EV_OFF:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &scope_149, 1, 20},
  /* 24 */ { MAP_STATE, "WAITING_DOWN:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear, &scope_179, 1, 25},
  /* 25 */ { MAP_STATE, "WAITING_TO_UP:", NULL, 0, 0, NULL, &scope_14_entries[0], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear, &scope_173, 1, 24}
};
const MappingScope scope_14 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:",
  scope_14_entries, 26,
};

/* Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS21_MTC_OBS 1/ */
const MappingEntry scope_13_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL03", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx.Context_LATCHALL03_MTC_Computing_Model_PATHS21_MTC_OBS_1, NULL, NULL, NULL, &scope_185, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._12_MTC_ALL1_Computing_Model_PATHS21_MTC_OBS_1, &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_13 = {
  "Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS21_MTC_OBS 1/",
  scope_13_entries, 2,
};

/* Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS20_MTC_OBS 1/ */
const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL03", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx._20_Context_LATCHALL03_MTC_Computing_Model_PATHS20_MTC_OBS_1, NULL, NULL, NULL, &scope_185, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._11_MTC_ALL1_Computing_Model_PATHS20_MTC_OBS_1, &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_12 = {
  "Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS20_MTC_OBS 1/",
  scope_12_entries, 2,
};

/* Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS19_MTC_OBS 1/ */
const MappingEntry scope_11_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL03", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx._21_Context_LATCHALL03_MTC_Computing_Model_PATHS19_MTC_OBS_1, NULL, NULL, NULL, &scope_185, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._10_MTC_ALL1_Computing_Model_PATHS19_MTC_OBS_1, &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_11 = {
  "Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS19_MTC_OBS 1/",
  scope_11_entries, 2,
};

/* Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS18_MTC_OBS 1/ */
const MappingEntry scope_10_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL03", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx._22_Context_LATCHALL03_MTC_Computing_Model_PATHS18_MTC_OBS_1, NULL, NULL, NULL, &scope_185, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._9_MTC_ALL1_Computing_Model_PATHS18_MTC_OBS_1, &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_10 = {
  "Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS18_MTC_OBS 1/",
  scope_10_entries, 2,
};

/* Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS17_MTC_OBS 1/ */
const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_INSTANCE, "MTC::LATCHALL03", NULL, sizeof(outC_LATCHALL03_MTC), (size_t)&outputs_ctx._23_Context_LATCHALL03_MTC_Computing_Model_PATHS17_MTC_OBS_1, NULL, NULL, NULL, &scope_185, 1, 0},
  /* 1 */ { MAP_PROBE, "MTC_ALL1", NULL, sizeof(Result_MTC), (size_t)&outputs_ctx._8_MTC_ALL1_Computing_Model_PATHS17_MTC_OBS_1, &_Type_Result_MTC_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_9 = {
  "Computing_Model/ Computing_ModelMTCEx::MTC_Observers::Computing_Model_PATHS17_MTC_OBS 1/",
  scope_9_entries, 2,
};

/* Computing_Model/ Computing_Model */
const MappingEntry scope_1_entries[84] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS2_MTC_OBS_22_Computing_Model_State_Machine_Extend_Gear_GEN_EV_ON_1_MTC_INST_22, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS3_MTC_OBS_23_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF_2_MTC_INST_23, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init14, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 10},
  /* 3 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 4 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init16, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 12},
  /* 5 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init17, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 6 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 14},
  /* 7 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 15},
  /* 8 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_RETRACTED_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACTED_UP_State_Machine_Extend_Gear, NULL, 0, 29},
  /* 9 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_GEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GEN_EV_ON_State_Machine_Extend_Gear, NULL, 0, 30},
  /* 10 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear, NULL, 0, 31},
  /* 11 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_OPEN_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[10], isActive_kcg_bool_kcg_false, NULL, 0, 32},
  /* 12 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS4_MTC_OBS_21_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF_2_MTC_INST_21, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 2},
  /* 13 */ { MAP_LOCAL, "@kcg20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_EXTEND_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear, NULL, 0, 33},
  /* 14 */ { MAP_LOCAL, "@kcg21", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_EXTEND_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[13], isActive_kcg_bool_kcg_false, NULL, 0, 34},
  /* 15 */ { MAP_LOCAL, "@kcg22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_EXTEND_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear, NULL, 0, 35},
  /* 16 */ { MAP_LOCAL, "@kcg23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear, NULL, 0, 36},
  /* 17 */ { MAP_LOCAL, "@kcg24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_CLOSE_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[16], isActive_kcg_bool_kcg_false, NULL, 0, 37},
  /* 18 */ { MAP_LOCAL, "@kcg25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear, NULL, 0, 38},
  /* 19 */ { MAP_LOCAL, "@kcg26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_CLOSE_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[18], isActive_kcg_bool_kcg_false, NULL, 0, 39},
  /* 20 */ { MAP_LOCAL, "@kcg27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear, NULL, 0, 40},
  /* 21 */ { MAP_LOCAL, "@kcg28", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_OPEN_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[20], isActive_kcg_bool_kcg_false, NULL, 0, 41},
  /* 22 */ { MAP_LOCAL, "@kcg29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_EXTENDED_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear, NULL, 0, 42},
  /* 23 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS5_MTC_OBS_19_Computing_Model_State_Machine_Extend_Gear_GENERAL_EV_ON_1_MTC_INST_19, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 3},
  /* 24 */ { MAP_LOCAL, "@kcg30", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_GENERAL_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear, NULL, 0, 43},
  /* 25 */ { MAP_LOCAL, "@kcg31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear, NULL, 0, 44},
  /* 26 */ { MAP_LOCAL, "@kcg32", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_OPEN_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[25], isActive_kcg_bool_kcg_false, NULL, 0, 45},
  /* 27 */ { MAP_LOCAL, "@kcg33", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear, NULL, 0, 46},
  /* 28 */ { MAP_LOCAL, "@kcg34", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_CLOSE_EV_OFF1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[27], isActive_kcg_bool_kcg_false, NULL, 0, 47},
  /* 29 */ { MAP_LOCAL, "@kcg35", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear, NULL, 0, 48},
  /* 30 */ { MAP_LOCAL, "@kcg36", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[32], isActive_kcg_bool_kcg_true, NULL, 0, 49},
  /* 31 */ { MAP_LOCAL, "@kcg37", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_2_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[30], isActive_kcg_bool_kcg_false, NULL, 0, 50},
  /* 32 */ { MAP_LOCAL, "@kcg38", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_OPEN_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[29], isActive_kcg_bool_kcg_false, NULL, 0, 51},
  /* 33 */ { MAP_LOCAL, "@kcg39", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear, NULL, 0, 52},
  /* 34 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS6_MTC_OBS_20_Computing_Model_State_Machine_Extend_Gear_OPEN_EV_OFF1_2_MTC_INST_20, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 4},
  /* 35 */ { MAP_LOCAL, "@kcg40", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_CLOSE_EV_ON1_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[33], isActive_kcg_bool_kcg_false, NULL, 0, 53},
  /* 36 */ { MAP_LOCAL, "@kcg41", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_RETRACT_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear, NULL, 0, 54},
  /* 37 */ { MAP_LOCAL, "@kcg42", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_2_clock_RETRACT_EV_ON_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[36], isActive_kcg_bool_kcg_false, NULL, 0, 55},
  /* 38 */ { MAP_LOCAL, "@kcg43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_RETRAIT_EV_OFF_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear, NULL, 0, 56},
  /* 39 */ { MAP_LOCAL, "@kcg44", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_WAITING_TO_UP_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear, NULL, 0, 57},
  /* 40 */ { MAP_LOCAL, "@kcg45", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tr_1_clock_WAITING_DOWN_State_Machine_Extend_Gear, &_Type_kcg_bool_Utils, &scope_1_entries[41], isActive_SSM_ST_State_Machine_Extend_Gear_SSM_st_WAITING_DOWN_State_Machine_Extend_Gear, NULL, 0, 58},
  /* 41 */ { MAP_LOCAL, "@kcg46", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._94_State_Machine_Extend_Gear_state_sel, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 59},
  /* 42 */ { MAP_LOCAL, "@kcg47", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx._95_State_Machine_Extend_Gear_state_act, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 60},
  /* 43 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS8_MTC_OBS_24_Computing_Model_State_Machine_Extend_Gear_CLOSE_EV_OFF1_2_MTC_INST_24, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 5},
  /* 44 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS15_MTC_OBS_25_Computing_Model_State_Machine_Extend_Gear_WAITING_TO_UP_1_MTC_INST_25, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 6},
  /* 45 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.v3_Computing_Model_PATHS16_MTC_OBS_26_Computing_Model_State_Machine_Extend_Gear_WAITING_DOWN_1_MTC_INST_26, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 7},
  /* 46 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 8},
  /* 47 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 48 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_close_EV_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 17},
  /* 49 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_extend_EV_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 20},
  /* 50 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_gears_Locked_Down_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 21},
  /* 51 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_gears_Maneuvring_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 22},
  /* 52 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_general_EV_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 16},
  /* 53 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_open_EV_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 18},
  /* 54 */ { MAP_EXPANDED, "MTCEx::MTC_Instrumenters::Computing_Model_MTC_retract_EV_def_MTC_INST 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 19},
  /* 55 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS17_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 23},
  /* 56 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS18_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 24},
  /* 57 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS19_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 25},
  /* 58 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS20_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 26},
  /* 59 */ { MAP_EXPANDED, "MTCEx::MTC_Observers::Computing_Model_PATHS21_MTC_OBS 1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 27},
  /* 60 */ { MAP_AUTOMATON, "State_Machine_Extend_Gear:", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 28},
  /* 61 */ { MAP_OUTPUT, "close_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.close_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 62},
  /* 62 */ { MAP_INPUT, "door_Closed_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78},
  /* 63 */ { MAP_INPUT, "door_Closed_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 80},
  /* 64 */ { MAP_INPUT, "door_Closed_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79},
  /* 65 */ { MAP_INPUT, "door_Open_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 81},
  /* 66 */ { MAP_INPUT, "door_Open_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 83},
  /* 67 */ { MAP_INPUT, "door_Open_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 82},
  /* 68 */ { MAP_OUTPUT, "extend_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.extend_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65},
  /* 69 */ { MAP_INPUT, "gear_Extended_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 69},
  /* 70 */ { MAP_INPUT, "gear_Extended_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71},
  /* 71 */ { MAP_INPUT, "gear_Extended_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70},
  /* 72 */ { MAP_INPUT, "gear_Retracted_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72},
  /* 73 */ { MAP_INPUT, "gear_Retracted_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74},
  /* 74 */ { MAP_INPUT, "gear_Retracted_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73},
  /* 75 */ { MAP_INPUT, "gear_Shock_Absorber_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75},
  /* 76 */ { MAP_INPUT, "gear_Shock_Absorber_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77},
  /* 77 */ { MAP_INPUT, "gear_Shock_Absorber_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76},
  /* 78 */ { MAP_OUTPUT, "gears_Locked_Down", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.gears_Locked_Down, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66},
  /* 79 */ { MAP_OUTPUT, "gears_Maneuvring", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.gears_Maneuvring, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 67},
  /* 80 */ { MAP_OUTPUT, "general_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.general_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61},
  /* 81 */ { MAP_INPUT, "handle", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.handle, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68},
  /* 82 */ { MAP_OUTPUT, "open_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.open_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63},
  /* 83 */ { MAP_OUTPUT, "retract_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.retract_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 64}
};
const MappingScope scope_1 = {
  "Computing_Model/ Computing_Model",
  scope_1_entries, 84,
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

