static int configfs_fill_super(struct super_block *sb, void *data, int silent)
{
struct inode *inode;
struct dentry *root;

sb->s_blocksize = PAGE_SIZE;
sb->s_blocksize_bits = PAGE_SHIFT;
sb->s_magic = CONFIGFS_MAGIC;
sb->s_op = &configfs_ops;
sb->s_time_gran = 1;

inode = configfs_new_inode(S_IFDIR | S_IRWXU | S_IRUGO | S_IXUGO,
&configfs_root, sb);
if (inode) {
inode->i_op = &configfs_root_inode_operations;
inode->i_fop = &configfs_dir_operations;

inc_nlink(inode);
} else {
pr_debug("could not get root inode\n");
return -ENOMEM;
}

root = d_make_root(inode);
if (!root) {
pr_debug("%s: could not get root dentry!\n",__func__);
return -ENOMEM;
}
config_group_init(&configfs_root_group);
configfs_root_group.cg_item.ci_dentry = root;
root->d_fsdata = &configfs_root;
sb->s_root = root;
sb->s_d_op = &configfs_dentry_ops; 
return 0;
}