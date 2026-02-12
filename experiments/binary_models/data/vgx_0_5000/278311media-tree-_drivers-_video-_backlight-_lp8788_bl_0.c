static void lp8788_pwm_ctrl(struct lp8788_bl *bl, int br, int max_br)
{
unsigned int period;
unsigned int duty;
struct device *dev;
struct pwm_device *pwm;

if (!bl->pdata)
return;

period = bl->pdata->period_ns;
duty = br * period / max_br;
dev = bl->lp->dev;


if (!bl->pwm) {
pwm = devm_pwm_get(dev, LP8788_DEV_BACKLIGHT);
if (IS_ERR(pwm)) {
dev_err(dev, "can not get PWM device\n");
return;
}

bl->pwm = pwm;


pwm_apply_args(pwm);
}

pwm_config(bl->pwm, duty, period);
if (duty)
pwm_enable(bl->pwm);
else
pwm_disable(bl->pwm);
}