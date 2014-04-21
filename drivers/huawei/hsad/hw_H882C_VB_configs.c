/*The file is auto generated by tools, don't modify it manully.*/
#include <hsad/config_interface.h>
#include "hwconfig_enum.h"

config_pair  hw_H882C_VB_configs [] = {
    {"audio/aud_param_ver", (const unsigned int)(unsigned int*)"H882L_VB_audio_C03", E_CONFIG_DATA_TYPE_STRING }, 
    {"audio/board_id", (const unsigned int)(unsigned int*)"H882C_VB", E_CONFIG_DATA_TYPE_STRING }, 
    {"audio/enhance_type", (unsigned int)AUDIO_ENHANCE_DTS, E_CONFIG_DATA_TYPE_ENUM }, 
    {"audio/mic_type", (unsigned int)DUAL_MIC, E_CONFIG_DATA_TYPE_ENUM }, 
    {"battery/R_110", (const unsigned int)(unsigned int*)"HB4W1H_Maxell", E_CONFIG_DATA_TYPE_STRING }, 
    {"battery/R_200", (const unsigned int)(unsigned int*)"HB4W1H_SDI", E_CONFIG_DATA_TYPE_STRING }, 
    {"bt/device_type", (unsigned int)BT_FM_QUALCOMM_WCN3660, E_CONFIG_DATA_TYPE_ENUM }, 
    {"bt/product_id", (const unsigned int)(unsigned int*)"H882C_VB", E_CONFIG_DATA_TYPE_STRING }, 
    {"charge/MPP5LMT", (unsigned int)1, E_CONFIG_DATA_TYPE_BOOL }, 
    {"charge/STD", (const unsigned int)(unsigned int*)"others", E_CONFIG_DATA_TYPE_STRING }, 
    {"ds/sim_card_num", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"flash/support", (unsigned int)1, E_CONFIG_DATA_TYPE_BOOL }, 
    {"fm/fm_sinr", (unsigned int)FM_SINR_7, E_CONFIG_DATA_TYPE_ENUM }, 
    {"fm/fm_type", (unsigned int)FM_QUALCOMM, E_CONFIG_DATA_TYPE_ENUM }, 
    {"i2c/aps", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/audience", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/battery", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/camera_main", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/camera_slave", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/charge", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/compass", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/dc_dc", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/flash", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/g_sensor", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/gyroscope", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/keypad", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/l_sensor", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/mhl", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/nfc", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/ntc", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/ofn", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/speaker", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"i2c/touch_panel", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/default_wled_max_current", (unsigned int)24, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/id0", (const unsigned int)(unsigned int*)"mipi_nt35510_chimei_wvga", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/id1", (const unsigned int)(unsigned int*)"mipi_hx8369a_tianma_wvga", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/id4", (const unsigned int)(unsigned int*)"mipi_nt35510_boe6_wvga", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/id5", (const unsigned int)(unsigned int*)"mipi_nt35510_boe_wvga", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/idA", (const unsigned int)(unsigned int*)"mipi_hx8369a_tianma_wvga", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/id_0_wled_max_current", (unsigned int)24, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/id_4_wled_max_current", (unsigned int)23, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/resolution", (unsigned int)LCD_IS_WVGA, E_CONFIG_DATA_TYPE_ENUM }, 
    {"product/name", (const unsigned int)(unsigned int*)"H882L", E_CONFIG_DATA_TYPE_STRING }, 
    {"sdcard/trigger_type", (unsigned int)FALL_TRIGGER, E_CONFIG_DATA_TYPE_ENUM }, 
    {"sensors/compass_pos_name", (unsigned int)COMPASS_TOP_GS_TOP, E_CONFIG_DATA_TYPE_ENUM }, 
    {"sensors/light_lux", (const unsigned int)(unsigned int*)"16_28_110_450_800_1300_3000", E_CONFIG_DATA_TYPE_STRING }, 
    {"sensors/name_list", (const unsigned int)(unsigned int*)"G_L_P_M_GY_SENSORS", E_CONFIG_DATA_TYPE_STRING }, 
    {"sensors/px_wave", (unsigned int)90, E_CONFIG_DATA_TYPE_INT }, 
    {"sensors/px_window", (unsigned int)170, E_CONFIG_DATA_TYPE_INT }, 
    {"tp/product_family", (const unsigned int)(unsigned int*)"Y300", E_CONFIG_DATA_TYPE_STRING }, 
    {"tp/resolution", (const unsigned int)(unsigned int*)"WVGA", E_CONFIG_DATA_TYPE_STRING }, 
    {"tp/type", (const unsigned int)(unsigned int*)"COB", E_CONFIG_DATA_TYPE_STRING }, 
    {"tp/virtualkeys", (const unsigned int)(unsigned int*)"BACK_HOME_MENU", E_CONFIG_DATA_TYPE_STRING }, 
    {"vibrator/level_mV", (unsigned int)2700, E_CONFIG_DATA_TYPE_INT }, 
    {"wifi/clock_type", (unsigned int)CLOCK_19P2M_INTERNAL, E_CONFIG_DATA_TYPE_ENUM }, 
    {"wifi/device_type", (unsigned int)WIFI_QUALCOMM_WCN3660, E_CONFIG_DATA_TYPE_ENUM }, 
    {"wifi/pubfile_id", (const unsigned int)(unsigned int*)"MSM8930_H882L", E_CONFIG_DATA_TYPE_STRING }, 
    {0, 0, 0}
 };
struct board_id_general_struct config_common_H882C_VB= {
	.name=COMMON_MODULE_NAME,
	.board_id=BOARD_ID_H882C_VB,
	.data_array={.config_pair_ptr=hw_H882C_VB_configs},
	.list={NULL,NULL},
};
