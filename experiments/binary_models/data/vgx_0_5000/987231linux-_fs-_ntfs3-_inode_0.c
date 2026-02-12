int ntfs_set_size(struct inode *inode, u64 new_size)
{
struct super_block *sb = inode->i_sb;
struct ntfs_sb_info *sbi = sb->s_fs_info;
struct ntfs_inode *ni = ntfs_i(inode);
int err;


if (is_sparsed(ni) || is_compressed(ni)) {
if (new_size > sbi->maxbytes_sparse) {
err = -EFBIG;
goto out;
}
} else if (new_size > sbi->maxbytes) {
err = -EFBIG;
goto out;
}

ni_lock(ni);
down_write(&ni->file.run_lock);

err = attr_set_size(ni, ATTR_DATA, NULL, 0, &ni->file.run, new_size,
&ni->i_valid, true, NULL);

up_write(&ni->file.run_lock);
ni_unlock(ni);

mark_inode_dirty(inode);

out:
return err;
}