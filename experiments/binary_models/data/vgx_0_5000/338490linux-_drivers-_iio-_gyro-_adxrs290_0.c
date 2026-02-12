static int adxrs290_initial_setup(struct iio_dev *indio_dev)
{
struct adxrs290_state *st = iio_priv(indio_dev);
struct spi_device *spi = st->spi;
int ret;

ret = adxrs290_spi_write_reg(spi, ADXRS290_REG_POWER_CTL,
ADXRS290_MEASUREMENT | ADXRS290_TSM);
if (ret < 0)
return ret;

st->mode = ADXRS290_MODE_MEASUREMENT;

return devm_add_action_or_reset(&spi->dev, adxrs290_chip_off_action,
indio_dev);
}