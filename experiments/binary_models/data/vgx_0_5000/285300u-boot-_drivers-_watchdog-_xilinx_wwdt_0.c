static int xlnx_wwdt_stop(struct udevice *dev)
{
struct xlnx_wwdt_priv *wdt = dev_get_priv(dev);

if (wdt->enable_once) {
dev_warn(dev, "Can't stop Xilinx watchdog.\n");
return -EBUSY;
}


regmap_write(wdt->regs, XWT_WWDT_MWR_OFFSET, XWT_WWDT_MWR_MASK);
regmap_write(wdt->regs, XWT_WWDT_ESR_OFFSET, ~(u32)XWT_WWDT_ESR_WEN_MASK);

clk_disable(&wdt->clk);

dev_dbg(dev, "Watchdog disabled!\n");

return 0;
}