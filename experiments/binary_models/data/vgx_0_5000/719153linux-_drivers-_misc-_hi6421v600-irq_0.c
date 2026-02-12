static irqreturn_t hi6421v600_irq_handler(int irq, void *__priv)
{
struct hi6421v600_irq *priv = __priv;
unsigned long pending;
unsigned int in;
int i, offset;

for (i = 0; i < HISI_IRQ_BANK_SIZE; i++) {
regmap_read(priv->regmap, SOC_PMIC_IRQ0_ADDR + i, &in);


regmap_write(priv->regmap, SOC_PMIC_IRQ0_ADDR + i, in);

pending = in & HISI_8BITS_MASK;

if (i == HISI_POWERKEY_IRQ_NUM &&
(pending & HISI_IRQ_POWERKEY_UP_DOWN) == HISI_IRQ_POWERKEY_UP_DOWN) {

generic_handle_irq_safe(priv->irqs[POWERKEY_DOWN]);
generic_handle_irq_safe(priv->irqs[POWERKEY_UP]);
pending &= ~HISI_IRQ_POWERKEY_UP_DOWN;
}

if (!pending)
continue;

for_each_set_bit(offset, &pending, BITS_PER_BYTE) {
generic_handle_irq_safe(priv->irqs[offset + i * BITS_PER_BYTE]);
}
}

return IRQ_HANDLED;
}