int smp_query_cpu_stopped(unsigned int pcpu)
{
int cpu_status, status;
int qcss_tok = rtas_function_token(RTAS_FN_QUERY_CPU_STOPPED_STATE);

if (qcss_tok == RTAS_UNKNOWN_SERVICE) {
printk_once(KERN_INFO
"Firmware doesn't support query-cpu-stopped-state\n");
return QCSS_HARDWARE_ERROR;
}

status = rtas_call(qcss_tok, 1, 2, &cpu_status, pcpu);
if (status != 0) {
printk(KERN_ERR
"RTAS query-cpu-stopped-state failed: %i\n", status);
return status;
}

return cpu_status;
}