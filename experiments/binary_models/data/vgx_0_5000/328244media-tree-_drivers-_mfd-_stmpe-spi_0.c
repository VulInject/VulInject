static int
stmpe_spi_probe(struct spi_device *spi)
{
const struct spi_device_id *id = spi_get_device_id(spi);


if (spi->max_speed_hz > 1000000) {
dev_dbg(&spi->dev, "f(sample) %d KHz?\n",
(spi->max_speed_hz/1000));
return -EINVAL;
}

spi_ci.irq = spi->irq;
spi_ci.client = spi;
spi_ci.dev = &spi->dev;

return stmpe_probe(&spi_ci, id->driver_data);
}