static int dw_wdt_restart(struct watchdog_device *wdd,
unsigned long action, void *data)
{
struct dw_wdt *dw_wdt = to_dw_wdt(wdd);
u32 val;

writel(0, dw_wdt->regs + WDOG_TIMEOUT_RANGE_REG_OFFSET);
val = readl(dw_wdt->regs + WDOG_CONTROL_REG_OFFSET);
if (val & WDOG_CONTROL_REG_WDT_EN_MASK)
writel(WDOG_COUNTER_RESTART_KICK_VALUE,
dw_wdt->regs + WDOG_COUNTER_RESTART_REG_OFFSET);
else
writel(WDOG_CONTROL_REG_WDT_EN_MASK,
dw_wdt->regs + WDOG_CONTROL_REG_OFFSET);


mdelay(500);

return 0;
}