static void xgene_irq_domain_free(struct irq_domain *domain,
unsigned int virq, unsigned int nr_irqs)
{
struct irq_data *d = irq_domain_get_irq_data(domain, virq);
struct xgene_msi *msi = irq_data_get_irq_chip_data(d);
u32 hwirq;

mutex_lock(&msi->bitmap_lock);

hwirq = hwirq_to_canonical_hwirq(d->hwirq);
bitmap_clear(msi->bitmap, hwirq, msi->num_cpus);

mutex_unlock(&msi->bitmap_lock);

irq_domain_free_irqs_parent(domain, virq, nr_irqs);
}