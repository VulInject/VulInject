static int set_reset_mode(struct net_device *dev)
{
struct sun4ican_priv *priv = netdev_priv(dev);
int retry = SUN4I_MODE_MAX_RETRIES;
u32 mod_reg_val = 0;

do {
mod_reg_val = readl(priv->base + SUN4I_REG_MSEL_ADDR);
mod_reg_val |= SUN4I_MSEL_RESET_MODE;
writel(mod_reg_val, priv->base + SUN4I_REG_MSEL_ADDR);
} while (retry-- && !(mod_reg_val & SUN4I_MSEL_RESET_MODE));

if (!(readl(priv->base + SUN4I_REG_MSEL_ADDR) &
SUN4I_MSEL_RESET_MODE)) {
netdev_err(dev, "setting controller into reset mode failed!\n");
return -ETIMEDOUT;
}

return 0;
}