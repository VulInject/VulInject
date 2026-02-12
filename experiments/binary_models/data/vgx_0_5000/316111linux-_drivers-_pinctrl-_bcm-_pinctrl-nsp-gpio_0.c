static irqreturn_t nsp_gpio_irq_handler(int irq, void *data)
{
struct gpio_chip *gc = (struct gpio_chip *)data;
struct nsp_gpio *chip = gpiochip_get_data(gc);
int bit;
unsigned long int_bits = 0;
u32 int_status;


int_status = readl(chip->base + NSP_CHIP_A_INT_STATUS);
if (int_status & NSP_CHIP_A_GPIO_INT_BIT) {
unsigned int event, level;


event = readl(chip->base + NSP_GPIO_EVENT_INT_MASK) &
readl(chip->base + NSP_GPIO_EVENT);
level = readl(chip->base + NSP_GPIO_DATA_IN) ^
readl(chip->base + NSP_GPIO_INT_POLARITY);
level &= readl(chip->base + NSP_GPIO_INT_MASK);
int_bits = level | event;

for_each_set_bit(bit, &int_bits, gc->ngpio)
generic_handle_domain_irq(gc->irq.domain, bit);
}

return  int_bits ? IRQ_HANDLED : IRQ_NONE;
}