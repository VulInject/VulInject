static unsigned int mos7840_chars_in_buffer(struct tty_struct *tty)
{
struct usb_serial_port *port = tty->driver_data;
struct moschip_port *mos7840_port = usb_get_serial_port_data(port);
int i;
unsigned int chars = 0;
unsigned long flags;

spin_lock_irqsave(&mos7840_port->pool_lock, flags);
for (i = 0; i < NUM_URBS; ++i) {
if (mos7840_port->busy[i]) {
struct urb *urb = mos7840_port->write_urb_pool[i];
chars += urb->transfer_buffer_length;
}
}
spin_unlock_irqrestore(&mos7840_port->pool_lock, flags);
dev_dbg(&port->dev, "%s - returns %u\n", __func__, chars);
return chars;

}