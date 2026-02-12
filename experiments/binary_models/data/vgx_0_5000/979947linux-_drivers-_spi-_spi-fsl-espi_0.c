static irqreturn_t fsl_espi_irq(s32 irq, void *context_data)
{
struct fsl_espi *espi = context_data;
u32 events, mask;

spin_lock(&espi->lock);


events = fsl_espi_read_reg(espi, ESPI_SPIE);
mask = fsl_espi_read_reg(espi, ESPI_SPIM);
if (!(events & mask)) {
spin_unlock(&espi->lock);
return IRQ_NONE;
}

dev_vdbg(espi->dev, "%s: events %x\n", __func__, events);

fsl_espi_cpu_irq(espi, events);


fsl_espi_write_reg(espi, ESPI_SPIE, events);

spin_unlock(&espi->lock);

return IRQ_HANDLED;
}