static int twl6030_pwmled_enable(struct pwm_chip *chip, struct pwm_device *pwm)
{
struct twl_pwmled_chip *twl = to_twl(chip);
int ret;
u8 val;

mutex_lock(&twl->mutex);
ret = twl_i2c_read_u8(TWL6030_MODULE_ID1, &val, TWL6030_LED_PWM_CTRL2);
if (ret < 0) {
dev_err(chip->dev, "%s: Failed to read PWM_CTRL2\n",
pwm->label);
goto out;
}

val &= ~TWL6040_LED_MODE_MASK;
val |= TWL6040_LED_MODE_ON;

ret = twl_i2c_write_u8(TWL6030_MODULE_ID1, val, TWL6030_LED_PWM_CTRL2);
if (ret < 0)
dev_err(chip->dev, "%s: Failed to enable PWM\n", pwm->label);

out:
mutex_unlock(&twl->mutex);
return ret;
}