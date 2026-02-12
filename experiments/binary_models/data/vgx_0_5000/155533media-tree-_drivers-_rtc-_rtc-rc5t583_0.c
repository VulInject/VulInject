static irqreturn_t rc5t583_rtc_interrupt(int irq, void *rtc)
{
struct device *dev = rtc;
struct rc5t583 *rc5t583 = dev_get_drvdata(dev->parent);
struct rc5t583_rtc *rc5t583_rtc = dev_get_drvdata(dev);
unsigned long events = 0;
int ret;
u32 rtc_reg;

ret = regmap_read(rc5t583->regmap, RC5T583_RTC_CTL2, &rtc_reg);
if (ret < 0)
return IRQ_NONE;

if (rtc_reg & GET_YAL_STATUS) {
events = RTC_IRQF | RTC_AF;

rtc_reg &= ~GET_YAL_STATUS;
}

ret = regmap_write(rc5t583->regmap, RC5T583_RTC_CTL2, rtc_reg);
if (ret)
return IRQ_NONE;


rtc_update_irq(rc5t583_rtc->rtc, 1, events);

return IRQ_HANDLED;
}

static const struct rtc_class_ops rc5t583_rtc_ops = {
.read_time	= rc5t583_rtc_read_time,
.set_time	= rc5t583_rtc_set_time,
.read_alarm	= rc5t583_rtc_read_alarm,
.set_alarm	= rc5t583_rtc_set_alarm,
.alarm_irq_enable = rc5t583_rtc_alarm_irq_enable,
};