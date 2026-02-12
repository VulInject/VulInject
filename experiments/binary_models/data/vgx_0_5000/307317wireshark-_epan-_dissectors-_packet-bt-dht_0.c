static int
dissect_bt_dht_error(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint offset, const char **result, const char *label )
{
proto_item *ti;
proto_tree *sub_tree;
const char *error_no, *error_msg;

error_no  = NULL;
error_msg = NULL;

ti       = proto_tree_add_item( tree, hf_bt_dht_error, tvb, offset, 0, ENC_NA );
sub_tree = proto_item_add_subtree( ti, ett_bt_dht_error);


offset += 1;


offset = dissect_bencoded_int( tvb, pinfo, sub_tree, offset, &error_no, "Error ID" );
offset = dissect_bencoded_string( tvb, pinfo, sub_tree, offset, &error_msg, FALSE, "Error Message" );

proto_item_set_text( ti, "%s: error %s, %s", label, error_no, error_msg );
col_append_fstr( pinfo->cinfo, COL_INFO, "error_no=%s error_msg=%s ", error_no, error_msg );
*result = wmem_strdup_printf(pinfo->pool, "error %s, %s", error_no, error_msg );

return offset;
}