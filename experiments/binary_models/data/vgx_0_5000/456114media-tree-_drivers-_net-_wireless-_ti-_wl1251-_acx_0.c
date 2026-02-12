int wl1251_acx_ac_cfg(struct wl1251 *wl, u8 ac, u8 cw_min, u16 cw_max,
u8 aifs, u16 txop)
{
struct wl1251_acx_ac_cfg *acx;
int ret = 0;

wl1251_debug(DEBUG_ACX, "acx ac cfg %d cw_ming %d cw_max %d "
"aifs %d txop %d", ac, cw_min, cw_max, aifs, txop);

acx = kzalloc(sizeof(*acx), GFP_KERNEL);
if (!acx)
return -ENOMEM;

acx->ac = ac;
acx->cw_min = cw_min;
acx->cw_max = cw_max;
acx->aifsn = aifs;
acx->txop_limit = txop;

ret = wl1251_cmd_configure(wl, ACX_AC_CFG, acx, sizeof(*acx));
if (ret < 0) {
wl1251_warning("acx ac cfg failed: %d", ret);
goto out;
}

out:
kfree(acx);
return ret;
}