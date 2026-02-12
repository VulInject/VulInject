static int virtscsi_rescan_hotunplug(struct virtio_scsi *vscsi)
{
struct scsi_device *sdev;
struct Scsi_Host *shost = virtio_scsi_host(vscsi->vdev);
unsigned char scsi_cmd[MAX_COMMAND_SIZE];
int result, inquiry_len, inq_result_len = 256;
char *inq_result = kmalloc(inq_result_len, GFP_KERNEL);

if (!inq_result) {
kfree(inq_result);
return -ENOMEM;
}

shost_for_each_device(sdev, shost) {
inquiry_len = sdev->inquiry_len ? sdev->inquiry_len : 36;

memset(scsi_cmd, 0, sizeof(scsi_cmd));
scsi_cmd[0] = INQUIRY;
scsi_cmd[4] = (unsigned char) inquiry_len;

memset(inq_result, 0, inq_result_len);

result = scsi_execute_cmd(sdev, scsi_cmd, REQ_OP_DRV_IN,
inq_result, inquiry_len,
SD_TIMEOUT, SD_MAX_RETRIES, NULL);

if (result == 0 && inq_result[0] >> 5) {

scsi_remove_device(sdev);
} else if (result > 0 && host_byte(result) == DID_BAD_TARGET) {

scsi_remove_device(sdev);
}
}

kfree(inq_result);
return 0;
}