static int cpg_lib_exit_fn (void *conn)
{
struct cpg_pd *cpd = (struct cpg_pd *)api->ipc_private_data_get (conn);

log_printf(LOGSYS_LEVEL_DEBUG, "exit_fn for conn=%p", conn);

if (cpd->group_name.length > 0 && cpd->cpd_state != CPD_STATE_LEAVE_STARTED) {
cpg_node_joinleave_send (cpd->pid, &cpd->group_name,
MESSAGE_REQ_EXEC_CPG_PROCLEAVE, CONFCHG_CPG_REASON_PROCDOWN);
}

cpg_pd_finalize (cpd);

api->ipc_refcnt_dec (conn);
return (0);
}