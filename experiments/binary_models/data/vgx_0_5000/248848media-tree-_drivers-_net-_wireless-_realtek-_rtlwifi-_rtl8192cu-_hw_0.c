static void _rtl92cu_read_board_type(struct ieee80211_hw *hw, u8 *contents)
{
struct rtl_efuse *rtlefuse = rtl_efuse(rtl_priv(hw));
struct rtl_hal *rtlhal = rtl_hal(rtl_priv(hw));
u8 boardType;

if (IS_NORMAL_CHIP(rtlhal->version)) {
boardType = ((contents[EEPROM_RF_OPT1]) &
BOARD_TYPE_NORMAL_MASK) >> 5; 
} else {
boardType = contents[EEPROM_RF_OPT4];
boardType &= BOARD_TYPE_TEST_MASK;
}
rtlefuse->board_type = boardType;
if (IS_HIGHT_PA(rtlefuse->board_type))
rtlefuse->external_pa = 1;
pr_info("Board Type %x\n", rtlefuse->board_type);
}