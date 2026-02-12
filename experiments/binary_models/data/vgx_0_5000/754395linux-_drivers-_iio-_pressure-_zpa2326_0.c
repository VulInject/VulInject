static int zpa2326_postenable_buffer(struct iio_dev *indio_dev)
{
const struct zpa2326_private *priv = iio_priv(indio_dev);
int                           err;

if (!priv->waken) {

err = zpa2326_clear_fifo(indio_dev, 0);
if (err) {
zpa2326_err(indio_dev,
"failed to enable buffering (%d)", err);
return err;
}
}

if (!iio_trigger_using_own(indio_dev) && priv->waken) {

err = zpa2326_config_oneshot(indio_dev, priv->irq);
if (err) {
zpa2326_err(indio_dev,
"failed to enable buffering (%d)", err);
return err;
}
}

return 0;
}