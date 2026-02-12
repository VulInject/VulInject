void consistent_sync(void *vaddr, size_t size, int direction)
{
unsigned long start;
unsigned long end;

start = (unsigned long)vaddr;


start &= ~UNCACHED_SHADOW_MASK;
end = start + size;

switch (direction) {
case PCI_DMA_NONE:
BUG();
case PCI_DMA_FROMDEVICE:	
invalidate_dcache_range(start, end);
break;
case PCI_DMA_TODEVICE:		
flush_dcache_range(start, end);
break;
case PCI_DMA_BIDIRECTIONAL:	
flush_dcache_range(start, end);
break;
}
}