static dma_addr_t dmabounce_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction dir,
unsigned long attrs)
{
dma_addr_t dma_addr;
int ret;

dev_dbg(dev, "%s(page=%p,off=%#lx,size=%zx,dir=%x)\n",
__func__, page, offset, size, dir);

dma_addr = pfn_to_dma(dev, page_to_pfn(page)) + offset;

ret = needs_bounce(dev, dma_addr, size);
if (ret < 0)
return DMA_ERROR_CODE;

if (ret == 0) {
arm_dma_ops.sync_single_for_device(dev, dma_addr, size, dir);
return dma_addr;
}

if (PageHighMem(page)) {
dev_err(dev, "DMA buffer bouncing of HIGHMEM pages is not supported\n");
return DMA_ERROR_CODE;
}

return map_single(dev, page_address(page) + offset, size, dir, attrs);
}