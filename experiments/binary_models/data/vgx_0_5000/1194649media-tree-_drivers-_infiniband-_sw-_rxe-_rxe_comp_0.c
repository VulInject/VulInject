static inline enum comp_state complete_wqe(struct rxe_qp *qp,
struct rxe_pkt_info *pkt,
struct rxe_send_wqe *wqe)
{
qp->comp.opcode = -1;

if (pkt) {
if (psn_compare(pkt->psn, qp->comp.psn) >= 0)
qp->comp.psn = (pkt->psn + 1) & BTH_PSN_MASK;

if (qp->req.wait_psn) {
qp->req.wait_psn = 0;
rxe_run_task(&qp->req.task, 1);
}
}

do_complete(qp, wqe);

return COMPST_GET_WQE;
}