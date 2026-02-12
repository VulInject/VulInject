static int hfsplus_file_release(struct inode *inode, struct file *file)
{
struct super_block *sb = inode->i_sb;

if (HFSPLUS_IS_RSRC(inode))
inode = HFSPLUS_I(inode)->rsrc_inode;
if (atomic_dec_and_test(&HFSPLUS_I(inode)->opencnt)) {
inode_lock(inode);
hfsplus_file_truncate(inode);
if (inode->i_flags & S_DEAD) {
hfsplus_delete_cat(inode->i_ino,
HFSPLUS_SB(sb)->hidden_dir, NULL);
hfsplus_delete_inode(inode);
}
inode_unlock(inode);
}
return 0;
}