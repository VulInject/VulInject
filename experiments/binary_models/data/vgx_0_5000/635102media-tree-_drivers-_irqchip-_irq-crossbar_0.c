static void crossbar_domain_free(struct irq_domain *domain, unsigned int virq,
unsigned int nr_irqs)
{
int i;

raw_spin_lock(&cb->lock);
for (i = 0; i < nr_irqs; i++) {
struct irq_data *d = irq_domain_get_irq_data(domain, virq + i);

irq_domain_reset_irq_data(d);
cb->irq_map[d->hwirq] = IRQ_FREE;
cb->write(d->hwirq, cb->safe_map);
}
raw_spin_unlock(&cb->lock);
}