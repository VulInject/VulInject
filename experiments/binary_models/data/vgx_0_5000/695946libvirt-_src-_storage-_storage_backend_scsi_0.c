static int
virStorageBackendSCSITriggerRescan(uint32_t host)
{
VIR_AUTOCLOSE fd = -1;
g_autofree char *path = NULL;

VIR_DEBUG("Triggering rescan of host %d", host);

path = g_strdup_printf("%s/host%u/scan", LINUX_SYSFS_SCSI_HOST_PREFIX, host);

VIR_DEBUG("Scan trigger path is '%s'", path);

fd = open(path, O_WRONLY);

if (fd < 0) {
virReportSystemError(errno,
_("Could not open '%s' to trigger host scan"),
path);
return -1;
}

if (safewrite(fd,
LINUX_SYSFS_SCSI_HOST_SCAN_STRING,
sizeof(LINUX_SYSFS_SCSI_HOST_SCAN_STRING)) < 0) {
virReportSystemError(errno,
_("Write to '%s' to trigger host scan failed"),
path);
return -1;
}

VIR_DEBUG("Rescan of host %d complete", host);
return 0;
}