static int rtw89_phy_ccx_racing_ctrl(struct rtw89_dev *rtwdev,
enum rtw89_env_racing_lv level)
{
struct rtw89_env_monitor_info *env = &rtwdev->env_monitor;
int ret = 0;

if (level >= RTW89_RAC_MAX_NUM) {
rtw89_debug(rtwdev, RTW89_DBG_PHY_TRACK,
"[WARNING] Wrong LV=%d\n", level);
return -EINVAL;
}

rtw89_debug(rtwdev, RTW89_DBG_PHY_TRACK,
"ccx_ongoing=%d, level:(%d)->(%d)\n", env->ccx_ongoing,
env->ccx_rac_lv, level);

if (env->ccx_ongoing) {
if (level <= env->ccx_rac_lv)
ret = -EINVAL;
else
env->ccx_ongoing = false;
}

if (ret == 0)
env->ccx_rac_lv = level;

rtw89_debug(rtwdev, RTW89_DBG_PHY_TRACK, "ccx racing success=%d\n",
!ret);

return ret;
}