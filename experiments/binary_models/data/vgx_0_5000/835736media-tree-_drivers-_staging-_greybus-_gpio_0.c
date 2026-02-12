static int gb_gpio_irq_map(struct irq_domain *domain, unsigned int irq,
irq_hw_number_t hwirq)
{
struct gpio_chip *chip = domain->host_data;
struct gb_gpio_controller *ggc = gpio_chip_to_gb_gpio_controller(chip);

irq_set_chip_data(irq, ggc);
irq_set_chip_and_handler(irq, ggc->irqchip, ggc->irq_handler);
irq_set_noprobe(irq);

if (ggc->irq_default_type != IRQ_TYPE_NONE)
irq_set_irq_type(irq, ggc->irq_default_type);

return 0;
}