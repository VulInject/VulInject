static int keyspan_usa26_send_setup(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port)
{
struct keyspan_usa26_portControlMessage	msg;
struct keyspan_serial_private 		*s_priv;
struct keyspan_port_private 		*p_priv;
const struct keyspan_device_details	*d_details;
struct urb				*this_urb;
int 					device_port, err;

dev_dbg(&port->dev, "%s reset=%d\n", __func__, reset_port);

s_priv = usb_get_serial_data(serial);
p_priv = usb_get_serial_port_data(port);
d_details = s_priv->device_details;
device_port = port->port_number;

this_urb = p_priv->outcont_urb;


if (this_urb == NULL) {
dev_dbg(&port->dev, "%s - oops no urb.\n", __func__);
return -1;
}

dev_dbg(&port->dev, "%s - endpoint %x\n",
__func__, usb_pipeendpoint(this_urb->pipe));


if ((reset_port + 1) > p_priv->resend_cont)
p_priv->resend_cont = reset_port + 1;
if (this_urb->status == -EINPROGRESS) {

mdelay(5);
return -1;
}

memset(&msg, 0, sizeof(struct keyspan_usa26_portControlMessage));


if (p_priv->old_baud != p_priv->baud) {
p_priv->old_baud = p_priv->baud;
msg.setClocking = 0xff;
if (d_details->calculate_baud_rate(port, p_priv->baud, d_details->baudclk,
&msg.baudHi, &msg.baudLo, &msg.prescaler,
device_port) == KEYSPAN_INVALID_BAUD_RATE) {
dev_dbg(&port->dev, "%s - Invalid baud rate %d requested, using 9600.\n",
__func__, p_priv->baud);
msg.baudLo = 0;
msg.baudHi = 125;	
msg.prescaler = 10;
}
msg.setPrescaler = 0xff;
}

msg.lcr = (p_priv->cflag & CSTOPB) ? STOPBITS_678_2 : STOPBITS_5678_1;
switch (p_priv->cflag & CSIZE) {
case CS5:
msg.lcr |= USA_DATABITS_5;
break;
case CS6:
msg.lcr |= USA_DATABITS_6;
break;
case CS7:
msg.lcr |= USA_DATABITS_7;
break;
case CS8:
msg.lcr |= USA_DATABITS_8;
break;
}
if (p_priv->cflag & PARENB) {

msg.lcr |= (p_priv->cflag & PARODD) ?
USA_PARITY_ODD : USA_PARITY_EVEN;
}
msg.setLcr = 0xff;

msg.ctsFlowControl = (p_priv->flow_control == flow_cts);
msg.xonFlowControl = 0;
msg.setFlowControl = 0xff;
msg.forwardingLength = 16;
msg.xonChar = 17;
msg.xoffChar = 19;


if (reset_port == 1) {
msg._txOn = 1;
msg._txOff = 0;
msg.txFlush = 0;
msg.txBreak = 0;
msg.rxOn = 1;
msg.rxOff = 0;
msg.rxFlush = 1;
msg.rxForward = 0;
msg.returnStatus = 0;
msg.resetDataToggle = 0xff;
}


else if (reset_port == 2) {
msg._txOn = 0;
msg._txOff = 1;
msg.txFlush = 0;
msg.txBreak = 0;
msg.rxOn = 0;
msg.rxOff = 1;
msg.rxFlush = 1;
msg.rxForward = 0;
msg.returnStatus = 0;
msg.resetDataToggle = 0;
}


else {
msg._txOn = (!p_priv->break_on);
msg._txOff = 0;
msg.txFlush = 0;
msg.txBreak = (p_priv->break_on);
msg.rxOn = 0;
msg.rxOff = 0;
msg.rxFlush = 0;
msg.rxForward = 0;
msg.returnStatus = 0;
msg.resetDataToggle = 0x0;
}


msg.setTxTriState_setRts = 0xff;
msg.txTriState_rts = p_priv->rts_state;

msg.setHskoa_setDtr = 0xff;
msg.hskoa_dtr = p_priv->dtr_state;

p_priv->resend_cont = 0;
memcpy(this_urb->transfer_buffer, &msg, sizeof(msg));


this_urb->transfer_buffer_length = sizeof(msg);

err = usb_submit_urb(this_urb, GFP_ATOMIC);
if (err != 0)
dev_dbg(&port->dev, "%s - usb_submit_urb(setup) failed (%d)\n", __func__, err);
return 0;
}