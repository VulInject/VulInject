static void *tile_dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp,
unsigned long attrs)
{
u64 dma_mask = (dev && dev->coherent_dma_mask) ?
dev->coherent_dma_mask : DMA_BIT_MASK(32);
int node = dev ? dev_to_node(dev) : 0;
int order = get_order(size);
struct page *pg;
dma_addr_t addr;

gfp |= __GFP_ZERO;


if (dma_mask <= DMA_BIT_MASK(32)) {
gfp |= GFP_DMA;
node = 0;
}

pg = homecache_alloc_pages_node(node, gfp, order, PAGE_HOME_DMA);
if (pg == NULL)
return NULL;

addr = page_to_phys(pg);
if (addr + size > dma_mask) {
__homecache_free_pages(pg, order);
return NULL;
}

*dma_handle = addr;

return page_address(pg);
}