struct crash_mem *realloc_mem_ranges(struct crash_mem **mem_ranges)
{
struct crash_mem *mem_rngs = *mem_ranges;
unsigned int nr_ranges;
size_t size;

size = get_mem_rngs_size(mem_rngs);
nr_ranges = mem_rngs ? mem_rngs->nr_ranges : 0;

size += MEM_RANGE_CHUNK_SZ;
mem_rngs = krealloc(*mem_ranges, size, GFP_KERNEL);
if (!mem_rngs) {
kfree(*mem_ranges);
*mem_ranges = NULL;
return NULL;
}

mem_rngs->nr_ranges = nr_ranges;
mem_rngs->max_nr_ranges = get_max_nr_ranges(size);
*mem_ranges = mem_rngs;

return mem_rngs;
}