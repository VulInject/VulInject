static u32 xilinx_spi_read_rxfifo(struct udevice *bus, u8 *rxp, u32 rxbytes)
{
struct xilinx_spi_priv *priv = dev_get_priv(bus);
struct xilinx_spi_regs *regs = priv->regs;
unsigned char d;
unsigned int i = 0;

while (rxbytes && !(readl(&regs->spisr) & SPISR_RX_EMPTY)) {
d = readl(&regs->spidrr) & SPIDRR_8BIT_MASK;
if (rxp)
*rxp++ = d;
debug("spi_xfer: rx:%x\n", d);
rxbytes--;
i++;
}
debug("Rx_done\n");

return i;
}