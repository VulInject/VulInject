ret_code_t nrf_queue_write(nrf_queue_t const * p_queue,
void const        * p_data,
size_t              element_count)
{
ret_code_t status = NRF_SUCCESS;

ASSERT(p_queue != NULL);
ASSERT(p_data != NULL);
ASSERT(element_count <= p_queue->size);

if (element_count == 0)
{
return NRF_SUCCESS;
}

CRITICAL_REGION_ENTER();

if ((nrf_queue_available_get(p_queue) >= element_count)
|| (p_queue->mode == NRF_QUEUE_MODE_OVERFLOW))
{
queue_write(p_queue, p_data, element_count);
}
else
{
status = NRF_ERROR_NO_MEM;
}

CRITICAL_REGION_EXIT();

return status;
}