/* ROB301_BRAMBILLA_GOMES_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "ROB301_BRAMBILLA_GOMES_type.h"
#include "ROB301_BRAMBILLA_GOMES_mapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_62, 3);
MAP_DECL(scope_61, 1);
MAP_DECL(scope_60, 3);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 1);
MAP_DECL(scope_57, 1);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 1);
MAP_DECL(scope_54, 1);
MAP_DECL(scope_53, 1);
MAP_DECL(scope_52, 1);
MAP_DECL(scope_51, 1);
MAP_DECL(scope_50, 2);
MAP_DECL(scope_49, 1);
MAP_DECL(scope_48, 1);
MAP_DECL(scope_47, 2);
MAP_DECL(scope_46, 1);
MAP_DECL(scope_45, 1);
MAP_DECL(scope_44, 2);
MAP_DECL(scope_43, 1);
MAP_DECL(scope_42, 1);
MAP_DECL(scope_41, 2);
MAP_DECL(scope_40, 1);
MAP_DECL(scope_39, 2);
MAP_DECL(scope_38, 3);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 2);
MAP_DECL(scope_35, 3);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 2);
MAP_DECL(scope_32, 3);
MAP_DECL(scope_31, 1);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 1);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 1);
MAP_DECL(scope_26, 3);
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 2);
MAP_DECL(scope_23, 3);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 2);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 2);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 2);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 1);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 1);
MAP_DECL(scope_2, 24);
MAP_DECL(scope_1, 40);
MAP_DECL(scope_0, 1);

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1 */
const MappingEntry scope_62_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg30", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_26_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg31", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_62 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:<1",
  scope_62_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN: */
const MappingEntry scope_61_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_62, 1, 0}
};
const MappingScope scope_61 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_DOWN:",
  scope_61_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1 */
const MappingEntry scope_60_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg28", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_25_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_60 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:<1",
  scope_60_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP: */
const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_60, 1, 0}
};
const MappingScope scope_59 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:WAITING_TO_UP:",
  scope_59_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1 */
const MappingEntry scope_58_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_58 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:<1",
  scope_58_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN: */
const MappingEntry scope_57_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_58, 1, 0}
};
const MappingScope scope_57 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_DOWN:",
  scope_57_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1 */
const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_56 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1",
  scope_56_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP: */
const MappingEntry scope_55_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 0}
};
const MappingScope scope_55 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:INTERRUPTION_TO_UP:",
  scope_55_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1 */
const MappingEntry scope_54_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_54 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:<1",
  scope_54_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1: */
const MappingEntry scope_53_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_54, 1, 0}
};
const MappingScope scope_53 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF1:",
  scope_53_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2 */
const MappingEntry scope_52_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_52 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<2",
  scope_52_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1 */
const MappingEntry scope_51_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_51 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:<1",
  scope_51_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF: */
const MappingEntry scope_50_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_51, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 1}
};
const MappingScope scope_50 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRAIT_EV_OFF:",
  scope_50_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2 */
const MappingEntry scope_49_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_49 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<2",
  scope_49_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1 */
const MappingEntry scope_48_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_48 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:<1",
  scope_48_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON: */
const MappingEntry scope_47_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 1}
};
const MappingScope scope_47 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACT_EV_ON:",
  scope_47_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2 */
const MappingEntry scope_46_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_46 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<2",
  scope_46_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1 */
const MappingEntry scope_45_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_45 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:<1",
  scope_45_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1: */
const MappingEntry scope_44_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_45, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 1}
};
const MappingScope scope_44 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON1:",
  scope_44_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2 */
const MappingEntry scope_43_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_43 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.2",
  scope_43_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1 */
const MappingEntry scope_42_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_42 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2.1",
  scope_42_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2 */
const MappingEntry scope_41_entries[2] = {
  /* 0 */ { MAP_FORK, ".1", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 0},
  /* 1 */ { MAP_FORK, ".2", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 1}
};
const MappingScope scope_41 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<2",
  scope_41_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1 */
const MappingEntry scope_40_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_40 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:<1",
  scope_40_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1: */
const MappingEntry scope_39_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 1}
};
const MappingScope scope_39 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON1:",
  scope_39_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2 */
