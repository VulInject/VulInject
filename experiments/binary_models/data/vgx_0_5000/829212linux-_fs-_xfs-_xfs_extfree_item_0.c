STATIC void
xfs_extent_free_log_item(
struct xfs_trans		*tp,
struct xfs_efi_log_item		*efip,
struct xfs_extent_free_item	*xefi)
{
uint				next_extent;
struct xfs_extent		*extp;

tp->t_flags |= XFS_TRANS_DIRTY;
set_bit(XFS_LI_DIRTY, &efip->efi_item.li_flags);


next_extent = atomic_inc_return(&efip->efi_next_extent) - 1;
ASSERT(next_extent < efip->efi_format.efi_nextents);
extp = &efip->efi_format.efi_extents[next_extent];
extp->ext_start = xefi->xefi_startblock;
extp->ext_len = xefi->xefi_blockcount;
}