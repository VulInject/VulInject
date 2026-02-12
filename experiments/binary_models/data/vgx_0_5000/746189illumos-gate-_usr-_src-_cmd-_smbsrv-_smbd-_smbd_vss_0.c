static int
smbd_vss_iterate_map_gmttoken(zfs_handle_t *zhp, void *data)
{
smbd_vss_map_gmttoken_t *vss_data = data;
time_t time;

time = (time_t)zfs_prop_get_int(zhp, ZFS_PROP_CREATION);
if (time == vss_data->mg_snaptime) {
(void) strlcpy(vss_data->mg_snapname, zfs_get_name(zhp),
MAXPATHLEN);


zfs_close(zhp);
return (-1);
}

zfs_close(zhp);
return (0);
}