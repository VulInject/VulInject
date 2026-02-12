int ide_cdrom_reset(struct cdrom_device_info *cdi)
{
ide_drive_t *drive = cdi->handle;
struct cdrom_info *cd = drive->driver_data;
struct request_sense sense;
struct request *rq;
int ret;

rq = blk_get_request(drive->queue, REQ_OP_DRV_IN, __GFP_RECLAIM);
scsi_req_init(rq);
ide_req(rq)->type = ATA_PRIV_MISC;
rq->rq_flags = RQF_QUIET;
blk_execute_rq(drive->queue, cd->disk, rq, 0);
ret = scsi_req(rq)->result ? -EIO : 0;
blk_put_request(rq);

if (drive->atapi_flags & IDE_AFLAG_DOOR_LOCKED)
(void)ide_cd_lockdoor(drive, 1, &sense);

return ret;
}