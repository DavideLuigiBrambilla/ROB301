/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Command: kcg66.exe -config C:/Users/SI/Documents/0_ScadeFiles/ROB301_BRAMBILLA_GOMES/Simulation/config.txt
** Generation date: 2020-02-07T16:32:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Computing_Model.h"

/* Computing_Model/ */
void Computing_Model(inC_Computing_Model *inC, outC_Computing_Model *outC)
{
  /* general_EV/ */
  kcg_bool general_EV_partial;
  /* close_EV/ */
  kcg_bool close_EV_partial;
  /* open_EV/ */
  kcg_bool open_EV_partial;
  /* retract_EV/ */
  kcg_bool retract_EV_partial;
  /* extend_EV/ */
  kcg_bool extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _1_general_EV_partial;
  /* close_EV/ */
  kcg_bool _2_close_EV_partial;
  /* open_EV/ */
  kcg_bool _3_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _4_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _5_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _6_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _7_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _8_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _9_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _10_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _11_general_EV_partial;
  /* close_EV/ */
  kcg_bool _12_close_EV_partial;
  /* open_EV/ */
  kcg_bool _13_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _14_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _15_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _16_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _17_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _18_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _19_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _20_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _21_general_EV_partial;
  /* close_EV/ */
  kcg_bool _22_close_EV_partial;
  /* open_EV/ */
  kcg_bool _23_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _24_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _25_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _26_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _27_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _28_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _29_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _30_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _31_general_EV_partial;
  /* close_EV/ */
  kcg_bool _32_close_EV_partial;
  /* open_EV/ */
  kcg_bool _33_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _34_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _35_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _36_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _37_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _38_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _39_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _40_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _41_general_EV_partial;
  /* close_EV/ */
  kcg_bool _42_close_EV_partial;
  /* open_EV/ */
  kcg_bool _43_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _44_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _45_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _46_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _47_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _48_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _49_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _50_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _51_general_EV_partial;
  /* close_EV/ */
  kcg_bool _52_close_EV_partial;
  /* open_EV/ */
  kcg_bool _53_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _54_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _55_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _56_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _57_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _58_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _59_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _60_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _61_general_EV_partial;
  /* close_EV/ */
  kcg_bool _62_close_EV_partial;
  /* open_EV/ */
  kcg_bool _63_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _64_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _65_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _66_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _67_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _68_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _69_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _70_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _71_general_EV_partial;
  /* close_EV/ */
  kcg_bool _72_close_EV_partial;
  /* open_EV/ */
  kcg_bool _73_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _74_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _75_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _76_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _77_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _78_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _79_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _80_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _81_general_EV_partial;
  /* close_EV/ */
  kcg_bool _82_close_EV_partial;
  /* open_EV/ */
  kcg_bool _83_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _84_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _85_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _86_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _87_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _88_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _89_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _90_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _91_general_EV_partial;
  /* close_EV/ */
  kcg_bool _92_close_EV_partial;
  /* open_EV/ */
  kcg_bool _93_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _94_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _95_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _96_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _97_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _98_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _99_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _100_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _101_general_EV_partial;
  /* close_EV/ */
  kcg_bool _102_close_EV_partial;
  /* open_EV/ */
  kcg_bool _103_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _104_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _105_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _106_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _107_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _108_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _109_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _110_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _111_general_EV_partial;
  /* close_EV/ */
  kcg_bool _112_close_EV_partial;
  /* open_EV/ */
  kcg_bool _113_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _114_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _115_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _116_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _117_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _118_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _119_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _120_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _121_general_EV_partial;
  /* close_EV/ */
  kcg_bool _122_close_EV_partial;
  /* open_EV/ */
  kcg_bool _123_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _124_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _125_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _126_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _127_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _128_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _129_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _130_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _131_general_EV_partial;
  /* close_EV/ */
  kcg_bool _132_close_EV_partial;
  /* open_EV/ */
  kcg_bool _133_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _134_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _135_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _136_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _137_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _138_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _139_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _140_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _141_general_EV_partial;
  /* close_EV/ */
  kcg_bool _142_close_EV_partial;
  /* open_EV/ */
  kcg_bool _143_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _144_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _145_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _146_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _147_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _148_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _149_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _150_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _151_general_EV_partial;
  /* close_EV/ */
  kcg_bool _152_close_EV_partial;
  /* open_EV/ */
  kcg_bool _153_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _154_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _155_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _156_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _157_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _158_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _159_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _160_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _161_general_EV_partial;
  /* close_EV/ */
  kcg_bool _162_close_EV_partial;
  /* open_EV/ */
  kcg_bool _163_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _164_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _165_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _166_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _167_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _168_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _169_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _170_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _171_general_EV_partial;
  /* close_EV/ */
  kcg_bool _172_close_EV_partial;
  /* open_EV/ */
  kcg_bool _173_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _174_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _175_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _176_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _177_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _178_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _179_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _180_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _181_general_EV_partial;
  /* close_EV/ */
  kcg_bool _182_close_EV_partial;
  /* open_EV/ */
  kcg_bool _183_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _184_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _185_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _186_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _187_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _188_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _189_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _190_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _191_general_EV_partial;
  /* close_EV/ */
  kcg_bool _192_close_EV_partial;
  /* open_EV/ */
  kcg_bool _193_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _194_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _195_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _196_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _197_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _198_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _199_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _200_State_Machine_Extend_Gear_fired_partial;
  /* general_EV/ */
  kcg_bool _201_general_EV_partial;
  /* close_EV/ */
  kcg_bool _202_close_EV_partial;
  /* open_EV/ */
  kcg_bool _203_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _204_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _205_extend_EV_partial;
  /* gears_Locked_Down/ */
  kcg_bool _206_gears_Locked_Down_partial;
  /* gears_Maneuvring/ */
  kcg_bool _207_gears_Maneuvring_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _208_State_Machine_Extend_Gear_state_nxt_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _209_State_Machine_Extend_Gear_reset_nxt_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _210_State_Machine_Extend_Gear_fired_partial;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _211_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _212_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _213_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:RETRACTED_UP:<1> */
  kcg_bool tr_1_guard_RETRACTED_UP_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _214_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _215_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _216_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:GEN_EV_ON:<1> */
  kcg_bool tr_1_guard_GEN_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _217_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _218_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _219_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:OPEN_EV_ON:<2> */
  kcg_bool tr_2_guard_OPEN_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON:<1> */
  kcg_bool tr_1_guard_OPEN_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _220_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _221_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _222_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:EXTEND_EV_ON:<2> */
  kcg_bool tr_2_guard_EXTEND_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:EXTEND_EV_ON:<1> */
  kcg_bool tr_1_guard_EXTEND_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _223_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _224_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _225_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:EXTEND_EV_OFF:<2> */
  kcg_bool tr_2_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:EXTEND_EV_OFF:<1> */
  kcg_bool tr_1_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _226_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _227_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _228_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:CLOSE_EV_ON:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:CLOSE_EV_ON:<1> */
  kcg_bool tr_1_guard_CLOSE_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _229_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _230_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _231_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:CLOSE_EV_OFF:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:CLOSE_EV_OFF:<1> */
  kcg_bool tr_1_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _232_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _233_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _234_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:OPEN_EV_OFF:<2> */
  kcg_bool tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_OFF:<1> */
  kcg_bool tr_1_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _235_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _236_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _237_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:GENERAL_EV_OFF:<1> */
  kcg_bool tr_1_guard_GENERAL_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _238_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _239_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _240_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:EXTENDED_DOWN:<1> */
  kcg_bool tr_1_guard_EXTENDED_DOWN_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _241_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _242_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _243_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:GENERAL_EV_ON:<1> */
  kcg_bool tr_1_guard_GENERAL_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _244_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _245_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _246_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:OPEN_EV_OFF1:<2> */
  kcg_bool tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_OFF1:<1> */
  kcg_bool tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _247_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _248_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _249_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:CLOSE_EV_OFF1:<1> */
  kcg_bool tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _250_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _251_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _252_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2><2> */
  kcg_bool tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2><1> */
  kcg_bool tr_1_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<2> */
  kcg_bool tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:OPEN_EV_ON1:<1> */
  kcg_bool tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _253_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _254_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _255_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:CLOSE_EV_ON1:<2> */
  kcg_bool tr_2_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:CLOSE_EV_ON1:<1> */
  kcg_bool tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _256_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _257_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _258_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:RETRACT_EV_ON:<2> */
  kcg_bool tr_2_guard_RETRACT_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:RETRACT_EV_ON:<1> */
  kcg_bool tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _259_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _260_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _261_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:RETRAIT_EV_OFF:<2> */
  kcg_bool tr_2_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear:RETRAIT_EV_OFF:<1> */
  kcg_bool tr_1_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _262_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _263_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _264_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:GENERAL_EV_OFF1:<1> */
  kcg_bool tr_1_guard_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _265_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _266_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _267_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:INTERRUPTION_TO_UP:<1> */
  kcg_bool tr_1_guard_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _268_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _269_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _270_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:INTERRUPTION_DOWN:<1> */
  kcg_bool tr_1_guard_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _271_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _272_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _273_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:WAITING_TO_UP:<1> */
  kcg_bool tr_1_guard_WAITING_TO_UP_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  SSM_ST_State_Machine_Extend_Gear _274_State_Machine_Extend_Gear_state_act_partial;
  /* State_Machine_Extend_Gear: */
  kcg_bool _275_State_Machine_Extend_Gear_reset_act_partial;
  /* State_Machine_Extend_Gear: */
  SSM_TR_State_Machine_Extend_Gear _276_State_Machine_Extend_Gear_fired_strong_partial;
  /* State_Machine_Extend_Gear:WAITING_DOWN:<1> */
  kcg_bool tr_1_guard_WAITING_DOWN_State_Machine_Extend_Gear;
  /* State_Machine_Extend_Gear: */
  kcg_bool _277_State_Machine_Extend_Gear_reset_sel;
  /* State_Machine_Extend_Gear: */
  kcg_bool _278_State_Machine_Extend_Gear_reset_prv;

  outC->_9_State_Machine_Extend_Gear_state_sel =
    outC->State_Machine_Extend_Gear_state_nxt;
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      outC->n_times_22_size = 2;
      break;
    default :
      /* this branch is empty */
      break;
  }
  _278_State_Machine_Extend_Gear_reset_prv =
    outC->State_Machine_Extend_Gear_reset_act;
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      outC->n_times_26_size = 1;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init7 = kcg_true;
      }
      /* @8/_/v4= */
      if (outC->init7) {
        outC->v4_times_26_size = outC->n_times_26_size;
      }
      else {
        outC->v4_times_26_size = outC->v3_times_26_size;
      }
      outC->c_times_26_size = kcg_true;
      /* @8/_/v3= */
      if (outC->v4_times_26_size < 0) {
        outC->v3_times_26_size = outC->v4_times_26_size;
      }
      else /* @8/_/v3= */
      if (outC->c_times_26_size) {
        outC->v3_times_26_size = outC->v4_times_26_size - 1;
      }
      else {
        outC->v3_times_26_size = outC->v4_times_26_size;
      }
      outC->o_times_26_size = outC->c_times_26_size & (outC->v3_times_26_size == 0);
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      outC->n_times_25_size = 1;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init6 = kcg_true;
      }
      /* @7/_/v4= */
      if (outC->init6) {
        outC->v4_times_25_size = outC->n_times_25_size;
      }
      else {
        outC->v4_times_25_size = outC->v3_times_25_size;
      }
      outC->c_times_25_size = kcg_true;
      /* @7/_/v3= */
      if (outC->v4_times_25_size < 0) {
        outC->v3_times_25_size = outC->v4_times_25_size;
      }
      else /* @7/_/v3= */
      if (outC->c_times_25_size) {
        outC->v3_times_25_size = outC->v4_times_25_size - 1;
      }
      else {
        outC->v3_times_25_size = outC->v4_times_25_size;
      }
      outC->o_times_25_size = outC->c_times_25_size & (outC->v3_times_25_size == 0);
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      outC->n_times_24_size = 10;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init5 = kcg_true;
      }
      /* @6/_/v4= */
      if (outC->init5) {
        outC->v4_times_24_size = outC->n_times_24_size;
      }
      else {
        outC->v4_times_24_size = outC->v3_times_24_size;
      }
      outC->c_times_24_size = kcg_true;
      /* @6/_/v3= */
      if (outC->v4_times_24_size < 0) {
        outC->v3_times_24_size = outC->v4_times_24_size;
      }
      else /* @6/_/v3= */
      if (outC->c_times_24_size) {
        outC->v3_times_24_size = outC->v4_times_24_size - 1;
      }
      else {
        outC->v3_times_24_size = outC->v4_times_24_size;
      }
      outC->o_times_24_size = outC->c_times_24_size & (outC->v3_times_24_size == 0);
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      outC->n_times_20_size = 1;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init4 = kcg_true;
      }
      /* @5/_/v4= */
      if (outC->init4) {
        outC->v4_times_20_size = outC->n_times_20_size;
      }
      else {
        outC->v4_times_20_size = outC->v3_times_20_size;
      }
      outC->c_times_20_size = kcg_true;
      /* @5/_/v3= */
      if (outC->v4_times_20_size < 0) {
        outC->v3_times_20_size = outC->v4_times_20_size;
      }
      else /* @5/_/v3= */
      if (outC->c_times_20_size) {
        outC->v3_times_20_size = outC->v4_times_20_size - 1;
      }
      else {
        outC->v3_times_20_size = outC->v4_times_20_size;
      }
      outC->o_times_20_size = outC->c_times_20_size & (outC->v3_times_20_size == 0);
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      outC->n_times_19_size = 2;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init3 = kcg_true;
      }
      /* @4/_/v4= */
      if (outC->init3) {
        outC->v4_times_19_size = outC->n_times_19_size;
      }
      else {
        outC->v4_times_19_size = outC->v3_times_19_size;
      }
      outC->c_times_19_size = kcg_true;
      /* @4/_/v3= */
      if (outC->v4_times_19_size < 0) {
        outC->v3_times_19_size = outC->v4_times_19_size;
      }
      else /* @4/_/v3= */
      if (outC->c_times_19_size) {
        outC->v3_times_19_size = outC->v4_times_19_size - 1;
      }
      else {
        outC->v3_times_19_size = outC->v4_times_19_size;
      }
      outC->o_times_19_size = outC->c_times_19_size & (outC->v3_times_19_size == 0);
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      outC->n_times_21_size = 1;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_21_size = outC->n_times_21_size;
      }
      else {
        outC->v4_times_21_size = outC->v3_times_21_size;
      }
      outC->c_times_21_size = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_21_size < 0) {
        outC->v3_times_21_size = outC->v4_times_21_size;
      }
      else /* @3/_/v3= */
      if (outC->c_times_21_size) {
        outC->v3_times_21_size = outC->v4_times_21_size - 1;
      }
      else {
        outC->v3_times_21_size = outC->v4_times_21_size;
      }
      outC->o_times_21_size = outC->c_times_21_size & (outC->v3_times_21_size == 0);
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      outC->n_times_23_size = 10;
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_23_size = outC->n_times_23_size;
      }
      else {
        outC->v4_times_23_size = outC->v3_times_23_size;
      }
      outC->c_times_23_size = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_23_size < 0) {
        outC->v3_times_23_size = outC->v4_times_23_size;
      }
      else /* @2/_/v3= */
      if (outC->c_times_23_size) {
        outC->v3_times_23_size = outC->v4_times_23_size - 1;
      }
      else {
        outC->v3_times_23_size = outC->v4_times_23_size;
      }
      outC->o_times_23_size = outC->c_times_23_size & (outC->v3_times_23_size == 0);
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      if (_278_State_Machine_Extend_Gear_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_22_size = outC->n_times_22_size;
      }
      else {
        outC->v4_times_22_size = outC->v3_times_22_size;
      }
      outC->c_times_22_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_22_size < 0) {
        outC->v3_times_22_size = outC->v4_times_22_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_22_size) {
        outC->v3_times_22_size = outC->v4_times_22_size - 1;
      }
      else {
        outC->v3_times_22_size = outC->v4_times_22_size;
      }
      outC->o_times_22_size = outC->c_times_22_size & (outC->v3_times_22_size == 0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L24 = inC->gear_Extended_front;
  outC->_L25 = inC->gear_Extended_right;
  outC->_L26 = inC->gear_Extended_left;
  outC->_L42 = inC->gear_Shock_Absorber_front;
  outC->_L43 = inC->gear_Shock_Absorber_right;
  outC->_L44 = inC->gear_Shock_Absorber_left;
  outC->_L51 = inC->door_Closed_front;
  outC->_L52 = inC->door_Closed_right;
  outC->_L53 = inC->door_Closed_left;
  outC->_L60 = inC->door_Open_front;
  outC->_L61 = inC->door_Open_right;
  outC->_L62 = inC->door_Open_left;
  outC->_L91 = outC->_L24 & outC->_L25 & outC->_L26;
  outC->_L92 = inC->gear_Retracted_left;
  outC->_L34 = inC->gear_Retracted_right;
  outC->_L33 = inC->gear_Retracted_front;
  outC->_L95 = outC->_L33 | outC->_L34 | outC->_L92;
  outC->_L96 = !outC->_L95;
  outC->_L94 = outC->_L91 & outC->_L96;
  outC->all_gears_extended = outC->_L94;
  outC->_L139 = outC->_L42 | outC->_L43 | outC->_L44;
  outC->_L140 = !outC->_L139;
  outC->all_shock_absorber_false = outC->_L140;
  outC->_L98 = outC->_L60 | outC->_L61 | outC->_L62;
  outC->_L105 = !outC->_L98;
  outC->_L100 = outC->_L51 & outC->_L52 & outC->_L53;
  outC->_L99 = outC->_L100 & outC->_L105;
  outC->all_doors_closed = outC->_L99;
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      tr_1_guard_WAITING_DOWN_State_Machine_Extend_Gear = outC->o_times_26_size;
      if (tr_1_guard_WAITING_DOWN_State_Machine_Extend_Gear) {
        _274_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        _274_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      tr_1_guard_WAITING_TO_UP_State_Machine_Extend_Gear = outC->o_times_25_size;
      if (tr_1_guard_WAITING_TO_UP_State_Machine_Extend_Gear) {
        _271_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        _271_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      tr_1_guard_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_true;
      if (tr_1_guard_INTERRUPTION_DOWN_State_Machine_Extend_Gear) {
        _268_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _268_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      tr_1_guard_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_true;
      if (tr_1_guard_INTERRUPTION_TO_UP_State_Machine_Extend_Gear) {
        _265_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        _265_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      tr_1_guard_GENERAL_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
      if (tr_1_guard_GENERAL_EV_OFF1_State_Machine_Extend_Gear) {
        _262_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      }
      else {
        _262_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      tr_2_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      tr_1_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear) {
        _259_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear) {
        _259_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        _259_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L133 = inC->gear_Extended_left;
  outC->_L131 = inC->gear_Extended_right;
  outC->_L130 = inC->gear_Extended_front;
  outC->_L136 = outC->_L130 | outC->_L131 | outC->_L133;
  outC->_L135 = !outC->_L136;
  outC->_L138 = inC->gear_Retracted_left;
  outC->_L132 = inC->gear_Retracted_right;
  outC->_L134 = inC->gear_Retracted_front;
  outC->_L129 = outC->_L134 & outC->_L132 & outC->_L138;
  outC->_L137 = outC->_L129 & outC->_L135;
  outC->all_gears_retracted = outC->_L137;
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      tr_2_guard_RETRACT_EV_ON_State_Machine_Extend_Gear = outC->all_gears_retracted;
      tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        _256_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        _256_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _256_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      tr_2_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear = outC->all_doors_closed;
      tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        _253_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        _253_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        _253_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      tr_1_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear =
        outC->all_shock_absorber_false;
      tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear =
        !outC->all_shock_absorber_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L119 = inC->door_Closed_left;
  outC->_L123 = inC->door_Closed_right;
  outC->_L127 = inC->door_Closed_front;
  outC->_L118 = outC->_L127 | outC->_L123 | outC->_L119;
  outC->_L120 = !outC->_L118;
  outC->_L126 = inC->door_Open_left;
  outC->_L124 = inC->door_Open_right;
  outC->_L125 = inC->door_Open_front;
  outC->_L121 = outC->_L125 & outC->_L124 & outC->_L126;
  outC->_L122 = outC->_L121 & outC->_L120;
  outC->all_doors_open = outC->_L122;
  /* State_Machine_Extend_Gear: */
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _274_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _271_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _268_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _265_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _262_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _259_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _256_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      outC->_10_State_Machine_Extend_Gear_state_act =
        _253_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear = outC->all_doors_open &
        (tr_1_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear |
          tr_2_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear);
      tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        _250_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        if (tr_1_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear) {
          _250_State_Machine_Extend_Gear_state_act_partial =
            SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
        }
        else {
          _250_State_Machine_Extend_Gear_state_act_partial =
            SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
        }
      }
      else {
        _250_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _250_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear = outC->o_times_24_size;
      tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        _247_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        _247_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        _247_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _247_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear = outC->o_times_20_size;
      tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        _244_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        _244_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        _244_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _244_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      tr_1_guard_GENERAL_EV_ON_State_Machine_Extend_Gear = outC->o_times_19_size;
      if (tr_1_guard_GENERAL_EV_ON_State_Machine_Extend_Gear) {
        _241_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        _241_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _241_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      tr_1_guard_EXTENDED_DOWN_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_EXTENDED_DOWN_State_Machine_Extend_Gear) {
        _238_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _238_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _238_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      tr_1_guard_GENERAL_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      if (tr_1_guard_GENERAL_EV_OFF_State_Machine_Extend_Gear) {
        _235_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      }
      else {
        _235_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _235_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear = outC->o_times_21_size;
      tr_1_guard_OPEN_EV_OFF_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        _232_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        _232_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _232_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _232_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear = outC->o_times_23_size;
      tr_1_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        _229_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        _229_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _229_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _229_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      tr_2_guard_CLOSE_EV_ON_State_Machine_Extend_Gear = outC->all_doors_closed;
      tr_1_guard_CLOSE_EV_ON_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_CLOSE_EV_ON_State_Machine_Extend_Gear) {
        _226_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_ON_State_Machine_Extend_Gear) {
        _226_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _226_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _226_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      tr_2_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      tr_1_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear) {
        _223_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear) {
        _223_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _223_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _223_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      tr_2_guard_EXTEND_EV_ON_State_Machine_Extend_Gear = outC->all_gears_extended;
      tr_1_guard_EXTEND_EV_ON_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_EXTEND_EV_ON_State_Machine_Extend_Gear) {
        _220_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_EXTEND_EV_ON_State_Machine_Extend_Gear) {
        _220_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _220_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _220_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      tr_2_guard_OPEN_EV_ON_State_Machine_Extend_Gear = outC->all_doors_open;
      tr_1_guard_OPEN_EV_ON_State_Machine_Extend_Gear = inC->handle;
      if (tr_1_guard_OPEN_EV_ON_State_Machine_Extend_Gear) {
        _217_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_ON_State_Machine_Extend_Gear) {
        _217_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _217_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _217_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      tr_1_guard_GEN_EV_ON_State_Machine_Extend_Gear = outC->o_times_22_size;
      if (tr_1_guard_GEN_EV_ON_State_Machine_Extend_Gear) {
        _214_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _214_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _214_State_Machine_Extend_Gear_state_act_partial;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      tr_1_guard_RETRACTED_UP_State_Machine_Extend_Gear = !inC->handle;
      if (tr_1_guard_RETRACTED_UP_State_Machine_Extend_Gear) {
        _211_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _211_State_Machine_Extend_Gear_state_act_partial =
          SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      }
      outC->_10_State_Machine_Extend_Gear_state_act =
        _211_State_Machine_Extend_Gear_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->_10_State_Machine_Extend_Gear_state_act) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      _207_gears_Maneuvring_partial = kcg_false;
      _206_gears_Locked_Down_partial = kcg_false;
      _205_extend_EV_partial = kcg_false;
      _204_retract_EV_partial = kcg_false;
      _203_open_EV_partial = kcg_false;
      _202_close_EV_partial = kcg_false;
      _201_general_EV_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* State_Machine_Extend_Gear: */
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      if (tr_1_guard_WAITING_DOWN_State_Machine_Extend_Gear) {
        _276_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_WAITING_DOWN_INTERRUPTION_DOWN_1_WAITING_DOWN_State_Machine_Extend_Gear;
      }
      else {
        _276_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _276_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      if (tr_1_guard_WAITING_TO_UP_State_Machine_Extend_Gear) {
        _273_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_WAITING_TO_UP_INTERRUPTION_TO_UP_1_WAITING_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        _273_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _273_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      if (tr_1_guard_INTERRUPTION_DOWN_State_Machine_Extend_Gear) {
        _270_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_INTERRUPTION_DOWN_OPEN_EV_ON_1_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      }
      else {
        _270_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _270_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      if (tr_1_guard_INTERRUPTION_TO_UP_State_Machine_Extend_Gear) {
        _267_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_INTERRUPTION_TO_UP_OPEN_EV_ON1_1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      }
      else {
        _267_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _267_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      if (tr_1_guard_GENERAL_EV_OFF1_State_Machine_Extend_Gear) {
        _264_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_GENERAL_EV_OFF1_RETRACTED_UP_1_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        _264_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _264_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear) {
        _261_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_RETRAIT_EV_OFF_INTERRUPTION_DOWN_1_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear) {
        _261_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_RETRAIT_EV_OFF_OPEN_EV_OFF1_2_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _261_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _261_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        _258_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_RETRACT_EV_ON_WAITING_DOWN_1_RETRACT_EV_ON_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        _258_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_RETRACT_EV_ON_RETRAIT_EV_OFF_2_RETRACT_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _258_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _258_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        _255_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_ON1_WAITING_DOWN_1_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        _255_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_ON1_CLOSE_EV_OFF1_2_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      else {
        _255_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _255_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        _252_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_ON1_WAITING_DOWN_1_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        if (tr_1_guard_2_OPEN_EV_ON1_State_Machine_Extend_Gear) {
          _252_State_Machine_Extend_Gear_fired_strong_partial =
            SSM_TR_OPEN_EV_ON1_RETRACT_EV_ON_1_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
        }
        else {
          _252_State_Machine_Extend_Gear_fired_strong_partial =
            SSM_TR_OPEN_EV_ON1_OPEN_EV_OFF1_2_2_OPEN_EV_ON1_State_Machine_Extend_Gear;
        }
      }
      else {
        _252_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _252_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        _249_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_OFF1_INTERRUPTION_DOWN_1_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        _249_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_OFF1_GENERAL_EV_OFF1_2_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        _249_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _249_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        _246_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_OFF1_INTERRUPTION_DOWN_1_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        _246_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_OFF1_CLOSE_EV_ON1_2_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      else {
        _246_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _246_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_GENERAL_EV_ON_State_Machine_Extend_Gear) {
        _243_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_GENERAL_EV_ON_OPEN_EV_ON1_1_GENERAL_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _243_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _243_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      if (tr_1_guard_EXTENDED_DOWN_State_Machine_Extend_Gear) {
        _240_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_EXTENDED_DOWN_GENERAL_EV_ON_1_EXTENDED_DOWN_State_Machine_Extend_Gear;
      }
      else {
        _240_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _240_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_GENERAL_EV_OFF_State_Machine_Extend_Gear) {
        _237_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_GENERAL_EV_OFF_EXTENDED_DOWN_1_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _237_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _237_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        _234_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_OFF_INTERRUPTION_TO_UP_1_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        _234_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_OFF_CLOSE_EV_ON_2_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _234_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _234_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        _231_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_OFF_INTERRUPTION_TO_UP_1_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        _231_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_OFF_GENERAL_EV_OFF_2_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _231_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _231_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_ON_State_Machine_Extend_Gear) {
        _228_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_ON_WAITING_TO_UP_1_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_CLOSE_EV_ON_State_Machine_Extend_Gear) {
        _228_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_CLOSE_EV_ON_CLOSE_EV_OFF_2_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _228_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _228_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear) {
        _225_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_EXTEND_EV_OFF_INTERRUPTION_TO_UP_1_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear) {
        _225_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_EXTEND_EV_OFF_OPEN_EV_OFF_2_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      else {
        _225_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _225_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_EXTEND_EV_ON_State_Machine_Extend_Gear) {
        _222_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_EXTEND_EV_ON_WAITING_TO_UP_1_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_EXTEND_EV_ON_State_Machine_Extend_Gear) {
        _222_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_EXTEND_EV_ON_EXTEND_EV_OFF_2_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _222_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _222_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_ON_State_Machine_Extend_Gear) {
        _219_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_ON_WAITING_TO_UP_1_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      else if (tr_2_guard_OPEN_EV_ON_State_Machine_Extend_Gear) {
        _219_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_OPEN_EV_ON_EXTEND_EV_ON_2_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _219_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _219_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_GEN_EV_ON_State_Machine_Extend_Gear) {
        _216_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_GEN_EV_ON_OPEN_EV_ON_1_GEN_EV_ON_State_Machine_Extend_Gear;
      }
      else {
        _216_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _216_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      if (tr_1_guard_RETRACTED_UP_State_Machine_Extend_Gear) {
        _213_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_RETRACTED_UP_GEN_EV_ON_1_RETRACTED_UP_State_Machine_Extend_Gear;
      }
      else {
        _213_State_Machine_Extend_Gear_fired_strong_partial =
          SSM_TR_no_trans_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_fired_strong =
        _213_State_Machine_Extend_Gear_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* State_Machine_Extend_Gear: */
  switch (outC->_10_State_Machine_Extend_Gear_state_act) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      _210_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _209_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _208_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_WAITING_DOWN_State_Machine_Extend_Gear;
      outC->general_EV = _201_general_EV_partial;
      outC->close_EV = _202_close_EV_partial;
      outC->open_EV = _203_open_EV_partial;
      outC->retract_EV = _204_retract_EV_partial;
      outC->extend_EV = _205_extend_EV_partial;
      outC->gears_Locked_Down = _206_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _207_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _208_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      _197_gears_Maneuvring_partial = kcg_false;
      _196_gears_Locked_Down_partial = kcg_false;
      _195_extend_EV_partial = kcg_false;
      _194_retract_EV_partial = kcg_false;
      _193_open_EV_partial = kcg_false;
      _192_close_EV_partial = kcg_false;
      _191_general_EV_partial = kcg_false;
      _200_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _199_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _198_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear;
      outC->general_EV = _191_general_EV_partial;
      outC->close_EV = _192_close_EV_partial;
      outC->open_EV = _193_open_EV_partial;
      outC->retract_EV = _194_retract_EV_partial;
      outC->extend_EV = _195_extend_EV_partial;
      outC->gears_Locked_Down = _196_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _197_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _198_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      _187_gears_Maneuvring_partial = kcg_false;
      _186_gears_Locked_Down_partial = kcg_false;
      _185_extend_EV_partial = kcg_false;
      _181_general_EV_partial = kcg_false;
      _190_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _189_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _188_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      outC->_L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_false;
      outC->_L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_false;
      outC->_L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_false;
      _184_retract_EV_partial = outC->_L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      _183_open_EV_partial = outC->_L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      _182_close_EV_partial = outC->_L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      outC->general_EV = _181_general_EV_partial;
      outC->close_EV = _182_close_EV_partial;
      outC->open_EV = _183_open_EV_partial;
      outC->retract_EV = _184_retract_EV_partial;
      outC->extend_EV = _185_extend_EV_partial;
      outC->gears_Locked_Down = _186_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _187_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _188_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      _177_gears_Maneuvring_partial = kcg_false;
      _176_gears_Locked_Down_partial = kcg_false;
      _174_retract_EV_partial = kcg_false;
      _171_general_EV_partial = kcg_false;
      _180_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _179_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _178_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      outC->_L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_false;
      outC->_L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_false;
      outC->_L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_false;
      _175_extend_EV_partial = outC->_L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      _173_open_EV_partial = outC->_L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      _172_close_EV_partial = outC->_L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      outC->general_EV = _171_general_EV_partial;
      outC->close_EV = _172_close_EV_partial;
      outC->open_EV = _173_open_EV_partial;
      outC->retract_EV = _174_retract_EV_partial;
      outC->extend_EV = _175_extend_EV_partial;
      outC->gears_Locked_Down = _176_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _177_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _178_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      _167_gears_Maneuvring_partial = kcg_false;
      _166_gears_Locked_Down_partial = kcg_false;
      _165_extend_EV_partial = kcg_false;
      _164_retract_EV_partial = kcg_false;
      _163_open_EV_partial = kcg_false;
      _162_close_EV_partial = kcg_false;
      _170_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _169_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _168_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      outC->_L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear = kcg_false;
      _161_general_EV_partial = outC->_L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      outC->general_EV = _161_general_EV_partial;
      outC->close_EV = _162_close_EV_partial;
      outC->open_EV = _163_open_EV_partial;
      outC->retract_EV = _164_retract_EV_partial;
      outC->extend_EV = _165_extend_EV_partial;
      outC->gears_Locked_Down = _166_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _167_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _168_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      _157_gears_Maneuvring_partial = kcg_false;
      _155_extend_EV_partial = kcg_false;
      _153_open_EV_partial = kcg_false;
      _152_close_EV_partial = kcg_false;
      _151_general_EV_partial = kcg_false;
      _160_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _159_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _158_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      outC->_L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _156_gears_Locked_Down_partial =
        outC->_L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      outC->_L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _154_retract_EV_partial = outC->_L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      outC->general_EV = _151_general_EV_partial;
      outC->close_EV = _152_close_EV_partial;
      outC->open_EV = _153_open_EV_partial;
      outC->retract_EV = _154_retract_EV_partial;
      outC->extend_EV = _155_extend_EV_partial;
      outC->gears_Locked_Down = _156_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _157_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _158_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      _147_gears_Maneuvring_partial = kcg_false;
      _146_gears_Locked_Down_partial = kcg_false;
      _145_extend_EV_partial = kcg_false;
      _143_open_EV_partial = kcg_false;
      _142_close_EV_partial = kcg_false;
      _141_general_EV_partial = kcg_false;
      _150_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _149_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _148_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear;
      outC->_L1_RETRACT_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _144_retract_EV_partial = outC->_L1_RETRACT_EV_ON_State_Machine_Extend_Gear;
      outC->general_EV = _141_general_EV_partial;
      outC->close_EV = _142_close_EV_partial;
      outC->open_EV = _143_open_EV_partial;
      outC->retract_EV = _144_retract_EV_partial;
      outC->extend_EV = _145_extend_EV_partial;
      outC->gears_Locked_Down = _146_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _147_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _148_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      _137_gears_Maneuvring_partial = kcg_false;
      _136_gears_Locked_Down_partial = kcg_false;
      _135_extend_EV_partial = kcg_false;
      _134_retract_EV_partial = kcg_false;
      _133_open_EV_partial = kcg_false;
      _131_general_EV_partial = kcg_false;
      _140_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _139_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _138_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      outC->_L1_CLOSE_EV_ON1_State_Machine_Extend_Gear = kcg_true;
      _132_close_EV_partial = outC->_L1_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      outC->general_EV = _131_general_EV_partial;
      outC->close_EV = _132_close_EV_partial;
      outC->open_EV = _133_open_EV_partial;
      outC->retract_EV = _134_retract_EV_partial;
      outC->extend_EV = _135_extend_EV_partial;
      outC->gears_Locked_Down = _136_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _137_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _138_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      _126_gears_Locked_Down_partial = kcg_false;
      _125_extend_EV_partial = kcg_false;
      _124_retract_EV_partial = kcg_false;
      _122_close_EV_partial = kcg_false;
      _121_general_EV_partial = kcg_false;
      _130_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _129_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _128_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear;
      outC->_L2_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
      _127_gears_Maneuvring_partial = outC->_L2_OPEN_EV_ON1_State_Machine_Extend_Gear;
      outC->_L1_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
      _123_open_EV_partial = outC->_L1_OPEN_EV_ON1_State_Machine_Extend_Gear;
      outC->general_EV = _121_general_EV_partial;
      outC->close_EV = _122_close_EV_partial;
      outC->open_EV = _123_open_EV_partial;
      outC->retract_EV = _124_retract_EV_partial;
      outC->extend_EV = _125_extend_EV_partial;
      outC->gears_Locked_Down = _126_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _127_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _128_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      _116_gears_Locked_Down_partial = kcg_false;
      _115_extend_EV_partial = kcg_false;
      _114_retract_EV_partial = kcg_false;
      _113_open_EV_partial = kcg_false;
      _111_general_EV_partial = kcg_false;
      _120_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _119_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _118_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      outC->_L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear = kcg_false;
      _117_gears_Maneuvring_partial =
        outC->_L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      outC->_L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear = kcg_false;
      _112_close_EV_partial = outC->_L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      outC->general_EV = _111_general_EV_partial;
      outC->close_EV = _112_close_EV_partial;
      outC->open_EV = _113_open_EV_partial;
      outC->retract_EV = _114_retract_EV_partial;
      outC->extend_EV = _115_extend_EV_partial;
      outC->gears_Locked_Down = _116_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _117_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _118_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      _107_gears_Maneuvring_partial = kcg_false;
      _106_gears_Locked_Down_partial = kcg_false;
      _105_extend_EV_partial = kcg_false;
      _104_retract_EV_partial = kcg_false;
      _102_close_EV_partial = kcg_false;
      _101_general_EV_partial = kcg_false;
      _110_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _109_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _108_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      outC->_L1_OPEN_EV_OFF1_State_Machine_Extend_Gear = kcg_false;
      _103_open_EV_partial = outC->_L1_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      outC->general_EV = _101_general_EV_partial;
      outC->close_EV = _102_close_EV_partial;
      outC->open_EV = _103_open_EV_partial;
      outC->retract_EV = _104_retract_EV_partial;
      outC->extend_EV = _105_extend_EV_partial;
      outC->gears_Locked_Down = _106_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _107_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _108_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      _97_gears_Maneuvring_partial = kcg_false;
      _96_gears_Locked_Down_partial = kcg_false;
      _95_extend_EV_partial = kcg_false;
      _94_retract_EV_partial = kcg_false;
      _93_open_EV_partial = kcg_false;
      _92_close_EV_partial = kcg_false;
      _100_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _99_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _98_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear;
      outC->_L1_GENERAL_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _91_general_EV_partial = outC->_L1_GENERAL_EV_ON_State_Machine_Extend_Gear;
      outC->general_EV = _91_general_EV_partial;
      outC->close_EV = _92_close_EV_partial;
      outC->open_EV = _93_open_EV_partial;
      outC->retract_EV = _94_retract_EV_partial;
      outC->extend_EV = _95_extend_EV_partial;
      outC->gears_Locked_Down = _96_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _97_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _98_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      _85_extend_EV_partial = kcg_false;
      _84_retract_EV_partial = kcg_false;
      _83_open_EV_partial = kcg_false;
      _82_close_EV_partial = kcg_false;
      _81_general_EV_partial = kcg_false;
      _90_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _89_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _88_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear;
      outC->_L3_EXTENDED_DOWN_State_Machine_Extend_Gear = kcg_false;
      _87_gears_Maneuvring_partial =
        outC->_L3_EXTENDED_DOWN_State_Machine_Extend_Gear;
      outC->_L1_EXTENDED_DOWN_State_Machine_Extend_Gear = kcg_true;
      _86_gears_Locked_Down_partial =
        outC->_L1_EXTENDED_DOWN_State_Machine_Extend_Gear;
      outC->general_EV = _81_general_EV_partial;
      outC->close_EV = _82_close_EV_partial;
      outC->open_EV = _83_open_EV_partial;
      outC->retract_EV = _84_retract_EV_partial;
      outC->extend_EV = _85_extend_EV_partial;
      outC->gears_Locked_Down = _86_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _87_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _88_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      _77_gears_Maneuvring_partial = kcg_false;
      _76_gears_Locked_Down_partial = kcg_false;
      _75_extend_EV_partial = kcg_false;
      _74_retract_EV_partial = kcg_false;
      _73_open_EV_partial = kcg_false;
      _72_close_EV_partial = kcg_false;
      _80_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _79_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _78_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      outC->_L1_GENERAL_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _71_general_EV_partial = outC->_L1_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      outC->general_EV = _71_general_EV_partial;
      outC->close_EV = _72_close_EV_partial;
      outC->open_EV = _73_open_EV_partial;
      outC->retract_EV = _74_retract_EV_partial;
      outC->extend_EV = _75_extend_EV_partial;
      outC->gears_Locked_Down = _76_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _77_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _78_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      _67_gears_Maneuvring_partial = kcg_false;
      _66_gears_Locked_Down_partial = kcg_false;
      _65_extend_EV_partial = kcg_false;
      _64_retract_EV_partial = kcg_false;
      _62_close_EV_partial = kcg_false;
      _61_general_EV_partial = kcg_false;
      _70_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _69_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _68_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear;
      outC->_L1_OPEN_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _63_open_EV_partial = outC->_L1_OPEN_EV_OFF_State_Machine_Extend_Gear;
      outC->general_EV = _61_general_EV_partial;
      outC->close_EV = _62_close_EV_partial;
      outC->open_EV = _63_open_EV_partial;
      outC->retract_EV = _64_retract_EV_partial;
      outC->extend_EV = _65_extend_EV_partial;
      outC->gears_Locked_Down = _66_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _67_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _68_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      _56_gears_Locked_Down_partial = kcg_false;
      _55_extend_EV_partial = kcg_false;
      _54_retract_EV_partial = kcg_false;
      _53_open_EV_partial = kcg_false;
      _51_general_EV_partial = kcg_false;
      _60_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _59_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _58_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      outC->_L3_CLOSE_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _57_gears_Maneuvring_partial = outC->_L3_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      outC->_L1_CLOSE_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _52_close_EV_partial = outC->_L1_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      outC->general_EV = _51_general_EV_partial;
      outC->close_EV = _52_close_EV_partial;
      outC->open_EV = _53_open_EV_partial;
      outC->retract_EV = _54_retract_EV_partial;
      outC->extend_EV = _55_extend_EV_partial;
      outC->gears_Locked_Down = _56_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _57_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _58_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      _47_gears_Maneuvring_partial = kcg_false;
      _46_gears_Locked_Down_partial = kcg_false;
      _45_extend_EV_partial = kcg_false;
      _44_retract_EV_partial = kcg_false;
      _43_open_EV_partial = kcg_false;
      _41_general_EV_partial = kcg_false;
      _50_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _49_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _48_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear;
      outC->_L1_CLOSE_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _42_close_EV_partial = outC->_L1_CLOSE_EV_ON_State_Machine_Extend_Gear;
      outC->general_EV = _41_general_EV_partial;
      outC->close_EV = _42_close_EV_partial;
      outC->open_EV = _43_open_EV_partial;
      outC->retract_EV = _44_retract_EV_partial;
      outC->extend_EV = _45_extend_EV_partial;
      outC->gears_Locked_Down = _46_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _47_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _48_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      _37_gears_Maneuvring_partial = kcg_false;
      _34_retract_EV_partial = kcg_false;
      _33_open_EV_partial = kcg_false;
      _32_close_EV_partial = kcg_false;
      _31_general_EV_partial = kcg_false;
      _40_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _39_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _38_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      outC->_L2_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
      _36_gears_Locked_Down_partial =
        outC->_L2_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      outC->_L1_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_false;
      _35_extend_EV_partial = outC->_L1_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      outC->general_EV = _31_general_EV_partial;
      outC->close_EV = _32_close_EV_partial;
      outC->open_EV = _33_open_EV_partial;
      outC->retract_EV = _34_retract_EV_partial;
      outC->extend_EV = _35_extend_EV_partial;
      outC->gears_Locked_Down = _36_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _37_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _38_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      _27_gears_Maneuvring_partial = kcg_false;
      _26_gears_Locked_Down_partial = kcg_false;
      _24_retract_EV_partial = kcg_false;
      _23_open_EV_partial = kcg_false;
      _22_close_EV_partial = kcg_false;
      _21_general_EV_partial = kcg_false;
      _30_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _29_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _28_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear;
      outC->_L1_EXTEND_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _25_extend_EV_partial = outC->_L1_EXTEND_EV_ON_State_Machine_Extend_Gear;
      outC->general_EV = _21_general_EV_partial;
      outC->close_EV = _22_close_EV_partial;
      outC->open_EV = _23_open_EV_partial;
      outC->retract_EV = _24_retract_EV_partial;
      outC->extend_EV = _25_extend_EV_partial;
      outC->gears_Locked_Down = _26_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _27_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _28_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      _16_gears_Locked_Down_partial = kcg_false;
      _15_extend_EV_partial = kcg_false;
      _14_retract_EV_partial = kcg_false;
      _12_close_EV_partial = kcg_false;
      _11_general_EV_partial = kcg_false;
      _20_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _19_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _18_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear;
      outC->_L2_OPEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _17_gears_Maneuvring_partial = outC->_L2_OPEN_EV_ON_State_Machine_Extend_Gear;
      outC->_L1_OPEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _13_open_EV_partial = outC->_L1_OPEN_EV_ON_State_Machine_Extend_Gear;
      outC->general_EV = _11_general_EV_partial;
      outC->close_EV = _12_close_EV_partial;
      outC->open_EV = _13_open_EV_partial;
      outC->retract_EV = _14_retract_EV_partial;
      outC->extend_EV = _15_extend_EV_partial;
      outC->gears_Locked_Down = _16_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _17_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _18_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      _7_gears_Maneuvring_partial = kcg_false;
      _6_gears_Locked_Down_partial = kcg_false;
      _5_extend_EV_partial = kcg_false;
      _4_retract_EV_partial = kcg_false;
      _3_open_EV_partial = kcg_false;
      _2_close_EV_partial = kcg_false;
      _10_State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      _9_State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      _8_State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_GEN_EV_ON_State_Machine_Extend_Gear;
      outC->_L1_GEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
      _1_general_EV_partial = outC->_L1_GEN_EV_ON_State_Machine_Extend_Gear;
      outC->general_EV = _1_general_EV_partial;
      outC->close_EV = _2_close_EV_partial;
      outC->open_EV = _3_open_EV_partial;
      outC->retract_EV = _4_retract_EV_partial;
      outC->extend_EV = _5_extend_EV_partial;
      outC->gears_Locked_Down = _6_gears_Locked_Down_partial;
      outC->gears_Maneuvring = _7_gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        _8_State_Machine_Extend_Gear_state_nxt_partial;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      gears_Maneuvring_partial = kcg_false;
      gears_Locked_Down_partial = kcg_false;
      extend_EV_partial = kcg_false;
      retract_EV_partial = kcg_false;
      open_EV_partial = kcg_false;
      close_EV_partial = kcg_false;
      general_EV_partial = kcg_false;
      State_Machine_Extend_Gear_fired_partial =
        outC->State_Machine_Extend_Gear_fired_strong;
      State_Machine_Extend_Gear_reset_nxt_partial = kcg_false;
      State_Machine_Extend_Gear_state_nxt_partial =
        SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
      outC->general_EV = general_EV_partial;
      outC->close_EV = close_EV_partial;
      outC->open_EV = open_EV_partial;
      outC->retract_EV = retract_EV_partial;
      outC->extend_EV = extend_EV_partial;
      outC->gears_Locked_Down = gears_Locked_Down_partial;
      outC->gears_Maneuvring = gears_Maneuvring_partial;
      outC->State_Machine_Extend_Gear_state_nxt =
        State_Machine_Extend_Gear_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _277_State_Machine_Extend_Gear_reset_sel =
    outC->_8_State_Machine_Extend_Gear_reset_nxt;
  /* State_Machine_Extend_Gear: */
  switch (outC->_10_State_Machine_Extend_Gear_state_act) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _209_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _210_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _199_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _200_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _189_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _190_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _179_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _180_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _169_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _170_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _159_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _160_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _149_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _150_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _139_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _140_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _129_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _130_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _119_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _120_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _109_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _110_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _99_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _100_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _89_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _90_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _79_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _80_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _69_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _70_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _59_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _60_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _49_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _50_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _39_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _40_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _29_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _30_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _19_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _20_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        _9_State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        _10_State_Machine_Extend_Gear_fired_partial;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      outC->_8_State_Machine_Extend_Gear_reset_nxt =
        State_Machine_Extend_Gear_reset_nxt_partial;
      outC->_11_State_Machine_Extend_Gear_fired =
        State_Machine_Extend_Gear_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* State_Machine_Extend_Gear: */
  switch (outC->_9_State_Machine_Extend_Gear_state_sel) {
    case SSM_st_WAITING_DOWN_State_Machine_Extend_Gear :
      _275_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_WAITING_DOWN_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _275_State_Machine_Extend_Gear_reset_act_partial;
      outC->init7 = kcg_false;
      break;
    case SSM_st_WAITING_TO_UP_State_Machine_Extend_Gear :
      _272_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_WAITING_TO_UP_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _272_State_Machine_Extend_Gear_reset_act_partial;
      outC->init6 = kcg_false;
      break;
    case SSM_st_INTERRUPTION_DOWN_State_Machine_Extend_Gear :
      _269_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_INTERRUPTION_DOWN_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _269_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_INTERRUPTION_TO_UP_State_Machine_Extend_Gear :
      _266_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_INTERRUPTION_TO_UP_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _266_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_GENERAL_EV_OFF1_State_Machine_Extend_Gear :
      _263_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_GENERAL_EV_OFF1_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _263_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_RETRAIT_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear) {
        _260_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _260_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_RETRAIT_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _260_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_RETRACT_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_RETRACT_EV_ON_State_Machine_Extend_Gear) {
        _257_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _257_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_RETRACT_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _257_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_CLOSE_EV_ON1_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear) {
        _254_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _254_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_CLOSE_EV_ON1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _254_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_OPEN_EV_ON1_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_ON1_State_Machine_Extend_Gear) {
        _251_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _251_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_OPEN_EV_ON1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _251_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_CLOSE_EV_OFF1_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear) {
        _248_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _248_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_CLOSE_EV_OFF1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _248_State_Machine_Extend_Gear_reset_act_partial;
      outC->init5 = kcg_false;
      break;
    case SSM_st_OPEN_EV_OFF1_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear) {
        _245_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _245_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_OPEN_EV_OFF1_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _245_State_Machine_Extend_Gear_reset_act_partial;
      outC->init4 = kcg_false;
      break;
    case SSM_st_GENERAL_EV_ON_State_Machine_Extend_Gear :
      _242_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_GENERAL_EV_ON_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _242_State_Machine_Extend_Gear_reset_act_partial;
      outC->init3 = kcg_false;
      break;
    case SSM_st_EXTENDED_DOWN_State_Machine_Extend_Gear :
      _239_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_EXTENDED_DOWN_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _239_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_GENERAL_EV_OFF_State_Machine_Extend_Gear :
      _236_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_GENERAL_EV_OFF_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _236_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_OPEN_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_OFF_State_Machine_Extend_Gear) {
        _233_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _233_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_OPEN_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _233_State_Machine_Extend_Gear_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_CLOSE_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear) {
        _230_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _230_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_CLOSE_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _230_State_Machine_Extend_Gear_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_CLOSE_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_CLOSE_EV_ON_State_Machine_Extend_Gear) {
        _227_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _227_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_CLOSE_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _227_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_EXTEND_EV_OFF_State_Machine_Extend_Gear :
      if (tr_1_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear) {
        _224_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _224_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_EXTEND_EV_OFF_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _224_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_EXTEND_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_EXTEND_EV_ON_State_Machine_Extend_Gear) {
        _221_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _221_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_EXTEND_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _221_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_OPEN_EV_ON_State_Machine_Extend_Gear :
      if (tr_1_guard_OPEN_EV_ON_State_Machine_Extend_Gear) {
        _218_State_Machine_Extend_Gear_reset_act_partial = kcg_true;
      }
      else {
        _218_State_Machine_Extend_Gear_reset_act_partial =
          tr_2_guard_OPEN_EV_ON_State_Machine_Extend_Gear;
      }
      outC->State_Machine_Extend_Gear_reset_act =
        _218_State_Machine_Extend_Gear_reset_act_partial;
      break;
    case SSM_st_GEN_EV_ON_State_Machine_Extend_Gear :
      _215_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_GEN_EV_ON_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _215_State_Machine_Extend_Gear_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_RETRACTED_UP_State_Machine_Extend_Gear :
      _212_State_Machine_Extend_Gear_reset_act_partial =
        tr_1_guard_RETRACTED_UP_State_Machine_Extend_Gear;
      outC->State_Machine_Extend_Gear_reset_act =
        _212_State_Machine_Extend_Gear_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Computing_Model_init(outC_Computing_Model *outC)
{
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L119 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L129 = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L131 = kcg_true;
  outC->_L132 = kcg_true;
  outC->_L133 = kcg_true;
  outC->_L134 = kcg_true;
  outC->_L135 = kcg_true;
  outC->_L136 = kcg_true;
  outC->_L137 = kcg_true;
  outC->_L138 = kcg_true;
  outC->_L139 = kcg_true;
  outC->_L140 = kcg_true;
  outC->all_gears_retracted = kcg_true;
  outC->all_doors_open = kcg_true;
  outC->all_doors_closed = kcg_true;
  outC->all_shock_absorber_false = kcg_true;
  outC->all_gears_extended = kcg_true;
  outC->_11_State_Machine_Extend_Gear_fired =
    SSM_TR_no_trans_State_Machine_Extend_Gear;
  outC->State_Machine_Extend_Gear_fired_strong =
    SSM_TR_no_trans_State_Machine_Extend_Gear;
  outC->_10_State_Machine_Extend_Gear_state_act =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
  outC->_9_State_Machine_Extend_Gear_state_sel =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
  outC->_L1_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->_L3_INTERRUPTION_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_true;
  outC->_L3_INTERRUPTION_TO_UP_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_GENERAL_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_RETRAIT_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_RETRACT_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_CLOSE_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_OPEN_EV_ON1_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_CLOSE_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_CLOSE_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_OPEN_EV_OFF1_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_GENERAL_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_EXTENDED_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->_L3_EXTENDED_DOWN_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_GENERAL_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_OPEN_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_CLOSE_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L3_CLOSE_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_CLOSE_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_EXTEND_EV_OFF_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_EXTEND_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_OPEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->_L2_OPEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->_L1_GEN_EV_ON_State_Machine_Extend_Gear = kcg_true;
  outC->v4_times_26_size = 0;
  outC->n_times_26_size = 0;
  outC->c_times_26_size = kcg_true;
  outC->o_times_26_size = kcg_true;
  outC->v4_times_25_size = 0;
  outC->n_times_25_size = 0;
  outC->c_times_25_size = kcg_true;
  outC->o_times_25_size = kcg_true;
  outC->v4_times_24_size = 0;
  outC->n_times_24_size = 0;
  outC->c_times_24_size = kcg_true;
  outC->o_times_24_size = kcg_true;
  outC->v4_times_20_size = 0;
  outC->n_times_20_size = 0;
  outC->c_times_20_size = kcg_true;
  outC->o_times_20_size = kcg_true;
  outC->v4_times_19_size = 0;
  outC->n_times_19_size = 0;
  outC->c_times_19_size = kcg_true;
  outC->o_times_19_size = kcg_true;
  outC->v4_times_21_size = 0;
  outC->n_times_21_size = 0;
  outC->c_times_21_size = kcg_true;
  outC->o_times_21_size = kcg_true;
  outC->v4_times_23_size = 0;
  outC->n_times_23_size = 0;
  outC->c_times_23_size = kcg_true;
  outC->o_times_23_size = kcg_true;
  outC->v4_times_22_size = 0;
  outC->n_times_22_size = 0;
  outC->c_times_22_size = kcg_true;
  outC->o_times_22_size = kcg_true;
  outC->v3_times_26_size = 0;
  outC->v3_times_25_size = 0;
  outC->v3_times_24_size = 0;
  outC->v3_times_20_size = 0;
  outC->v3_times_19_size = 0;
  outC->v3_times_21_size = 0;
  outC->v3_times_23_size = 0;
  outC->v3_times_22_size = 0;
  outC->init7 = kcg_true;
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->gears_Maneuvring = kcg_true;
  outC->gears_Locked_Down = kcg_true;
  outC->extend_EV = kcg_true;
  outC->retract_EV = kcg_true;
  outC->open_EV = kcg_true;
  outC->close_EV = kcg_true;
  outC->general_EV = kcg_true;
  outC->_8_State_Machine_Extend_Gear_reset_nxt = kcg_false;
  outC->State_Machine_Extend_Gear_reset_act = kcg_false;
  outC->State_Machine_Extend_Gear_state_nxt =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Computing_Model_reset(outC_Computing_Model *outC)
{
  outC->init7 = kcg_true;
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->_8_State_Machine_Extend_Gear_reset_nxt = kcg_false;
  outC->State_Machine_Extend_Gear_reset_act = kcg_false;
  outC->State_Machine_Extend_Gear_state_nxt =
    SSM_st_RETRACTED_UP_State_Machine_Extend_Gear;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Computing_Model/
  @8: (times#26)
  @7: (times#25)
  @6: (times#24)
  @5: (times#20)
  @4: (times#19)
  @3: (times#21)
  @2: (times#23)
  @1: (times#22)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i15) ***********
** Computing_Model.c
** Generation date: 2020-02-07T16:32:56
*************************************************************$ */

