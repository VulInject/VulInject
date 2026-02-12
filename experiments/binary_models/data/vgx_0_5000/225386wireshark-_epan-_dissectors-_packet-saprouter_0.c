void
proto_reg_handoff_saprouter(void)
{
static gboolean initialized = FALSE;
static range_t *saprouter_port_range;

if (!initialized) {
saprouter_handle = create_dissector_handle(dissect_saprouter, proto_saprouter);
initialized = TRUE;
} else {
range_foreach(saprouter_port_range, range_delete_callback, NULL);
wmem_free(wmem_epan_scope(), saprouter_port_range);
}

saprouter_port_range = range_copy(wmem_epan_scope(), global_saprouter_port_range);
range_foreach(saprouter_port_range, range_add_callback, NULL);

}