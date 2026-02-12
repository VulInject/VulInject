static void __init
pl011_console_get_options(struct uart_amba_port *uap, int *baud,
int *parity, int *bits)
{
if (pl011_read(uap, REG_CR) & UART01x_CR_UARTEN) {
unsigned int lcr_h, ibrd, fbrd;

lcr_h = pl011_read(uap, REG_LCRH_TX);

*parity = 'n';
if (lcr_h & UART01x_LCRH_PEN) {
if (lcr_h & UART01x_LCRH_EPS)
*parity = 'e';
else
*parity = 'o';
}

if ((lcr_h & 0x60) == UART01x_LCRH_WLEN_7)
*bits = 7;
else
*bits = 8;

ibrd = pl011_read(uap, REG_IBRD);
fbrd = pl011_read(uap, REG_FBRD);

*baud = uap->port.uartclk * 4 / (64 * ibrd + fbrd);

if (uap->vendor->oversampling) {
if (pl011_read(uap, REG_CR)
& ST_UART011_CR_OVSFACT)
*baud *= 2;
}
}
}