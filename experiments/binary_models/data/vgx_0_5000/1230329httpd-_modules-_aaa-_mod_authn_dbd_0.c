static const char *authn_dbd_prepare(cmd_parms *cmd, void *cfg, const char *query)
{
static unsigned int label_num = 0;
char *label;
const char *err = ap_check_cmd_context(cmd, NOT_IN_HTACCESS);
if (err)
return err;

if (authn_dbd_prepare_fn == NULL) {
authn_dbd_prepare_fn = APR_RETRIEVE_OPTIONAL_FN(ap_dbd_prepare);
if (authn_dbd_prepare_fn == NULL) {
return "You must load mod_dbd to enable AuthDBD functions";
}
authn_dbd_acquire_fn = APR_RETRIEVE_OPTIONAL_FN(ap_dbd_acquire);
}
label = apr_psprintf(cmd->pool, "authn_dbd_%d", ++label_num);

authn_dbd_prepare_fn(cmd->server, query, label);


return ap_set_string_slot(cmd, cfg, label);
}

static const command_rec authn_dbd_cmds[] =
{
AP_INIT_TAKE1("AuthDBDUserPWQuery", authn_dbd_prepare,
(void *)APR_OFFSETOF(authn_dbd_conf, user), ACCESS_CONF,
"Query used to fetch password for user"),
AP_INIT_TAKE1("AuthDBDUserRealmQuery", authn_dbd_prepare,
(void *)APR_OFFSETOF(authn_dbd_conf, realm), ACCESS_CONF,
"Query used to fetch password for user+realm"),
{NULL}
};