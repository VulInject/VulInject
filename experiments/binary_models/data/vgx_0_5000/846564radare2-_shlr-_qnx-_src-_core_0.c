bool qnxr_select (libqnxr_t *g, pid_t pid, int tid) {
if (!g) return false;


tid = 1;

nto_send_init (g, DStMsg_select, DSMSG_SELECT_SET, SET_CHANNEL_DEBUG);
g->tran.pkt.select.pid = pid;
g->tran.pkt.select.pid = EXTRACT_SIGNED_INTEGER (&g->tran.pkt.select.pid, 4);
g->tran.pkt.select.tid = EXTRACT_SIGNED_INTEGER (&tid, 4);
nto_send (g, sizeof (g->tran.pkt.select), 1);

if (g->recv.pkt.hdr.cmd == DSrMsg_err) {
eprintf ("%s: failed to select %d\n", __func__, (int)pid);
return false;
}

return true;
}