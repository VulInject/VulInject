static void spi_xfer(NRF_SPI_Type                  * p_spi,
spi_control_block_t           * p_cb,
nrf_drv_spi_xfer_desc_t const * p_xfer_desc)
{
p_cb->bytes_transferred = 0;
nrf_spi_int_disable(p_spi, NRF_SPI_INT_READY_MASK);

nrf_spi_event_clear(p_spi, NRF_SPI_EVENT_READY);




nrf_spi_txd_set(p_spi,
(p_xfer_desc->tx_length > 0 ?  p_xfer_desc->p_tx_buffer[0] : p_cb->orc));





if (p_xfer_desc->tx_length > 1)
{
nrf_spi_txd_set(p_spi, p_xfer_desc->p_tx_buffer[1]);
}
else if (p_xfer_desc->rx_length > 1)
{
nrf_spi_txd_set(p_spi, p_cb->orc);
}






if (p_cb->handler)
{
nrf_spi_int_enable(p_spi, NRF_SPI_INT_READY_MASK);
}
else
{
do {
while (!nrf_spi_event_check(p_spi, NRF_SPI_EVENT_READY)) {}
nrf_spi_event_clear(p_spi, NRF_SPI_EVENT_READY);
NRF_LOG_DEBUG("SPI: Event: NRF_SPI_EVENT_READY.\r\n"); 
} while (transfer_byte(p_spi, p_cb));
if (p_cb->ss_pin != NRF_DRV_SPI_PIN_NOT_USED)
{
nrf_gpio_pin_set(p_cb->ss_pin);
}
}
}