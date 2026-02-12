static void media5200_irq_cascade(struct irq_desc *desc)
{
struct irq_chip *chip = irq_desc_get_chip(desc);
int val;
u32 status, enable;


raw_spin_lock(&desc->lock);
chip->irq_mask(&desc->irq_data);
raw_spin_unlock(&desc->lock);


status = in_be32(media5200_irq.regs + MEDIA5200_IRQ_ENABLE);
enable = in_be32(media5200_irq.regs + MEDIA5200_IRQ_STATUS);
val = ffs((status & enable) >> MEDIA5200_IRQ_SHIFT);
if (val) {
generic_handle_domain_irq(media5200_irq.irqhost, val - 1);

}


raw_spin_lock(&desc->lock);
chip->irq_ack(&desc->irq_data);
if (!irqd_irq_disabled(&desc->irq_data))
chip->irq_unmask(&desc->irq_data);
raw_spin_unlock(&desc->lock);
}