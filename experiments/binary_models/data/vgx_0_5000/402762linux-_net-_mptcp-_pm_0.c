void mptcp_pm_subflow_chk_stale(const struct mptcp_sock *msk, struct sock *ssk)
{
struct mptcp_subflow_context *subflow = mptcp_subflow_ctx(ssk);
u32 rcv_tstamp = READ_ONCE(tcp_sk(ssk)->rcv_tstamp);


if (!subflow->stale_count) {
subflow->stale_rcv_tstamp = rcv_tstamp;
subflow->stale_count++;
} else if (subflow->stale_rcv_tstamp == rcv_tstamp) {
if (subflow->stale_count < U8_MAX)
subflow->stale_count++;
mptcp_pm_nl_subflow_chk_stale(msk, ssk);
} else {
subflow->stale_count = 0;
mptcp_subflow_set_active(subflow);
}
}