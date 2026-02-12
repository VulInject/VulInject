int catpt_ipc_free_stream(struct catpt_dev *cdev, u8 stream_hw_id)
{
union catpt_global_msg msg = CATPT_GLOBAL_MSG(FREE_STREAM);
struct catpt_ipc_msg request;
int ret;

request.header = msg.val;
request.size = sizeof(stream_hw_id);
request.data = &stream_hw_id;

ret = catpt_dsp_send_msg(cdev, request, NULL);
if (ret)
dev_err(cdev->dev, "free stream %d failed: %d\n",
stream_hw_id, ret);

return ret;
}