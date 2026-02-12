int
kidmap_cache_lookup_pidbysid(idmap_cache_t *cache, const char *sid_prefix,
uint32_t rid, uid_t *pid, int *is_user)
{
sid2pid_t	entry;
sid2pid_t	*result;
avl_index_t	where;
int		status = IDMAP_ERR_NOMAPPING;
time_t		now = gethrestime_sec();

entry.sid_prefix = sid_prefix;
entry.rid = rid;

mutex_enter(&cache->sid2pid.mutex);

result = avl_find(&cache->sid2pid.tree, &entry, &where);
if (result != NULL) {
list_move(&cache->sid2pid.head, result);
if (result->is_user != UNDEF_ISUSER) {
if (result->is_user && result->uid_ttl > now) {
*pid = result->uid;
*is_user = result->is_user;
status = IDMAP_SUCCESS;
} else if (!result->is_user && result->gid_ttl > now) {
*pid = result->gid;
*is_user = result->is_user;
status = IDMAP_SUCCESS;
}
}
}

mutex_exit(&cache->sid2pid.mutex);

return (status);
}