static int isl29028_als_get(struct isl29028_chip *chip, int *als_data)
{
struct device *dev = regmap_get_device(chip->regmap);
int ret;
int als_ir_data;

ret = isl29028_set_als_ir_mode(chip, ISL29028_MODE_ALS);
if (ret < 0) {
dev_err(dev, "%s(): Error %d enabling ALS mode\n", __func__,
ret);
return ret;
}

ret = isl29028_read_als_ir(chip, &als_ir_data);
if (ret < 0)
return ret;


if (chip->lux_scale == 125)
als_ir_data = (als_ir_data * 31) / 1000;
else
als_ir_data = (als_ir_data * 49) / 100;

*als_data = als_ir_data;

return 0;
}