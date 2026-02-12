static int bmc150_accel_update_slope(struct bmc150_accel_data *data)
{
struct device *dev = regmap_get_device(data->regmap);
int ret;

ret = regmap_write(data->regmap, BMC150_ACCEL_REG_INT_6,
data->slope_thres);
if (ret < 0) {
dev_err(dev, "Error writing reg_int_6\n");
return ret;
}

ret = regmap_update_bits(data->regmap, BMC150_ACCEL_REG_INT_5,
BMC150_ACCEL_SLOPE_DUR_MASK, data->slope_dur);
if (ret < 0) {
dev_err(dev, "Error updating reg_int_5\n");
return ret;
}

dev_dbg(dev, "%s: %x %x\n", __func__, data->slope_thres,
data->slope_dur);

return ret;
}