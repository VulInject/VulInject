static void gsm_dtr_rts(struct tty_port *port, int onoff)
{
struct gsm_dlci *dlci = container_of(port, struct gsm_dlci, port);
unsigned int modem_tx = dlci->modem_tx;
if (onoff)
modem_tx |= TIOCM_DTR | TIOCM_RTS;
else
modem_tx &= ~(TIOCM_DTR | TIOCM_RTS);
if (modem_tx != dlci->modem_tx) {
dlci->modem_tx = modem_tx;
gsmtty_modem_update(dlci, 0);
}
}