static int esdhc_set_ios_common(struct fsl_esdhc_priv *priv, struct mmc *mmc)
{
struct fsl_esdhc *regs = priv->esdhc_regs;
int ret;

if (priv->is_sdhc_per_clk) {

esdhc_clock_control(priv, false);
esdhc_setbits32(&regs->esdhcctl, ESDHCCTL_PCS);
esdhc_clock_control(priv, true);
}

if (mmc->selected_mode == MMC_HS_400)
esdhc_tuning_block_enable(priv, true);


if (priv->clock != mmc->clock)
set_sysctl(priv, mmc, mmc->clock);


ret = esdhc_set_timing(priv, mmc->selected_mode);
if (ret)
return ret;


esdhc_clrbits32(&regs->proctl, PROCTL_DTW_4 | PROCTL_DTW_8);

if (mmc->bus_width == 4)
esdhc_setbits32(&regs->proctl, PROCTL_DTW_4);
else if (mmc->bus_width == 8)
esdhc_setbits32(&regs->proctl, PROCTL_DTW_8);

return 0;
}