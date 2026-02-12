static int alpine_msix_gic_domain_alloc(struct irq_domain *domain,
unsigned int virq, int sgi)
{
struct irq_fwspec fwspec;
struct irq_data *d;
int ret;

if (!is_of_node(domain->parent->fwnode))
return -EINVAL;

fwspec.fwnode = domain->parent->fwnode;
fwspec.param_count = 3;
fwspec.param[0] = 0;
fwspec.param[1] = sgi;
fwspec.param[2] = IRQ_TYPE_EDGE_RISING;

ret = irq_domain_alloc_irqs_parent(domain, virq, 1, &fwspec);
if (ret)
return ret;

d = irq_domain_get_irq_data(domain->parent, virq);
d->chip->irq_set_type(d, IRQ_TYPE_EDGE_RISING);

return 0;
}