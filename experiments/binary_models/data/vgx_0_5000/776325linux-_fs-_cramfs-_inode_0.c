static int cramfs_finalize_super(struct super_block *sb,
struct cramfs_inode *cramfs_root)
{
struct inode *root;


sb->s_flags |= SB_RDONLY;
sb->s_time_min = 0;
sb->s_time_max = 0;
sb->s_op = &cramfs_ops;
root = get_cramfs_inode(sb, cramfs_root, 0);
if (IS_ERR(root))
return PTR_ERR(root);
sb->s_root = d_make_root(root);
if (!sb->s_root)
return -ENOMEM;
return 0;
}