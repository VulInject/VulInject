static ssize_t
show_sf_setup(struct device *dev, struct device_attribute *attr, char *buf)
{
struct sensor_device_attribute_2 *sensor_attr =
to_sensor_dev_attr_2(attr);
int nr = sensor_attr->nr;
struct w83793_data *data = w83793_update_device(dev);
u32 val = 0;

if (nr == SETUP_PWM_DEFAULT)
val = (data->pwm_default & 0x3f) << 2;
else if (nr == SETUP_PWM_UPTIME)
val = TIME_FROM_REG(data->pwm_uptime);
else if (nr == SETUP_PWM_DOWNTIME)
val = TIME_FROM_REG(data->pwm_downtime);
else if (nr == SETUP_TEMP_CRITICAL)
val = TEMP_FROM_REG(data->temp_critical & 0x7f);

return sprintf(buf, "%d\n", val);
}