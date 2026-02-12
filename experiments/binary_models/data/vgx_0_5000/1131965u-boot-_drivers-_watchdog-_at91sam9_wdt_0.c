* write to this register. Inform Linux to it too
*/


DECLARE_GLOBAL_DATA_PTR;




static int at91_wdt_start(struct udevice *dev, u64 timeout_ms, ulong flags)
{
struct at91_wdt_priv *priv = dev_get_priv(dev);
u64 timeout;
u32 ticks;


timeout = timeout_ms;
do_div(timeout, 1000);
timeout = min_t(u64, timeout, WDT_MAX_TIMEOUT);
ticks = WDT_SEC2TICKS(timeout);


if (readl(priv->regs + AT91_WDT_MR) & AT91_WDT_MR_WDDIS) {
printf("sorry, watchdog is disabled\n");
return -1;
}


priv->regval = AT91_WDT_MR_WDRSTEN	
| AT91_WDT_MR_WDDBGHLT		
| AT91_WDT_MR_WDD(0xfff)	
| AT91_WDT_MR_WDV(ticks);	
writel(priv->regval, priv->regs + AT91_WDT_MR);

return 0;
}