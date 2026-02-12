static int hpre_create_debugfs_file(struct hisi_qm *qm, struct dentry *dir,
enum hpre_ctrl_dbgfs_file type, int indx)
{
struct hpre *hpre = container_of(qm, struct hpre, qm);
struct hpre_debug *dbg = &hpre->debug;
struct dentry *file_dir;

if (dir)
file_dir = dir;
else
file_dir = qm->debug.debug_root;

if (type >= HPRE_DEBUG_FILE_NUM)
return -EINVAL;

spin_lock_init(&dbg->files[indx].lock);
dbg->files[indx].debug = dbg;
dbg->files[indx].type = type;
dbg->files[indx].index = indx;
debugfs_create_file(hpre_debug_file_name[type], 0600, file_dir,
dbg->files + indx, &hpre_ctrl_debug_fops);

return 0;
}