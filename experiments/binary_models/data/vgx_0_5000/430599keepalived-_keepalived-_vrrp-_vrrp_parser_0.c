static void
vrrp_int_handler(const vector_t *strvec)
{
const char *name = strvec_slot(strvec, 1);

if (strlen(name) >= IFNAMSIZ) {
report_config_error(CONFIG_GENERAL_ERROR, "Interface name '%s' too long - ignoring", name);
return;
}

current_vrrp->ifp = if_get_by_ifname(name, IF_CREATE_IF_DYNAMIC);
if (!current_vrrp->ifp)
report_config_error(CONFIG_GENERAL_ERROR, "WARNING - interface %s for vrrp_instance %s doesn't exist", name, current_vrrp->iname);
else if (current_vrrp->ifp->hw_type == ARPHRD_LOOPBACK) {
report_config_error(CONFIG_GENERAL_ERROR, "(%s) cannot use a loopback interface (%s) for vrrp - ignoring", current_vrrp->iname, current_vrrp->ifp->ifname);
current_vrrp->ifp = NULL;
}

current_vrrp->configured_ifp = current_vrrp->ifp;
}