struct dm_cache_policy *dm_cache_policy_create(const char *name,
dm_cblock_t cache_size,
sector_t origin_size,
sector_t cache_block_size)
{
struct dm_cache_policy *p = NULL;
struct dm_cache_policy_type *type;

type = get_policy(name);
if (!type) {
DMWARN("unknown policy type");
return ERR_PTR(-EINVAL);
}

p = type->create(cache_size, origin_size, cache_block_size);
if (!p) {
put_policy(type);
return ERR_PTR(-ENOMEM);
}
p->private = type;

return p;
}