static ibt_status_t
tavor_ci_post_send(ibc_hca_hdl_t hca, ibc_qp_hdl_t qp, ibt_send_wr_t *wr_p,
uint_t num_wr, uint_t *num_posted_p)
{
tavor_state_t		*state;
tavor_qphdl_t		qphdl;
int			status;

ASSERT(wr_p != NULL);
ASSERT(num_wr != 0);


if (hca == NULL) {
return (IBT_HCA_HDL_INVALID);
}


if (qp == NULL) {
return (IBT_QP_HDL_INVALID);
}


state = (tavor_state_t *)hca;
qphdl = (tavor_qphdl_t)qp;


status = tavor_post_send(state, qphdl, wr_p, num_wr, num_posted_p);
if (status != DDI_SUCCESS) {
return (status);
}

return (IBT_SUCCESS);
}