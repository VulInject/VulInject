STATIC int
xfs_bmbt_get_minrecs(
struct xfs_btree_cur	*cur,
int			level)
{
if (level == cur->bc_nlevels - 1) {
struct xfs_ifork	*ifp;

ifp = XFS_IFORK_PTR(cur->bc_private.b.ip,
cur->bc_private.b.whichfork);

return xfs_bmbt_maxrecs(cur->bc_mp,
ifp->if_broot_bytes, level == 0) / 2;
}

return cur->bc_mp->m_bmap_dmnr[level != 0];
}