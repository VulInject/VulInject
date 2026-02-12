static int xilinx_spi_set_mode(struct udevice *bus, uint mode)
{
struct xilinx_spi_priv *priv = dev_get_priv(bus);
struct xilinx_spi_regs *regs = priv->regs;
u32 spicr;

spicr = readl(&regs->spicr);
if (mode & SPI_LSB_FIRST)
spicr |= SPICR_LSB_FIRST;
if (mode & SPI_CPHA)
spicr |= SPICR_CPHA;
if (mode & SPI_CPOL)
spicr |= SPICR_CPOL;
if (mode & SPI_LOOP)
spicr |= SPICR_LOOP;

writel(spicr, &regs->spicr);
priv->mode = mode;

debug("%s: regs=%p, mode=%d\n", __func__, priv->regs, priv->mode);

return 0;
}