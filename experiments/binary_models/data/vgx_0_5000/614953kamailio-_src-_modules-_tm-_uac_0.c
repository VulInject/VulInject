int prepare_req_within(uac_req_t *uac_r,
struct retr_buf **dst_req)
{
int ret = -1;
if (!uac_r || !uac_r->method || !uac_r->dialog) {
LM_ERR("Invalid parameter value\n");
goto err;
}

if (uac_r->dialog->state != DLG_CONFIRMED) {
LM_ERR("Dialog is not confirmed yet\n");
goto err;
}

if ((uac_r->method->len == 3) && (!memcmp("ACK", uac_r->method->s, 3))) goto send;
if ((uac_r->method->len == 6) && (!memcmp("CANCEL", uac_r->method->s, 6))) goto send;
uac_r->dialog->loc_seq.value++; 
send:
ret = t_uac_prepare(uac_r, dst_req, 0);

if (unlikely(ret < 0 && ret == E_DROP)) {
ret = 0;
}

err:


return ret;
}