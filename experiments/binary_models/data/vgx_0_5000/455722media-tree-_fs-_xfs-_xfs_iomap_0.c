void
xfs_bmbt_to_iomap(
struct xfs_inode	*ip,
struct iomap		*iomap,
struct xfs_bmbt_irec	*imap)
{
struct xfs_mount	*mp = ip->i_mount;

if (imap->br_startblock == HOLESTARTBLOCK) {
iomap->blkno = IOMAP_NULL_BLOCK;
iomap->type = IOMAP_HOLE;
} else if (imap->br_startblock == DELAYSTARTBLOCK) {
iomap->blkno = IOMAP_NULL_BLOCK;
iomap->type = IOMAP_DELALLOC;
} else {
iomap->blkno = xfs_fsb_to_db(ip, imap->br_startblock);
if (imap->br_state == XFS_EXT_UNWRITTEN)
iomap->type = IOMAP_UNWRITTEN;
else
iomap->type = IOMAP_MAPPED;
}
iomap->offset = XFS_FSB_TO_B(mp, imap->br_startoff);
iomap->length = XFS_FSB_TO_B(mp, imap->br_blockcount);
iomap->bdev = xfs_find_bdev_for_inode(VFS_I(ip));
}