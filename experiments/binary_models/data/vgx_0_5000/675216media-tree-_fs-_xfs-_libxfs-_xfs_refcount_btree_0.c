STATIC void
xfs_refcountbt_set_root(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr,
int			inc)
{
struct xfs_buf		*agbp = cur->bc_private.a.agbp;
struct xfs_agf		*agf = XFS_BUF_TO_AGF(agbp);
xfs_agnumber_t		seqno = be32_to_cpu(agf->agf_seqno);
struct xfs_perag	*pag = xfs_perag_get(cur->bc_mp, seqno);

ASSERT(ptr->s != 0);

agf->agf_refcount_root = ptr->s;
be32_add_cpu(&agf->agf_refcount_level, inc);
pag->pagf_refcount_level += inc;
xfs_perag_put(pag);

xfs_alloc_log_agf(cur->bc_tp, agbp,
XFS_AGF_REFCOUNT_ROOT | XFS_AGF_REFCOUNT_LEVEL);
}