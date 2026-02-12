static int stk17ta8_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
{
struct rtc_plat_data *pdata = dev_get_drvdata(dev);

if (pdata->irq <= 0)
return -EINVAL;
if (enabled)
pdata->irqen |= RTC_AF;
else
pdata->irqen &= ~RTC_AF;
stk17ta8_rtc_update_alarm(pdata);
return 0;
}

static const struct rtc_class_ops stk17ta8_rtc_ops = {
.read_time		= stk17ta8_rtc_read_time,
.set_time		= stk17ta8_rtc_set_time,
.read_alarm		= stk17ta8_rtc_read_alarm,
.set_alarm		= stk17ta8_rtc_set_alarm,
.alarm_irq_enable	= stk17ta8_rtc_alarm_irq_enable,
};