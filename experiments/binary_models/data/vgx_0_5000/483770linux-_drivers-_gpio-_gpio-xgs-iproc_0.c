static void iproc_gpio_irq_ack(struct irq_data *d)
{
struct gpio_chip *gc = irq_data_get_irq_chip_data(d);
struct iproc_gpio_chip *chip = to_iproc_gpio(gc);
int pin = d->hwirq;
unsigned long flags;
u32 irq = d->irq;
u32 irq_type, event_status = 0;

spin_lock_irqsave(&chip->lock, flags);
irq_type = irq_get_trigger_type(irq);
if (irq_type & IRQ_TYPE_EDGE_BOTH) {
event_status |= BIT(pin);
writel_relaxed(event_status,
chip->base + IPROC_GPIO_CCA_INT_EVENT);
}
spin_unlock_irqrestore(&chip->lock, flags);
}