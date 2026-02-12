struct inode *v9fs_get_inode(struct super_block *sb, umode_t mode, dev_t rdev)
{
int err;
struct inode *inode;
struct v9fs_session_info *v9ses = sb->s_fs_info;

p9_debug(P9_DEBUG_VFS, "super block: %p mode: %ho\n", sb, mode);

inode = new_inode(sb);
if (!inode) {
pr_warn("%s (%d): Problem allocating inode\n",
__func__, task_pid_nr(current));
return ERR_PTR(-ENOMEM);
}
err = v9fs_init_inode(v9ses, inode, mode, rdev);
if (err) {
iput(inode);
return ERR_PTR(err);
}
return inode;
}