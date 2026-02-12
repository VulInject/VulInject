static int smscore_init_device(struct smscore_device_t *coredev, int mode)
{
void *buffer;
struct sms_msg_data *msg;
int rc = 0;

buffer = kmalloc(sizeof(struct sms_msg_data) +
SMS_DMA_ALIGNMENT, GFP_KERNEL | GFP_DMA);
if (!buffer) {
pr_err("Could not allocate buffer for init device message.\n");
return -ENOMEM;
}

msg = (struct sms_msg_data *)SMS_ALIGN_ADDRESS(buffer);
SMS_INIT_MSG(&msg->x_msg_header, MSG_SMS_INIT_DEVICE_REQ,
sizeof(struct sms_msg_data));
msg->msg_data[0] = mode;

rc = smscore_sendrequest_and_wait(coredev, msg,
msg->x_msg_header. msg_length,
&coredev->init_device_done);

kfree(buffer);
return rc;
}