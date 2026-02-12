static int st_rc_resume(struct device *dev)
{
int ret;
struct st_rc_device *rc_dev = dev_get_drvdata(dev);
struct rc_dev	*rdev = rc_dev->rdev;

if (rc_dev->irq_wake) {
disable_irq_wake(rc_dev->irq);
rc_dev->irq_wake = 0;
} else {
pinctrl_pm_select_default_state(dev);
ret = st_rc_hardware_init(rc_dev);
if (ret)
return ret;

if (rdev->users) {
writel(IRB_RX_INTS, rc_dev->rx_base + IRB_RX_INT_EN);
writel(0x01, rc_dev->rx_base + IRB_RX_EN);
}
}

return 0;
}