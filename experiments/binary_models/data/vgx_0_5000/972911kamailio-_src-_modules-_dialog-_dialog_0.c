static void internal_rpc_print_single_dlg(rpc_t *rpc, void *c, int with_context) {
str callid, ft;
str *from_tag = NULL;
dlg_entry_t *d_entry;
dlg_cell_t *dlg;
unsigned int h_entry;

if (rpc->scan(c, ".S", &callid) < 1) return;

h_entry = core_hash( &callid, 0, d_table->size);
d_entry = &(d_table->entries[h_entry]);

if (rpc->scan(c, "*.S", &ft) == 1) {
from_tag = &ft;
}

dlg_lock( d_table, d_entry);
for( dlg = d_entry->first ; dlg ; dlg = dlg->next ) {
if (match_downstream_dialog( dlg, &callid, from_tag)==1) {
internal_rpc_print_dlg(rpc, c, dlg, with_context);
}
}
dlg_unlock( d_table, d_entry);
}