const MappingEntry scope_38_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg26", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_24_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_38 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<2",
  scope_38_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1 */
const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_37 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:<1",
  scope_37_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1: */
const MappingEntry scope_36_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 1}
};
const MappingScope scope_36 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF1:",
  scope_36_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2 */
const MappingEntry scope_35_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg24", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_20_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_35 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<2",
  scope_35_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1 */
const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_34 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:<1",
  scope_34_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1: */
const MappingEntry scope_33_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 1}
};
const MappingScope scope_33 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF1:",
  scope_33_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1 */
const MappingEntry scope_32_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg22", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_19_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_32 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:<1",
  scope_32_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON: */
const MappingEntry scope_31_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 0}
};
const MappingScope scope_31 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_ON:",
  scope_31_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1 */
const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_30 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:<1",
  scope_30_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN: */
const MappingEntry scope_29_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 0}
};
const MappingScope scope_29 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTENDED_DOWN:",
  scope_29_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1 */
const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_28 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:<1",
  scope_28_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF: */
const MappingEntry scope_27_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 0}
};
const MappingScope scope_27 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GENERAL_EV_OFF:",
  scope_27_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2 */
const MappingEntry scope_26_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg20", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_21_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg21", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_26 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<2",
  scope_26_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1 */
const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_25 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:<1",
  scope_25_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF: */
const MappingEntry scope_24_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 1}
};
const MappingScope scope_24 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_OFF:",
  scope_24_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2 */
const MappingEntry scope_23_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_23_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_23 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<2",
  scope_23_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1 */
const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_22 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:<1",
  scope_22_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF: */
const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 1}
};
const MappingScope scope_21 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_OFF:",
  scope_21_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2 */
const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_20 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<2",
  scope_20_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1 */
const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_19 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:<1",
  scope_19_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON: */
const MappingEntry scope_18_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 1}
};
const MappingScope scope_18 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:CLOSE_EV_ON:",
  scope_18_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2 */
const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_17 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<2",
  scope_17_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1 */
const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_16 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:<1",
  scope_16_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF: */
const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 1}
};
const MappingScope scope_15 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_OFF:",
  scope_15_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2 */
const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_14 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<2",
  scope_14_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1 */
const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_13 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:<1",
  scope_13_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON: */
const MappingEntry scope_12_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 1}
};
const MappingScope scope_12 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:EXTEND_EV_ON:",
  scope_12_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2 */
const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_11 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<2",
  scope_11_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1 */
const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_10 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:<1",
  scope_10_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON: */
const MappingEntry scope_9_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 1}
};
const MappingScope scope_9 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:OPEN_EV_ON:",
  scope_9_entries, 2,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1 */
const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_22_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1}
};
const MappingScope scope_8 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:<1",
  scope_8_entries, 3,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON: */
const MappingEntry scope_7_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 0}
};
const MappingScope scope_7 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:GEN_EV_ON:",
  scope_7_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1 */
const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_6 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:<1",
  scope_6_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP: */
const MappingEntry scope_5_entries[1] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0}
};
const MappingScope scope_5 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:RETRACTED_UP:",
  scope_5_entries, 1,
};

