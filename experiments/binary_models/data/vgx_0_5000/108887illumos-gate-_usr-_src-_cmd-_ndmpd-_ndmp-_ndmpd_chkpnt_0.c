static int
ndmp_has_backup_snapshot(char *volname, char *jobname)
{
zfs_handle_t *zhp;
snap_param_t snp;
char chname[ZFS_MAX_DATASET_NAME_LEN];

(void) mutex_lock(&zlib_mtx);
if ((zhp = zfs_open(zlibh, volname, ZFS_TYPE_DATASET)) == 0) {
NDMP_LOG(LOG_ERR, "Cannot open snapshot %s.", volname);
(void) mutex_unlock(&zlib_mtx);
return (-1);
}

snp.snp_found = 0;
(void) snprintf(chname, ZFS_MAX_DATASET_NAME_LEN, "@%s", jobname);
snp.snp_name = chname;

(void) zfs_iter_snapshots(zhp, B_FALSE, ndmp_has_backup, &snp);
zfs_close(zhp);
(void) mutex_unlock(&zlib_mtx);

return (snp.snp_found);
}