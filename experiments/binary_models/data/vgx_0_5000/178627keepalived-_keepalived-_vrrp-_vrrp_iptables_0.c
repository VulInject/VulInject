static void
handle_iptable_vip_list(struct ipt_handle *h, list_head_t *ip_list, int cmd, bool force)
{
ip_address_t *ipaddr;
uint8_t family;

list_for_each_entry(ipaddr, ip_list, e_list) {
family = ipaddr->ifa.ifa_family;
if (vips_setup[family != AF_INET] == NOT_INIT) {
if (setup[family != AF_INET] == NOT_INIT)
iptables_init(family);

if (setup[family != AF_INET] == INIT_FAILED) {
vips_setup[family != AF_INET] = INIT_FAILED;
continue;
}

if (global_data->using_ipsets) {
add_del_vip_sets(h, IPADDRESS_ADD, family);
add_del_vip_rules(h, IPADDRESS_ADD, family);
}

vips_setup[family != AF_INET] = INIT_SUCCESS;
}

if (vips_setup[family != AF_INET] == INIT_FAILED)
continue;

if ((cmd == IPADDRESS_DEL) == ipaddr->iptable_rule_set || force)
handle_iptable_rule_to_vip(ipaddr, cmd, h, force);
}
}