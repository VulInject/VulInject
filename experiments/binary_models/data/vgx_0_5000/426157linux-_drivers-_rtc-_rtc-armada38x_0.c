static int armada38x_rtc_set_offset(struct device *dev, long offset)
{
struct armada38x_rtc *rtc = dev_get_drvdata(dev);
unsigned long ccr = 0;
long ppb_cor, off;


offset = clamp(offset, -484270L, 488558L);

ppb_cor = armada38x_ppb_convert(offset);


off = DIV_ROUND_CLOSEST(ppb_cor, 954);
if (off > 127 || off < -128) {
ccr = RTC_CCR_MODE;
off = DIV_ROUND_CLOSEST(ppb_cor, 3815);
}


ccr |= (off & 0x3fff) ^ 0x2000;
rtc_delayed_write(ccr, rtc, RTC_CCR);

return 0;
}

static const struct rtc_class_ops armada38x_rtc_ops = {
.read_time = armada38x_rtc_read_time,
.set_time = armada38x_rtc_set_time,
.read_alarm = armada38x_rtc_read_alarm,
.set_alarm = armada38x_rtc_set_alarm,
.alarm_irq_enable = armada38x_rtc_alarm_irq_enable,
.read_offset = armada38x_rtc_read_offset,
.set_offset = armada38x_rtc_set_offset,
};