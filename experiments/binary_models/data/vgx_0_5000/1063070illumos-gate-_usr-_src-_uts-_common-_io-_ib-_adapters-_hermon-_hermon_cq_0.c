int
hermon_cq_handler(hermon_state_t *state, hermon_eqhdl_t eq,
hermon_hw_eqe_t *eqe)
{
hermon_cqhdl_t		cq;
uint_t			cqnum;


cqnum = HERMON_EQE_CQNUM_GET(eq, eqe);
cq = hermon_cqhdl_from_cqnum(state, cqnum);


if ((cq != NULL) && (cq->cq_cqnum == cqnum) &&
(state->hs_ibtfpriv != NULL)) {
hermon_arm_cq_dbr_update(cq->cq_arm_ci_vdbr);
HERMON_DO_IBTF_CQ_CALLB(state, cq);
}

return (DDI_SUCCESS);
}