static int ov7640_probe(struct i2c_client *client,
const struct i2c_device_id *id)
{
struct i2c_adapter *adapter = client->adapter;
struct v4l2_subdev *sd;

if (!i2c_check_functionality(adapter, I2C_FUNC_SMBUS_BYTE_DATA))
return -ENODEV;

sd = devm_kzalloc(&client->dev, sizeof(*sd), GFP_KERNEL);
if (sd == NULL)
return -ENOMEM;
v4l2_i2c_subdev_init(sd, client, &ov7640_ops);

client->flags = I2C_CLIENT_SCCB;

v4l_info(client, "chip found @ 0x%02x (%s)\n",
client->addr << 1, client->adapter->name);

if (write_regs(client, initial_registers) < 0) {
v4l_err(client, "error initializing OV7640\n");
return -ENODEV;
}

return 0;
}