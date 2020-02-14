/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/Simulation/config.txt
** Generation date: 2020-02-07T16:32:56
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Computing_Model/State_Machine_Extend_Gear: */
typedef enum kcg_tag_SSM_TR_State_Machine_Extend_Gear {
  SSM_TR_no_trans_State_Machine_Extend_Gear,
  SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear,
  SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear,
  SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear,
  SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear,
  SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear,
  SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear,
  SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear,
  SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear,
  SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear,
  SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear,
  SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear,
  SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear
} SSM_TR_State_Machine_Extend_Gear;
/* Computing_Model/State_Machine_Extend_Gear: */
typedef enum kcg_tag_SSM_ST_State_Machine_Extend_Gear {
  SSM_st_RETRACTED_UP_State_Machine_Extend_Gear,
  SSM_st_GEN_EV_ON_State_Machine_Extend_Gear,
  SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear,
  SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear,
  SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear,
  SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear,
  SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear,
  SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear,
  SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear,
  SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear,
  SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear,
  SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear,
  SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear,
  SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear,
  SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear,
  SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear,
  SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear,
  SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear,
  SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear,
  SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear,
  SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear,
  SSM_st_WAITING_DOWN_State_Machine_Extend_Gear
} SSM_ST_State_Machine_Extend_Gear;
#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** kcg_types.h
** Generation date: 2020-02-07T16:32:56
*************************************************************$ */

