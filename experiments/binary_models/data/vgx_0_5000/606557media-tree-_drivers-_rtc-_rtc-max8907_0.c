static int max8907_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
{
struct max8907_rtc *rtc = dev_get_drvdata(dev);
u8 regs[TIME_NUM];
int ret;

tm_to_regs(&alrm->time, regs);


ret = regmap_write(rtc->regmap, MAX8907_REG_ALARM0_CNTL, 0);
if (ret < 0)
return ret;

ret = regmap_bulk_write(rtc->regmap, MAX8907_REG_ALARM0_SEC, regs,
TIME_NUM);
if (ret < 0)
return ret;

if (alrm->enabled)
ret = regmap_write(rtc->regmap, MAX8907_REG_ALARM0_CNTL, 0x77);

return ret;
}

static const struct rtc_class_ops max8907_rtc_ops = {
.read_time	= max8907_rtc_read_time,
.set_time	= max8907_rtc_set_time,
.read_alarm	= max8907_rtc_read_alarm,
.set_alarm	= max8907_rtc_set_alarm,
};