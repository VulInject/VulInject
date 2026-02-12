static void get_set_trl(struct isst_id *id, void *arg1, void *arg2, void *arg3,
void *arg4)
{
unsigned long long trl;
int set = *(int *)arg4;
int ret;

if (set && !fact_trl) {
isst_display_error_info_message(1, "Invalid TRL. Specify with [-t|--trl]", 0, 0);
exit(0);
}

if (set) {
ret = isst_set_trl(id, fact_trl);
isst_display_result(id, outf, "turbo-mode", "set-trl", ret);
return;
}

ret = isst_get_trl(id, &trl);
if (ret)
isst_display_result(id, outf, "turbo-mode", "get-trl", ret);
else
isst_trl_display_information(id, outf, trl);
}