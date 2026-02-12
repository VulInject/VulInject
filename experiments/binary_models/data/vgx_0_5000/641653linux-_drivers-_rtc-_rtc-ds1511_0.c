static int
ds1511_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
{
struct rtc_plat_data *pdata = dev_get_drvdata(dev);

if (pdata->irq <= 0)
return -EINVAL;

pdata->alrm_mday = alrm->time.tm_mday;
pdata->alrm_hour = alrm->time.tm_hour;
pdata->alrm_min = alrm->time.tm_min;
pdata->alrm_sec = alrm->time.tm_sec;
if (alrm->enabled)
pdata->irqen |= RTC_AF;

ds1511_rtc_update_alarm(pdata);
return 0;
}