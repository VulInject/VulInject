static void virtio_scsi_command_complete(SCSIRequest *r, size_t resid)
{
VirtIOSCSIReq *req = r->hba_private;
uint8_t sense[SCSI_SENSE_BUF_SIZE];
uint32_t sense_len;
VirtIODevice *vdev = VIRTIO_DEVICE(req->dev);

if (r->io_canceled) {
return;
}

req->resp.cmd.response = VIRTIO_SCSI_S_OK;
req->resp.cmd.status = r->status;
if (req->resp.cmd.status == GOOD) {
req->resp.cmd.resid = virtio_tswap32(vdev, resid);
} else {
req->resp.cmd.resid = 0;
sense_len = scsi_req_get_sense(r, sense, sizeof(sense));
sense_len = MIN(sense_len, req->resp_iov.size - sizeof(req->resp.cmd));
qemu_iovec_from_buf(&req->resp_iov, sizeof(req->resp.cmd),
sense, sense_len);
req->resp.cmd.sense_len = virtio_tswap32(vdev, sense_len);
}
virtio_scsi_complete_cmd_req(req);
}