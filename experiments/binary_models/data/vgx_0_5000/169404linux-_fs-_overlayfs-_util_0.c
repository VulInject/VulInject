void ovl_check_protattr(struct inode *inode, struct dentry *upper)
{
struct ovl_fs *ofs = OVL_FS(inode->i_sb);
u32 iflags = inode->i_flags & OVL_PROT_I_FLAGS_MASK;
char buf[OVL_PROTATTR_MAX+1];
int res, n;

res = ovl_getxattr_upper(ofs, upper, OVL_XATTR_PROTATTR, buf,
OVL_PROTATTR_MAX);
if (res < 0)
return;


for (n = 0; n < res; n++) {
if (buf[n] == 'a')
iflags |= S_APPEND;
else if (buf[n] == 'i')
iflags |= S_IMMUTABLE;
else
break;
}

if (!res || n < res) {
pr_warn_ratelimited("incompatible overlay.protattr format (%pd2, len=%d)\n",
upper, res);
} else {
inode_set_flags(inode, iflags, OVL_PROT_I_FLAGS_MASK);
}
}