static int sh_msiof_prepare_message(struct spi_controller *ctlr,
struct spi_message *msg)
{
struct sh_msiof_spi_priv *p = spi_controller_get_devdata(ctlr);
const struct spi_device *spi = msg->spi;
u32 ss, cs_high;


if (spi->cs_gpiod) {
ss = ctlr->unused_native_cs;
cs_high = p->native_cs_high;
} else {
ss = spi->chip_select;
cs_high = !!(spi->mode & SPI_CS_HIGH);
}
sh_msiof_spi_set_pin_regs(p, ss, !!(spi->mode & SPI_CPOL),
!!(spi->mode & SPI_CPHA),
!!(spi->mode & SPI_3WIRE),
!!(spi->mode & SPI_LSB_FIRST), cs_high);
return 0;
}