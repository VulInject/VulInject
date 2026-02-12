static int keyspan_usa19_calc_baud(struct usb_serial_port *port,
u32 baud_rate, u32 baudclk, u8 *rate_hi,
u8 *rate_low, u8 *prescaler, int portnum)
{
u32 	b16,	
div,	
cnt;	

dev_dbg(&port->dev, "%s - %d.\n", __func__, baud_rate);


b16 = baud_rate * 16L;
if (b16 == 0)
return KEYSPAN_INVALID_BAUD_RATE;

if (baud_rate > 57600)
return KEYSPAN_INVALID_BAUD_RATE;


div = baudclk / b16;
if (div == 0)
return KEYSPAN_INVALID_BAUD_RATE;
else
cnt = 0 - div;

if (div > 0xffff)
return KEYSPAN_INVALID_BAUD_RATE;


if (rate_low)
*rate_low = (u8) (cnt & 0xff);
if (rate_hi)
*rate_hi = (u8) ((cnt >> 8) & 0xff);
if (rate_low && rate_hi)
dev_dbg(&port->dev, "%s - %d %02x %02x.\n",
__func__, baud_rate, *rate_hi, *rate_low);
return KEYSPAN_BAUD_RATE_OK;
}