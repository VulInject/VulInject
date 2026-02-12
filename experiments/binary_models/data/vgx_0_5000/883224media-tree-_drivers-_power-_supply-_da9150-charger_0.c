static int da9150_charger_register_irq(struct platform_device *pdev,
irq_handler_t handler,
const char *irq_name)
{
struct device *dev = &pdev->dev;
struct da9150_charger *charger = platform_get_drvdata(pdev);
int irq, ret;

irq = platform_get_irq_byname(pdev, irq_name);
if (irq < 0) {
dev_err(dev, "Failed to get IRQ CHG_STATUS: %d\n", irq);
return irq;
}

ret = request_threaded_irq(irq, NULL, handler, IRQF_ONESHOT, irq_name,
charger);
if (ret)
dev_err(dev, "Failed to request IRQ %d: %d\n", irq, ret);

return ret;
}