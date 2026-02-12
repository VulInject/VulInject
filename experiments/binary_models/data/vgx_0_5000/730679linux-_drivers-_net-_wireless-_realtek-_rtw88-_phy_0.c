}
EXPORT_SYMBOL(rtw_phy_pwrtrack_need_iqk);

static void rtw_phy_set_tx_path_by_reg(struct rtw_dev *rtwdev,
enum rtw_bb_path tx_path_sel_1ss)
{
struct rtw_path_div *path_div = &rtwdev->dm_path_div;
enum rtw_bb_path tx_path_sel_cck = tx_path_sel_1ss;
const struct rtw_chip_info *chip = rtwdev->chip;

if (tx_path_sel_1ss == path_div->current_tx_path)
return;

path_div->current_tx_path = tx_path_sel_1ss;
rtw_dbg(rtwdev, RTW_DBG_PATH_DIV, "Switch TX path=%s\n",
tx_path_sel_1ss == BB_PATH_A ? "A" : "B");
chip->ops->config_tx_path(rtwdev, rtwdev->hal.antenna_tx,
tx_path_sel_1ss, tx_path_sel_cck, false);
}