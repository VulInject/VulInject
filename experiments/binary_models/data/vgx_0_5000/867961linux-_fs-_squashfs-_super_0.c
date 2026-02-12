static int squashfs_statfs(struct dentry *dentry, struct kstatfs *buf)
{
struct squashfs_sb_info *msblk = dentry->d_sb->s_fs_info;
u64 id = huge_encode_dev(dentry->d_sb->s_bdev->bd_dev);

TRACE("Entered squashfs_statfs\n");

buf->f_type = SQUASHFS_MAGIC;
buf->f_bsize = msblk->block_size;
buf->f_blocks = ((msblk->bytes_used - 1) >> msblk->block_log) + 1;
buf->f_bfree = buf->f_bavail = 0;
buf->f_files = msblk->inodes;
buf->f_ffree = 0;
buf->f_namelen = SQUASHFS_NAME_LEN;
buf->f_fsid = u64_to_fsid(id);

return 0;
}