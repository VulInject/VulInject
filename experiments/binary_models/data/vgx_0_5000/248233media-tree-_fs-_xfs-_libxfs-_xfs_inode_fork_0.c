int
xfs_iread_extents(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
int		whichfork)
{
int		error;
xfs_ifork_t	*ifp;
xfs_extnum_t	nextents;

ASSERT(xfs_isilocked(ip, XFS_ILOCK_EXCL));

if (unlikely(XFS_IFORK_FORMAT(ip, whichfork) != XFS_DINODE_FMT_BTREE)) {
XFS_ERROR_REPORT("xfs_iread_extents", XFS_ERRLEVEL_LOW,
ip->i_mount);
return -EFSCORRUPTED;
}
nextents = XFS_IFORK_NEXTENTS(ip, whichfork);
ifp = XFS_IFORK_PTR(ip, whichfork);


ifp->if_bytes = ifp->if_real_bytes = 0;
xfs_iext_add(ifp, 0, nextents);
error = xfs_bmap_read_extents(tp, ip, whichfork);
if (error) {
xfs_iext_destroy(ifp);
return error;
}
ifp->if_flags |= XFS_IFEXTENTS;
return 0;
}