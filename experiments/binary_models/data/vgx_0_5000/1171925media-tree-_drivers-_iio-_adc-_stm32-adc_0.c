static irqreturn_t stm32_adc_trigger_handler(int irq, void *p)
{
struct iio_poll_func *pf = p;
struct iio_dev *indio_dev = pf->indio_dev;
struct stm32_adc *adc = iio_priv(indio_dev);

dev_dbg(&indio_dev->dev, "%s bufi=%d\n", __func__, adc->bufi);

if (!adc->dma_chan) {

adc->bufi = 0;
iio_push_to_buffers_with_timestamp(indio_dev, adc->buffer,
pf->timestamp);
} else {
int residue = stm32_adc_dma_residue(adc);

while (residue >= indio_dev->scan_bytes) {
u16 *buffer = (u16 *)&adc->rx_buf[adc->bufi];

iio_push_to_buffers_with_timestamp(indio_dev, buffer,
pf->timestamp);
residue -= indio_dev->scan_bytes;
adc->bufi += indio_dev->scan_bytes;
if (adc->bufi >= adc->rx_buf_sz)
adc->bufi = 0;
}
}

iio_trigger_notify_done(indio_dev->trig);


if (!adc->dma_chan)
stm32_adc_conv_irq_enable(adc);

return IRQ_HANDLED;
}