static int
dissect_ipos(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void* data _U_)
{
proto_item	*ti = NULL;
proto_tree	*ipos_tree = NULL;
tvbuff_t	*next_tvb;
int         offset = 0;

col_set_str(pinfo->cinfo, COL_PROTOCOL, "IPOS");
col_clear(pinfo->cinfo, COL_INFO);

ti = proto_tree_add_item(tree, proto_ipos, tvb, 0, -1, ENC_NA);
ipos_tree = proto_item_add_subtree(ti, ett_ipos);
proto_tree_add_item(ipos_tree, hf_ipos_protocol, tvb, offset, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(ipos_tree, hf_ipos_priority, tvb, offset, 1, ENC_BIG_ENDIAN);
offset += 1;
proto_tree_add_item(ipos_tree, hf_ipos_ppe, tvb, offset, 1, ENC_BIG_ENDIAN);
offset += 1;
proto_tree_add_item(ipos_tree, hf_ipos_slot, tvb, offset, 2, ENC_BIG_ENDIAN);
offset += 2;

if (redback_handle) {
next_tvb = tvb_new_subset_remaining(tvb, offset);
call_dissector(redback_handle, next_tvb, pinfo, tree);
}

return tvb_reported_length(tvb);
}