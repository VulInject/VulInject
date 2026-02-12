OM_uint32 GSSAPI_CALLCONV
gssspi_query_meta_data(OM_uint32 *minor_status, gss_const_OID mech_oid,
gss_cred_id_t cred_handle, gss_ctx_id_t *context_handle,
gss_const_name_t targ_name, OM_uint32 req_flags,
gss_buffer_t meta_data)
{
const char *envstr;
uint8_t mech_last_octet;
int initiator = (targ_name != GSS_C_NO_NAME);

mech_last_octet = ((uint8_t *)mech_oid->elements)[mech_oid->length - 1];
envstr = getenv(initiator ? "INIT_QUERY_FAIL" : "ACCEPT_QUERY_FAIL");
if (envstr != NULL && atoi(envstr) == mech_last_octet)
return GSS_S_FAILURE;
envstr = getenv(initiator ? "INIT_QUERY_NONE" : "ACCEPT_QUERY_NONE");
if (envstr != NULL && atoi(envstr) == mech_last_octet)
return GSS_S_COMPLETE;

meta_data->value = strdup("X");
meta_data->length = 1;
return GSS_S_COMPLETE;
}