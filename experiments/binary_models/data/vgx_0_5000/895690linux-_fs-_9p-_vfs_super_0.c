static int v9fs_write_inode_dotl(struct inode *inode,
struct writeback_control *wbc)
{
int ret;
struct v9fs_inode *v9inode;

v9inode = V9FS_I(inode);
p9_debug(P9_DEBUG_VFS, "%s: inode %p, writeback_fid %p\n",
__func__, inode, v9inode->writeback_fid);
if (!v9inode->writeback_fid)
return 0;

ret = p9_client_fsync(v9inode->writeback_fid, 0);
if (ret < 0) {
__mark_inode_dirty(inode, I_DIRTY_DATASYNC);
return ret;
}
fscache_unpin_writeback(wbc, v9fs_inode_cookie(v9inode));
return 0;
}