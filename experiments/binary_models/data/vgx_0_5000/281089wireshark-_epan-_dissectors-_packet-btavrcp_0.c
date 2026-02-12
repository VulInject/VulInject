static gint
dissect_passthrough(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree,
gint offset, gboolean is_command, guint32 *op)
{
guint operation;
guint state;

proto_tree_add_item(tree, hf_btavrcp_passthrough_state, tvb, offset, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(tree, hf_btavrcp_passthrough_operation, tvb, offset, 1, ENC_BIG_ENDIAN);
*op = tvb_get_guint8(tvb, offset);
operation = tvb_get_guint8(tvb, offset) & 0x7F;
state = (tvb_get_guint8(tvb, offset) & 0x80) >> 7;
offset += 1;
proto_tree_add_item(tree, hf_btavrcp_passthrough_data_length, tvb, offset, 1, ENC_BIG_ENDIAN);
offset += 1;

if (!is_command) {
if (operation == 0x7E) {
proto_tree_add_item(tree, hf_btavrcp_passthrough_company_id, tvb, offset, 3, ENC_BIG_ENDIAN);
offset += 3;
proto_tree_add_item(tree, hf_btavrcp_passthrough_vendor_unique_id, tvb, offset, 2, ENC_BIG_ENDIAN);
offset += 2;
}
}

col_append_fstr(pinfo->cinfo, COL_INFO, " - %s (%s)",
val_to_str_const(operation, passthrough_operation_vals, "Unknown opcode"),
val_to_str_const(state, passthrough_state_vals, "unknown"));
return offset;
}