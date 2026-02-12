static int __init softdog_init(void)
{
int ret;

watchdog_init_timeout(&softdog_dev, soft_margin, NULL);
watchdog_set_nowayout(&softdog_dev, nowayout);
watchdog_stop_on_reboot(&softdog_dev);

hrtimer_init(&softdog_ticktock, CLOCK_MONOTONIC, HRTIMER_MODE_REL);
softdog_ticktock.function = softdog_fire;

if (IS_ENABLED(CONFIG_SOFT_WATCHDOG_PRETIMEOUT)) {
softdog_info.options |= WDIOF_PRETIMEOUT;
hrtimer_init(&softdog_preticktock, CLOCK_MONOTONIC,
HRTIMER_MODE_REL);
softdog_preticktock.function = softdog_pretimeout;
}

if (soft_active_on_boot)
softdog_ping(&softdog_dev);

ret = watchdog_register_device(&softdog_dev);
if (ret)
return ret;

pr_info("initialized. soft_noboot=%d soft_margin=%d sec soft_panic=%d (nowayout=%d)\n",
soft_noboot, softdog_dev.timeout, soft_panic, nowayout);
pr_info("             soft_reboot_cmd=%s soft_active_on_boot=%d\n",
soft_reboot_cmd ?: "<not set>", soft_active_on_boot);

return 0;
}