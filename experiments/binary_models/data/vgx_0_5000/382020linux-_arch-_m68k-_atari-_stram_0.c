void __init atari_stram_reserve_pages(void *start_mem)
{
if (kernel_in_stram) {
pr_debug("atari_stram pool: kernel in ST-RAM, using alloc_bootmem!\n");
stram_pool.start = (resource_size_t)memblock_alloc_low(pool_size,
PAGE_SIZE);
if (!stram_pool.start)
panic("%s: Failed to allocate %lu bytes align=%lx\n",
__func__, pool_size, PAGE_SIZE);

stram_pool.end = stram_pool.start + pool_size - 1;
request_resource(&iomem_resource, &stram_pool);
stram_virt_offset = 0;
pr_debug("atari_stram pool: size = %lu bytes, resource = %pR\n",
pool_size, &stram_pool);
pr_debug("atari_stram pool: stram_virt_offset = %lx\n",
stram_virt_offset);
}
}