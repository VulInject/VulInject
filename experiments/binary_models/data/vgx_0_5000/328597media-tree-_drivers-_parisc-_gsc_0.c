static void gsc_asic_mask_irq(struct irq_data *d)
{
struct gsc_asic *irq_dev = irq_data_get_irq_chip_data(d);
int local_irq = gsc_find_local_irq(d->irq, irq_dev->global_irq, 32);
u32 imr;

DEBPRINTK(KERN_DEBUG "%s(%d) %s: IMR 0x%x\n", __func__, d->irq,
irq_dev->name, imr);


imr = gsc_readl(irq_dev->hpa + OFFSET_IMR);
imr &= ~(1 << local_irq);
gsc_writel(imr, irq_dev->hpa + OFFSET_IMR);
}