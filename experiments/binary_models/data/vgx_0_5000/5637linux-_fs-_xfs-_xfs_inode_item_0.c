static void
xfs_iflush_finish(
struct xfs_buf		*bp,
struct list_head	*list)
{
struct xfs_log_item	*lip, *n;

list_for_each_entry_safe(lip, n, list, li_bio_list) {
struct xfs_inode_log_item *iip = INODE_ITEM(lip);
bool	drop_buffer = false;

spin_lock(&iip->ili_lock);


ASSERT(iip->ili_item.li_buf == bp);
if (!iip->ili_fields) {
iip->ili_item.li_buf = NULL;
list_del_init(&lip->li_bio_list);
drop_buffer = true;
}
iip->ili_last_fields = 0;
iip->ili_flush_lsn = 0;
spin_unlock(&iip->ili_lock);
xfs_iflags_clear(iip->ili_inode, XFS_IFLUSHING);
if (drop_buffer)
xfs_buf_rele(bp);
}
}