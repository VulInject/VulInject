static int cch_seq_show(struct seq_file *file, void *data)
{
long gid = *(long *)data;
int i;
struct gru_state *gru = GID_TO_GRU(gid);
struct gru_thread_state *ts;
const char *mode[] = { "??", "UPM", "INTR", "OS_POLL" };

if (gid == 0)
seq_printf(file, "#%5s%5s%6s%7s%9s%6s%8s%8s\n", "gid", "bid",
"ctx#", "asid", "pid", "cbrs", "dsbytes", "mode");
if (gru)
for (i = 0; i < GRU_NUM_CCH; i++) {
ts = gru->gs_gts[i];
if (!ts)
continue;
seq_printf(file, " %5d%5d%6d%7d%9d%6d%8d%8s\n",
gru->gs_gid, gru->gs_blade_id, i,
is_kernel_context(ts) ? 0 : ts->ts_gms->ms_asids[gid].mt_asid,
is_kernel_context(ts) ? 0 : ts->ts_tgid_owner,
ts->ts_cbr_au_count * GRU_CBR_AU_SIZE,
ts->ts_cbr_au_count * GRU_DSR_AU_BYTES,
mode[ts->ts_user_options &
GRU_OPT_MISS_MASK]);
}

return 0;
}