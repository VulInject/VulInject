static int gfs2_lookup_root(struct super_block *sb, struct dentry **dptr,
u64 no_addr, const char *name)
{
struct gfs2_sbd *sdp = sb->s_fs_info;
struct dentry *dentry;
struct inode *inode;

inode = gfs2_inode_lookup(sb, DT_DIR, no_addr, 0,
GFS2_BLKST_FREE );
if (IS_ERR(inode)) {
fs_err(sdp, "can't read in %s inode: %ld\n", name, PTR_ERR(inode));
return PTR_ERR(inode);
}
dentry = d_make_root(inode);
if (!dentry) {
fs_err(sdp, "can't alloc %s dentry\n", name);
return -ENOMEM;
}
*dptr = dentry;
return 0;
}