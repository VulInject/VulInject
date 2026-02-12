static int exynos_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long mask)
{
struct exynos_adc *info = iio_priv(indio_dev);
unsigned long timeout;
int ret;

if (mask != IIO_CHAN_INFO_RAW)
return -EINVAL;

mutex_lock(&indio_dev->mlock);
reinit_completion(&info->completion);


if (info->data->start_conv)
info->data->start_conv(info, chan->address);

timeout = wait_for_completion_timeout(&info->completion,
EXYNOS_ADC_TIMEOUT);
if (timeout == 0) {
dev_warn(&indio_dev->dev, "Conversion timed out! Resetting\n");
if (info->data->init_hw)
info->data->init_hw(info);
ret = -ETIMEDOUT;
} else {
*val = info->value;
*val2 = 0;
ret = IIO_VAL_INT;
}

mutex_unlock(&indio_dev->mlock);

return ret;
}