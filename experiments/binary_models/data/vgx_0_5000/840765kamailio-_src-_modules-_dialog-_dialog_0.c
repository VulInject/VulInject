static void internal_rpc_dump_file_dlgs(rpc_t *rpc, void *c, int with_context)
{
dlg_cell_t *dlg;
str output_file_name;
FILE* dialogf;
unsigned int i;
if (rpc->scan(c, ".S", &output_file_name) < 1) return;

dialogf = fopen(output_file_name.s, "a+");
if (!dialogf) {
LM_ERR("failed to open output file: %s\n", output_file_name.s);
return;
}

for( i=0 ; i<d_table->size ; i++ ) {
dlg_lock( d_table, &(d_table->entries[i]) );

for( dlg=d_table->entries[i].first ; dlg ; dlg=dlg->next ) {
internal_rpc_dump_file_dlg(dlg, dialogf);
}
dlg_unlock( d_table, &(d_table->entries[i]) );
}
fclose(dialogf);
}