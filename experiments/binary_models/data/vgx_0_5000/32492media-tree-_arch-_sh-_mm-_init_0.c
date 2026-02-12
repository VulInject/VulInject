int arch_add_memory(int nid, u64 start, u64 size, bool for_device)
{
pg_data_t *pgdat;
unsigned long start_pfn = PFN_DOWN(start);
unsigned long nr_pages = size >> PAGE_SHIFT;
int ret;

pgdat = NODE_DATA(nid);


ret = __add_pages(nid, pgdat->node_zones +
zone_for_memory(nid, start, size, ZONE_NORMAL,
for_device),
start_pfn, nr_pages);
if (unlikely(ret))
printk("%s: Failed, __add_pages() == %d\n", __func__, ret);

return ret;
}