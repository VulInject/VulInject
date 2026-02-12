static int i2c_hid_of_power_up(struct i2chid_ops *ops)
{
struct i2c_hid_of *ihid_of = container_of(ops, struct i2c_hid_of, ops);
struct device *dev = &ihid_of->client->dev;
int ret;

ret = regulator_bulk_enable(ARRAY_SIZE(ihid_of->supplies),
ihid_of->supplies);
if (ret) {
dev_warn(dev, "Failed to enable supplies: %d\n", ret);
return ret;
}

if (ihid_of->post_power_delay_ms)
msleep(ihid_of->post_power_delay_ms);

return 0;
}