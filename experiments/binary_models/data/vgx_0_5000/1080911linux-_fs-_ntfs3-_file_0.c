int ntfs_getattr(struct mnt_idmap *idmap, const struct path *path,
struct kstat *stat, u32 request_mask, u32 flags)
{
struct inode *inode = d_inode(path->dentry);
struct ntfs_inode *ni = ntfs_i(inode);

if (is_compressed(ni))
stat->attributes |= STATX_ATTR_COMPRESSED;

if (is_encrypted(ni))
stat->attributes |= STATX_ATTR_ENCRYPTED;

stat->attributes_mask |= STATX_ATTR_COMPRESSED | STATX_ATTR_ENCRYPTED;

generic_fillattr(idmap, inode, stat);

stat->result_mask |= STATX_BTIME;
stat->btime = ni->i_crtime;
stat->blksize = ni->mi.sbi->cluster_size; 

return 0;
}