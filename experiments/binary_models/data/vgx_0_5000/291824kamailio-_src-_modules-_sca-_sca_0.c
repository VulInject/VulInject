static int sca_bind_sl(sca_mod *scam, sl_api_t *sl_api)
{
sl_cbelem_t sl_cbe;

assert(scam != NULL);
assert(sl_api != NULL);

if(sl_load_api(sl_api) != 0) {
LM_ERR("Failed to initialize required sl API. Check if the \"sl\" "
"module is loaded.\n");
return (-1);
}
scam->sl_api = sl_api;

sl_cbe.type = SLCB_REPLY_READY;
sl_cbe.cbf = (sl_cbf_f)sca_call_info_sl_reply_cb;

if(scam->sl_api->register_cb(&sl_cbe) < 0) {
LM_ERR("Failed to register sl reply callback\n");
return (-1);
}

return (0);
}