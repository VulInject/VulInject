static int mxs_auart_startup(struct uart_port *u)
{
int ret;
struct mxs_auart_port *s = to_auart_port(u);

ret = clk_prepare_enable(s->clk);
if (ret)
return ret;

if (uart_console(u)) {
mxs_clr(AUART_CTRL0_CLKGATE, s, REG_CTRL0);
} else {

mxs_auart_reset_assert(s);
mxs_auart_reset_deassert(s);
}

mxs_set(AUART_CTRL2_UARTEN, s, REG_CTRL2);

mxs_write(AUART_INTR_RXIEN | AUART_INTR_RTIEN | AUART_INTR_CTSMIEN,
s, REG_INTR);


u->fifosize = MXS_AUART_FIFO_SIZE;


mxs_set(AUART_LINECTRL_FEN, s, REG_LINECTRL);


mctrl_gpio_get(s->gpios, &s->mctrl_prev);

s->ms_irq_enabled = false;
return 0;
}