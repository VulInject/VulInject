vhostdb_cache_init (const array *opts)
{
vhostdb_cache *vc = ck_malloc(sizeof(vhostdb_cache));
vc->sptree = NULL;
vc->max_age = 600; 
for (uint32_t i = 0, used = opts->used; i < used; ++i) {
data_unset *du = opts->data[i];
if (buffer_is_equal_string(&du->key, CONST_STR_LEN("max-age")))
vc->max_age = (time_t)
config_plugin_value_to_int32(du, 600); 
}
return vc;
}