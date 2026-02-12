static int imx7ulp_wdt_enable(struct watchdog_device *wdog, bool enable)
{
struct imx7ulp_wdt_device *wdt = watchdog_get_drvdata(wdog);
int ret;
u32 val;
u32 loop = RETRY_MAX;

do {
ret = _imx7ulp_wdt_enable(wdt, enable);
val = readl(wdt->base + WDOG_CS);
} while (--loop > 0 && ((!!(val & WDOG_CS_EN)) != enable || ret));

if (loop == 0)
return -EBUSY;

return ret;
}