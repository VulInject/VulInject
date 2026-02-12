void
mpt3sas_process_trigger_data(struct MPT3SAS_ADAPTER *ioc,
struct SL_WH_TRIGGERS_EVENT_DATA_T *event_data)
{
u8 issue_reset = 0;

dTriggerDiagPrintk(ioc, pr_info(MPT3SAS_FMT "%s: enter\n",
ioc->name, __func__));


if ((ioc->diag_buffer_status[MPI2_DIAG_BUF_TYPE_TRACE] &
MPT3_DIAG_BUFFER_IS_RELEASED) == 0) {
dTriggerDiagPrintk(ioc, pr_info(MPT3SAS_FMT
"%s: release trace diag buffer\n", ioc->name, __func__));
mpt3sas_send_diag_release(ioc, MPI2_DIAG_BUF_TYPE_TRACE,
&issue_reset);
}

_mpt3sas_raise_sigio(ioc, event_data);

dTriggerDiagPrintk(ioc, pr_info(MPT3SAS_FMT "%s: exit\n", ioc->name,
__func__));
}