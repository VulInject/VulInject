int imc_handle_help(struct sip_msg* msg, imc_cmd_t *cmd, struct imc_uri *src, struct imc_uri *dst)
{
str body;
uac_req_t uac_r;

body.s   = IMC_HELP_MSG;
body.len = IMC_HELP_MSG_LEN;

LM_DBG("to: [%.*s] from: [%.*s]\n", STR_FMT(&src->uri), STR_FMT(&dst->uri));
set_uac_req(&uac_r, &imc_msg_type, build_headers(msg), &body, 0, 0, 0, 0);
tmb.t_request(&uac_r,
NULL,									
&src->uri,								
&dst->uri,								
(outbound_proxy.s)?&outbound_proxy:NULL
);
return 0;
}