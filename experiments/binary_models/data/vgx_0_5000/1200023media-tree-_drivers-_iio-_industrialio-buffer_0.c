static int iio_disable_buffers(struct iio_dev *indio_dev)
{
struct iio_buffer *buffer;
int ret = 0;
int ret2;


if (list_empty(&indio_dev->buffer_list))
return 0;



if (indio_dev->setup_ops->predisable) {
ret2 = indio_dev->setup_ops->predisable(indio_dev);
if (ret2 && !ret)
ret = ret2;
}

list_for_each_entry(buffer, &indio_dev->buffer_list, buffer_list) {
ret2 = iio_buffer_disable(buffer, indio_dev);
if (ret2 && !ret)
ret = ret2;
}

indio_dev->currentmode = INDIO_DIRECT_MODE;

if (indio_dev->setup_ops->postdisable) {
ret2 = indio_dev->setup_ops->postdisable(indio_dev);
if (ret2 && !ret)
ret = ret2;
}

iio_free_scan_mask(indio_dev, indio_dev->active_scan_mask);
indio_dev->active_scan_mask = NULL;

return ret;
}