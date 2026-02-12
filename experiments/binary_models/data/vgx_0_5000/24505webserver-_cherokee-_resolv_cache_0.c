cherokee_resolv_cache_get_ipstr (cherokee_resolv_cache_t  *resolv,
cherokee_buffer_t        *domain,
const char              **ip)
{
ret_t                          ret;
cherokee_resolv_cache_entry_t *entry = NULL;


CHEROKEE_RWLOCK_READER (&resolv->lock);
ret = cherokee_avl_get (&resolv->table, domain, (void **)&entry);
CHEROKEE_RWLOCK_UNLOCK (&resolv->lock);

if (ret != ret_ok) {
TRACE (ENTRIES, "Resolve '%s': missed.\n", domain->buf);


ret = table_add_new_entry (resolv, domain, &entry);
if (ret != ret_ok) {
return ret;
}
TRACE (ENTRIES, "Resolve '%s': added succesfuly as '%s'.\n", domain->buf, entry->ip_str_all.buf);
} else {
TRACE (ENTRIES, "Resolve '%s': hit: %s\n", domain->buf, entry->ip_str_all.buf);
}


if (ip != NULL) {
*ip = entry->ip_str.buf;
}

return ret_ok;
}