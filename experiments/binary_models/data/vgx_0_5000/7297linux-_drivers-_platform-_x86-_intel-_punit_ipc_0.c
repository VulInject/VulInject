static int intel_punit_ipc_check_status(IPC_DEV *ipcdev, IPC_TYPE type)
{
int loops = CMD_TIMEOUT_SECONDS * USEC_PER_SEC;
int errcode;
int status;

if (ipcdev->irq) {
if (!wait_for_completion_timeout(&ipcdev->cmd_complete,
CMD_TIMEOUT_SECONDS * HZ)) {
dev_err(ipcdev->dev, "IPC timed out\n");
return -ETIMEDOUT;
}
} else {
while ((ipc_read_status(ipcdev, type) & CMD_RUN) && --loops)
udelay(1);
if (!loops) {
dev_err(ipcdev->dev, "IPC timed out\n");
return -ETIMEDOUT;
}
}

status = ipc_read_status(ipcdev, type);
errcode = status & CMD_ERRCODE_MASK;
if (errcode) {
dev_err(ipcdev->dev, "IPC failed: %s, IPC_STS=0x%x\n",
ipc_err_string(errcode), status);
return -EIO;
}

return 0;
}