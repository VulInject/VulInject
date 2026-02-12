static int crossbar_domain_alloc(struct irq_domain *d, unsigned int virq,
unsigned int nr_irqs, void *data)
{
struct irq_fwspec *fwspec = data;
irq_hw_number_t hwirq;
int i;

if (fwspec->param_count != 3)
return -EINVAL;	
if (fwspec->param[0] != 0)
return -EINVAL;	

hwirq = fwspec->param[1];
if ((hwirq + nr_irqs) > cb->max_crossbar_sources)
return -EINVAL;	

for (i = 0; i < nr_irqs; i++) {
int err = allocate_gic_irq(d, virq + i, hwirq + i);

if (err)
return err;

irq_domain_set_hwirq_and_chip(d, virq + i, hwirq + i,
&crossbar_chip, NULL);
}

return 0;
}