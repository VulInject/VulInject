static int hmm_dynamic_pool_init(void **pool, unsigned int pool_size)
{
struct hmm_dynamic_pool_info *dypool_info;

if (pool_size == 0)
return 0;

dypool_info = kmalloc(sizeof(struct hmm_dynamic_pool_info),
GFP_KERNEL);
if (unlikely(!dypool_info)) {
dev_err(atomisp_dev, "out of memory for repool_info.\n");
return -ENOMEM;
}

dypool_info->pgptr_cache = kmem_cache_create("pgptr_cache",
sizeof(struct hmm_page), 0,
SLAB_HWCACHE_ALIGN, NULL);
if (!dypool_info->pgptr_cache) {
kfree(dypool_info);
return -ENOMEM;
}

INIT_LIST_HEAD(&dypool_info->pages_list);
spin_lock_init(&dypool_info->list_lock);
dypool_info->initialized = true;
dypool_info->pool_size = pool_size;
dypool_info->pgnr = 0;

*pool = dypool_info;

return 0;
}