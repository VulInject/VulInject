void
xfs_trans_ijoin(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
uint			lock_flags)
{
xfs_inode_log_item_t	*iip;

ASSERT(xfs_isilocked(ip, XFS_ILOCK_EXCL));
if (ip->i_itemp == NULL)
xfs_inode_item_init(ip, ip->i_mount);
iip = ip->i_itemp;

ASSERT(iip->ili_lock_flags == 0);
iip->ili_lock_flags = lock_flags;


xfs_trans_add_item(tp, &iip->ili_item);
}