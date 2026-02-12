static void ep93xx_do_write(struct spi_master *master)
{
struct ep93xx_spi *espi = spi_master_get_devdata(master);
struct spi_transfer *xfer = master->cur_msg->state;
u32 val = 0;

if (xfer->bits_per_word > 8) {
if (xfer->tx_buf)
val = ((u16 *)xfer->tx_buf)[espi->tx];
espi->tx += 2;
} else {
if (xfer->tx_buf)
val = ((u8 *)xfer->tx_buf)[espi->tx];
espi->tx += 1;
}
writel(val, espi->mmio + SSPDR);
}