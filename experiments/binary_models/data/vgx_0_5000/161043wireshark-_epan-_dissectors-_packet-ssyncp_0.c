static int
dissect_ssyncp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree,
void *data _U_)
{

if (tvb_reported_length(tvb) < SSYNCP_DATAGRAM_HEADER_LEN + SSYNCP_TRANSPORT_HEADER_LEN + SSYNCP_AUTHTAG_LEN)
return 0;

guint64 direction_and_seq = tvb_get_guint64(tvb, 0, ENC_BIG_ENDIAN);
guint direction = direction_and_seq >> 63;
guint64 seq = direction_and_seq & ~(1ULL << 63);


if (seq > (1ULL << 35))
return 0;


ssyncp_packet_info_t *ssyncp_pinfo;
ssyncp_conv_info_t *ssyncp_info = NULL;
if (pinfo->fd->visited) {
ssyncp_pinfo = (ssyncp_packet_info_t *)p_get_proto_data(wmem_file_scope(), pinfo, proto_ssyncp, 0);
} else {
conversation_t *conversation = find_or_create_conversation(pinfo);
ssyncp_info = (ssyncp_conv_info_t *)conversation_get_proto_data(conversation, proto_ssyncp);
if (!ssyncp_info) {
ssyncp_info = wmem_new(wmem_file_scope(), ssyncp_conv_info_t);
conversation_add_proto_data(conversation, proto_ssyncp, ssyncp_info);
ssyncp_info->seen_packet[0] = FALSE;
ssyncp_info->seen_packet[1] = FALSE;
ssyncp_info->clock_seen[0] = FALSE;
ssyncp_info->clock_seen[1] = FALSE;
}

ssyncp_pinfo = wmem_new(wmem_file_scope(), ssyncp_packet_info_t);
ssyncp_pinfo->first_packet = !ssyncp_info->seen_packet[direction];
if (ssyncp_pinfo->first_packet) {
ssyncp_info->seen_packet[direction] = TRUE;
} else {
ssyncp_pinfo->seq_delta = seq - ssyncp_info->last_seq[direction];
}
ssyncp_pinfo->have_rtt_estimate = FALSE;
p_add_proto_data(wmem_file_scope(), pinfo, proto_ssyncp, 0, ssyncp_pinfo);

ssyncp_info->last_seq[direction] = seq;
}



col_set_str(pinfo->cinfo, COL_PROTOCOL, "ssyncp");

col_clear(pinfo->cinfo, COL_INFO);

char *direction_str = direction ? "Server->Client" : "Client->Server";
col_set_str(pinfo->cinfo, COL_INFO, direction_str);




proto_item *ti = proto_tree_add_item(tree, proto_ssyncp, tvb, 0, -1, ENC_NA);

proto_tree *ssyncp_tree = proto_item_add_subtree(ti, ett_ssyncp);


proto_tree_add_item(ssyncp_tree, hf_ssyncp_direction, tvb,
0, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(ssyncp_tree, hf_ssyncp_seq, tvb,
0, 8, ENC_BIG_ENDIAN);
proto_item *encrypted_item =
proto_tree_add_item(ssyncp_tree, hf_ssyncp_encrypted,
tvb, 8, -1, ENC_NA);

if (!ssyncp_pinfo->first_packet) {
proto_item *delta_item =
proto_tree_add_int64(ssyncp_tree, hf_ssyncp_seq_delta, tvb, 0, 0,
ssyncp_pinfo->seq_delta);
proto_item_set_generated(delta_item);
}

unsigned char *decrypted = NULL;
guint decrypted_len = 0;


if (have_ssyncp_key) {
gcry_error_t gcry_err;


gcry_cipher_hd_t gcry_hd;
gcry_err = gcry_cipher_open(&gcry_hd, GCRY_CIPHER_AES128, GCRY_CIPHER_MODE_OCB, 0);
if (gcry_err_code(gcry_err)) {

report_failure("ssyncp: unable to initialize cipher???");
return tvb_captured_length(tvb);
}
gcry_err = gcry_cipher_setkey(gcry_hd, ssyncp_raw_aes_key, sizeof(ssyncp_raw_aes_key));
if (gcry_err_code(gcry_err)) {

report_failure("ssyncp: unable to set key???");
gcry_cipher_close(gcry_hd);
return tvb_captured_length(tvb);
}
char nonce[SSYNCP_IV_PAD + SSYNCP_SEQ_LEN];
memset(nonce, 0, SSYNCP_IV_PAD);
tvb_memcpy(tvb, nonce + SSYNCP_IV_PAD, 0, SSYNCP_SEQ_LEN);
gcry_err = gcry_cipher_setiv(gcry_hd, nonce, sizeof(nonce));
if (gcry_err_code(gcry_err)) {

report_failure("ssyncp: unable to set iv???");
gcry_cipher_close(gcry_hd);
return tvb_captured_length(tvb);
}
decrypted_len = tvb_captured_length(tvb) - SSYNCP_SEQ_LEN - SSYNCP_AUTHTAG_LEN;
decrypted = (unsigned char *)tvb_memdup(pinfo->pool, tvb,
SSYNCP_SEQ_LEN, decrypted_len);
gcry_cipher_final(gcry_hd);
gcry_err = gcry_cipher_decrypt(gcry_hd, decrypted, decrypted_len, NULL, 0);
if (gcry_err_code(gcry_err)) {

report_failure("ssyncp: unable to decrypt???");
gcry_cipher_close(gcry_hd);
return tvb_captured_length(tvb);
}
gcry_err = gcry_cipher_checktag(gcry_hd,
tvb_get_ptr(tvb, SSYNCP_SEQ_LEN+decrypted_len, SSYNCP_AUTHTAG_LEN),
SSYNCP_AUTHTAG_LEN);
if (gcry_err_code(gcry_err) && gcry_err_code(gcry_err) != GPG_ERR_CHECKSUM) {

report_failure("ssyncp: unable to check auth tag???");
gcry_cipher_close(gcry_hd);
return tvb_captured_length(tvb);
}
if (gcry_err_code(gcry_err)) {

decrypted = NULL;
expert_add_info(pinfo, encrypted_item, &ei_ssyncp_bad_key);
}
gcry_cipher_close(gcry_hd);
}

if (decrypted) {
tvbuff_t *decrypted_tvb = tvb_new_child_real_data(tvb, decrypted, decrypted_len, decrypted_len);
add_new_data_source(pinfo, decrypted_tvb, "Decrypted data");

if (!pinfo->fd->visited) {
guint16 our_clock16 = ((guint64)pinfo->abs_ts.secs * 1000 + pinfo->abs_ts.nsecs / 1000000) & 0xffff;
guint16 sender_ts = tvb_get_guint16(decrypted_tvb, 0, ENC_BIG_ENDIAN);
guint16 reply_ts = tvb_get_guint16(decrypted_tvb, 2, ENC_BIG_ENDIAN);
ssyncp_info->clock_offset[direction] = sender_ts - our_clock16;
ssyncp_info->clock_seen[direction] = TRUE;
if (reply_ts != 0xffff && ssyncp_info->clock_seen[1-direction]) {
guint16 projected_send_time_our_clock = reply_ts - ssyncp_info->clock_offset[1-direction];
ssyncp_pinfo->rtt_estimate = our_clock16 - projected_send_time_our_clock;
ssyncp_pinfo->have_rtt_estimate = TRUE;
}
}

proto_tree *dec_tree = proto_tree_add_subtree(ssyncp_tree, decrypted_tvb,
0, -1, ett_ssyncp_decrypted, NULL, "Decrypted data");

proto_tree_add_item(dec_tree, hf_ssyncp_timestamp, decrypted_tvb,
0, 2, ENC_BIG_ENDIAN);
proto_tree_add_item(dec_tree, hf_ssyncp_timestamp_reply, decrypted_tvb,
2, 2, ENC_BIG_ENDIAN);

if (ssyncp_pinfo->have_rtt_estimate) {
int rtt_id = direction ? hf_ssyncp_rtt_to_server : hf_ssyncp_rtt_to_client;
proto_item *rtt_item = proto_tree_add_int(dec_tree, rtt_id, decrypted_tvb, 2, 2, ssyncp_pinfo->rtt_estimate);
proto_item_set_generated(rtt_item);
}

proto_tree_add_item(dec_tree, hf_ssyncp_frag_seq, decrypted_tvb,
4, 8, ENC_BIG_ENDIAN);
proto_tree_add_item(dec_tree, hf_ssyncp_frag_final, decrypted_tvb,
12, 2, ENC_BIG_ENDIAN);
proto_item *frag_idx_item = proto_tree_add_item(dec_tree,
hf_ssyncp_frag_idx, decrypted_tvb, 12, 2, ENC_BIG_ENDIAN);


if (tvb_get_guint16(decrypted_tvb, 12, ENC_BIG_ENDIAN) != 0x8000) {
expert_add_info(pinfo, frag_idx_item, &ei_ssyncp_fragmented);
return tvb_captured_length(tvb);
}

tvbuff_t *inflated_tvb = tvb_child_uncompress(decrypted_tvb, decrypted_tvb, 14, decrypted_len - 14);
if (inflated_tvb == NULL)
return tvb_captured_length(tvb);
add_new_data_source(pinfo, inflated_tvb, "Inflated data");

if (dissector_protobuf) {
call_dissector_with_data(dissector_protobuf, inflated_tvb, pinfo,
dec_tree, "message,TransportBuffers.Instruction");
}
}

return tvb_captured_length(tvb);
}