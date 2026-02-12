static struct max6642_data *max6642_update_device(struct device *dev)
{
struct max6642_data *data = dev_get_drvdata(dev);
struct i2c_client *client = data->client;
u16 val, tmp;

mutex_lock(&data->update_lock);

if (time_after(jiffies, data->last_updated + HZ) || !data->valid) {
dev_dbg(dev, "Updating max6642 data.\n");
val = i2c_smbus_read_byte_data(client,
MAX6642_REG_R_LOCAL_TEMPL);
tmp = (val >> 6) & 3;
val = i2c_smbus_read_byte_data(client,
MAX6642_REG_R_LOCAL_TEMP);
val = (val << 2) | tmp;
data->temp_input[0] = val;
val = i2c_smbus_read_byte_data(client,
MAX6642_REG_R_REMOTE_TEMPL);
tmp = (val >> 6) & 3;
val = i2c_smbus_read_byte_data(client,
MAX6642_REG_R_REMOTE_TEMP);
val = (val << 2) | tmp;
data->temp_input[1] = val;
data->alarms = i2c_smbus_read_byte_data(client,
MAX6642_REG_R_STATUS);

data->last_updated = jiffies;
data->valid = 1;
}

mutex_unlock(&data->update_lock);

return data;
}