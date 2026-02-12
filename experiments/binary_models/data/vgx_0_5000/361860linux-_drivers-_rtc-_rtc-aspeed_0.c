static int aspeed_rtc_read_time(struct device *dev, struct rtc_time *tm)
{
struct aspeed_rtc *rtc = dev_get_drvdata(dev);
unsigned int cent, year;
u32 reg1, reg2;

if (!(readl(rtc->base + RTC_CTRL) & RTC_ENABLE)) {
dev_dbg(dev, "%s failing as rtc disabled\n", __func__);
return -EINVAL;
}

do {
reg2 = readl(rtc->base + RTC_YEAR);
reg1 = readl(rtc->base + RTC_TIME);
} while (reg2 != readl(rtc->base + RTC_YEAR));

tm->tm_mday = (reg1 >> 24) & 0x1f;
tm->tm_hour = (reg1 >> 16) & 0x1f;
tm->tm_min = (reg1 >> 8) & 0x3f;
tm->tm_sec = (reg1 >> 0) & 0x3f;

cent = (reg2 >> 16) & 0x1f;
year = (reg2 >> 8) & 0x7f;
tm->tm_mon = ((reg2 >>  0) & 0x0f) - 1;
tm->tm_year = year + (cent * 100) - 1900;

dev_dbg(dev, "%s %ptR", __func__, tm);

return 0;
}