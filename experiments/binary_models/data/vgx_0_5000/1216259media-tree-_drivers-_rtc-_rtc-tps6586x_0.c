static int tps6586x_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
{
struct tps6586x_rtc *rtc = dev_get_drvdata(dev);
struct device *tps_dev = to_tps6586x_dev(dev);
unsigned long ticks;
unsigned long seconds;
u8 buff[3];
int ret;

ret = tps6586x_reads(tps_dev, RTC_ALARM1_HI, sizeof(buff), buff);
if (ret) {
dev_err(dev, "read RTC_ALARM1_HI failed with err %d\n", ret);
return ret;
}

ticks = (buff[0] << 16) | (buff[1] << 8) | buff[2];
seconds = ticks >> 10;
seconds += rtc->epoch_start;

rtc_time_to_tm(seconds, &alrm->time);
return 0;
}

static const struct rtc_class_ops tps6586x_rtc_ops = {
.read_time	= tps6586x_rtc_read_time,
.set_time	= tps6586x_rtc_set_time,
.set_alarm	= tps6586x_rtc_set_alarm,
.read_alarm	= tps6586x_rtc_read_alarm,
.alarm_irq_enable = tps6586x_rtc_alarm_irq_enable,
};