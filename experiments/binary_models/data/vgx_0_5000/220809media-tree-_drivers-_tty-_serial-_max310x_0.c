static int max310x_spi_probe(struct spi_device *spi)
{
struct max310x_devtype *devtype;
unsigned long flags = 0;
struct regmap *regmap;
int ret;


spi->bits_per_word	= 8;
spi->mode		= spi->mode ? : SPI_MODE_0;
spi->max_speed_hz	= spi->max_speed_hz ? : 26000000;
ret = spi_setup(spi);
if (ret)
return ret;

if (spi->dev.of_node) {
const struct of_device_id *of_id =
of_match_device(max310x_dt_ids, &spi->dev);

devtype = (struct max310x_devtype *)of_id->data;
} else {
const struct spi_device_id *id_entry = spi_get_device_id(spi);

devtype = (struct max310x_devtype *)id_entry->driver_data;
}

flags = IRQF_TRIGGER_FALLING;
regcfg.max_register = devtype->nr * 0x20 - 1;
regmap = devm_regmap_init_spi(spi, &regcfg);

return max310x_probe(&spi->dev, devtype, regmap, spi->irq, flags);
}