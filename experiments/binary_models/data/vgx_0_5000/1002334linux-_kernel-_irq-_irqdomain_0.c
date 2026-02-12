unsigned int irq_create_direct_mapping(struct irq_domain *domain)
{
struct device_node *of_node;
unsigned int virq;

if (domain == NULL)
domain = irq_default_domain;

of_node = irq_domain_get_of_node(domain);
virq = irq_alloc_desc_from(1, of_node_to_nid(of_node));
if (!virq) {
pr_debug("create_direct virq allocation failed\n");
return 0;
}
if (virq >= domain->hwirq_max) {
pr_err("ERROR: no free irqs available below %lu maximum\n",
domain->hwirq_max);
irq_free_desc(virq);
return 0;
}
pr_debug("create_direct obtained virq %d\n", virq);

if (irq_domain_associate(domain, virq, virq)) {
irq_free_desc(virq);
return 0;
}

return virq;
}