GIOStatus ga_channel_read(GAChannel *c, char *buf, size_t size, gsize *count)
{
GAChannelReadState *rs = &c->rstate;
GIOStatus status;
size_t to_read = 0;

if (c->pending_events & G_IO_ERR) {
return G_IO_STATUS_ERROR;
}

*count = to_read = MIN(size, rs->pending);
if (to_read) {
memcpy(buf, rs->buf + rs->cur, to_read);
rs->cur += to_read;
rs->pending -= to_read;
status = G_IO_STATUS_NORMAL;
} else {
status = G_IO_STATUS_AGAIN;
}

return status;
}