static irqreturn_t spi_sh_irq(int irq, void *_ss)
{
struct spi_sh_data *ss = (struct spi_sh_data *)_ss;
unsigned long cr1;

cr1 = spi_sh_read(ss, SPI_SH_CR1);
if (cr1 & SPI_SH_TBE)
ss->cr1 |= SPI_SH_TBE;
if (cr1 & SPI_SH_TBF)
ss->cr1 |= SPI_SH_TBF;
if (cr1 & SPI_SH_RBE)
ss->cr1 |= SPI_SH_RBE;
if (cr1 & SPI_SH_RBF)
ss->cr1 |= SPI_SH_RBF;

if (ss->cr1) {
spi_sh_clear_bit(ss, ss->cr1, SPI_SH_CR4);
wake_up(&ss->wait);
}

return IRQ_HANDLED;
}