static int ad5791_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
{
struct ad5791_state *st = iio_priv(indio_dev);
u64 val64;
int ret;

switch (m) {
case IIO_CHAN_INFO_RAW:
ret = ad5791_spi_read(st, chan->address, val);
if (ret)
return ret;
*val &= AD5791_DAC_MASK;
*val >>= chan->scan_type.shift;
return IIO_VAL_INT;
case IIO_CHAN_INFO_SCALE:
*val = st->vref_mv;
*val2 = (1 << chan->scan_type.realbits) - 1;
return IIO_VAL_FRACTIONAL;
case IIO_CHAN_INFO_OFFSET:
val64 = (((u64)st->vref_neg_mv) << chan->scan_type.realbits);
do_div(val64, st->vref_mv);
*val = -val64;
return IIO_VAL_INT;
default:
return -EINVAL;
}

};