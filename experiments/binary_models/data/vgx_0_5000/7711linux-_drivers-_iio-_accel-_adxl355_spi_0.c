static int adxl355_spi_probe(struct spi_device *spi)
{
const struct adxl355_chip_info *chip_data;
struct regmap *regmap;

chip_data = device_get_match_data(&spi->dev);
if (!chip_data) {
chip_data = (void *)spi_get_device_id(spi)->driver_data;

if (!chip_data)
return -EINVAL;
}

regmap = devm_regmap_init_spi(spi, &adxl355_spi_regmap_config);
if (IS_ERR(regmap)) {
dev_err(&spi->dev, "Error initializing spi regmap: %ld\n",
PTR_ERR(regmap));

return PTR_ERR(regmap);
}

return adxl355_core_probe(&spi->dev, regmap, chip_data);
}