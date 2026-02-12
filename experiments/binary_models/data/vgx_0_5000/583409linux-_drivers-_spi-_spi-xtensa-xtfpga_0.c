static u32 xtfpga_spi_txrx_word(struct spi_device *spi, unsigned nsecs,
u32 v, u8 bits, unsigned flags)
{
struct xtfpga_spi *xspi = spi_master_get_devdata(spi->master);

xspi->data = (xspi->data << bits) | (v & GENMASK(bits - 1, 0));
xspi->data_sz += bits;
if (xspi->data_sz >= 16) {
xtfpga_spi_write32(xspi, XTFPGA_SPI_DATA,
xspi->data >> (xspi->data_sz - 16));
xspi->data_sz -= 16;
xtfpga_spi_write32(xspi, XTFPGA_SPI_START, 1);
xtfpga_spi_wait_busy(xspi);
xtfpga_spi_write32(xspi, XTFPGA_SPI_START, 0);
}

return 0;
}