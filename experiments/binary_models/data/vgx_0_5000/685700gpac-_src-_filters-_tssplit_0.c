GF_Err m2tssplit_configure_pid(GF_Filter *filter, GF_FilterPid *pid, Bool is_remove)
{
GF_M2TSSplitCtx *ctx = gf_filter_get_udta(filter);

if (is_remove) {
ctx->ipid = NULL;
m2tssplit_flush(ctx);
while (gf_list_count(ctx->streams) ) {
GF_M2TSSplit_SPTS *st = gf_list_pop_back(ctx->streams);
if (st->opid) gf_filter_pid_remove(st->opid);
if (st->pck_buffer) gf_free(st->pck_buffer);
gf_free(st);
}
return GF_OK;
}
if (! gf_filter_pid_check_caps(pid))
return GF_NOT_SUPPORTED;

ctx->ipid = pid;
return GF_OK;
}