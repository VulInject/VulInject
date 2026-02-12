static int iuu_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
{
struct usb_serial_port *port = tty->driver_data;
struct iuu_private *priv = usb_get_serial_port_data(port);
unsigned long flags;


dev_dbg(&port->dev, "%s msg : SET = 0x%04x, CLEAR = 0x%04x\n",
__func__, set, clear);

spin_lock_irqsave(&priv->lock, flags);

if ((set & TIOCM_RTS) && !(priv->tiostatus == TIOCM_RTS)) {
dev_dbg(&port->dev, "%s TIOCMSET RESET called !!!\n", __func__);
priv->reset = 1;
}
if (set & TIOCM_RTS)
priv->tiostatus = TIOCM_RTS;

spin_unlock_irqrestore(&priv->lock, flags);
return 0;
}