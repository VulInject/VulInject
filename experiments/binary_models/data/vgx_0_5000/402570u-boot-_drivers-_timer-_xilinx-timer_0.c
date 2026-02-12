static int xilinx_timer_probe(struct udevice *dev)
{
struct xilinx_timer_priv *priv = dev_get_priv(dev);
int ret;


ret = regmap_init_mem(dev_ofnode(dev), &priv->regs);
if (ret) {
dev_dbg(dev, "failed to get regbase of timer\n");
return ret;
}

regmap_write(priv->regs, TIMER_LOADREG_OFFSET, 0);
regmap_write(priv->regs, TIMER_CONTROL_OFFSET, TIMER_RESET);
regmap_write(priv->regs, TIMER_CONTROL_OFFSET,
TIMER_ENABLE | TIMER_RELOAD);

return 0;
}

static const struct timer_ops xilinx_timer_ops = {
.get_count = xilinx_timer_get_count,
};