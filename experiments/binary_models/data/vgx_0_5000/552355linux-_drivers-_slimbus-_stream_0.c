static int slim_deactivate_remove_channel(struct slim_stream_runtime *stream,
struct slim_port *port)
{
struct slim_device *sdev = stream->dev;
u8 wbuf[1];
struct slim_val_inf msg = {0, 1, NULL, wbuf, NULL};
u8 mc = SLIM_MSG_MC_NEXT_DEACTIVATE_CHANNEL;
DEFINE_SLIM_LDEST_TXN(txn, mc, 5, stream->dev->laddr, &msg);
int ret;

wbuf[0] = port->ch.id;
ret = slim_do_transfer(sdev->ctrl, &txn);
if (ret)
return ret;

txn.mc = SLIM_MSG_MC_NEXT_REMOVE_CHANNEL;
port->ch.state = SLIM_CH_STATE_REMOVED;

return slim_do_transfer(sdev->ctrl, &txn);
}