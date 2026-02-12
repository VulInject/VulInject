DAT_RETURN
dat_registry_add_provider(
IN DAT_PROVIDER			*provider,
IN const DAT_PROVIDER_INFO	*provider_info)
{
DAT_DR_ENTRY 		entry;

dat_os_dbg_print(DAT_OS_DBG_TYPE_PROVIDER_API,
"DAT Registry: dat_registry_add_provider() called\n");

if (UDAT_IS_BAD_POINTER(provider)) {
return (DAT_ERROR(DAT_INVALID_PARAMETER, DAT_INVALID_ARG1));
}

if (UDAT_IS_BAD_POINTER(provider_info)) {
return (DAT_ERROR(DAT_INVALID_PARAMETER, DAT_INVALID_ARG2));
}

if (DAT_FALSE == udat_check_state()) {
return (DAT_ERROR(DAT_INVALID_STATE, 0));
}

entry.ref_count = 0;
entry.ia_open_func = provider->ia_open_func;
entry.info = *provider_info;

return (dat_dr_insert(provider_info, &entry));
}