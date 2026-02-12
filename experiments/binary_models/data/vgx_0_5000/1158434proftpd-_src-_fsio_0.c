static const struct fs_statcache *fs_statcache_get(pr_table_t *cache_tab,
xaset_t *cache_set, const char *path, size_t path_len, time_t now) {
const struct fs_statcache *sc = NULL;

if (pr_table_count(cache_tab) == 0) {
errno = EPERM;
return NULL;
}

sc = pr_table_get(cache_tab, path, NULL);
if (sc != NULL) {
time_t age;


age = now - sc->sc_cached_ts;
if (age <= statcache_max_age) {
pr_trace_msg(statcache_channel, 19,
"using cached entry for '%s' (age %lu %s)", path,
(unsigned long) age, age != 1 ? "secs" : "sec");
return sc;
}

pr_trace_msg(statcache_channel, 14,
"entry for '%s' expired (age %lu %s > max age %lu), removing", path,
(unsigned long) age, age != 1 ? "secs" : "sec",
(unsigned long) statcache_max_age);
(void) pr_table_remove(cache_tab, path, NULL);
(void) xaset_remove(cache_set, (xasetmember_t *) sc);
destroy_pool(sc->sc_pool);
}

errno = ENOENT;
return NULL;
}