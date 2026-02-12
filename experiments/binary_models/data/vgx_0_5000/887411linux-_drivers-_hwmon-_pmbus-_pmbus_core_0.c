static s64 pmbus_reg2data_linear(struct pmbus_data *data,
struct pmbus_sensor *sensor)
{
s16 exponent;
s32 mantissa;
s64 val;

if (sensor->class == PSC_VOLTAGE_OUT) {	
exponent = data->exponent[sensor->page];
mantissa = (u16) sensor->data;
} else {				
exponent = ((s16)sensor->data) >> 11;
mantissa = ((s16)((sensor->data & 0x7ff) << 5)) >> 5;
}

val = mantissa;


if (sensor->class != PSC_FAN)
val = val * 1000LL;


if (sensor->class == PSC_POWER)
val = val * 1000LL;

if (exponent >= 0)
val <<= exponent;
else
val >>= -exponent;

return val;
}