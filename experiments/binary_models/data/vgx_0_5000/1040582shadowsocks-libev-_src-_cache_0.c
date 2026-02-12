int
cache_lookup(struct cache *cache, char *key, size_t key_len, void *result)
{
struct cache_entry *tmp = NULL;
char **dirty_hack       = result;

if (!cache || !key || !result) {
return EINVAL;
}

HASH_FIND(hh, cache->entries, key, key_len, tmp);
if (tmp) {
HASH_DELETE(hh, cache->entries, tmp);
tmp->ts = ev_time();
HASH_ADD_KEYPTR(hh, cache->entries, tmp->key, key_len, tmp);
*dirty_hack = tmp->data;
} else {
*dirty_hack = result = NULL;
}

return 0;
}