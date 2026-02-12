static int sof_msg_inject_send_message(struct sof_client_dev *cdev)
{
struct sof_msg_inject_priv *priv = cdev->data;
struct device *dev = &cdev->auxdev.dev;
int ret, err;

ret = pm_runtime_resume_and_get(dev);
if (ret < 0 && ret != -EACCES) {
dev_err_ratelimited(dev, "debugfs write failed to resume %d\n", ret);
return ret;
}


ret = sof_client_ipc_tx_message(cdev, priv->tx_buffer, priv->rx_buffer,
priv->max_msg_size);
if (ret)
dev_err(dev, "IPC message send failed: %d\n", ret);

pm_runtime_mark_last_busy(dev);
err = pm_runtime_put_autosuspend(dev);
if (err < 0)
dev_err_ratelimited(dev, "debugfs write failed to idle %d\n", err);

return ret;
}