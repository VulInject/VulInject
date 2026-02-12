static int rtw_debugfs_get_rf_read(struct seq_file *m, void *v)
{
struct rtw_debugfs_priv *debugfs_priv = m->private;
struct rtw_dev *rtwdev = debugfs_priv->rtwdev;
u32 val, addr, mask;
u8 path;

path = debugfs_priv->rf_path;
addr = debugfs_priv->rf_addr;
mask = debugfs_priv->rf_mask;

mutex_lock(&rtwdev->mutex);
val = rtw_read_rf(rtwdev, path, addr, mask);
mutex_unlock(&rtwdev->mutex);

seq_printf(m, "rf_read path:%d addr:0x%08x mask:0x%08x val=0x%08x\n",
path, addr, mask, val);

return 0;
}