static void uart_receive(void *opaque, const uint8_t *buf, int size)
{

NRF51UARTState *s = NRF51_UART(opaque);
int i;

if (size == 0 || s->rx_fifo_len >= UART_FIFO_LENGTH) {
return;
}

for (i = 0; i < size; i++) {
uint32_t pos = (s->rx_fifo_pos + s->rx_fifo_len) % UART_FIFO_LENGTH;
s->rx_fifo[pos] = buf[i];
s->rx_fifo_len++;
}

s->reg[R_UART_RXDRDY] = 1;
nrf51_uart_update_irq(s);
}