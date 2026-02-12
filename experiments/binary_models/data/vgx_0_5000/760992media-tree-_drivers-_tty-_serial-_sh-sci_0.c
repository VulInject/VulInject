static void sci_dma_tx_complete(void *arg)
{
struct sci_port *s = arg;
struct uart_port *port = &s->port;
struct circ_buf *xmit = &port->state->xmit;
unsigned long flags;

dev_dbg(port->dev, "%s(%d)\n", __func__, port->line);

spin_lock_irqsave(&port->lock, flags);

xmit->tail += s->tx_dma_len;
xmit->tail &= UART_XMIT_SIZE - 1;

port->icount.tx += s->tx_dma_len;

if (uart_circ_chars_pending(xmit) < WAKEUP_CHARS)
uart_write_wakeup(port);

if (!uart_circ_empty(xmit)) {
s->cookie_tx = 0;
schedule_work(&s->work_tx);
} else {
s->cookie_tx = -EINVAL;
if (port->type == PORT_SCIFA || port->type == PORT_SCIFB) {
u16 ctrl = serial_port_in(port, SCSCR);
serial_port_out(port, SCSCR, ctrl & ~SCSCR_TIE);
}
}

spin_unlock_irqrestore(&port->lock, flags);
}