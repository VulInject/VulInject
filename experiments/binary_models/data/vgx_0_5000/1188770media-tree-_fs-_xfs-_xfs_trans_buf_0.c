STATIC void
_xfs_trans_bjoin(
struct xfs_trans	*tp,
struct xfs_buf		*bp,
int			reset_recur)
{
struct xfs_buf_log_item	*bip;

ASSERT(bp->b_transp == NULL);


xfs_buf_item_init(bp, tp->t_mountp);
bip = bp->b_fspriv;
ASSERT(!(bip->bli_flags & XFS_BLI_STALE));
ASSERT(!(bip->__bli_format.blf_flags & XFS_BLF_CANCEL));
ASSERT(!(bip->bli_flags & XFS_BLI_LOGGED));
if (reset_recur)
bip->bli_recur = 0;


atomic_inc(&bip->bli_refcount);


xfs_trans_add_item(tp, &bip->bli_item);


bp->b_transp = tp;

}