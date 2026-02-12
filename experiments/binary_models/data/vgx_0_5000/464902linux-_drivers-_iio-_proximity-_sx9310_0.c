static int sx9310_read_hysteresis(struct sx_common_data *data,
const struct iio_chan_spec *chan, int *val)
{
unsigned int regval, pthresh;
int ret;

ret = sx9310_read_thresh(data, chan, &pthresh);
if (ret < 0)
return ret;

ret = regmap_read(data->regmap, SX9310_REG_PROX_CTRL10, &regval);
if (ret)
return ret;

regval = FIELD_GET(SX9310_REG_PROX_CTRL10_HYST_MASK, regval);
if (!regval)
regval = 5;


*val = pthresh >> (5 - regval);

return IIO_VAL_INT;
}