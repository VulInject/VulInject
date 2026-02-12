int wdt_start(struct udevice *dev, u64 timeout_ms, ulong flags)
{
const struct wdt_ops *ops = device_get_ops(dev);
int ret;

if (!ops->start)
return -ENOSYS;

ret = ops->start(dev, timeout_ms, flags);
if (ret == 0) {
struct wdt_priv *priv = dev_get_uclass_priv(dev);
char str[16];

priv->running = true;

memset(str, 0, 16);
if (IS_ENABLED(CONFIG_WATCHDOG)) {

priv->cyclic = cyclic_register(wdt_cyclic,
priv->reset_period * 1000,
dev->name, dev);
if (!priv->cyclic) {
printf("cyclic_register for %s failed\n",
dev->name);
return -ENODEV;
} else {
snprintf(str, 16, "every %ldms",
priv->reset_period);
}
}

printf("WDT:   Started %s with%s servicing %s (%ds timeout)\n",
dev->name, IS_ENABLED(CONFIG_WATCHDOG) ? "" : "out",
str, priv->timeout);
}

return ret;
}