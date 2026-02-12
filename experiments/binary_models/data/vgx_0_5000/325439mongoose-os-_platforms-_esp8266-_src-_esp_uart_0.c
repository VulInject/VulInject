IRAM bool adj_rx_fifo_full_thresh(struct mgos_uart_state *us) {
int uart_no = us->uart_no;
uint8_t thresh = us->cfg.dev.rx_fifo_full_thresh;
uint8_t rx_fifo_len = esp_uart_rx_fifo_len(uart_no);
if (rx_fifo_len >= thresh && us->cfg.rx_fc_type == MGOS_UART_FC_SW) {
thresh = us->cfg.dev.rx_fifo_fc_thresh;
}
if (get_rx_fifo_full_thresh(uart_no) != thresh) {
uint32_t conf1 = READ_PERI_REG(UART_CONF1(uart_no));
conf1 = (conf1 & ~0x7f) | thresh;
WRITE_PERI_REG(UART_CONF1(uart_no), conf1);
}
return (rx_fifo_len < thresh);
}