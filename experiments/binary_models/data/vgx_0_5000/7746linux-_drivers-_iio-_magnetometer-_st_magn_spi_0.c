static int st_magn_spi_probe(struct spi_device *spi)
{
const struct st_sensor_settings *settings;
struct st_sensor_data *mdata;
struct iio_dev *indio_dev;
int err;

st_sensors_dev_name_probe(&spi->dev, spi->modalias, sizeof(spi->modalias));

settings = st_magn_get_settings(spi->modalias);
if (!settings) {
dev_err(&spi->dev, "device name %s not recognized.\n",
spi->modalias);
return -ENODEV;
}

indio_dev = devm_iio_device_alloc(&spi->dev, sizeof(*mdata));
if (!indio_dev)
return -ENOMEM;

mdata = iio_priv(indio_dev);
mdata->sensor_settings = (struct st_sensor_settings *)settings;

err = st_sensors_spi_configure(indio_dev, spi);
if (err < 0)
return err;

err = st_sensors_power_enable(indio_dev);
if (err)
return err;

return st_magn_common_probe(indio_dev);
}