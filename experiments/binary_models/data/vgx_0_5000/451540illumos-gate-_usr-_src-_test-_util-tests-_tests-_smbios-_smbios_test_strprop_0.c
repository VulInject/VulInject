static boolean_t
smbios_test_strprop_verify_badtable(smbios_hdl_t *hdl, int smberr)
{
smbios_struct_t sp;
smbios_strprop_t prop;

if (smbios_lookup_type(hdl, SMB_TYPE_STRPROP, &sp) == -1) {
warnx("failed to lookup SMBIOS strprop: %s",
smbios_errmsg(smbios_errno(hdl)));
return (B_FALSE);
}

if (smbios_info_strprop(hdl, sp.smbstr_id, &prop) != -1) {
warnx("accidentally parsed invalid strprop information as "
"valid");
return (B_FALSE);
}

if (smbios_errno(hdl) != smberr) {
warnx("encountered wrong error for strprop, expected: "
"0x%x, found: 0x%x", smberr, smbios_errno(hdl));
return (B_FALSE);
}

return (B_TRUE);
}