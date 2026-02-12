static int st_gyro_spi_probe(struct spi_device *spi)
{
const struct st_sensor_settings *settings;
struct st_sensor_data *gdata;
struct iio_dev *indio_dev;
int err;

st_sensors_dev_name_probe(&spi->dev, spi->modalias, sizeof(spi->modalias));

settings = st_gyro_get_settings(spi->modalias);
if (!settings) {
dev_err(&spi->dev, "device name %s not recognized.\n",
spi->modalias);
return -ENODEV;
}

indio_dev = devm_iio_device_alloc(&spi->dev, sizeof(*gdata));
if (!indio_dev)
return -ENOMEM;

gdata = iio_priv(indio_dev);
gdata->sensor_settings = (struct st_sensor_settings *)settings;

err = st_sensors_spi_configure(indio_dev, spi);
if (err < 0)
return err;

err = st_sensors_power_enable(indio_dev);
if (err)
return err;

return st_gyro_common_probe(indio_dev);
}