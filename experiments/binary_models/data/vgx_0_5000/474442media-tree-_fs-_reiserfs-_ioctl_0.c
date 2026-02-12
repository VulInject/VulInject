int reiserfs_unpack(struct inode *inode, struct file *filp)
{
int retval = 0;
int index;
struct page *page;
struct address_space *mapping;
unsigned long write_from;
unsigned long blocksize = inode->i_sb->s_blocksize;

if (inode->i_size == 0) {
REISERFS_I(inode)->i_flags |= i_nopack_mask;
return 0;
}

if (REISERFS_I(inode)->i_flags & i_nopack_mask) {
return 0;
}


{
int depth = reiserfs_write_unlock_nested(inode->i_sb);
inode_lock(inode);
reiserfs_write_lock_nested(inode->i_sb, depth);
}