static void avic_irq_resume(struct irq_data *d)
{
struct irq_chip_generic *gc = irq_data_get_irq_chip_data(d);
struct irq_chip_type *ct = gc->chip_types;
int idx = d->hwirq >> 5;

imx_writel(avic_saved_mask_reg[idx], avic_base + ct->regs.mask);

if (mx25_ccm_base) {
u8 offs = d->hwirq < AVIC_NUM_IRQS / 2 ?
MX25_CCM_LPIMR0 : MX25_CCM_LPIMR1;

imx_writel(0xffffffff, mx25_ccm_base + offs);
}
}