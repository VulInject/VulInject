static struct sel_netnode *sel_netnode_find(const void *addr, u16 family)
{
unsigned int idx;
struct sel_netnode *node;

switch (family) {
case PF_INET:
idx = sel_netnode_hashfn_ipv4(*(__be32 *)addr);
break;
case PF_INET6:
idx = sel_netnode_hashfn_ipv6(addr);
break;
default:
BUG();
return NULL;
}

list_for_each_entry_rcu(node, &sel_netnode_hash[idx].list, list)
if (node->nsec.family == family)
switch (family) {
case PF_INET:
if (node->nsec.addr.ipv4 == *(__be32 *)addr)
return node;
break;
case PF_INET6:
if (ipv6_addr_equal(&node->nsec.addr.ipv6,
addr))
return node;
break;
}

return NULL;
}