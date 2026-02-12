static void
brcms_debugfs_add_entry(struct brcms_pub *drvr, const char *fn,
int (*read_fn)(struct seq_file *seq, void *data))
{
struct device *dev = &drvr->wlc->hw->d11core->dev;
struct dentry *dentry =  drvr->dbgfs_dir;
struct brcms_debugfs_entry *entry;

entry = devm_kzalloc(dev, sizeof(*entry), GFP_KERNEL);
if (!entry)
return;

entry->read = read_fn;
entry->drvr = drvr;

debugfs_create_file(fn, 0444, dentry, entry, &brcms_debugfs_def_ops);
}