int fb_deferred_io_fsync(struct file *file, loff_t start, loff_t end, int datasync)
{
struct fb_info *info = file->private_data;
struct inode *inode = file_inode(file);
int err = filemap_write_and_wait_range(inode->i_mapping, start, end);
if (err)
return err;


if (!info->fbdefio)
return 0;

inode_lock(inode);

cancel_delayed_work_sync(&info->deferred_work);


schedule_delayed_work(&info->deferred_work, 0);
inode_unlock(inode);

return 0;
}