struct outbound_entry*
worker_send_query(struct query_info* qinfo, uint16_t flags, int dnssec,
int want_dnssec, int nocaps, int check_ratelimit,
struct sockaddr_storage* addr, socklen_t addrlen, uint8_t* zone,
size_t zonelen, int tcp_upstream, int ssl_upstream, char* tls_auth_name,
struct module_qstate* q, int* was_ratelimited)
{
struct worker* worker = q->env->worker;
struct outbound_entry* e = (struct outbound_entry*)regional_alloc(
q->region, sizeof(*e));
if(!e) 
return NULL;
e->qstate = q;
e->qsent = outnet_serviced_query(worker->back, qinfo, flags, dnssec,
want_dnssec, nocaps, check_ratelimit, tcp_upstream,
ssl_upstream, tls_auth_name, addr, addrlen, zone, zonelen, q,
worker_handle_service_reply, e, worker->back->udp_buff, q->env,
was_ratelimited);
if(!e->qsent) {
return NULL;
}
return e;
}