static irqreturn_t pxa_gpio_direct_handler(int in_irq, void *d)
{
struct pxa_gpio_chip *pchip = d;

if (in_irq == pchip->irq0) {
generic_handle_irq(gpio_to_irq(0));
} else if (in_irq == pchip->irq1) {
generic_handle_irq(gpio_to_irq(1));
} else {
pr_err("%s() unknown irq %d\n", __func__, in_irq);
return IRQ_NONE;
}
return IRQ_HANDLED;
}