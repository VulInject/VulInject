static void
print_prop(show_prop_state_t *statep, uint_t flags, char *buf, size_t bufsize)
{
const char		*prop_name = statep->sps_pname;
char			*ifname = statep->sps_ifname;
char			*propval = statep->sps_propval;
uint_t			proto = statep->sps_proto;
size_t			propsize = MAXPROPVALLEN;
ipadm_status_t		status;

if (statep->sps_ifprop) {
status = ipadm_get_ifprop(iph, ifname, prop_name, propval,
&propsize, proto, flags);
} else if (statep->sps_modprop) {
status = ipadm_get_prop(iph, prop_name, propval, &propsize,
proto, flags);
} else {
status = ipadm_get_addrprop(iph, prop_name, propval, &propsize,
statep->sps_aobjname, flags);
}

if (status != IPADM_SUCCESS) {
if ((status == IPADM_NOTFOUND && (flags & IPADM_OPT_PERSIST)) ||
status == IPADM_ENXIO) {
propval[0] = '\0';
goto cont;
}
statep->sps_status = status;
statep->sps_retstatus = status;
return;
}
cont:
statep->sps_status = IPADM_SUCCESS;
(void) snprintf(buf, bufsize, "%s", propval);
}