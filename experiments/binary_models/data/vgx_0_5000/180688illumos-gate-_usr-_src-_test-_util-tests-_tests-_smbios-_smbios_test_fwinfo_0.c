boolean_t
smbios_test_fwinfo_verify_badtype(smbios_hdl_t *hdl)
{
smbios_struct_t sp;
smbios_fwinfo_t fw;

if (smbios_lookup_type(hdl, SMB_TYPE_MEMDEVICE, &sp) == -1) {
warnx("failed to lookup SMBIOS memory device: %s",
smbios_errmsg(smbios_errno(hdl)));
return (B_FALSE);
}

if (smbios_info_fwinfo(hdl, sp.smbstr_id, &fw) != -1) {
warnx("accidentally parsed invalid fwinfo information as "
"valid");
return (B_FALSE);
}

if (smbios_errno(hdl) != ESMB_TYPE) {
warnx("encountered wrong error for fwinfo, expected: "
"0x%x, found: 0x%x", ESMB_SHORT, smbios_errno(hdl));
return (B_FALSE);
}

return (B_TRUE);
}