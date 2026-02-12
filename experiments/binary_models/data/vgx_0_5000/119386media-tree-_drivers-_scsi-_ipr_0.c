static void ipr_fail_all_ops(struct ipr_ioa_cfg *ioa_cfg)
{
struct ipr_cmnd *ipr_cmd, *temp;
struct ipr_hrr_queue *hrrq;

ENTER;
for_each_hrrq(hrrq, ioa_cfg) {
spin_lock(&hrrq->_lock);
list_for_each_entry_safe(ipr_cmd,
temp, &hrrq->hrrq_pending_q, queue) {
list_del(&ipr_cmd->queue);

ipr_cmd->s.ioasa.hdr.ioasc =
cpu_to_be32(IPR_IOASC_IOA_WAS_RESET);
ipr_cmd->s.ioasa.hdr.ilid =
cpu_to_be32(IPR_DRIVER_ILID);

if (ipr_cmd->scsi_cmd)
ipr_cmd->done = __ipr_scsi_eh_done;
else if (ipr_cmd->qc)
ipr_cmd->done = __ipr_sata_eh_done;

ipr_trc_hook(ipr_cmd, IPR_TRACE_FINISH,
IPR_IOASC_IOA_WAS_RESET);
del_timer(&ipr_cmd->timer);
ipr_cmd->done(ipr_cmd);
}
spin_unlock(&hrrq->_lock);
}
LEAVE;
}