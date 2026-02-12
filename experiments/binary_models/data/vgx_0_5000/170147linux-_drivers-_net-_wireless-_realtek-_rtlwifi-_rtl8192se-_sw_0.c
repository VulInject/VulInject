static void rtl92se_fw_cb(const struct firmware *firmware, void *context)
{
struct ieee80211_hw *hw = context;
struct rtl_priv *rtlpriv = rtl_priv(hw);
struct rt_firmware *pfirmware = NULL;
char *fw_name = "rtlwifi/rtl8192sefw.bin";

rtl_dbg(rtlpriv, COMP_ERR, DBG_LOUD,
"Firmware callback routine entered!\n");
complete(&rtlpriv->firmware_loading_complete);
if (!firmware) {
pr_err("Firmware %s not available\n", fw_name);
rtlpriv->max_fw_size = 0;
return;
}
if (firmware->size > rtlpriv->max_fw_size) {
pr_err("Firmware is too big!\n");
rtlpriv->max_fw_size = 0;
release_firmware(firmware);
return;
}
pfirmware = (struct rt_firmware *)rtlpriv->rtlhal.pfirmware;
memcpy(pfirmware->sz_fw_tmpbuffer, firmware->data, firmware->size);
pfirmware->sz_fw_tmpbufferlen = firmware->size;
release_firmware(firmware);
}