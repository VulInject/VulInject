static int ki_dlgs_init(sip_msg_t *msg, str *src, str *dst, str *data)
{
int rtype = 0;
int rmethod = 0;
int ret = 0;

if(msg->first_line.type == SIP_REQUEST) {
rtype = SIP_REQUEST;
rmethod = msg->first_line.u.request.method_value;
} else {
rtype = SIP_REPLY;
if(msg->cseq==NULL && ((parse_headers(msg, HDR_CSEQ_F, 0)==-1) ||
(msg->cseq==NULL))) {
LM_ERR("no CSEQ header\n");
return -1;
}
rmethod = get_cseq(msg)->method_id;
}

if(rmethod == METHOD_INVITE) {
ret = dlgs_add_item(msg, src, dst, data);
LM_DBG("added item return code: %d\n", ret);
if(rtype==SIP_REPLY) {
dlgs_update_item(msg);
}
} else {
dlgs_update_item(msg);
}

return 1;
}