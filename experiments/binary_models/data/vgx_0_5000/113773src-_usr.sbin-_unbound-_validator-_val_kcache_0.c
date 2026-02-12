struct key_cache* 
key_cache_create(struct config_file* cfg)
{
struct key_cache* kcache = (struct key_cache*)calloc(1, 
sizeof(*kcache));
size_t numtables, start_size, maxmem;
if(!kcache) {
log_err("malloc failure");
return NULL;
}
numtables = cfg->key_cache_slabs;
start_size = HASH_DEFAULT_STARTARRAY;
maxmem = cfg->key_cache_size;
kcache->slab = slabhash_create(numtables, start_size, maxmem,
&key_entry_sizefunc, &key_entry_compfunc,
&key_entry_delkeyfunc, &key_entry_deldatafunc, NULL);
if(!kcache->slab) {
log_err("malloc failure");
free(kcache);
return NULL;
}
return kcache;
}