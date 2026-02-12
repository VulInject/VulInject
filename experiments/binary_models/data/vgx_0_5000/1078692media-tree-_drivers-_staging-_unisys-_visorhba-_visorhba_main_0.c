static int visorhba_abort_handler(struct scsi_cmnd *scsicmd)
{

struct scsi_device *scsidev;
struct visordisk_info *vdisk;
struct visorhba_devdata *devdata;

scsidev = scsicmd->device;
devdata = (struct visorhba_devdata *)scsidev->host->hostdata;
for_each_vdisk_match(vdisk, devdata, scsidev) {
if (atomic_read(&vdisk->error_count) < VISORHBA_ERROR_COUNT)
atomic_inc(&vdisk->error_count);
else
atomic_set(&vdisk->ios_threshold, IOS_ERROR_THRESHOLD);
}
return forward_taskmgmt_command(TASK_MGMT_ABORT_TASK, scsicmd);
}