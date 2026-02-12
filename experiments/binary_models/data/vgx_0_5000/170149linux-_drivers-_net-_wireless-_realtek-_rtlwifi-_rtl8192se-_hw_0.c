void rtl92se_enable_hw_security_config(struct ieee80211_hw *hw)
{
struct rtl_priv *rtlpriv = rtl_priv(hw);
u8 sec_reg_value = 0x0;

rtl_dbg(rtlpriv, COMP_INIT, DBG_LOUD,
"PairwiseEncAlgorithm = %d GroupEncAlgorithm = %d\n",
rtlpriv->sec.pairwise_enc_algorithm,
rtlpriv->sec.group_enc_algorithm);

if (rtlpriv->cfg->mod_params->sw_crypto || rtlpriv->sec.use_sw_sec) {
rtl_dbg(rtlpriv, COMP_SEC, DBG_DMESG,
"not open hw encryption\n");
return;
}

sec_reg_value = SCR_TXENCENABLE | SCR_RXENCENABLE;

if (rtlpriv->sec.use_defaultkey) {
sec_reg_value |= SCR_TXUSEDK;
sec_reg_value |= SCR_RXUSEDK;
}

rtl_dbg(rtlpriv, COMP_SEC, DBG_LOUD, "The SECR-value %x\n",
sec_reg_value);

rtlpriv->cfg->ops->set_hw_reg(hw, HW_VAR_WPA_CONFIG, &sec_reg_value);

}