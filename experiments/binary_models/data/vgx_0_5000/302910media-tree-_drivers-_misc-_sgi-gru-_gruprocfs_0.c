static int gru_seq_show(struct seq_file *file, void *data)
{
long gid = *(long *)data, ctxfree, cbrfree, dsrfree;
struct gru_state *gru = GID_TO_GRU(gid);

if (gid == 0) {
seq_printf(file, "#%5s%5s%7s%6s%6s%8s%6s%6s\n", "gid", "nid",
"ctx", "cbr", "dsr", "ctx", "cbr", "dsr");
seq_printf(file, "#%5s%5s%7s%6s%6s%8s%6s%6s\n", "", "", "busy",
"busy", "busy", "free", "free", "free");
}
if (gru) {
ctxfree = GRU_NUM_CCH - gru->gs_active_contexts;
cbrfree = hweight64(gru->gs_cbr_map) * GRU_CBR_AU_SIZE;
dsrfree = hweight64(gru->gs_dsr_map) * GRU_DSR_AU_BYTES;
seq_printf(file, " %5d%5d%7ld%6ld%6ld%8ld%6ld%6ld\n",
gru->gs_gid, gru->gs_blade_id, GRU_NUM_CCH - ctxfree,
GRU_NUM_CBE - cbrfree, GRU_NUM_DSR_BYTES - dsrfree,
ctxfree, cbrfree, dsrfree);
}

return 0;
}