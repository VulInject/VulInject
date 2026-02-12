static ssize_t lm3530_mode_set(struct device *dev, struct device_attribute
*attr, const char *buf, size_t size)
{
struct led_classdev *led_cdev = dev_get_drvdata(dev);
struct lm3530_data *drvdata;
struct lm3530_pwm_data *pwm;
u8 max_brightness;
int mode, err;

drvdata = container_of(led_cdev, struct lm3530_data, led_dev);
pwm = &drvdata->pdata->pwm_data;
max_brightness = led_cdev->max_brightness;
mode = lm3530_get_mode_from_str(buf);
if (mode < 0) {
dev_err(dev, "Invalid mode\n");
return mode;
}

drvdata->mode = mode;


if (mode != LM3530_BL_MODE_PWM && pwm->pwm_set_intensity)
pwm->pwm_set_intensity(0, max_brightness);

err = lm3530_init_registers(drvdata);
if (err) {
dev_err(dev, "Setting %s Mode failed :%d\n", buf, err);
return err;
}

return sizeof(drvdata->mode);
}