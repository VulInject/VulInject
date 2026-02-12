static void
iscsi_sess_flush(iscsi_sess_t *isp)
{
iscsi_cmd_t	*icmdp;

ASSERT(isp != NULL);
ASSERT(isp->sess_state != ISCSI_SESS_STATE_LOGGED_IN);


mutex_enter(&isp->sess_queue_pending.mutex);
icmdp = isp->sess_queue_pending.head;
while (icmdp != NULL) {
if (isp->sess_state == ISCSI_SESS_STATE_FAILED) {
mutex_enter(&icmdp->cmd_mutex);
if (icmdp->cmd_type == ISCSI_CMD_TYPE_SCSI) {
icmdp->cmd_un.scsi.pkt_stat |= STAT_ABORTED;
}
mutex_exit(&icmdp->cmd_mutex);
}

iscsi_cmd_state_machine(icmdp,
ISCSI_CMD_EVENT_E7, isp);
icmdp = isp->sess_queue_pending.head;
}
mutex_exit(&isp->sess_queue_pending.mutex);
}