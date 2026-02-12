static inline int iscsit_check_received_cmdsn(struct iscsit_session *sess, u32 cmdsn)
{
u32 max_cmdsn;
int ret;


max_cmdsn = atomic_read(&sess->max_cmd_sn);
if (iscsi_sna_gt(cmdsn, max_cmdsn)) {
pr_err("Received CmdSN: 0x%08x is greater than"
" MaxCmdSN: 0x%08x, ignoring.\n", cmdsn, max_cmdsn);
ret = CMDSN_MAXCMDSN_OVERRUN;

} else if (cmdsn == sess->exp_cmd_sn) {
sess->exp_cmd_sn++;
pr_debug("Received CmdSN matches ExpCmdSN,"
" incremented ExpCmdSN to: 0x%08x\n",
sess->exp_cmd_sn);
ret = CMDSN_NORMAL_OPERATION;

} else if (iscsi_sna_gt(cmdsn, sess->exp_cmd_sn)) {
pr_debug("Received CmdSN: 0x%08x is greater"
" than ExpCmdSN: 0x%08x, not acknowledging.\n",
cmdsn, sess->exp_cmd_sn);
ret = CMDSN_HIGHER_THAN_EXP;

} else {
pr_err("Received CmdSN: 0x%08x is less than"
" ExpCmdSN: 0x%08x, ignoring.\n", cmdsn,
sess->exp_cmd_sn);
ret = CMDSN_LOWER_THAN_EXP;
}

return ret;
}