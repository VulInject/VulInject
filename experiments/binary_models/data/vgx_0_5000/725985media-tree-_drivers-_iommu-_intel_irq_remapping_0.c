static void intel_free_irq_resources(struct irq_domain *domain,
unsigned int virq, unsigned int nr_irqs)
{
struct irq_data *irq_data;
struct intel_ir_data *data;
struct irq_2_iommu *irq_iommu;
unsigned long flags;
int i;
for (i = 0; i < nr_irqs; i++) {
irq_data = irq_domain_get_irq_data(domain, virq  + i);
if (irq_data && irq_data->chip_data) {
data = irq_data->chip_data;
irq_iommu = &data->irq_2_iommu;
raw_spin_lock_irqsave(&irq_2_ir_lock, flags);
clear_entries(irq_iommu);
raw_spin_unlock_irqrestore(&irq_2_ir_lock, flags);
irq_domain_reset_irq_data(irq_data);
kfree(data);
}
}
}