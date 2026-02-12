static int qed_iscsi_get_stats(struct qed_hwfn *p_hwfn,
struct qed_iscsi_stats *stats)
{
struct qed_ptt *p_ptt;

memset(stats, 0, sizeof(*stats));

p_ptt = qed_ptt_acquire(p_hwfn);
if (!p_ptt) {
DP_ERR(p_hwfn, "Failed to acquire ptt\n");
return -EAGAIN;
}

_qed_iscsi_get_tstats(p_hwfn, p_ptt, stats);
_qed_iscsi_get_mstats(p_hwfn, p_ptt, stats);
_qed_iscsi_get_ustats(p_hwfn, p_ptt, stats);

_qed_iscsi_get_xstats(p_hwfn, p_ptt, stats);
_qed_iscsi_get_ystats(p_hwfn, p_ptt, stats);
_qed_iscsi_get_pstats(p_hwfn, p_ptt, stats);

qed_ptt_release(p_hwfn, p_ptt);

return 0;
}