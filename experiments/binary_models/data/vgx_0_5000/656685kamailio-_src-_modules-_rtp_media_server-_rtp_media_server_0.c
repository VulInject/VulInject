static int rms_hangup_call(rms_dialog_info_t *di)
{
uac_req_t uac_r;
int result;
str headers = str_init("Max-Forwards: 70" CRLF);
str method_bye = str_init("BYE");

LM_INFO("si[%p]callid[%.*s]cseq[%d]remote_uri[%s]local_uri[%s]\n", di, di->callid.len, di->callid.s,
di->cseq, di->remote_uri.s, di->local_uri.s);
LM_INFO("contact[%.*s]\n", di->contact_uri.len, di->contact_uri.s);
dlg_t *dialog = NULL;

if(tmb.new_dlg_uac(&di->callid, &di->local_tag, di->cseq, &di->local_uri,
&di->remote_uri, &dialog)
< 0) {
LM_ERR("error in tmb.new_dlg_uac\n");
return -1;
}
dialog->id.rem_tag.s = di->remote_tag.s;
dialog->id.rem_tag.len = di->remote_tag.len;
dialog->rem_target.s = di->contact_uri.s;
dialog->rem_target.len = di->contact_uri.len;
set_uac_req(&uac_r, &method_bye, &headers, NULL, dialog,
TMCB_LOCAL_COMPLETED, NULL, NULL);
result = tmb.t_request_within(&uac_r);
di->cseq = dialog->loc_seq.value;
if(result < 0) {
LM_ERR("error in tmb.t_request\n");
return -1;
} else {
LM_ERR("tmb.t_request_within ok\n");
}
return 1;
}