void
xfs_btree_commit_afakeroot(
struct xfs_btree_cur		*cur,
struct xfs_trans		*tp,
struct xfs_buf			*agbp,
const struct xfs_btree_ops	*ops)
{
ASSERT(cur->bc_flags & XFS_BTREE_STAGING);
ASSERT(cur->bc_tp == NULL);

trace_xfs_btree_commit_afakeroot(cur);

kmem_free((void *)cur->bc_ops);
cur->bc_ag.agbp = agbp;
cur->bc_ops = ops;
cur->bc_flags &= ~XFS_BTREE_STAGING;
cur->bc_tp = tp;
}