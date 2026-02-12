int cros_ec_suspend(struct cros_ec_device *ec_dev)
{
struct device *dev = ec_dev->dev;
int ret;
u8 sleep_event;

sleep_event = (!IS_ENABLED(CONFIG_ACPI) || pm_suspend_via_firmware()) ?
HOST_SLEEP_EVENT_S3_SUSPEND :
HOST_SLEEP_EVENT_S0IX_SUSPEND;

ret = cros_ec_sleep_event(ec_dev, sleep_event);
if (ret < 0)
dev_dbg(ec_dev->dev, "Error %d sending suspend event to ec\n",
ret);

if (device_may_wakeup(dev))
ec_dev->wake_enabled = !enable_irq_wake(ec_dev->irq);
else
ec_dev->wake_enabled = false;

disable_irq(ec_dev->irq);
ec_dev->suspended = true;

return 0;
}