static int ps3av_send_cmd_pkt(const struct ps3av_send_hdr *send_buf,
struct ps3av_reply_hdr *recv_buf, int write_len,
int read_len)
{
int res;
u32 cmd;
int event;

if (!ps3av)
return -ENODEV;


res = ps3av_vuart_write(ps3av->dev, send_buf, write_len);
if (res < 0) {
dev_dbg(&ps3av->dev->core,
"%s: ps3av_vuart_write() failed (result=%d)\n",
__func__, res);
return res;
}


cmd = send_buf->cid;
do {

res = ps3av_vuart_read(ps3av->dev, recv_buf, PS3AV_HDR_SIZE,
timeout);
if (res != PS3AV_HDR_SIZE) {
dev_dbg(&ps3av->dev->core,
"%s: ps3av_vuart_read() failed (result=%d)\n",
__func__, res);
return res;
}


res = ps3av_vuart_read(ps3av->dev, &recv_buf->cid,
recv_buf->size, timeout);
if (res < 0) {
dev_dbg(&ps3av->dev->core,
"%s: ps3av_vuart_read() failed (result=%d)\n",
__func__, res);
return res;
}
res += PS3AV_HDR_SIZE;	
event = ps3av_parse_event_packet(recv_buf);

} while (event);

if ((cmd | PS3AV_REPLY_BIT) != recv_buf->cid) {
dev_dbg(&ps3av->dev->core, "%s: reply err (result=%x)\n",
__func__, recv_buf->cid);
return -EINVAL;
}

return 0;
}