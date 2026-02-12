static void rtw_coex_action_coex_all_off(struct rtw_dev *rtwdev)
{
const struct rtw_chip_info *chip = rtwdev->chip;
struct rtw_efuse *efuse = &rtwdev->efuse;
u8 table_case, tdma_case;

rtw_dbg(rtwdev, RTW_DBG_COEX, "[BTCoex], %s()\n", __func__);
rtw_coex_set_rf_para(rtwdev, chip->wl_rf_para_rx[0]);

if (efuse->share_ant) {

table_case = 2;
tdma_case = 0;
} else {

table_case = 100;
tdma_case = 100;
}

rtw_coex_table(rtwdev, false, table_case);
rtw_coex_tdma(rtwdev, false, tdma_case);
}