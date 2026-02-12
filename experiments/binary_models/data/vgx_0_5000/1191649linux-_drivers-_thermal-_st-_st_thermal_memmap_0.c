static int st_mmap_register_enable_irq(struct st_thermal_sensor *sensor)
{
struct device *dev = sensor->dev;
struct platform_device *pdev = to_platform_device(dev);
int ret;

sensor->irq = platform_get_irq(pdev, 0);
if (sensor->irq < 0)
return sensor->irq;

ret = devm_request_threaded_irq(dev, sensor->irq,
NULL, st_mmap_thermal_trip_handler,
IRQF_TRIGGER_RISING | IRQF_ONESHOT,
dev->driver->name, sensor);
if (ret) {
dev_err(dev, "failed to register IRQ %d\n", sensor->irq);
return ret;
}

return st_mmap_enable_irq(sensor);
}

static const struct regmap_config st_416mpe_regmap_config = {
.reg_bits = 32,
.val_bits = 32,
.reg_stride = 4,
};