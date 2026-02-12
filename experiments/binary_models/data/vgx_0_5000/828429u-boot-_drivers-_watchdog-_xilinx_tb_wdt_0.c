static int xlnx_wdt_stop(struct udevice *dev)
{
u32 reg;
struct xlnx_wdt_plat *plat = dev_get_plat(dev);

if (plat->enable_once) {
debug("Can't stop Xilinx watchdog.\n");
return -EBUSY;
}


reg = readl(&plat->regs->twcsr0);

writel(reg & ~XWT_CSR0_EWDT1_MASK, &plat->regs->twcsr0);
writel(~XWT_CSRX_EWDT2_MASK, &plat->regs->twcsr1);

debug("Watchdog disabled!\n");

return 0;
}