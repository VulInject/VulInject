void hns_roce_cmd_event(struct hns_roce_dev *hr_dev, u16 token, u8 status,
u64 out_param)
{
struct hns_roce_cmd_context *context =
&hr_dev->cmd.context[token % hr_dev->cmd.max_cmds];

if (unlikely(token != context->token)) {
dev_err_ratelimited(hr_dev->dev,
"[cmd] invalid ae token 0x%x, context token is 0x%x.\n",
token, context->token);
return;
}

context->result = (status == HNS_ROCE_CMD_SUCCESS) ? 0 : (-EIO);
context->out_param = out_param;
complete(&context->done);
}