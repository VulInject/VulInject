int sof_ipc_send_msg(struct snd_sof_dev *sdev, void *msg_data, size_t msg_bytes,
size_t reply_bytes)
{
struct snd_sof_ipc *ipc = sdev->ipc;
struct snd_sof_ipc_msg *msg;
int ret;

if (ipc->disable_ipc_tx || sdev->fw_state != SOF_FW_BOOT_COMPLETE)
return -ENODEV;


spin_lock_irq(&sdev->ipc_lock);


msg = &ipc->msg;


msg->msg_data = msg_data;
msg->msg_size = msg_bytes;

msg->reply_size = reply_bytes;
msg->reply_error = 0;

sdev->msg = msg;

ret = snd_sof_dsp_send_msg(sdev, msg);

if (!ret)
msg->ipc_complete = false;

spin_unlock_irq(&sdev->ipc_lock);

return ret;
}