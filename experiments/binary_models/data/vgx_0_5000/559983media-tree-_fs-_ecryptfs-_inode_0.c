int
ecryptfs_setxattr(struct dentry *dentry, struct inode *inode,
const char *name, const void *value,
size_t size, int flags)
{
int rc;
struct dentry *lower_dentry;

lower_dentry = ecryptfs_dentry_to_lower(dentry);
if (!(d_inode(lower_dentry)->i_opflags & IOP_XATTR)) {
rc = -EOPNOTSUPP;
goto out;
}
rc = vfs_setxattr(lower_dentry, name, value, size, flags);
if (!rc && inode)
fsstack_copy_attr_all(inode, d_inode(lower_dentry));
out:
return rc;
}