int
ip_srcid_insert(const in6_addr_t *addr, zoneid_t zoneid, ip_stack_t *ipst)
{
srcid_map_t	**smpp;
char		abuf[INET6_ADDRSTRLEN];

ip1dbg(("ip_srcid_insert(%s, %d)\n",
inet_ntop(AF_INET6, addr, abuf, sizeof (abuf)), zoneid));

rw_enter(&ipst->ips_srcid_lock, RW_WRITER);
smpp = srcid_lookup_addr(addr, zoneid, ipst);
if (*smpp != NULL) {

(*smpp)->sm_refcnt++;
ASSERT((*smpp)->sm_refcnt != 0);	
rw_exit(&ipst->ips_srcid_lock);
return (0);
}

*smpp = kmem_alloc(sizeof (srcid_map_t), KM_NOSLEEP);
if (*smpp == NULL) {
rw_exit(&ipst->ips_srcid_lock);
return (ENOMEM);
}
(*smpp)->sm_next = NULL;
(*smpp)->sm_addr = *addr;
(*smpp)->sm_srcid = srcid_nextid(ipst);
(*smpp)->sm_refcnt = 1;
(*smpp)->sm_zoneid = zoneid;

rw_exit(&ipst->ips_srcid_lock);
return (0);
}