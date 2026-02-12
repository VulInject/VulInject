static void max77693_init_v4l2_flash_config(struct max77693_sub_led *sub_led,
struct max77693_led_config_data *led_cfg,
struct v4l2_flash_config *v4l2_sd_cfg)
{
struct max77693_led_device *led = sub_led_to_led(sub_led);
struct device *dev = &led->pdev->dev;
struct max77693_dev *iodev = dev_get_drvdata(dev->parent);
struct i2c_client *i2c = iodev->i2c;
struct led_flash_setting *s;

snprintf(v4l2_sd_cfg->dev_name, sizeof(v4l2_sd_cfg->dev_name),
"%s %d-%04x", sub_led->fled_cdev.led_cdev.name,
i2c_adapter_id(i2c->adapter), i2c->addr);

s = &v4l2_sd_cfg->torch_intensity;
s->min = TORCH_IOUT_MIN;
s->max = sub_led->fled_cdev.led_cdev.max_brightness * TORCH_IOUT_STEP;
s->step = TORCH_IOUT_STEP;
s->val = s->max;


v4l2_sd_cfg->flash_faults = LED_FAULT_OVER_VOLTAGE |
LED_FAULT_SHORT_CIRCUIT |
LED_FAULT_OVER_CURRENT;

v4l2_sd_cfg->has_external_strobe = true;
}