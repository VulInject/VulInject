static int sirfsoc_rtc_suspend(struct device *dev)
{
struct sirfsoc_rtc_drv *rtcdrv = dev_get_drvdata(dev);
rtcdrv->overflow_rtc =
sirfsoc_rtc_readl(rtcdrv, RTC_SW_VALUE);

rtcdrv->saved_counter =
sirfsoc_rtc_readl(rtcdrv, RTC_CN);
rtcdrv->saved_overflow_rtc = rtcdrv->overflow_rtc;
if (device_may_wakeup(dev) && !enable_irq_wake(rtcdrv->irq))
rtcdrv->irq_wake = 1;

return 0;
}