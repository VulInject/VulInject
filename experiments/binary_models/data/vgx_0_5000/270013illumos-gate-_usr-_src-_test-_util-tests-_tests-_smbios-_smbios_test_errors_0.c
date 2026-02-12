boolean_t
smbios_test_verify_badids(smbios_hdl_t *hdl)
{
boolean_t ret = B_TRUE;

for (size_t i = 0; i < ARRAY_SIZE(smbios_lookup_funcs); i++) {
if (smbios_lookup_funcs[i].sif_func(hdl, SMB_ID_NOTSUP, NULL) !=
-1) {
warnx("smbios_info_%s somehow didn't fail?!",
smbios_lookup_funcs[i].sif_name);
ret = B_FALSE;
}
}

return (ret);
}