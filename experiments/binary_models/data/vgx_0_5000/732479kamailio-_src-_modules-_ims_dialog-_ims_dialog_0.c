static void rpc_end_dlg_entry_id(rpc_t *rpc, void *c) {
unsigned int h_entry, h_id;
struct dlg_cell * dlg = NULL;
str rpc_extra_hdrs = {0,0};
str dfl_rpc_extra_hdrs = {"Reason: mi_terminated\r\n",23};
str reason = {"mi_terminated", 12};
int n;

n = rpc->scan(c, "dd", &h_entry, &h_id);
if (n < 2) {
LM_ERR("unable to read the parameters (%d)\n", n);
rpc->fault(c, 500, "Invalid parameters");
return;
}
if(rpc->scan(c, "*S", &rpc_extra_hdrs)<1)
{
rpc_extra_hdrs = dfl_rpc_extra_hdrs;
}

dlg = lookup_dlg(h_entry, h_id);
if(dlg==NULL) {
rpc->fault(c, 404, "Dialog not found");
return;
}

unref_dlg(dlg, 1);
LM_DBG("Setting reason to [%.*s] and extra headers to [%.*s]\n", reason.len, reason.s, rpc_extra_hdrs.len, rpc_extra_hdrs.s);
dlg_terminate(dlg, NULL, &reason, 2, &rpc_extra_hdrs);

}