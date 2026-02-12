static int exiu_domain_alloc(struct irq_domain *dom, unsigned int virq,
unsigned int nr_irqs, void *data)
{
struct irq_fwspec *fwspec = data;
struct irq_fwspec parent_fwspec;
struct exiu_irq_data *info = dom->host_data;
irq_hw_number_t hwirq;

parent_fwspec = *fwspec;
if (is_of_node(dom->parent->fwnode)) {
if (fwspec->param_count != 3)
return -EINVAL;	
if (fwspec->param[0] != GIC_SPI)
return -EINVAL;	

hwirq = fwspec->param[1] - info->spi_base;
} else {
hwirq = fwspec->param[0];
parent_fwspec.param[0] = hwirq + info->spi_base + 32;
}
WARN_ON(nr_irqs != 1);
irq_domain_set_hwirq_and_chip(dom, virq, hwirq, &exiu_irq_chip, info);

parent_fwspec.fwnode = dom->parent->fwnode;
return irq_domain_alloc_irqs_parent(dom, virq, nr_irqs, &parent_fwspec);
}