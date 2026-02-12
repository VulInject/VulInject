static int mma9553_read_status_word(struct mma9553_data *data, u16 reg,
u16 *tmp)
{
bool powered_on;
int ret;


powered_on = mma9553_is_any_event_enabled(data, false, 0) ||
data->stepcnt_enabled;
if (!powered_on) {
dev_err(&data->client->dev, "No channels enabled\n");
return -EINVAL;
}

mutex_lock(&data->mutex);
ret = mma9551_read_status_word(data->client, MMA9551_APPID_PEDOMETER,
reg, tmp);
mutex_unlock(&data->mutex);
return ret;
}