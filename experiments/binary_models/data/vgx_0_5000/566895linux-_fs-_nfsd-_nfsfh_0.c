static inline __be32
nfsd_mode_check(struct svc_rqst *rqstp, struct dentry *dentry,
umode_t requested)
{
umode_t mode = d_inode(dentry)->i_mode & S_IFMT;

if (requested == 0) 
return nfs_ok;
if (mode == requested) {
if (mode == S_IFDIR && !d_can_lookup(dentry)) {
WARN_ON_ONCE(1);
return nfserr_notdir;
}
return nfs_ok;
}

if (rqstp->rq_vers == 4 && mode == S_IFLNK)
return nfserr_symlink;
if (requested == S_IFDIR)
return nfserr_notdir;
if (mode == S_IFDIR)
return nfserr_isdir;
return nfserr_inval;
}