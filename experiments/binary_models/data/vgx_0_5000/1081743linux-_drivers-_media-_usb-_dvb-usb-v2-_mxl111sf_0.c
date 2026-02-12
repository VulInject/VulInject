
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);

int mxl111sf_ctrl_msg(struct mxl111sf_state *state,
u8 cmd, u8 *wbuf, int wlen, u8 *rbuf, int rlen)
{
struct dvb_usb_device *d = state->d;
int wo = (rbuf == NULL || rlen == 0); 
int ret;

if (1 + wlen > MXL_MAX_XFER_SIZE) {
pr_warn("%s: len=%d is too big!\n", __func__, wlen);
return -EOPNOTSUPP;
}

pr_debug("%s(wlen = %d, rlen = %d)\n", __func__, wlen, rlen);

mutex_lock(&state->msg_lock);
memset(state->sndbuf, 0, 1+wlen);
memset(state->rcvbuf, 0, rlen);

state->sndbuf[0] = cmd;
memcpy(&state->sndbuf[1], wbuf, wlen);

ret = (wo) ? dvb_usbv2_generic_write(d, state->sndbuf, 1+wlen) :
dvb_usbv2_generic_rw(d, state->sndbuf, 1+wlen, state->rcvbuf,
rlen);

if (rbuf)
memcpy(rbuf, state->rcvbuf, rlen);

mutex_unlock(&state->msg_lock);

mxl_fail(ret);

return ret;
}