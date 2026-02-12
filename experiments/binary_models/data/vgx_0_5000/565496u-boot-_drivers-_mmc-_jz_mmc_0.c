static int jz_mmc_core_init(struct mmc *mmc)
{
struct jz_mmc_priv *priv = mmc->priv;
int ret;


writel(MSC_STRPCL_RESET, priv->regs + MSC_STRPCL);
ret = wait_for_bit_le32(priv->regs + MSC_STAT,
MSC_STAT_IS_RESETTING, false, 10000, false);
if (ret)
return ret;


writel(0xffff, priv->regs + MSC_RESTO);
writel(0xffffffff, priv->regs + MSC_RDTO);


writel(0x1, priv->regs + MSC_LPM);

return 0;
}