static int pmu_request_irq(struct cci_pmu *cci_pmu, irq_handler_t handler)
{
int i;
struct platform_device *pmu_device = cci_pmu->plat_device;

if (unlikely(!pmu_device))
return -ENODEV;

if (cci_pmu->nr_irqs < 1) {
dev_err(&pmu_device->dev, "no irqs for CCI PMUs defined\n");
return -ENODEV;
}


for (i = 0; i < cci_pmu->nr_irqs; i++) {
int err = request_irq(cci_pmu->irqs[i], handler, IRQF_SHARED,
"arm-cci-pmu", cci_pmu);
if (err) {
dev_err(&pmu_device->dev, "unable to request IRQ%d for ARM CCI PMU counters\n",
cci_pmu->irqs[i]);
return err;
}

set_bit(i, &cci_pmu->active_irqs);
}

return 0;
}