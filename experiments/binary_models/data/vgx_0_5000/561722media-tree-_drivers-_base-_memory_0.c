static int
memory_block_action(unsigned long phys_index, unsigned long action, int online_type)
{
unsigned long start_pfn;
unsigned long nr_pages = PAGES_PER_SECTION * sections_per_block;
int ret;

start_pfn = section_nr_to_pfn(phys_index);

switch (action) {
case MEM_ONLINE:
if (!pages_correctly_reserved(start_pfn))
return -EBUSY;

ret = online_pages(start_pfn, nr_pages, online_type);
break;
case MEM_OFFLINE:
ret = offline_pages(start_pfn, nr_pages);
break;
default:
WARN(1, KERN_WARNING "%s(%ld, %ld) unknown action: "
"%ld\n", __func__, phys_index, action, action);
ret = -EINVAL;
}

return ret;
}