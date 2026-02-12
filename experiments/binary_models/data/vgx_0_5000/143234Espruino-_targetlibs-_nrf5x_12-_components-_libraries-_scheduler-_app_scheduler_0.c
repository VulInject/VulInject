uint32_t app_sched_init(uint16_t event_size, uint16_t queue_size, void * p_event_buffer)
{
uint16_t data_start_index = (queue_size + 1) * sizeof(event_header_t);


if (!is_word_aligned(p_event_buffer))
{
return NRF_ERROR_INVALID_PARAM;
}


m_queue_event_headers = p_event_buffer;
m_queue_event_data    = &((uint8_t *)p_event_buffer)[data_start_index];
m_queue_end_index     = 0;
m_queue_start_index   = 0;
m_queue_event_size    = event_size;
m_queue_size          = queue_size;

m_max_queue_utilization = 0;

return NRF_SUCCESS;
}