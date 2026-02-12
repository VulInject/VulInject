static blk_status_t sd_setup_unmap_cmnd(struct scsi_cmnd *cmd)
{
struct scsi_device *sdp = cmd->device;
struct request *rq = scsi_cmd_to_rq(cmd);
struct scsi_disk *sdkp = scsi_disk(rq->q->disk);
u64 lba = sectors_to_logical(sdp, blk_rq_pos(rq));
u32 nr_blocks = sectors_to_logical(sdp, blk_rq_sectors(rq));
unsigned int data_len = 24;
char *buf;

buf = sd_set_special_bvec(rq, data_len);
if (!buf)
return BLK_STS_RESOURCE;

cmd->cmd_len = 10;
cmd->cmnd[0] = UNMAP;
cmd->cmnd[8] = 24;

put_unaligned_be16(6 + 16, &buf[0]);
put_unaligned_be16(16, &buf[2]);
put_unaligned_be64(lba, &buf[8]);
put_unaligned_be32(nr_blocks, &buf[16]);

cmd->allowed = sdkp->max_retries;
cmd->transfersize = data_len;
rq->timeout = SD_TIMEOUT;

return scsi_alloc_sgtables(cmd);
}