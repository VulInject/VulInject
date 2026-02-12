static int v9fs_vfs_writepage(struct page *page, struct writeback_control *wbc)
{
struct folio *folio = page_folio(page);
int retval;

p9_debug(P9_DEBUG_VFS, "folio %p\n", folio);

retval = v9fs_vfs_write_folio_locked(folio);
if (retval < 0) {
if (retval == -EAGAIN) {
folio_redirty_for_writepage(wbc, folio);
retval = 0;
} else {
mapping_set_error(folio_mapping(folio), retval);
}
} else
retval = 0;

folio_unlock(folio);
return retval;
}