static int sd3078_rtc_set_time(struct device *dev, struct rtc_time *tm)
{
unsigned char rtc_data[NUM_TIME_REGS];
struct i2c_client *client = to_i2c_client(dev);
struct sd3078 *sd3078 = i2c_get_clientdata(client);
int ret;

rtc_data[SD3078_REG_SC] = bin2bcd(tm->tm_sec);
rtc_data[SD3078_REG_MN] = bin2bcd(tm->tm_min);
rtc_data[SD3078_REG_HR] = bin2bcd(tm->tm_hour) | 0x80;
rtc_data[SD3078_REG_DM] = bin2bcd(tm->tm_mday);
rtc_data[SD3078_REG_DW] = tm->tm_wday & 0x07;
rtc_data[SD3078_REG_MO] = bin2bcd(tm->tm_mon) + 1;
rtc_data[SD3078_REG_YR] = bin2bcd(tm->tm_year - 100);

sd3078_enable_reg_write(sd3078);

ret = regmap_bulk_write(sd3078->regmap, SD3078_REG_SC, rtc_data,
NUM_TIME_REGS);
if (ret < 0) {
dev_err(dev, "writing to RTC failed with err:%d\n", ret);
return ret;
}

sd3078_disable_reg_write(sd3078);

return 0;
}