static int
xfs_acl_set_mode(
struct inode		*inode,
umode_t			mode)
{
struct xfs_inode	*ip = XFS_I(inode);
struct xfs_mount	*mp = ip->i_mount;
struct xfs_trans	*tp;
int			error;

error = xfs_trans_alloc(mp, &M_RES(mp)->tr_ichange, 0, 0, 0, &tp);
if (error)
return error;

xfs_ilock(ip, XFS_ILOCK_EXCL);
xfs_trans_ijoin(tp, ip, XFS_ILOCK_EXCL);
inode->i_mode = mode;
inode->i_ctime = current_time(inode);
xfs_trans_log_inode(tp, ip, XFS_ILOG_CORE);

if (xfs_has_wsync(mp))
xfs_trans_set_sync(tp);
return xfs_trans_commit(tp);
}