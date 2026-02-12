static ssize_t
fmri_nvl2str(nvlist_t *nvl, char *buf, size_t buflen)
{
uint64_t pool_guid, vdev_guid;
cbdata_t cb;
ssize_t len;
const char *name;
char guidbuf[64];

(void) nvlist_lookup_uint64(nvl, FM_FMRI_ZFS_POOL, &pool_guid);


cb.cb_guid = pool_guid;
cb.cb_pool = NULL;

if (zpool_iter(g_zfs, find_pool, &cb) == 1) {
name = zpool_get_name(cb.cb_pool);
} else {
(void) snprintf(guidbuf, sizeof (guidbuf), "%llx", pool_guid);
name = guidbuf;
}

if (nvlist_lookup_uint64(nvl, FM_FMRI_ZFS_VDEV, &vdev_guid) == 0)
len = snprintf(buf, buflen, "%s:
FM_FMRI_SCHEME_ZFS, name, vdev_guid);
else
len = snprintf(buf, buflen, "%s:
FM_FMRI_SCHEME_ZFS, name);

if (cb.cb_pool)
zpool_close(cb.cb_pool);

return (len);
}