static void keyspan_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
const struct ktermios *old_termios)
{
int				baud_rate, device_port;
struct keyspan_port_private 	*p_priv;
const struct keyspan_device_details	*d_details;
unsigned int 			cflag;

p_priv = usb_get_serial_port_data(port);
d_details = p_priv->device_details;
cflag = tty->termios.c_cflag;
device_port = port->port_number;


baud_rate = tty_get_baud_rate(tty);

if (d_details->calculate_baud_rate(port, baud_rate, d_details->baudclk,
NULL, NULL, NULL, device_port) == KEYSPAN_BAUD_RATE_OK) {


p_priv->baud = baud_rate;
} else
baud_rate = tty_termios_baud_rate(old_termios);

tty_encode_baud_rate(tty, baud_rate, baud_rate);

p_priv->cflag = cflag;
p_priv->flow_control = (cflag & CRTSCTS) ? flow_cts : flow_none;


tty->termios.c_cflag &= ~CMSPAR;

keyspan_send_setup(port, 0);
}