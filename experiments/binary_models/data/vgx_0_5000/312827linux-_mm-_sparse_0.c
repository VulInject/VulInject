static noinline struct mem_section __ref *sparse_index_alloc(int nid)
{
struct mem_section *section = NULL;
unsigned long array_size = SECTIONS_PER_ROOT *
sizeof(struct mem_section);

if (slab_is_available()) {
section = kzalloc_node(array_size, GFP_KERNEL, nid);
} else {
section = memblock_alloc_node(array_size, SMP_CACHE_BYTES,
nid);
if (!section)
panic("%s: Failed to allocate %lu bytes nid=%d\n",
__func__, array_size, nid);
}

return section;
}