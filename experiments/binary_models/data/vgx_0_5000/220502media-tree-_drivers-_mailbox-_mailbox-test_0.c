static ssize_t mbox_test_signal_write(struct file *filp,
const char __user *userbuf,
size_t count, loff_t *ppos)
{
struct mbox_test_device *tdev = filp->private_data;

if (!tdev->tx_channel) {
dev_err(tdev->dev, "Channel cannot do Tx\n");
return -EINVAL;
}

if (count > MBOX_MAX_SIG_LEN) {
dev_err(tdev->dev,
"Signal length %zd greater than max allowed %d\n",
count, MBOX_MAX_SIG_LEN);
return -EINVAL;
}


if (!tdev->signal) {
tdev->signal = kzalloc(MBOX_MAX_SIG_LEN, GFP_KERNEL);
if (!tdev->signal)
return -ENOMEM;
}

if (copy_from_user(tdev->signal, userbuf, count)) {
kfree(tdev->signal);
tdev->signal = NULL;
return -EFAULT;
}

return count;
}