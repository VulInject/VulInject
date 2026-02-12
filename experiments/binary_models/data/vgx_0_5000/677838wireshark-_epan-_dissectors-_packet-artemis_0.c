static int
dissect_artemis_frame(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void* data _U_)
{

proto_item  *ti, *len_item;
proto_tree  *artemis_tree;
guint32     length;

ti = proto_tree_add_item(tree, proto_artemis, tvb, 0, -1, ENC_NA);
artemis_tree = proto_item_add_subtree(ti, ett_artemis);

len_item = proto_tree_add_item_ret_uint(artemis_tree, hf_artemis_len, tvb, 0, 4, ENC_BIG_ENDIAN, &length);
if (length < 9) {    
expert_add_info(pinfo, len_item, &ei_artemis_len_short);
return tvb_captured_length(tvb);
}

proto_tree_add_item(artemis_tree, hf_artemis_type, tvb, 4, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(artemis_tree, hf_artemis_channel, tvb, 5, 8, ENC_BIG_ENDIAN);
proto_tree_add_item(artemis_tree, hf_artemis_buffer,  tvb, 13, length-9, ENC_NA);

return tvb_captured_length(tvb);
}