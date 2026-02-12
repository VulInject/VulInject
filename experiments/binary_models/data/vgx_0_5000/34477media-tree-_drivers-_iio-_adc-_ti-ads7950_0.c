static int ti_ads7950_update_scan_mode(struct iio_dev *indio_dev,
const unsigned long *active_scan_mask)
{
struct ti_ads7950_state *st = iio_priv(indio_dev);
int i, cmd, len;

len = 0;
for_each_set_bit(i, active_scan_mask, indio_dev->num_channels) {
cmd = TI_ADS7950_CR_WRITE | TI_ADS7950_CR_CHAN(i) | st->settings;
st->tx_buf[len++] = cpu_to_be16(cmd);
}


len += 2;
for (i = 0; i < len; i++) {
if ((i + 2) < len)
st->ring_xfer[i].tx_buf = &st->tx_buf[i];
if (i >= 2)
st->ring_xfer[i].rx_buf = &st->rx_buf[i - 2];
st->ring_xfer[i].len = 2;
st->ring_xfer[i].cs_change = 1;
}

st->ring_xfer[len - 1].cs_change = 0;

spi_message_init_with_transfers(&st->ring_msg, st->ring_xfer, len);

return 0;
}