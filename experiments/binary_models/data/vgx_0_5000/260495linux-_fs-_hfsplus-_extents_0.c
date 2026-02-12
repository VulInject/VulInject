static inline int __hfsplus_ext_cache_extent(struct hfs_find_data *fd,
struct inode *inode, u32 block)
{
struct hfsplus_inode_info *hip = HFSPLUS_I(inode);
int res;

WARN_ON(!mutex_is_locked(&hip->extents_lock));

if (hip->extent_state & HFSPLUS_EXT_DIRTY) {
res = __hfsplus_ext_write_extent(inode, fd);
if (res)
return res;
}

res = __hfsplus_ext_read_extent(fd, hip->cached_extents, inode->i_ino,
block, HFSPLUS_IS_RSRC(inode) ?
HFSPLUS_TYPE_RSRC :
HFSPLUS_TYPE_DATA);
if (!res) {
hip->cached_start = be32_to_cpu(fd->key->ext.start_block);
hip->cached_blocks =
hfsplus_ext_block_count(hip->cached_extents);
} else {
hip->cached_start = hip->cached_blocks = 0;
hip->extent_state &= ~(HFSPLUS_EXT_DIRTY | HFSPLUS_EXT_NEW);
}
return res;
}