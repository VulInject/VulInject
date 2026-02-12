static int cros_ec_pwm_set_config(struct udevice *dev, uint channel,
uint period_ns, uint duty_ns)
{
struct cros_ec_pwm_priv *priv = dev_get_priv(dev);
uint duty;
int ret;

debug("%s: period_ns=%u, duty_ns=%u asked\n", __func__,
period_ns, duty_ns);


duty = EC_PWM_MAX_DUTY * duty_ns / period_ns;
if (duty > EC_PWM_MAX_DUTY)
duty = EC_PWM_MAX_DUTY;

if (!priv->enabled) {
priv->duty = duty;
debug("%s: duty=%#x to-be-set\n", __func__, duty);
return 0;
}

ret = cros_ec_set_pwm_duty(dev->parent, channel, duty);
if (ret) {
debug("%s: duty=%#x failed\n", __func__, duty);
return ret;
}

priv->duty = duty;
debug("%s: duty=%#x set\n", __func__, duty);

return 0;
}