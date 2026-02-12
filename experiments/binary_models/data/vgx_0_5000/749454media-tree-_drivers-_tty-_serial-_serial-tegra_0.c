static int tegra_set_baudrate(struct tegra_uart_port *tup, unsigned int baud)
{
unsigned long rate;
unsigned int divisor;
unsigned long lcr;
int ret;

if (tup->current_baud == baud)
return 0;

if (tup->cdata->support_clk_src_div) {
rate = baud * 16;
ret = clk_set_rate(tup->uart_clk, rate);
if (ret < 0) {
dev_err(tup->uport.dev,
"clk_set_rate() failed for rate %lu\n", rate);
return ret;
}
divisor = 1;
} else {
rate = clk_get_rate(tup->uart_clk);
divisor = DIV_ROUND_CLOSEST(rate, baud * 16);
}

lcr = tup->lcr_shadow;
lcr |= UART_LCR_DLAB;
tegra_uart_write(tup, lcr, UART_LCR);

tegra_uart_write(tup, divisor & 0xFF, UART_TX);
tegra_uart_write(tup, ((divisor >> 8) & 0xFF), UART_IER);

lcr &= ~UART_LCR_DLAB;
tegra_uart_write(tup, lcr, UART_LCR);


tegra_uart_read(tup, UART_SCR);

tup->current_baud = baud;


tegra_uart_wait_sym_time(tup, 2);
return 0;
}