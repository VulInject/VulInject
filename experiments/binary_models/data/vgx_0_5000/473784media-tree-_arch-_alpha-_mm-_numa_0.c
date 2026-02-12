void __init paging_init(void)
{
unsigned int    nid;
unsigned long   zones_size[MAX_NR_ZONES] = {0, };
unsigned long	dma_local_pfn;


dma_local_pfn = virt_to_phys((char *)MAX_DMA_ADDRESS) >> PAGE_SHIFT;

for_each_online_node(nid) {
bootmem_data_t *bdata = &bootmem_node_data[nid];
unsigned long start_pfn = bdata->node_min_pfn;
unsigned long end_pfn = bdata->node_low_pfn;

if (dma_local_pfn >= end_pfn - start_pfn)
zones_size[ZONE_DMA] = end_pfn - start_pfn;
else {
zones_size[ZONE_DMA] = dma_local_pfn;
zones_size[ZONE_NORMAL] = (end_pfn - start_pfn) - dma_local_pfn;
}
node_set_state(nid, N_NORMAL_MEMORY);
free_area_init_node(nid, zones_size, start_pfn, NULL);
}


memset((void *)ZERO_PGE, 0, PAGE_SIZE);
}