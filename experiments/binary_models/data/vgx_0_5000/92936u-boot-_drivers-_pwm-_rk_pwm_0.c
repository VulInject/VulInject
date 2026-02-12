static int rk_pwm_set_config(struct udevice *dev, uint channel, uint period_ns,
uint duty_ns)
{
struct rk_pwm_priv *priv = dev_get_priv(dev);
const struct rockchip_pwm_regs *regs = &priv->data->regs;
unsigned long period, duty;
u32 ctrl;

debug("%s: period_ns=%u, duty_ns=%u\n", __func__, period_ns, duty_ns);

ctrl = readl(priv->base + regs->ctrl);

if (priv->data->supports_lock) {
ctrl |= PWM_LOCK;
writel(ctrl, priv->base + regs->ctrl);
}

period = lldiv((uint64_t)priv->freq * period_ns,
priv->data->prescaler * 1000000000);
duty = lldiv((uint64_t)priv->freq * duty_ns,
priv->data->prescaler * 1000000000);

writel(period, priv->base + regs->period);
writel(duty, priv->base + regs->duty);

if (priv->data->supports_polarity) {
ctrl &= ~(PWM_DUTY_MASK | PWM_INACTIVE_MASK);
ctrl |= priv->conf_polarity;
}


if (priv->data->supports_lock)
ctrl &= ~PWM_LOCK;
writel(ctrl, priv->base + regs->ctrl);

debug("%s: period=%lu, duty=%lu\n", __func__, period, duty);

return 0;
}