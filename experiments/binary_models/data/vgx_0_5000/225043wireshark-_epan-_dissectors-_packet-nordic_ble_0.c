static int
dissect_nordic_ble(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
tvbuff_t          *payload_tvb;
btle_context_t    *context;
gint               offset;
gboolean           bad_length = FALSE;

context = wmem_new0(pinfo->pool, btle_context_t);

offset = dissect_header(tvb, pinfo, tree, context, &bad_length);
payload_tvb = tvb_new_subset_length_caplen(tvb, offset, -1, tvb_captured_length(tvb) - offset);

if (!bad_length) {
call_dissector_with_data(btle_dissector_handle, payload_tvb, pinfo, tree, context);
}

if ((context->mic_checked_at_capture) && (!context->mic_valid_at_capture)) {
col_set_str(pinfo->cinfo, COL_INFO, "Encrypted packet decrypted incorrectly");
if (!context->crc_valid_at_capture) {

col_append_str(pinfo->cinfo, COL_INFO, " (bad CRC)");
} else {
col_append_str(pinfo->cinfo, COL_INFO, " (bad MIC)");
}
}

if (debug_handle) {
call_dissector(debug_handle, payload_tvb, pinfo, tree);
}

return offset;
}