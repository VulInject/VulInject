static int port100_send_cmd_async(struct port100 *dev, u8 cmd_code,
struct sk_buff *req,
port100_send_async_complete_t complete_cb,
void *complete_cb_context)
{
struct port100_cmd *cmd;
struct sk_buff *resp;
int rc;
int  resp_len = PORT100_FRAME_HEADER_LEN +
PORT100_FRAME_MAX_PAYLOAD_LEN +
PORT100_FRAME_TAIL_LEN;

if (dev->cmd) {
nfc_err(&dev->interface->dev,
"A command is still in process\n");
return -EBUSY;
}

resp = alloc_skb(resp_len, GFP_KERNEL);
if (!resp)
return -ENOMEM;

cmd = kzalloc(sizeof(*cmd), GFP_KERNEL);
if (!cmd) {
dev_kfree_skb(resp);
return -ENOMEM;
}

cmd->code = cmd_code;
cmd->req = req;
cmd->resp = resp;
cmd->resp_len = resp_len;
cmd->complete_cb = complete_cb;
cmd->complete_cb_context = complete_cb_context;

port100_build_cmd_frame(dev, cmd_code, req);

dev->cmd = cmd;

rc = port100_send_frame_async(dev, req, resp, resp_len);
if (rc) {
kfree(cmd);
dev_kfree_skb(resp);
dev->cmd = NULL;
}

return rc;
}