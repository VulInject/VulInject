static int qed_ptp_hw_read_tx_ts(struct qed_dev *cdev, u64 *timestamp)
{
struct qed_hwfn *p_hwfn = QED_LEADING_HWFN(cdev);
struct qed_ptt *p_ptt = p_hwfn->p_ptp_ptt;
u32 val;

*timestamp = 0;
val = qed_rd(p_hwfn, p_ptt, NIG_REG_TX_LLH_PTP_BUF_SEQID);
if (!(val & QED_TIMESTAMP_MASK)) {
DP_INFO(p_hwfn, "Invalid Tx timestamp, buf_seqid = %d\n", val);
return -EINVAL;
}

val = qed_rd(p_hwfn, p_ptt, NIG_REG_TX_LLH_PTP_BUF_TS_LSB);
*timestamp = qed_rd(p_hwfn, p_ptt, NIG_REG_TX_LLH_PTP_BUF_TS_MSB);
*timestamp <<= 32;
*timestamp |= val;


qed_wr(p_hwfn, p_ptt, NIG_REG_TX_LLH_PTP_BUF_SEQID, QED_TIMESTAMP_MASK);

return 0;
}