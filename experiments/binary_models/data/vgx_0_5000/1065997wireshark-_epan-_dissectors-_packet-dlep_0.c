static int
dissect_dlep_sig(tvbuff_t *tvb, packet_info *pinfo, proto_tree *pt, void *data _U_)
{
int         offset            = 0;
proto_item *dlep_pi           = NULL;
proto_tree *dlep_pt           = NULL;


col_set_str(pinfo->cinfo, COL_PROTOCOL, "DLEP");
col_clear(pinfo->cinfo, COL_INFO);

dlep_pi = proto_tree_add_item(pt, proto_dlep, tvb, 0, -1, ENC_NA);
dlep_pt = proto_item_add_subtree(dlep_pi, ett_dlep);


offset = decode_signal_header(tvb, offset, dlep_pi, dlep_pt, pinfo);


while (tvb_reported_length_remaining(tvb, offset) > 0) {
offset = decode_dataitem(tvb, offset, dlep_pt, pinfo);
}

return tvb_captured_length(tvb);
}