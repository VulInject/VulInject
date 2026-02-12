static uint32_t app_sched_event_get(void * *                    pp_event_data,
uint16_t *                  p_event_data_size,
app_sched_event_handler_t * p_event_handler)
{
uint32_t err_code = NRF_ERROR_NOT_FOUND;

if (!APP_SCHED_QUEUE_EMPTY())
{
uint16_t event_index;





event_index         = m_queue_start_index;
m_queue_start_index = next_index(m_queue_start_index);

*pp_event_data     = &m_queue_event_data[event_index * m_queue_event_size];
*p_event_data_size = m_queue_event_headers[event_index].event_data_size;
*p_event_handler   = m_queue_event_headers[event_index].handler;

err_code = NRF_SUCCESS;
}

return err_code;
}