int
xfs_iextents_copy(
struct xfs_inode	*ip,
struct xfs_bmbt_rec	*dp,
int			whichfork)
{
int			state = xfs_bmap_fork_to_state(whichfork);
struct xfs_ifork	*ifp = xfs_ifork_ptr(ip, whichfork);
struct xfs_iext_cursor	icur;
struct xfs_bmbt_irec	rec;
int64_t			copied = 0;

ASSERT(xfs_isilocked(ip, XFS_ILOCK_EXCL | XFS_ILOCK_SHARED));
ASSERT(ifp->if_bytes > 0);

for_each_xfs_iext(ifp, &icur, &rec) {
if (isnullstartblock(rec.br_startblock))
continue;
ASSERT(xfs_bmap_validate_extent(ip, whichfork, &rec) == NULL);
xfs_bmbt_disk_set_all(dp, &rec);
trace_xfs_write_extent(ip, &icur, state, _RET_IP_);
copied += sizeof(struct xfs_bmbt_rec);
dp++;
}

ASSERT(copied > 0);
ASSERT(copied <= ifp->if_bytes);
return copied;
}