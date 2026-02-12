static void __dma_sync(void *vaddr, size_t size, int direction)
{
unsigned long start = (unsigned long)vaddr;
unsigned long end   = start + size;

switch (direction) {
case DMA_NONE:
BUG();
case DMA_FROM_DEVICE:

if ((start | end) & (L1_CACHE_BYTES - 1))
flush_dcache_range(start, end);
else
invalidate_dcache_range(start, end);
break;
case DMA_TO_DEVICE:		
clean_dcache_range(start, end);
break;
case DMA_BIDIRECTIONAL:	
flush_dcache_range(start, end);
break;
}
}