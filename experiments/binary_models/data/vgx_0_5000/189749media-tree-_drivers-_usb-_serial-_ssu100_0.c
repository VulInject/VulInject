static inline int update_mctrl(struct usb_device *dev, unsigned int set,
unsigned int clear)
{
unsigned urb_value;
int result;

if (((set | clear) & (TIOCM_DTR | TIOCM_RTS)) == 0) {
dev_dbg(&dev->dev, "%s - DTR|RTS not being set|cleared\n", __func__);
return 0;	
}

clear &= ~set;	
urb_value = 0;
if (set & TIOCM_DTR)
urb_value |= UART_MCR_DTR;
if (set & TIOCM_RTS)
urb_value |= UART_MCR_RTS;

result = ssu100_setregister(dev, 0, UART_MCR, urb_value);
if (result < 0)
dev_dbg(&dev->dev, "%s Error from MODEM_CTRL urb\n", __func__);

return result;
}