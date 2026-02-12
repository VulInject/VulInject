static int ltc4261_probe(struct i2c_client *client,
const struct i2c_device_id *id)
{
struct i2c_adapter *adapter = client->adapter;
struct device *dev = &client->dev;
struct ltc4261_data *data;
struct device *hwmon_dev;

if (!i2c_check_functionality(adapter, I2C_FUNC_SMBUS_BYTE_DATA))
return -ENODEV;

if (i2c_smbus_read_byte_data(client, LTC4261_STATUS) < 0) {
dev_err(dev, "Failed to read status register\n");
return -ENODEV;
}

data = devm_kzalloc(dev, sizeof(*data), GFP_KERNEL);
if (!data)
return -ENOMEM;

data->client = client;
mutex_init(&data->update_lock);


i2c_smbus_write_byte_data(client, LTC4261_FAULT, 0x00);

hwmon_dev = devm_hwmon_device_register_with_groups(dev, client->name,
data,
ltc4261_groups);
return PTR_ERR_OR_ZERO(hwmon_dev);
}