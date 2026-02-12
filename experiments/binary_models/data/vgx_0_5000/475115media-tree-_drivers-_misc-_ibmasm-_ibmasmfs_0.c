static int ibmasmfs_fill_super (struct super_block *sb, void *data, int silent)
{
struct inode *root;

sb->s_blocksize = PAGE_SIZE;
sb->s_blocksize_bits = PAGE_SHIFT;
sb->s_magic = IBMASMFS_MAGIC;
sb->s_op = &ibmasmfs_s_ops;
sb->s_time_gran = 1;

root = ibmasmfs_make_inode (sb, S_IFDIR | 0500);
if (!root)
return -ENOMEM;

root->i_op = &simple_dir_inode_operations;
root->i_fop = ibmasmfs_dir_ops;

sb->s_root = d_make_root(root);
if (!sb->s_root)
return -ENOMEM;

ibmasmfs_create_files(sb);
return 0;
}