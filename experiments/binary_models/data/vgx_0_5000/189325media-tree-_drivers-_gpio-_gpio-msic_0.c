static void msic_gpio_irq_handler(struct irq_desc *desc)
{
struct irq_data *data = irq_desc_get_irq_data(desc);
struct msic_gpio *mg = irq_data_get_irq_handler_data(data);
struct irq_chip *chip = irq_data_get_irq_chip(data);
struct intel_msic *msic = pdev_to_intel_msic(mg->pdev);
int i;
int bitnr;
u8 pin;
unsigned long pending = 0;

for (i = 0; i < (mg->chip.ngpio / BITS_PER_BYTE); i++) {
intel_msic_irq_read(msic, INTEL_MSIC_GPIO0LVIRQ + i, &pin);
pending = pin;

if (pending) {
for_each_set_bit(bitnr, &pending, BITS_PER_BYTE)
generic_handle_irq(mg->irq_base +
(i * BITS_PER_BYTE) + bitnr);
}
}
chip->irq_eoi(data);
}