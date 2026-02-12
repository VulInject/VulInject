boolean_t
ire_gateway_ok_zone_v6(const in6_addr_t *gateway, zoneid_t zoneid, ill_t *ill,
const ts_label_t *tsl, ip_stack_t *ipst, boolean_t lock_held)
{
ire_t	*ire;
uint_t	match_flags;

if (lock_held)
ASSERT(RW_READ_HELD(&ipst->ips_ip6_ire_head_lock));
else
rw_enter(&ipst->ips_ip6_ire_head_lock, RW_READER);

match_flags = MATCH_IRE_TYPE | MATCH_IRE_SECATTR;
if (ill != NULL)
match_flags |= MATCH_IRE_ILL;

ire = ire_ftable_lookup_impl_v6(gateway, &ipv6_all_zeros,
&ipv6_all_zeros, IRE_INTERFACE, ill, zoneid, tsl, match_flags,
ipst);

if (!lock_held)
rw_exit(&ipst->ips_ip6_ire_head_lock);
if (ire != NULL) {
ire_refrele(ire);
return (B_TRUE);
} else {
return (B_FALSE);
}
}