static int tsl2772_read_prox_diodes(struct tsl2772_chip *chip)
{
struct device *dev = &chip->client->dev;
int i, ret, num_leds, prox_diode_mask;
u32 leds[TSL2772_MAX_PROX_LEDS];

ret = device_property_count_u32(dev, "amstaos,proximity-diodes");
if (ret < 0)
return ret;

num_leds = ret;
if (num_leds > TSL2772_MAX_PROX_LEDS)
num_leds = TSL2772_MAX_PROX_LEDS;

ret = device_property_read_u32_array(dev, "amstaos,proximity-diodes", leds, num_leds);
if (ret < 0) {
dev_err(dev, "Invalid value for amstaos,proximity-diodes: %d.\n", ret);
return ret;
}

prox_diode_mask = 0;
for (i = 0; i < num_leds; i++) {
if (leds[i] == 0)
prox_diode_mask |= TSL2772_DIODE0;
else if (leds[i] == 1)
prox_diode_mask |= TSL2772_DIODE1;
else {
dev_err(dev, "Invalid value %d in amstaos,proximity-diodes.\n", leds[i]);
return -EINVAL;
}
}

return 0;
}