static int
dissect_payload_idr(mikey_t *mikey _U_, tvbuff_t *tvb, packet_info *pinfo _U_, proto_tree *tree)
{
int	offset = 0;
guint8	type;
guint16	length;

type = tvb_get_guint8(tvb, offset+2);
length = tvb_get_ntohs(tvb, offset+3);
if (tree) {
proto_tree_add_item(tree, hf_mikey[POS_ID_ROLE], tvb, 1, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(tree, hf_mikey[POS_ID_TYPE], tvb, 2, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(tree, hf_mikey[POS_ID_LEN],  tvb, 3, 2, ENC_BIG_ENDIAN);
}

if (tree) {
proto_item *parent;
const guint8* pos_id;
proto_tree_add_item_ret_string(tree, hf_mikey[POS_ID], tvb, 5, length, ENC_ASCII|ENC_NA, pinfo->pool, &pos_id);

parent = proto_tree_get_parent(tree);
proto_item_append_text(parent, " %s: %s", val_to_str_const(type, id_type_vals, "Unknown"), pos_id);
}

return 5 + length;
}