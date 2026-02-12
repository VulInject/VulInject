uint32_t nrf_drv_ppi_channel_alloc(nrf_ppi_channel_t * p_channel)
{
uint32_t err_code = NRF_SUCCESS;
nrf_ppi_channel_t channel;
uint32_t mask = 0;

err_code = NRF_ERROR_NO_MEM;

mask = NRF_PPI_PROG_APP_CHANNELS_MASK;
for (channel = NRF_PPI_CHANNEL0; mask != 0; mask &= ~nrf_drv_ppi_channel_to_mask(channel), channel++)
{
CRITICAL_REGION_ENTER();
if ((mask & nrf_drv_ppi_channel_to_mask(channel)) && (!is_allocated_channel(channel)))
{
channel_allocated_set(channel);
*p_channel = channel;
err_code   = NRF_SUCCESS;
}
CRITICAL_REGION_EXIT();
if (err_code == NRF_SUCCESS)
{
NRF_LOG_INFO("Allocated channel: %d.\r\n", channel);
break;
}
}

NRF_LOG_INFO("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)ERR_TO_STR(err_code));
return err_code;
}