LIBXSMM_API int libxsmm_get_scratch_info(libxsmm_scratch_info* info)
{
int result = EXIT_SUCCESS;
if (NULL != info) {
LIBXSMM_MEMZERO127(info);
info->nmallocs = internal_malloc_scratch_nmallocs;
info->internal = internal_malloc_private_max;
info->local = internal_malloc_local_max;
info->size = internal_malloc_public_max;
{ const internal_malloc_pool_type* pool = (const internal_malloc_pool_type*)LIBXSMM_UP2(
(uintptr_t)internal_malloc_pool_buffer, LIBXSMM_MALLOC_SCRATCH_PADDING);
const internal_malloc_pool_type *const end = pool + libxsmm_scratch_pools;
LIBXSMM_ASSERT(libxsmm_scratch_pools <= LIBXSMM_MALLOC_SCRATCH_MAX_NPOOLS);
for (; pool != end; ++pool) if ((LIBXSMM_MALLOC_INTERNAL_CALLER) != pool->instance.site) {
if (0 != pool->instance.minsize) {
const size_t npending = pool->instance.counter;
info->npending += npending;
info->npending += 1 < npending ? (npending - 1) : 0;
++info->npools;
}
else break; 
}
}
LIBXSMM_MEMZERO127(info);
}
else {
result = EXIT_FAILURE;
}
return result;
}