static int
zpl_writepages(struct address_space *mapping, struct writeback_control *wbc)
{
znode_t		*zp = ITOZ(mapping->host);
zfsvfs_t	*zfsvfs = ITOZSB(mapping->host);
enum writeback_sync_modes sync_mode;
int result;

ZFS_ENTER(zfsvfs);
if (zfsvfs->z_os->os_sync == ZFS_SYNC_ALWAYS)
wbc->sync_mode = WB_SYNC_ALL;
ZFS_EXIT(zfsvfs);
sync_mode = wbc->sync_mode;


wbc->sync_mode = WB_SYNC_NONE;
result = write_cache_pages(mapping, wbc, zpl_putpage, mapping);
if (sync_mode != wbc->sync_mode) {
ZFS_ENTER(zfsvfs);
ZFS_VERIFY_ZP(zp);
if (zfsvfs->z_log != NULL)
zil_commit(zfsvfs->z_log, zp->z_id);
ZFS_EXIT(zfsvfs);


wbc->sync_mode = sync_mode;
result = write_cache_pages(mapping, wbc, zpl_putpage, mapping);
}
return (result);
}