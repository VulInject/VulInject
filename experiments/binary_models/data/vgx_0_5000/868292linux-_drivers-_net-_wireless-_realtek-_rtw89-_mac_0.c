}
EXPORT_SYMBOL(rtw89_mac_write_xtal_si);

int rtw89_mac_read_xtal_si(struct rtw89_dev *rtwdev, u8 offset, u8 *val)
{
u32 val32;
int ret;

val32 = FIELD_PREP(B_AX_WL_XTAL_SI_ADDR_MASK, offset) |
FIELD_PREP(B_AX_WL_XTAL_SI_DATA_MASK, 0x00) |
FIELD_PREP(B_AX_WL_XTAL_SI_BITMASK_MASK, 0x00) |
FIELD_PREP(B_AX_WL_XTAL_SI_MODE_MASK, XTAL_SI_NORMAL_READ) |
FIELD_PREP(B_AX_WL_XTAL_SI_CMD_POLL, 1);
rtw89_write32(rtwdev, R_AX_WLAN_XTAL_SI_CTRL, val32);

ret = read_poll_timeout(rtw89_read32, val32, !(val32 & B_AX_WL_XTAL_SI_CMD_POLL),
50, 50000, false, rtwdev, R_AX_WLAN_XTAL_SI_CTRL);
if (ret) {
rtw89_warn(rtwdev, "xtal si not ready(R): offset=%x\n", offset);
return ret;
}

*val = rtw89_read8(rtwdev, R_AX_WLAN_XTAL_SI_CTRL + 1);

return 0;
}