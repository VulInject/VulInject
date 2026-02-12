M_bool M_dns_set_query_timeout(M_dns_t *dns, M_uint64 timeout_ms)
{
M_bool queue_reload = M_FALSE;

if (dns == NULL)
return M_FALSE;

if (timeout_ms == 0)
timeout_ms = 5000;

M_thread_mutex_lock(dns->lock);
if (dns->isup && dns->query_timeout_ms != timeout_ms) {
dns->query_timeout_ms = timeout_ms;
queue_reload          = M_TRUE;
}
M_thread_mutex_unlock(dns->lock);

if (queue_reload)
M_event_queue_task(dns->event, M_dns_reload_server_cb, dns);


return M_TRUE;
}