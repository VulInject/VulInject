STATIC struct inode *
xfs_nfs_get_inode(
struct super_block	*sb,
u64			ino,
u32			generation)
{
xfs_mount_t		*mp = XFS_M(sb);
xfs_inode_t		*ip;
int			error;


if (ino == 0)
return ERR_PTR(-ESTALE);


error = xfs_iget(mp, NULL, ino, XFS_IGET_UNTRUSTED, 0, &ip);
if (error) {

if (error == -EINVAL || error == -ENOENT)
error = -ESTALE;
return ERR_PTR(error);
}

if (VFS_I(ip)->i_generation != generation) {
IRELE(ip);
return ERR_PTR(-ESTALE);
}

return VFS_I(ip);
}