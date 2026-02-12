static __be32
nfsd4_block_commit_blocks(struct inode *inode, struct nfsd4_layoutcommit *lcp,
struct iomap *iomaps, int nr_iomaps)
{
loff_t new_size = lcp->lc_last_wr + 1;
struct iattr iattr = { .ia_valid = 0 };
int error;

if (lcp->lc_mtime.tv_nsec == UTIME_NOW ||
timespec64_compare(&lcp->lc_mtime, &inode->i_mtime) < 0)
lcp->lc_mtime = current_time(inode);
iattr.ia_valid |= ATTR_ATIME | ATTR_CTIME | ATTR_MTIME;
iattr.ia_atime = iattr.ia_ctime = iattr.ia_mtime = lcp->lc_mtime;

if (new_size > i_size_read(inode)) {
iattr.ia_valid |= ATTR_SIZE;
iattr.ia_size = new_size;
}

error = inode->i_sb->s_export_op->commit_blocks(inode, iomaps,
nr_iomaps, &iattr);
kfree(iomaps);
return nfserrno(error);
}