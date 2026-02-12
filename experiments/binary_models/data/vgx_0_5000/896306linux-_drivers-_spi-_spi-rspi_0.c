static int rspi_transfer_one(struct spi_controller *ctlr,
struct spi_device *spi, struct spi_transfer *xfer)
{
struct rspi_data *rspi = spi_controller_get_devdata(ctlr);
u8 spcr;

spcr = rspi_read8(rspi, RSPI_SPCR);
if (xfer->rx_buf) {
rspi_receive_init(rspi);
spcr &= ~SPCR_TXMD;
} else {
spcr |= SPCR_TXMD;
}
rspi_write8(rspi, spcr, RSPI_SPCR);

return rspi_common_transfer(rspi, xfer);
}