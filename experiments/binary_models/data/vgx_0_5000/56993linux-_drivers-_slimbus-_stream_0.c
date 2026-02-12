}
EXPORT_SYMBOL_GPL(slim_stream_prepare);

static int slim_define_channel_content(struct slim_stream_runtime *stream,
struct slim_port *port)
{
struct slim_device *sdev = stream->dev;
u8 wbuf[4];
struct slim_val_inf msg = {0, 4, NULL, wbuf, NULL};
u8 mc = SLIM_MSG_MC_NEXT_DEFINE_CONTENT;
DEFINE_SLIM_LDEST_TXN(txn, mc, 8, stream->dev->laddr, &msg);

wbuf[0] = port->ch.id;
wbuf[1] = port->ch.prrate;


if (stream->prot != SLIM_PROTO_ISO)
wbuf[1] |= SLIM_CHANNEL_CONTENT_FL;

wbuf[2] = port->ch.data_fmt | (port->ch.aux_fmt << 4);
wbuf[3] = stream->bps/SLIM_SLOT_LEN_BITS;
port->ch.state = SLIM_CH_STATE_CONTENT_DEFINED;

return slim_do_transfer(sdev->ctrl, &txn);
}