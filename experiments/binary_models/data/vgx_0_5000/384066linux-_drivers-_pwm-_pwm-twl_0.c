static int twl6030_pwm_enable(struct pwm_chip *chip, struct pwm_device *pwm)
{
struct twl_pwm_chip *twl = to_twl(chip);
int ret;
u8 val;

mutex_lock(&twl->mutex);
val = twl->twl6030_toggle3;
val |= TWL6030_PWM_TOGGLE(pwm->hwpwm, TWL6030_PWMXS | TWL6030_PWMXEN);
val &= ~TWL6030_PWM_TOGGLE(pwm->hwpwm, TWL6030_PWMXR);

ret = twl_i2c_write_u8(TWL6030_MODULE_ID1, val, TWL6030_TOGGLE3_REG);
if (ret < 0) {
dev_err(chip->dev, "%s: Failed to enable PWM\n", pwm->label);
goto out;
}

twl->twl6030_toggle3 = val;
out:
mutex_unlock(&twl->mutex);
return ret;
}