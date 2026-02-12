struct xfs_btree_cur *
xfs_inobt_init_cursor(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
struct xfs_buf		*agbp,
struct xfs_perag	*pag,
xfs_btnum_t		btnum)
{
struct xfs_btree_cur	*cur;
struct xfs_agi		*agi = agbp->b_addr;

cur = xfs_inobt_init_common(mp, tp, pag, btnum);
if (btnum == XFS_BTNUM_INO)
cur->bc_nlevels = be32_to_cpu(agi->agi_level);
else
cur->bc_nlevels = be32_to_cpu(agi->agi_free_level);
cur->bc_ag.agbp = agbp;
return cur;
}