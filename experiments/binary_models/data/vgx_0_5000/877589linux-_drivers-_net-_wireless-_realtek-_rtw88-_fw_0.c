void rtw_fw_adaptivity(struct rtw_dev *rtwdev)
{
struct rtw_dm_info *dm_info = &rtwdev->dm_info;
u8 h2c_pkt[H2C_PKT_SIZE] = {0};

if (!rtw_edcca_enabled) {
dm_info->edcca_mode = RTW_EDCCA_NORMAL;
rtw_dbg(rtwdev, RTW_DBG_ADAPTIVITY,
"EDCCA disabled by debugfs\n");
}

SET_H2C_CMD_ID_CLASS(h2c_pkt, H2C_CMD_ADAPTIVITY);
SET_ADAPTIVITY_MODE(h2c_pkt, dm_info->edcca_mode);
SET_ADAPTIVITY_OPTION(h2c_pkt, 1);
SET_ADAPTIVITY_IGI(h2c_pkt, dm_info->igi_history[0]);
SET_ADAPTIVITY_L2H(h2c_pkt, dm_info->l2h_th_ini);
SET_ADAPTIVITY_DENSITY(h2c_pkt, dm_info->scan_density);

rtw_fw_send_h2c_command(rtwdev, h2c_pkt);
}