static int minix_mknod(struct mnt_idmap *idmap, struct inode *dir,
struct dentry *dentry, umode_t mode, dev_t rdev)
{
struct inode *inode;

if (!old_valid_dev(rdev))
return -EINVAL;

inode = minix_new_inode(dir, mode);
if (IS_ERR(inode))
return PTR_ERR(inode);

minix_set_inode(inode, rdev);
mark_inode_dirty(inode);
return add_nondir(dentry, inode);
}