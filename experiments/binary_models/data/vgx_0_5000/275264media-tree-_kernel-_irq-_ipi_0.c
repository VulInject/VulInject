int irq_destroy_ipi(unsigned int irq, const struct cpumask *dest)
{
struct irq_data *data = irq_get_irq_data(irq);
struct cpumask *ipimask = data ? irq_data_get_affinity_mask(data) : NULL;
struct irq_domain *domain;
unsigned int nr_irqs;

if (!irq || !data || !ipimask)
return -EINVAL;

domain = data->domain;
if (WARN_ON(domain == NULL))
return -EINVAL;

if (!irq_domain_is_ipi(domain)) {
pr_warn("Trying to destroy a non IPI domain!\n");
return -EINVAL;
}

if (WARN_ON(!cpumask_subset(dest, ipimask)))

return -EINVAL;

if (irq_domain_is_ipi_per_cpu(domain)) {
irq = irq + cpumask_first(dest) - data->common->ipi_offset;
nr_irqs = cpumask_weight(dest);
} else {
nr_irqs = 1;
}

irq_domain_free_irqs(irq, nr_irqs);
return 0;
}