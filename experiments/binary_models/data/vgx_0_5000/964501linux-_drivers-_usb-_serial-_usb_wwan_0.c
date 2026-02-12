unsigned int usb_wwan_write_room(struct tty_struct *tty)
{
struct usb_serial_port *port = tty->driver_data;
struct usb_wwan_port_private *portdata;
int i;
unsigned int data_len = 0;
struct urb *this_urb;

portdata = usb_get_serial_port_data(port);

for (i = 0; i < N_OUT_URB; i++) {
this_urb = portdata->out_urbs[i];
if (this_urb && !test_bit(i, &portdata->out_busy))
data_len += OUT_BUFLEN;
}

dev_dbg(&port->dev, "%s: %u\n", __func__, data_len);
return data_len;
}