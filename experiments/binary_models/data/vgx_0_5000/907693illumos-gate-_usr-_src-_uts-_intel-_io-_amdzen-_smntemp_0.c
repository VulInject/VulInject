static boolean_t
smntemp_find_offset(smntemp_t *smn)
{
uint_t i, family;
char buf[256];

if (cpuid_getbrandstr(CPU, buf, sizeof (buf)) >= sizeof (buf)) {
dev_err(smn->smn_dip, CE_WARN, "!failed to read processor "
"brand string, brand larger than internal buffer");
return (B_FALSE);
}

family = cpuid_getfamily(CPU);

for (i = 0; i < ARRAY_SIZE(smntemp_offsets); i++) {
if (family != smntemp_offsets[i].sto_family)
continue;
if (strncmp(buf, smntemp_offsets[i].sto_brand,
strlen(smntemp_offsets[i].sto_brand)) == 0) {
smn->smn_offset = smntemp_offsets[i].sto_off;
break;
}
}

return (B_TRUE);
}