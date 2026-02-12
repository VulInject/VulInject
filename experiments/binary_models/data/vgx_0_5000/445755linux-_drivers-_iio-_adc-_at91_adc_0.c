static int at91_adc_probe_dt_ts(struct device_node *node,
struct at91_adc_state *st, struct device *dev)
{
int ret;
u32 prop;

ret = of_property_read_u32(node, "atmel,adc-ts-wires", &prop);
if (ret) {
dev_info(dev, "ADC Touch screen is disabled.\n");
return 0;
}

switch (prop) {
case 4:
case 5:
st->touchscreen_type = prop;
break;
default:
dev_err(dev, "Unsupported number of touchscreen wires (%d). Should be 4 or 5.\n", prop);
return -EINVAL;
}

if (!st->caps->has_tsmr)
return 0;
prop = 0;
of_property_read_u32(node, "atmel,adc-ts-pressure-threshold", &prop);
st->ts_pressure_threshold = prop;
if (st->ts_pressure_threshold) {
return 0;
} else {
dev_err(dev, "Invalid pressure threshold for the touchscreen\n");
return -EINVAL;
}
}