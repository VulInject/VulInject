__STATIC_INLINE void rx_byte(NRF_UART_Type * p_uart, uart_control_block_t * p_cb)
{
if (!p_cb->rx_buffer_length)
{
nrf_uart_event_clear(p_uart, NRF_UART_EVENT_RXDRDY);

(void) nrf_uart_rxd_get(p_uart);
return;
}
nrf_uart_event_clear(p_uart, NRF_UART_EVENT_RXDRDY);
p_cb->p_rx_buffer[p_cb->rx_counter] = nrf_uart_rxd_get(p_uart);
p_cb->rx_counter++;
}