static void
zfs_vdev_repair(fmd_hdl_t *hdl, nvlist_t *nvl)
{
zfs_retire_data_t *zdp = fmd_hdl_getspecific(hdl);
zfs_retire_repaired_t *zrp;
uint64_t pool_guid, vdev_guid;
if (nvlist_lookup_uint64(nvl, FM_EREPORT_PAYLOAD_ZFS_POOL_GUID,
&pool_guid) != 0 || nvlist_lookup_uint64(nvl,
FM_EREPORT_PAYLOAD_ZFS_VDEV_GUID, &vdev_guid) != 0)
return;


for (zrp = zdp->zrd_repaired; zrp != NULL; zrp = zrp->zrr_next) {
if (zrp->zrr_pool == pool_guid &&
zrp->zrr_vdev == vdev_guid)
return;
}

zrp = fmd_hdl_alloc(hdl, sizeof (zfs_retire_repaired_t), FMD_SLEEP);
zrp->zrr_next = zdp->zrd_repaired;
zrp->zrr_pool = pool_guid;
zrp->zrr_vdev = vdev_guid;
zdp->zrd_repaired = zrp;

fmd_hdl_debug(hdl, "marking repaired vdev %llu on pool %llu",
vdev_guid, pool_guid);
}