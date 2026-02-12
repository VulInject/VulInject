static ssize_t top_off_threshold_current_show(struct device *dev,
struct device_attribute *attr, char *buf)
{
struct max77693_charger *chg = dev_get_drvdata(dev);
unsigned int data, val;
int ret;

ret = regmap_read(chg->max77693->regmap, MAX77693_CHG_REG_CHG_CNFG_03,
&data);
if (ret < 0)
return ret;

data &= CHG_CNFG_03_TOITH_MASK;
data >>= CHG_CNFG_03_TOITH_SHIFT;

if (data <= 0x04)
val = 100000 + data * 25000;
else
val = data * 50000;

return scnprintf(buf, PAGE_SIZE, "%u\n", val);
}