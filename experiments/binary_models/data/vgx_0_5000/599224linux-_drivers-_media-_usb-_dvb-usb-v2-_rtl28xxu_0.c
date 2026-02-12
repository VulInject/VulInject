static int rtl2832u_get_rc_config(struct dvb_usb_device *d,
struct dvb_usb_rc *rc)
{

if (rtl28xxu_disable_rc)
return rtl28xxu_wr_reg(d, IR_RX_IE, 0x00);


if (!rc->map_name)
rc->map_name = RC_MAP_EMPTY;
rc->allowed_protos = RC_PROTO_BIT_ALL_IR_DECODER;
rc->driver_type = RC_DRIVER_IR_RAW;
rc->query = rtl2832u_rc_query;
rc->interval = 200;

rc->timeout = 0xbf * 51;

return 0;
}