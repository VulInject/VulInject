static ssize_t wil_write_file_txmgmt(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
{
struct wil6210_priv *wil = file->private_data;
struct wiphy *wiphy = wil_to_wiphy(wil);
struct wireless_dev *wdev = wil_to_wdev(wil);
struct cfg80211_mgmt_tx_params params;
int rc;
void *frame = kmalloc(len, GFP_KERNEL);

if (!frame)
return -ENOMEM;

if (copy_from_user(frame, buf, len)) {
kfree(frame);
return -EIO;
}

params.buf = frame;
params.len = len;
params.chan = wdev->preset_chandef.chan;

rc = wil_cfg80211_mgmt_tx(wiphy, wdev, &params, NULL);

kfree(frame);
wil_info(wil, "-> %d\n", rc);

return len;
}