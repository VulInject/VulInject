static void odmi_irq_domain_free(struct irq_domain *domain,
unsigned int virq, unsigned int nr_irqs)
{
struct irq_data *d = irq_domain_get_irq_data(domain, virq);

if (d->hwirq >= odmis_count * NODMIS_PER_FRAME) {
pr_err("Failed to teardown msi. Invalid hwirq %lu\n", d->hwirq);
return;
}

irq_domain_free_irqs_parent(domain, virq, nr_irqs);


spin_lock(&odmis_bm_lock);
__clear_bit(d->hwirq, odmis_bm);
spin_unlock(&odmis_bm_lock);
}