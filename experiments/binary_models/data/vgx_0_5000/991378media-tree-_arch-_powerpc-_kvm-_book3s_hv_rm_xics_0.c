static void icp_rm_down_cppr(struct kvmppc_xics *xics, struct kvmppc_icp *icp,
u8 new_cppr)
{
union kvmppc_icp_state old_state, new_state;
bool resend;


do {
old_state = new_state = READ_ONCE(icp->state);


new_state.cppr = new_cppr;


if (new_state.mfrr < new_cppr &&
new_state.mfrr <= new_state.pending_pri) {
new_state.pending_pri = new_state.mfrr;
new_state.xisr = XICS_IPI;
}


resend = new_state.need_resend;
new_state.need_resend = 0;

} while (!icp_rm_try_update(icp, old_state, new_state));


if (resend) {
icp->n_check_resend++;
icp_rm_check_resend(xics, icp);
}
}