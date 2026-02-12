void M_dns_happyeyeballs_update(M_dns_t *dns, const char *ipaddr, M_dns_happyeb_status_t status)
{
M_dns_happyeb_result_t *result = NULL;

if (!dns)
return;

M_thread_mutex_lock(dns->lock);
result = M_hash_strvp_get_direct(dns->happyeb, ipaddr);
if (result != NULL) {

M_llist_take_node(result->node);
result->node = NULL;
} else {
result = M_malloc_zero(sizeof(*result));
M_str_cpy(result->addr, sizeof(result->addr), ipaddr);
M_hash_strvp_insert(dns->happyeb, ipaddr, result);
}

result->ts       = M_time();
result->hestatus = status;
result->node     = M_llist_insert(dns->happyeb_aginglist, result);

M_thread_mutex_unlock(dns->lock);
}