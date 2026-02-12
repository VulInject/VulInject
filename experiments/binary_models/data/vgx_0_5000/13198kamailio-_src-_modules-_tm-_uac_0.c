int req_within(uac_req_t *uac_r)
{
int ret;
char nbuf[MAX_URI_SIZE];
char dbuf[REQ_DST_URI_SIZE];
str ouri = {0, 0};
str nuri = {0, 0};
str duri = {0, 0};

if (!uac_r || !uac_r->method || !uac_r->dialog) {
LM_ERR("Invalid parameter value\n");
goto err;
}

if(uac_r->dialog->send_sock==NULL) {
if(uac_r->ssockname!=NULL && uac_r->ssockname->len>0) {

uac_r->dialog->send_sock = ksr_get_socket_by_name(uac_r->ssockname);
} else if(uac_r->ssock!=NULL && uac_r->ssock->len>0) {

uac_r->dialog->send_sock = lookup_local_socket(uac_r->ssock);
}
}


if(uac_r->dialog && uac_r->dialog->rem_target.len>0
&& uac_r->dialog->dst_uri.len==0
&& uac_r->dialog->route_set==NULL) {
ouri = uac_r->dialog->rem_target;

nuri.s = nbuf;
nuri.len = MAX_URI_SIZE;
duri.s = dbuf;
duri.len = REQ_DST_URI_SIZE;
if(uri_restore_rcv_alias(&ouri, &nuri, &duri)<0) {
nuri.len = 0;
duri.len = 0;
}
if(nuri.len>0 && duri.len>0) {
uac_r->dialog->rem_target = nuri;
uac_r->dialog->dst_uri    = duri;
} else {
ouri.len = 0;
}
}

if ((uac_r->method->len == 3) && (!memcmp("ACK", uac_r->method->s, 3))) goto send;
if ((uac_r->method->len == 6) && (!memcmp("CANCEL", uac_r->method->s, 6))) goto send;
uac_r->dialog->loc_seq.value++; 
send:
ret = t_uac(uac_r);
if(ouri.len>0) {
uac_r->dialog->rem_target = ouri;
uac_r->dialog->dst_uri.s = 0;
uac_r->dialog->dst_uri.len = 0;
}
return ret;

err:

if(ouri.len>0) {
uac_r->dialog->rem_target = ouri;
uac_r->dialog->dst_uri.s = 0;
uac_r->dialog->dst_uri.len = 0;
}
return -1;
}