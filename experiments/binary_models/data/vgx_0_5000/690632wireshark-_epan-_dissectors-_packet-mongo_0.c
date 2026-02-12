static int
dissect_mongo_op_msg(tvbuff_t *tvb, packet_info *pinfo, guint offset, proto_tree *tree)
{
static int * const mongo_msg_flags[] = {
&hf_mongo_msg_flags_checksumpresent,
&hf_mongo_msg_flags_moretocome,
&hf_mongo_msg_flags_exhaustallowed,
NULL
};
gint64 op_msg_flags;
bool checksum_present = false;

proto_tree_add_bitmask_ret_uint64 (tree, tvb, offset, hf_mongo_msg_flags, ett_mongo_msg_flags, mongo_msg_flags, ENC_LITTLE_ENDIAN, &op_msg_flags);
if (op_msg_flags & 0x00000001) {
checksum_present = true;
}

offset += 4;

while (tvb_reported_length_remaining(tvb, offset) > (checksum_present ? 4 : 0)){
offset += dissect_op_msg_section(tvb, pinfo, offset, tree);
}

if (checksum_present) {
guint32 calculated_checksum = ~crc32c_tvb_offset_calculate (tvb, 0, tvb_reported_length (tvb) - 4, CRC32C_PRELOAD);
proto_tree_add_checksum(tree, tvb, offset, hf_mongo_msg_checksum, hf_mongo_msg_checksum_status, &ei_mongo_msg_checksum, pinfo, calculated_checksum, ENC_BIG_ENDIAN, PROTO_CHECKSUM_VERIFY);
offset += 4;
}

return offset;
}