int iio_device_attach_buffer(struct iio_dev *indio_dev,
struct iio_buffer *buffer)
{
struct iio_dev_opaque *iio_dev_opaque = to_iio_dev_opaque(indio_dev);
struct iio_buffer **new, **old = iio_dev_opaque->attached_buffers;
unsigned int cnt = iio_dev_opaque->attached_buffers_cnt;

cnt++;

new = krealloc(old, sizeof(*new) * cnt, GFP_KERNEL);
if (!new)
return -ENOMEM;
iio_dev_opaque->attached_buffers = new;

buffer = iio_buffer_get(buffer);


if (!indio_dev->buffer)
indio_dev->buffer = buffer;

iio_dev_opaque->attached_buffers[cnt - 1] = buffer;
iio_dev_opaque->attached_buffers_cnt = cnt;

return 0;
}