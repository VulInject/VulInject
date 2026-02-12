void
alloc_ssvr(const char *ip, const char *port)
{
real_server_t *new;
const char *port_str;


port_str = (port && port[strspn(port, "0")]) ? port : NULL;

PMALLOC(new);
new->effective_weight = 1;
new->iweight = 1;
new->forwarding_method = current_vs->forwarding_method;
new->tun_type = current_vs->tun_type;
new->tun_port = current_vs->tun_port;
new->tun_flags = current_vs->tun_flags;
if (inet_stosockaddr(ip, port_str, &new->addr)) {
report_config_error(CONFIG_GENERAL_ERROR, "Invalid sorry server IP address %s - skipping", ip);
FREE(new);
return;
}

current_vs->s_svr = new;
}