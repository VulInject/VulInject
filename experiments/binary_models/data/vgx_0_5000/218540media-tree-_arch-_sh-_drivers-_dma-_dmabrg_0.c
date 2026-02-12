static irqreturn_t dmabrg_irq(int irq, void *data)
{
unsigned long dcr;
unsigned int i;

dcr = __raw_readl(DMABRGCR);
__raw_writel(dcr & ~0x00ff0003, DMABRGCR);	
dcr &= dcr >> 8;	


if (dcr & 1)
dmabrg_call_handler(DMABRGIRQ_USBDMA);
if (dcr & 2)
dmabrg_call_handler(DMABRGIRQ_USBDMAERR);


dcr >>= 16;
while (dcr) {
i = __ffs(dcr);
dcr &= dcr - 1;
dmabrg_call_handler(i + DMABRGIRQ_A0TXF);
}
return IRQ_HANDLED;
}