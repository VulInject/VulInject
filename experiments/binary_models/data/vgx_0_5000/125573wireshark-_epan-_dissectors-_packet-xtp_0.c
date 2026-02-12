static void
dissect_xtp_data(tvbuff_t *tvb, proto_tree *tree, guint32 offset, gboolean have_btag) {
guint32     len = tvb_reported_length_remaining(tvb, offset);
proto_tree *xtp_subtree;
guint64     btag;

xtp_subtree = proto_tree_add_subtree(tree, tvb, offset, len, ett_xtp_data, NULL, "Data Segment");

if (have_btag) {
btag = tvb_get_ntohl(tvb, offset);
btag <<= 32;
btag += tvb_get_ntohl(tvb, offset+4);
proto_tree_add_uint64(xtp_subtree, hf_xtp_btag, tvb, offset, 8, btag);
offset += 8;
len -= 8;
}

proto_tree_add_item(xtp_subtree, hf_xtp_data, tvb, offset, len, ENC_NA);

return;
}