/* Computing_Model/ Computing_ModelState_Machine_Extend_Gear: */
const MappingEntry scope_2_entries[24] = {
  /* 0 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_State_Machine_Extend_Gear), (size_t)&outputs_ctx.State_Machine_Extend_Gear_state_nxt, &_Type_SSM_ST_State_Machine_Extend_Gear_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.State_Machine_Extend_Gear_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_STATE, "CLOSE_EV_OFF1:", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 14},
  /* 3 */ { MAP_STATE, "CLOSE_EV_OFF:", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 8},
  /* 4 */ { MAP_STATE, "CLOSE_EV_ON1:", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 16},
  /* 5 */ { MAP_STATE, "CLOSE_EV_ON:", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 7},
  /* 6 */ { MAP_STATE, "EXTENDED_DOWN:", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 11},
  /* 7 */ { MAP_STATE, "EXTEND_EV_OFF:", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 6},
  /* 8 */ { MAP_STATE, "EXTEND_EV_ON:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 5},
  /* 9 */ { MAP_STATE, "GENERAL_EV_OFF1:", NULL, 0, 0, NULL, NULL, NULL, &scope_53, 1, 19},
  /* 10 */ { MAP_STATE, "GENERAL_EV_OFF:", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 10},
  /* 11 */ { MAP_STATE, "GENERAL_EV_ON:", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 12},
  /* 12 */ { MAP_STATE, "GEN_EV_ON:", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 3},
  /* 13 */ { MAP_STATE, "INTERRUPTION_DOWN:", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 21},
  /* 14 */ { MAP_STATE, "INTERRUPTION_TO_UP:", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 20},
  /* 15 */ { MAP_STATE, "OPEN_EV_OFF1:", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 13},
  /* 16 */ { MAP_STATE, "OPEN_EV_OFF:", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 9},
  /* 17 */ { MAP_STATE, "OPEN_EV_ON1:", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 15},
  /* 18 */ { MAP_STATE, "OPEN_EV_ON:", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 4},
  /* 19 */ { MAP_STATE, "RETRACTED_UP:", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 2},
  /* 20 */ { MAP_STATE, "RETRACT_EV_ON:", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 17},
  /* 21 */ { MAP_STATE, "RETRAIT_EV_OFF:", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 18},
  /* 22 */ { MAP_STATE, "WAITING_DOWN:", NULL, 0, 0, NULL, NULL, NULL, &scope_61, 1, 23},
  /* 23 */ { MAP_STATE, "WAITING_TO_UP:", NULL, 0, 0, NULL, NULL, NULL, &scope_59, 1, 22}
};
const MappingScope scope_2 = {
  "Computing_Model/ Computing_ModelState_Machine_Extend_Gear:",
  scope_2_entries, 24,
};

/* Computing_Model/ Computing_Model */
const MappingEntry scope_1_entries[40] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_26_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_25_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 10},
  /* 3 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 4 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 12},
  /* 5 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 6 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 14},
  /* 7 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 15},
  /* 8 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_24_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 2},
  /* 9 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_20_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 3},
  /* 10 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_19_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 4},
  /* 11 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_21_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 5},
  /* 12 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_23_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 6},
  /* 13 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_size), (size_t)&outputs_ctx.v3_times_22_size, &_Type_kcg_size_Utils, NULL, NULL, NULL, 0, 7},
  /* 14 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 8},
  /* 15 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 9},
  /* 16 */ { MAP_AUTOMATON, "State_Machine_Extend_Gear:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 16},
  /* 17 */ { MAP_OUTPUT, "close_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.close_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_INPUT, "door_Closed_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 19 */ { MAP_INPUT, "door_Closed_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 20 */ { MAP_INPUT, "door_Closed_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Closed_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 21 */ { MAP_INPUT, "door_Open_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 22 */ { MAP_INPUT, "door_Open_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 23 */ { MAP_INPUT, "door_Open_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_Open_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 24 */ { MAP_OUTPUT, "extend_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.extend_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 25 */ { MAP_INPUT, "gear_Extended_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 26 */ { MAP_INPUT, "gear_Extended_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 27 */ { MAP_INPUT, "gear_Extended_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Extended_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_INPUT, "gear_Retracted_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 29 */ { MAP_INPUT, "gear_Retracted_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 30 */ { MAP_INPUT, "gear_Retracted_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Retracted_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_INPUT, "gear_Shock_Absorber_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 32 */ { MAP_INPUT, "gear_Shock_Absorber_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 33 */ { MAP_INPUT, "gear_Shock_Absorber_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_Shock_Absorber_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 34 */ { MAP_OUTPUT, "gears_Locked_Down", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.gears_Locked_Down, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 35 */ { MAP_OUTPUT, "gears_Maneuvring", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.gears_Maneuvring, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 36 */ { MAP_OUTPUT, "general_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.general_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 37 */ { MAP_INPUT, "handle", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.handle, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 38 */ { MAP_OUTPUT, "open_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.open_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 39 */ { MAP_OUTPUT, "retract_EV", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.retract_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20}
};
const MappingScope scope_1 = {
  "Computing_Model/ Computing_Model",
  scope_1_entries, 40,
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

