ret_code_t nrf_drv_qspi_cinstr_xfer(nrf_qspi_cinstr_conf_t const * p_config,
void const *                   p_tx_buffer,
void *                         p_rx_buffer)
{
ASSERT(m_cb.state != NRF_DRV_STATE_UNINITIALIZED);

if (m_cb.interrupt_driven)
{
return NRF_ERROR_BUSY;
}

nrf_qspi_event_clear(NRF_QSPI, NRF_QSPI_EVENT_READY);

if (p_tx_buffer)
{
nrf_qspi_cinstrdata_set(NRF_QSPI, p_config->length, p_tx_buffer);
}
nrf_qspi_int_disable(NRF_QSPI, NRF_QSPI_INT_READY_MASK);

nrf_qspi_cinstr_transfer_start(NRF_QSPI, p_config);

QSPI_WAIT_READY();
nrf_qspi_int_enable(NRF_QSPI, NRF_QSPI_INT_READY_MASK);

if (p_rx_buffer)
{
nrf_qspi_cinstrdata_get(NRF_QSPI, p_config->length, p_rx_buffer);
}

return NRF_SUCCESS;
}