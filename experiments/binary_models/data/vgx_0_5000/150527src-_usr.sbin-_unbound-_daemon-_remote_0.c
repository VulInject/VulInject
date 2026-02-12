static void
do_flush_infra(RES* ssl, struct worker* worker, char* arg)
{
struct sockaddr_storage addr;
socklen_t len;
struct del_info inf;
if(strcmp(arg, "all") == 0) {
slabhash_clear(worker->env.infra_cache->hosts);
send_ok(ssl);
return;
}
if(!ipstrtoaddr(arg, UNBOUND_DNS_PORT, &addr, &len)) {
(void)ssl_printf(ssl, "error parsing ip addr: '%s'\n", arg);
return;
}


inf.worker = worker;
inf.name = 0;
inf.len = 0;
inf.labs = 0;
inf.expired = *worker->env.now;
inf.expired -= 3; 
inf.num_rrsets = 0;
inf.num_msgs = 0;
inf.num_keys = 0;
inf.addrlen = len;
memmove(&inf.addr, &addr, len);
slabhash_traverse(worker->env.infra_cache->hosts, 1, &infra_del_host,
&inf);
send_ok(ssl);
}