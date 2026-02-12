static asp_request_val *
get_transaction(tvbuff_t *tvb, packet_info *pinfo, struct atp_asp_dsi_info *atp_asp_dsi_info)
{
conversation_t  *conversation;
asp_request_key  request_key, *new_request_key;
asp_request_val *request_val;
guint8           fn;

conversation = find_or_create_conversation(pinfo);

request_key.conversation = conversation->conv_index;
memcpy(request_key.src, (!atp_asp_dsi_info->reply)?pinfo->src.data:pinfo->dst.data, 4);
request_key.tid = atp_asp_dsi_info->tid;

request_val = (asp_request_val *) wmem_map_lookup(asp_request_hash, &request_key);
if (!request_val && !atp_asp_dsi_info->reply )  {
fn = tvb_get_guint8(tvb, 0);
new_request_key = wmem_new(wmem_file_scope(), asp_request_key);
*new_request_key = request_key;

request_val = wmem_new(wmem_file_scope(), asp_request_val);
request_val->value = fn;

wmem_map_insert(asp_request_hash, new_request_key, request_val);
}

return request_val;
}