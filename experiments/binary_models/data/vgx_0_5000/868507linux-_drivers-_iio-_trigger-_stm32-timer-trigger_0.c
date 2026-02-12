static int stm32_counter_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2, long mask)
{
struct stm32_timer_trigger *priv = iio_priv(indio_dev);
u32 dat;

switch (mask) {
case IIO_CHAN_INFO_RAW:
regmap_read(priv->regmap, TIM_CNT, &dat);
*val = dat;
return IIO_VAL_INT;

case IIO_CHAN_INFO_ENABLE:
regmap_read(priv->regmap, TIM_CR1, &dat);
*val = (dat & TIM_CR1_CEN) ? 1 : 0;
return IIO_VAL_INT;

case IIO_CHAN_INFO_SCALE:
regmap_read(priv->regmap, TIM_SMCR, &dat);
dat &= TIM_SMCR_SMS;

*val = 1;
*val2 = 0;


if (dat == 3)
*val2 = 2;

return IIO_VAL_FRACTIONAL_LOG2;
}

return -EINVAL;
}