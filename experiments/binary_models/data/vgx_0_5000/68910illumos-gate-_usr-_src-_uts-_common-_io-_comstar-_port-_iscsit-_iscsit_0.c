void
iscsit_keepalive(idm_conn_t *ic)
{
idm_pdu_t		*nop_in_pdu;
iscsi_nop_in_hdr_t	*nop_in;
iscsit_conn_t		*ict = ic->ic_handle;


nop_in_pdu = idm_pdu_alloc(sizeof (*nop_in), 0);
idm_pdu_init(nop_in_pdu, ic, NULL, NULL);
nop_in = (iscsi_nop_in_hdr_t *)nop_in_pdu->isp_hdr;
bzero(nop_in, sizeof (*nop_in));
nop_in->opcode = ISCSI_OP_NOOP_IN;
nop_in->flags = ISCSI_FLAG_FINAL;
nop_in->itt = ISCSI_RSVD_TASK_TAG;

nop_in_pdu->isp_flags |= IDM_PDU_SET_STATSN;

mutex_enter(&ict->ict_mutex);
nop_in->ttt = ict->ict_keepalive_ttt;
ict->ict_keepalive_ttt++;
if (ict->ict_keepalive_ttt == ISCSI_RSVD_TASK_TAG)
ict->ict_keepalive_ttt = IDM_TASKIDS_MAX;
mutex_exit(&ict->ict_mutex);

iscsit_pdu_tx(nop_in_pdu);
}