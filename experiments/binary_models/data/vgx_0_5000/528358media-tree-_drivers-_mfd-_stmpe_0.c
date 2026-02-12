static int stmpe_irq_map(struct irq_domain *d, unsigned int virq,
irq_hw_number_t hwirq)
{
struct stmpe *stmpe = d->host_data;
struct irq_chip *chip = NULL;

if (stmpe->variant->id_val != STMPE801_ID)
chip = &stmpe_irq_chip;

irq_set_chip_data(virq, stmpe);
irq_set_chip_and_handler(virq, chip, handle_edge_irq);
irq_set_nested_thread(virq, 1);
irq_set_noprobe(virq);

return 0;
}