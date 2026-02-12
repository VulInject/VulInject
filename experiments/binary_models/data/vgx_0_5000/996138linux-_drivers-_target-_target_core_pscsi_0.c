static enum rq_end_io_ret pscsi_req_done(struct request *req,
blk_status_t status)
{
struct se_cmd *cmd = req->end_io_data;
struct scsi_cmnd *scmd = blk_mq_rq_to_pdu(req);
enum sam_status scsi_status = scmd->result & 0xff;
int valid_data = cmd->data_length - scmd->resid_len;
u8 *cdb = cmd->priv;

if (scsi_status != SAM_STAT_GOOD) {
pr_debug("PSCSI Status Byte exception at cmd: %p CDB:"
" 0x%02x Result: 0x%08x\n", cmd, cdb[0], scmd->result);
}

pscsi_complete_cmd(cmd, scsi_status, scmd->sense_buffer, valid_data);

switch (host_byte(scmd->result)) {
case DID_OK:
target_complete_cmd_with_length(cmd, scsi_status, valid_data);
break;
default:
pr_debug("PSCSI Host Byte exception at cmd: %p CDB:"
" 0x%02x Result: 0x%08x\n", cmd, cdb[0], scmd->result);
target_complete_cmd(cmd, SAM_STAT_CHECK_CONDITION);
break;
}

blk_mq_free_request(req);
return RQ_END_IO_NONE;
}