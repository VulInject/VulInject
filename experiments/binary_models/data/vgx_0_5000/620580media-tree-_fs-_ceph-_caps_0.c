static int try_nonblocking_invalidate(struct inode *inode)
{
struct ceph_inode_info *ci = ceph_inode(inode);
u32 invalidating_gen = ci->i_rdcache_gen;

spin_unlock(&ci->i_ceph_lock);
invalidate_mapping_pages(&inode->i_data, 0, -1);
spin_lock(&ci->i_ceph_lock);

if (inode->i_data.nrpages == 0 &&
invalidating_gen == ci->i_rdcache_gen) {

dout("try_nonblocking_invalidate %p success\n", inode);

ci->i_rdcache_revoking = ci->i_rdcache_gen - 1;
return 0;
}
dout("try_nonblocking_invalidate %p failed\n", inode);
return -1;
}