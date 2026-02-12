static void locomo_setup_irq(struct locomo *lchip)
{
int irq = lchip->irq_base;


irq_set_irq_type(lchip->irq, IRQ_TYPE_EDGE_FALLING);
irq_set_chained_handler_and_data(lchip->irq, locomo_handler, lchip);


for ( ; irq <= lchip->irq_base + 3; irq++) {
irq_set_chip_and_handler(irq, &locomo_chip, handle_level_irq);
irq_set_chip_data(irq, lchip);
irq_clear_status_flags(irq, IRQ_NOREQUEST | IRQ_NOPROBE);
}
}