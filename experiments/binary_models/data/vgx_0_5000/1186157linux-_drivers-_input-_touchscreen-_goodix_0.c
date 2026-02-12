static void goodix_read_config(struct goodix_ts_data *ts)
{
int x_max, y_max;
int error;


if (!ts->firmware_name) {
error = goodix_i2c_read(ts->client, ts->chip->config_addr,
ts->config, ts->chip->config_len);
if (error) {
ts->int_trigger_type = GOODIX_INT_TRIGGER;
ts->max_touch_num = GOODIX_MAX_CONTACTS;
return;
}
}

ts->int_trigger_type = ts->config[TRIGGER_LOC] & 0x03;
ts->max_touch_num = ts->config[MAX_CONTACTS_LOC] & 0x0f;

x_max = get_unaligned_le16(&ts->config[RESOLUTION_LOC]);
y_max = get_unaligned_le16(&ts->config[RESOLUTION_LOC + 2]);
if (x_max && y_max) {
input_abs_set_max(ts->input_dev, ABS_MT_POSITION_X, x_max - 1);
input_abs_set_max(ts->input_dev, ABS_MT_POSITION_Y, y_max - 1);
}

ts->chip->calc_config_checksum(ts);
}