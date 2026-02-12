static guint
get_mrcpv2_pdu_len(packet_info *pinfo _U_, tvbuff_t *tvb, int offset, void *data _U_)
{
gint len_start;
gint len_end;
guint8 *msg_len;
guint num_msg_len = 0;


len_start = tvb_find_guint8(tvb, offset, MRCPV2_MIN_PDU_LEN, ' ');
if (len_start == -1)
return 0;
len_start += 1; 


len_end = tvb_find_guint8(tvb, len_start, MRCPV2_MIN_PDU_LEN - len_start, ' ');
if (len_end == -1)
msg_len = tvb_get_string_enc(pinfo->pool, tvb, len_start, MRCPV2_MIN_PDU_LEN - len_start, ENC_ASCII);
else
msg_len = tvb_get_string_enc(pinfo->pool, tvb, len_start, len_end - len_start, ENC_ASCII);

ws_strtou32(msg_len, NULL, &num_msg_len);
return num_msg_len;
}