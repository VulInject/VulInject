
OM_uint32
_netlogon_delete_sec_context(OM_uint32 * minor_status,
gss_ctx_id_t * context_handle,
gss_buffer_t output_token)
{
if (context_handle != NULL && *context_handle != GSS_C_NO_CONTEXT) {
gssnetlogon_ctx ctx = (gssnetlogon_ctx)*context_handle;

*context_handle = GSS_C_NO_CONTEXT;

_netlogon_release_name(minor_status, (gss_name_t *)&ctx->SourceName);
_netlogon_release_name(minor_status, (gss_name_t *)&ctx->TargetName);
HEIMDAL_MUTEX_destroy(&ctx->Mutex);
memset(ctx, 0, sizeof(*ctx));
free(ctx);
}

if (output_token != GSS_C_NO_BUFFER) {
output_token->length = 0;
output_token->value  = NULL;
}

*minor_status = 0;
return GSS_S_COMPLETE;
}