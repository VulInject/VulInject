krb5_error_code KRB5_CALLCONV
krb5_auth_con_init(krb5_context context, krb5_auth_context *auth_context)
{
*auth_context =
(krb5_auth_context)MALLOC(sizeof(struct _krb5_auth_context));
if (!*auth_context)
return ENOMEM;


(void) memset(*auth_context, 0, sizeof(struct _krb5_auth_context));


(*auth_context)->auth_context_flags = 
KRB5_AUTH_CONTEXT_DO_TIME |  KRB5_AUTH_CONN_INITIALIZED;

(*auth_context)->req_cksumtype = context->default_ap_req_sumtype;
(*auth_context)->safe_cksumtype = context->default_safe_sumtype;
(*auth_context) -> checksum_func = NULL;
(*auth_context)->checksum_func_data = NULL;
(*auth_context)->magic = KV5M_AUTH_CONTEXT;
return 0;
}