static int anx6345_write(struct udevice *dev, unsigned int addr_off,
unsigned char reg_addr, unsigned char value)
{
uint8_t buf[2];
struct i2c_msg msg;
int ret;

msg.addr = addr_off;
msg.flags = 0;
buf[0] = reg_addr;
buf[1] = value;
msg.buf = buf;
msg.len = 2;
ret = dm_i2c_xfer(dev, &msg, 1);
if (ret) {
debug("%s: write failed, reg=%#x, value=%#x, ret=%d\n",
__func__, reg_addr, value, ret);
return ret;
}

return 0;
}