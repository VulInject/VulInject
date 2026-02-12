static int
dissect_l2tp_udp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
proto_tree *l2tp_tree;
proto_item *l2tp_item;
int         idx       = 0;
int         tmp_idx;
guint16     length    = 0;  
guint16     tid;            
guint16     cid;            
guint16     offset_size;    
guint16     avp_type;
guint16     msg_type;
guint16     control;
tvbuff_t   *next_tvb;
conversation_t *conv = NULL;
l2tpv3_conversation_t *l2tp_conv = NULL;


if (tvb_captured_length(tvb) < 2)
return 0;       
control = tvb_get_ntohs(tvb, 0);
switch (L2TP_VERSION(control)) {

case 2:
case 3:
break;

default:
return 0;
}


conv = find_conversation(pinfo->num, &pinfo->src, &pinfo->dst, CONVERSATION_UDP,
pinfo->srcport, pinfo->destport, NO_PORT_B);

if (conv == NULL || (conversation_get_dissector(conv, pinfo->num) != l2tp_udp_handle)) {
conv = find_conversation(pinfo->num, &pinfo->dst, &pinfo->src, CONVERSATION_UDP,
pinfo->destport, pinfo->srcport, NO_PORT_B);
}

if ((conv == NULL) || (conversation_get_dissector(conv, pinfo->num) != l2tp_udp_handle)) {
conv = conversation_new(pinfo->num, &pinfo->src, &pinfo->dst, CONVERSATION_UDP,
pinfo->srcport, 0, NO_PORT2);
conversation_set_dissector(conv, l2tp_udp_handle);
}

col_set_str(pinfo->cinfo, COL_PROTOCOL, "L2TP");
col_clear(pinfo->cinfo, COL_INFO);

switch (L2TP_VERSION(control)) {

case 2:
break;

case 3:
l2tp_conv = (l2tpv3_conversation_t *)conversation_get_proto_data(conv, proto_l2tp);
if (!l2tp_conv) {
l2tp_conv = wmem_new0(wmem_file_scope(), l2tpv3_conversation_t);
l2tp_conv->pt = PT_UDP;
conversation_add_proto_data(conv, proto_l2tp, (void *)l2tp_conv);
}

col_set_str(pinfo->cinfo, COL_PROTOCOL, "L2TPv3");
if (CONTROL_BIT(control)) {

process_l2tpv3_control(tvb, pinfo, tree, 0, l2tp_conv);
}
else {

process_l2tpv3_data_udp(tvb, pinfo, tree, l2tp_conv);
}
return tvb_reported_length(tvb);
}

if (LENGTH_BIT(control)) {              
idx += 2;                       
length = tvb_get_ntohs(tvb, idx);
}


idx += 2;
tid = tvb_get_ntohs(tvb, idx);
idx += 2;
cid = tvb_get_ntohs(tvb, idx);

if (CONTROL_BIT(control)) {

tmp_idx = idx;

if ((LENGTH_BIT(control))&&(length==12))        
col_add_fstr(pinfo->cinfo, COL_INFO,
"%s - ZLB      (tunnel id=%d, session id=%u)",
control_msg, tid, cid);
else
{
if (SEQUENCE_BIT(control)) {
tmp_idx += 4;
}

tmp_idx+=4;

avp_type = tvb_get_ntohs(tvb, (tmp_idx+=2));

if (avp_type == CONTROL_MESSAGE) {

msg_type = tvb_get_ntohs(tvb, tmp_idx+2);
col_add_fstr(pinfo->cinfo, COL_INFO,
"%s - %s (tunnel id=%u, session id=%u)",
control_msg,
val_to_str_ext(msg_type, &l2tp_message_type_short_str_vals_ext, "Unknown (%u)"),
tid, cid);
}
else
{

col_add_fstr(pinfo->cinfo, COL_INFO,
"%s (tunnel id=%u, session id=%u)",
control_msg, tid, cid);

}
}
}
else {

col_add_fstr(pinfo->cinfo, COL_INFO,
"%s            (tunnel id=%u, session id=%u)",
data_msg, tid, cid);
}

if (LENGTH_BIT(control)) {

set_actual_length(tvb, length);
}

l2tp_item = proto_tree_add_item(tree,proto_l2tp, tvb, 0, -1, ENC_NA);
l2tp_tree = proto_item_add_subtree(l2tp_item, ett_l2tp);

if (tree) {
static int * const control_fields[] = {
&hf_l2tp_type,
&hf_l2tp_length_bit,
&hf_l2tp_seq_bit,
&hf_l2tp_offset_bit,
&hf_l2tp_priority,
&hf_l2tp_version,
NULL
};

proto_tree_add_bitmask(l2tp_tree, tvb, 0, hf_l2tp_flags, ett_l2tp_flags, control_fields, ENC_BIG_ENDIAN);
}
idx = 2;
if (LENGTH_BIT(control)) {
if (tree) {
proto_tree_add_item(l2tp_tree, hf_l2tp_length, tvb, idx, 2, ENC_BIG_ENDIAN);
}
idx += 2;
}

if (tree) {
proto_tree_add_item(l2tp_tree, hf_l2tp_tunnel, tvb, idx, 2, ENC_BIG_ENDIAN);
}
idx += 2;
if (tree) {
proto_tree_add_item(l2tp_tree, hf_l2tp_session, tvb, idx, 2, ENC_BIG_ENDIAN);
}
idx += 2;

if (SEQUENCE_BIT(control)) {
if (tree) {
proto_tree_add_item(l2tp_tree, hf_l2tp_Ns, tvb, idx, 2, ENC_BIG_ENDIAN);
}
idx += 2;
if (tree) {
proto_tree_add_item(l2tp_tree, hf_l2tp_Nr, tvb, idx, 2, ENC_BIG_ENDIAN);
}
idx += 2;
}
if (OFFSET_BIT(control)) {
offset_size = tvb_get_ntohs(tvb, idx);
if (tree) {
proto_tree_add_uint(l2tp_tree, hf_l2tp_offset, tvb, idx, 2,
offset_size);
}
idx += 2;
if (offset_size != 0) {
if (tree) {
proto_tree_add_item(l2tp_tree, hf_l2tp_offset_padding, tvb, idx, offset_size, ENC_NA);
}
idx += offset_size;
}
}

if (tree && (LENGTH_BIT(control))&&(length==12)) {
proto_tree_add_item(l2tp_tree, hf_l2tp_zero_length_body_message, tvb, 0, 0, ENC_NA);
}

if (!CONTROL_BIT(control)) {  
if (tree)
proto_item_set_len(l2tp_item, idx);

if (tvb_offset_exists(tvb, idx)) {
next_tvb = tvb_new_subset_remaining(tvb, idx);
call_dissector(ppp_hdlc_handle, next_tvb, pinfo, tree);
}
return tvb_reported_length(tvb);
}

if (LENGTH_BIT(control))
process_control_avps(tvb, pinfo, l2tp_tree, idx, length, -1, NULL);

return tvb_reported_length(tvb);
}