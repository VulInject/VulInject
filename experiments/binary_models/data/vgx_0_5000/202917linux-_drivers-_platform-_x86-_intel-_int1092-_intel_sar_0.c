static ssize_t intc_reg_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
{
struct wwan_sar_context *context = dev_get_drvdata(dev);
unsigned int value;
int read;

if (!count)
return -EINVAL;
read = kstrtouint(buf, 10, &value);
if (read < 0)
return read;
if (value >= MAX_REGULATORY)
return -EOVERFLOW;
context->reg_value = value;
update_sar_data(context);
sysfs_notify(&dev->kobj, NULL, SYSFS_DATANAME);
return count;
}