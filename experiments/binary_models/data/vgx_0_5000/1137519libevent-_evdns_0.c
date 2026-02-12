struct evdns_request *
evdns_base_resolve_ipv4(struct evdns_base *base, const char *name, int flags,
evdns_callback_type callback, void *ptr) {
struct evdns_request *handle;
struct request *req;
log(EVDNS_LOG_DEBUG, "Resolve requested for %s", name);
handle = mm_calloc(1, sizeof(*handle));
if (handle == NULL)
return NULL;
handle->user_callback = callback;
handle->user_pointer = ptr;
EVDNS_LOCK(base);
handle->tcp_flags = base->global_tcp_flags;
handle->tcp_flags |= flags & (DNS_QUERY_USEVC | DNS_QUERY_IGNTC);
if (flags & DNS_QUERY_NO_SEARCH) {
req =
request_new(base, handle, TYPE_A, name, flags);
if (req)
request_submit(req);
} else {
search_request_new(base, handle, TYPE_A, name, flags);
}
if (handle->current_req == NULL) {
mm_free(handle);
handle = NULL;
}
EVDNS_UNLOCK(base);
return handle;
}