static int rockchip_i2s_init(struct i2s_uc_priv *priv)
{
struct rk_i2s_regs *regs = (struct rk_i2s_regs *)priv->base_address;
u32 bps = priv->bitspersample;
u32 lrf = priv->rfs;
u32 chn = priv->channels;
u32 mode = 0;

clrbits_le32(&regs->xfer, I2S_TX_TRAN_BIT);
mode = readl(&regs->txcr) & ~0x1f;
switch (priv->bitspersample) {
case 16:
case 24:
mode |= (priv->bitspersample - 1) << I2S_DATA_WIDTH_SHIFT;
break;
default:
log_err("Invalid sample size input %d\n", priv->bitspersample);
return -EINVAL;
}
writel(mode, &regs->txcr);

mode = readl(&regs->ckr) & ~I2S_MCLK_DIV_MASK;
mode |= (lrf / (bps * chn) - 1) << I2S_MCLK_DIV_SHIFT;

mode &= ~I2S_TX_SCLK_DIV_MASK;
mode |= (priv->bitspersample * priv->channels - 1) <<
I2S_TX_SCLK_DIV_SHIFT;
writel(mode, &regs->ckr);

return 0;
}