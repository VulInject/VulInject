static int kernfs_fill_super(struct super_block *sb, struct kernfs_fs_context *kfc)
{
struct kernfs_super_info *info = kernfs_info(sb);
struct kernfs_root *kf_root = kfc->root;
struct inode *inode;
struct dentry *root;

info->sb = sb;

sb->s_iflags |= SB_I_NOEXEC | SB_I_NODEV;
sb->s_blocksize = PAGE_SIZE;
sb->s_blocksize_bits = PAGE_SHIFT;
sb->s_magic = kfc->magic;
sb->s_op = &kernfs_sops;
sb->s_xattr = kernfs_xattr_handlers;
if (info->root->flags & KERNFS_ROOT_SUPPORT_EXPORTOP)
sb->s_export_op = &kernfs_export_ops;
sb->s_time_gran = 1;


sb->s_shrink.seeks = 0;


down_read(&kf_root->kernfs_rwsem);
inode = kernfs_get_inode(sb, info->root->kn);
up_read(&kf_root->kernfs_rwsem);
if (!inode) {
pr_debug("kernfs: could not get root inode\n");
return -ENOMEM;
}


root = d_make_root(inode);
if (!root) {
pr_debug("%s: could not get root dentry!\n", __func__);
return -ENOMEM;
}
sb->s_root = root;
sb->s_d_op = &kernfs_dops;
return 0;
}