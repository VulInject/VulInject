static guint dissect_feccode(proto_tree *tree, tvbuff_t *tvb, guint offset,
packet_info *pinfo, gint reserved)
{
norm_packet_data_t *norm_data;
guint8              encoding_id = tvb_get_guint8(tvb, offset);


norm_data = wmem_new0(wmem_file_scope(), norm_packet_data_t);
norm_data->encoding_id = encoding_id;

p_add_proto_data(wmem_file_scope(), pinfo, proto_rmt_norm, 0, norm_data);

proto_tree_add_item(tree, hf_fec_encoding_id, tvb, offset, 1, ENC_BIG_ENDIAN); offset += 1;
if (reserved) {
proto_tree_add_item(tree, hf_reserved, tvb, offset, 1, ENC_BIG_ENDIAN); offset += 1;
}
proto_tree_add_item(tree, hf_object_transport_id, tvb, offset, 2, ENC_BIG_ENDIAN); offset+=2;

if (tvb_reported_length_remaining(tvb, offset) > 0) {
fec_data_exchange_t  fec;
tvbuff_t            *new_tvb;
int                  len;

new_tvb = tvb_new_subset_remaining(tvb, offset);

fec.encoding_id = encoding_id;
len = call_dissector_with_data(rmt_fec_handle, new_tvb, pinfo, tree, &fec);
if (len > 0)
offset += len;
}

return offset;
}