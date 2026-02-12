static void
print_ipmi(smbios_hdl_t *shp, FILE *fp)
{
smbios_ipmi_t i;

if (smbios_info_ipmi(shp, &i) == -1) {
smbios_warn(shp, "failed to read ipmi information");
return;
}

desc_printf(smbios_ipmi_type_desc(i.smbip_type),
fp, "  Type: %u", i.smbip_type);

oprintf(fp, "  BMC IPMI Version: %u.%u\n",
i.smbip_vers.smbv_major, i.smbip_vers.smbv_minor);

oprintf(fp, "  i2c Bus Slave Address: 0x%x\n", i.smbip_i2c);
oprintf(fp, "  NV Storage Device Bus ID: 0x%x\n", i.smbip_bus);
oprintf(fp, "  BMC Base Address: 0x%llx\n", (u_longlong_t)i.smbip_addr);
oprintf(fp, "  Interrupt Number: %u\n", i.smbip_intr);
oprintf(fp, "  Register Spacing: %u\n", i.smbip_regspacing);

flag_printf(fp, "Flags", i.smbip_flags, sizeof (i.smbip_flags) * NBBY,
smbios_ipmi_flag_name, smbios_ipmi_flag_desc);
}