static int rk3066_hdmi_i2c_read(struct rk3066_hdmi *hdmi, struct i2c_msg *msgs)
{
int length = msgs->len;
u8 *buf = msgs->buf;
int ret;

ret = wait_for_completion_timeout(&hdmi->i2c->cmpltn, HZ / 10);
if (!ret || hdmi->i2c->stat & HDMI_INTR_EDID_ERR)
return -EAGAIN;

while (length--)
*buf++ = hdmi_readb(hdmi, HDMI_DDC_READ_FIFO_ADDR);

return 0;
}