static irqreturn_t cm36651_irq_handler(int irq, void *data)
{
struct iio_dev *indio_dev = data;
struct cm36651_data *cm36651 = iio_priv(indio_dev);
struct i2c_client *client = cm36651->client;
int ev_dir, ret;
u64 ev_code;


ret = i2c_smbus_read_byte(cm36651->ara_client);
if (ret < 0) {
dev_err(&client->dev,
"%s: Data read failed: %d\n", __func__, ret);
return IRQ_HANDLED;
}
switch (ret) {
case CM36651_CLOSE_PROXIMITY:
ev_dir = IIO_EV_DIR_RISING;
break;
case CM36651_FAR_PROXIMITY:
ev_dir = IIO_EV_DIR_FALLING;
break;
default:
dev_err(&client->dev,
"%s: Data read wrong: %d\n", __func__, ret);
return IRQ_HANDLED;
}

ev_code = IIO_UNMOD_EVENT_CODE(IIO_PROXIMITY,
CM36651_CMD_READ_RAW_PROXIMITY,
IIO_EV_TYPE_THRESH, ev_dir);

iio_push_event(indio_dev, ev_code, iio_get_time_ns(indio_dev));

return IRQ_HANDLED;
}