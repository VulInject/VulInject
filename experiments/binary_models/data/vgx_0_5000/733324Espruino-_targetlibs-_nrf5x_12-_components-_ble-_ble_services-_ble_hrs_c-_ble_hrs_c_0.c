static tx_message_t  m_tx_buffer[TX_BUFFER_SIZE];  
static uint32_t      m_tx_insert_index = 0;        
static uint32_t      m_tx_index = 0;               



static void tx_buffer_process(void)
{
if (m_tx_index != m_tx_insert_index)
{
uint32_t err_code;

if (m_tx_buffer[m_tx_index].type == READ_REQ)
{
err_code = sd_ble_gattc_read(m_tx_buffer[m_tx_index].conn_handle,
m_tx_buffer[m_tx_index].req.read_handle,
0);
}
else
{
err_code = sd_ble_gattc_write(m_tx_buffer[m_tx_index].conn_handle,
&m_tx_buffer[m_tx_index].req.write_req.gattc_params);
}
if (err_code == NRF_SUCCESS)
{
NRF_LOG_INFO("SD Read/Write API returns Success..\r\n");
m_tx_index++;
m_tx_index &= TX_BUFFER_MASK;
}
else
{
NRF_LOG_INFO("SD Read/Write API returns error. This message sending will be "
"attempted again..\r\n");
}
}
}