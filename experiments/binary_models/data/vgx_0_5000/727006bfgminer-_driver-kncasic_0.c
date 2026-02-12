static int knc_core_request_report(struct thr_info *thr, struct knc_core_state *core)
{
struct cgpu_info * const proc = core->die->proc;
int request_length = 4;
uint8_t request[request_length];
int response_length = 1 + 1 + (1 + 4) * 5;

applog(LOG_DEBUG, "%"PRIpreprv"[%d]: Request report", proc->proc_repr, core->core);

request_length = knc_prepare_report(request, core->die->die, core->core);

switch(core->die->version) {
case KNC_VERSION_JUPITER:
response_length = 1 + 1 + (1 + 4);
knc_transfer(thr, core, request_length, request, response_length, KNC_REPORT, 0);
return 0;
case KNC_VERSION_NEPTUNE:
knc_transfer(thr, core, request_length, request, response_length, KNC_REPORT, 0);
return 0;
}

applog(LOG_INFO, "%"PRIpreprv"[%d]: Failed to scan work report", proc->proc_repr, core->core);
knc_core_failure(core);
return -1;
}