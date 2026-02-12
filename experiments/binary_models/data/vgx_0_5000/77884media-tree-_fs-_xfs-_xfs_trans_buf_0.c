void
xfs_trans_bhold(xfs_trans_t	*tp,
xfs_buf_t	*bp)
{
xfs_buf_log_item_t	*bip = bp->b_fspriv;

ASSERT(bp->b_transp == tp);
ASSERT(bip != NULL);
ASSERT(!(bip->bli_flags & XFS_BLI_STALE));
ASSERT(!(bip->__bli_format.blf_flags & XFS_BLF_CANCEL));
ASSERT(atomic_read(&bip->bli_refcount) > 0);

bip->bli_flags |= XFS_BLI_HOLD;
trace_xfs_trans_bhold(bip);
}