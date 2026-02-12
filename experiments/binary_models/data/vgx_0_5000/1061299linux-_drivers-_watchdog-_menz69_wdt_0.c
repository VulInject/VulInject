static int men_z069_wdt_set_timeout(struct watchdog_device *wdt,
unsigned int timeout)
{
struct men_z069_drv *drv = watchdog_get_drvdata(wdt);
u16 reg, val, ena;

wdt->timeout = timeout;
val = timeout * MEN_Z069_TIMER_FREQ;

reg = readw(drv->base + MEN_Z069_WVR);
ena = reg & MEN_Z069_WTR_WDEN;
reg = ena | val;
writew(reg, drv->base + MEN_Z069_WTR);

return 0;
}

static const struct watchdog_info men_z069_info = {
.options = WDIOF_SETTIMEOUT | WDIOF_KEEPALIVEPING | WDIOF_MAGICCLOSE,
.identity = "MEN z069 Watchdog",
};