static int __maybe_unused xgene_rtc_resume(struct device *dev)
{
struct platform_device *pdev = to_platform_device(dev);
struct xgene_rtc_dev *pdata = platform_get_drvdata(pdev);
int irq;
int rc;

irq = platform_get_irq(pdev, 0);

if (device_may_wakeup(&pdev->dev)) {
if (pdata->irq_wake) {
disable_irq_wake(irq);
pdata->irq_wake = 0;
}
} else {
rc = clk_prepare_enable(pdata->clk);
if (rc) {
dev_err(dev, "Unable to enable clock error %d\n", rc);
return rc;
}
xgene_rtc_alarm_irq_enable(dev, pdata->irq_enabled);
}

return 0;
}