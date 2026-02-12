static int sdmmc_dlyb_lng_tuning(struct mmci_host *host)
{
struct sdmmc_dlyb *dlyb = host->variant_priv;
u32 cfgr;
int i, lng, ret;

for (i = 0; i <= DLYB_CFGR_UNIT_MAX; i++) {
sdmmc_dlyb_set_cfgr(dlyb, i, DLYB_CFGR_SEL_MAX, true);

ret = readl_relaxed_poll_timeout(dlyb->base + DLYB_CFGR, cfgr,
(cfgr & DLYB_CFGR_LNGF),
1, DLYB_LNG_TIMEOUT_US);
if (ret) {
dev_warn(mmc_dev(host->mmc),
"delay line cfg timeout unit:%d cfgr:%d\n",
i, cfgr);
continue;
}

lng = FIELD_GET(DLYB_CFGR_LNG_MASK, cfgr);
if (lng < BIT(DLYB_NB_DELAY) && lng > 0)
break;
}

if (i > DLYB_CFGR_UNIT_MAX)
return -EINVAL;

dlyb->unit = i;
dlyb->max = __fls(lng);

return 0;
}