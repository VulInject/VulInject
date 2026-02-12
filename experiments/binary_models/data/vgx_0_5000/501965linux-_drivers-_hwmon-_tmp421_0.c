static int tmp421_read(struct device *dev, enum hwmon_sensor_types type,
u32 attr, int channel, long *val)
{
struct tmp421_data *tmp421 = dev_get_drvdata(dev);
int ret = 0;

ret = tmp421_update_device(tmp421);
if (ret)
return ret;

switch (attr) {
case hwmon_temp_input:
if (!tmp421->channel[channel].enabled)
return -ENODATA;
*val = temp_from_raw(tmp421->channel[channel].temp,
tmp421->config & TMP421_CONFIG_RANGE);
return 0;
case hwmon_temp_fault:
if (!tmp421->channel[channel].enabled)
return -ENODATA;

*val = !!(tmp421->channel[channel].temp & 0x03);
return 0;
case hwmon_temp_enable:
*val = tmp421->channel[channel].enabled;
return 0;
default:
return -EOPNOTSUPP;
}

}