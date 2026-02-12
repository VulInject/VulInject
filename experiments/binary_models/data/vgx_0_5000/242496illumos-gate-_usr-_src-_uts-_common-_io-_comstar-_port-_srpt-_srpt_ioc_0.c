static srpt_vmem_pool_t *
srpt_vmem_create(const char *name, srpt_ioc_t *ioc, ib_memlen_t chunksize,
uint64_t maxsize, ibt_mr_flags_t flags)
{
srpt_mr_t		*chunk;
srpt_vmem_pool_t	*result;

ASSERT(chunksize <= maxsize);

result = kmem_zalloc(sizeof (srpt_vmem_pool_t), KM_SLEEP);

result->svp_ioc = ioc;
result->svp_chunksize = chunksize;
result->svp_max_size = maxsize;
result->svp_flags = flags;

rw_init(&result->svp_lock, NULL, RW_DRIVER, NULL);
avl_create(&result->svp_mr_list, srpt_vmem_mr_compare,
sizeof (srpt_mr_t), offsetof(srpt_mr_t, mr_avl));

chunk = srpt_vmem_chunk_alloc(result, chunksize);

avl_add(&result->svp_mr_list, chunk);
result->svp_total_size = chunksize;

result->svp_vmem = vmem_create(name,
(void*)(uintptr_t)chunk->mr_va,
(size_t)chunk->mr_len, SRPT_MR_QUANTSIZE,
NULL, NULL, NULL, 0, VM_SLEEP);

return (result);
}