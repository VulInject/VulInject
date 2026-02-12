uint32_t hci_transport_rx_pkt_extract(uint8_t ** pp_buffer, uint16_t * p_length)
{
uint32_t err_code;

if (pp_buffer != NULL && p_length != NULL)
{
uint32_t length = 0;

if (m_is_slip_decode_ready)
{
m_is_slip_decode_ready = false;
err_code               = hci_mem_pool_rx_extract(pp_buffer, &length);
length                -= (PKT_HDR_SIZE + PKT_CRC_SIZE);

*p_length              = (uint16_t)length;
*pp_buffer            += PKT_HDR_SIZE;
}
else
{
err_code = NRF_ERROR_NO_MEM;
}
}
else
{
err_code = NRF_ERROR_NULL;
}

return err_code;
}