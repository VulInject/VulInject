static size_t
i_ipadm_dhcp_nvp2dbline(nvpair_t *nvp, char *buf, size_t buflen)
{
char		addrbuf[IPADM_STRSIZE];
int32_t		wait;
boolean_t	primary;
nvlist_t	*v;

assert(nvpair_type(nvp) == DATA_TYPE_NVLIST &&
strcmp(nvpair_name(nvp), IPADM_NVP_DHCP) == 0);

if (nvpair_value_nvlist(nvp, &v) != 0 ||
nvlist_lookup_int32(v, IPADM_NVP_WAIT, &wait) != 0 ||
nvlist_lookup_boolean_value(v, IPADM_NVP_PRIMARY, &primary) != 0) {
return (0);
}
(void) snprintf(buf, buflen, "%s=", IPADM_NVP_DHCP);
(void) snprintf(addrbuf, sizeof (addrbuf), "%d,%s", wait,
(primary ? "yes" : "no"));
return (strlcat(buf, addrbuf, buflen));
}