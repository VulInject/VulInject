u32 rtl92cu_phy_query_rf_reg(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 regaddr, u32 bitmask)
{
struct rtl_priv *rtlpriv = rtl_priv(hw);
u32 original_value, readback_value, bitshift;
struct rtl_phy *rtlphy = &(rtlpriv->phy);

RT_TRACE(rtlpriv, COMP_RF, DBG_TRACE,
"regaddr(%#x), rfpath(%#x), bitmask(%#x)\n",
regaddr, rfpath, bitmask);
if (rtlphy->rf_mode != RF_OP_BY_FW) {
original_value = _rtl92c_phy_rf_serial_read(hw,
rfpath, regaddr);
} else {
original_value = _rtl92c_phy_fw_rf_serial_read(hw,
rfpath, regaddr);
}
bitshift = _rtl92c_phy_calculate_bit_shift(bitmask);
readback_value = (original_value & bitmask) >> bitshift;
RT_TRACE(rtlpriv, COMP_RF, DBG_TRACE,
"regaddr(%#x), rfpath(%#x), bitmask(%#x), original_value(%#x)\n",
regaddr, rfpath, bitmask, original_value);
return readback_value;
}