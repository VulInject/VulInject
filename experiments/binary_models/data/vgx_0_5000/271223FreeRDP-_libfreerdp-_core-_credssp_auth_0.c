BOOL credssp_auth_init(rdpCredsspAuth* auth, TCHAR* pkg_name, SecPkgContext_Bindings* bindings)
{
WINPR_ASSERT(auth);
WINPR_ASSERT(auth->rdp_ctx);

const rdpSettings* settings = auth->rdp_ctx->settings;
WINPR_ASSERT(settings);

auth->table = auth_resolve_sspi_table(settings);
if (!auth->table)
{
WLog_ERR(TAG, "Unable to initialize sspi table");
return FALSE;
}


WINPR_ASSERT(auth->table->QuerySecurityPackageInfo);
const SECURITY_STATUS status = auth->table->QuerySecurityPackageInfo(pkg_name, &auth->info);
if (status != SEC_E_OK)
{
WLog_ERR(TAG, "QuerySecurityPackageInfo (%s) failed with %s [0x%08X]", pkg_name,
GetSecurityStatusString(status), status);
return FALSE;
}

WLog_DBG(TAG, "Using package: %s (cbMaxToken: %u bytes)", pkg_name, auth->info->cbMaxToken);


if (!credssp_auth_setup_identity(auth))
return FALSE;

auth->bindings = bindings;

return TRUE;
}