unsigned long omap_vout_alloc_buffer(u32 buf_size, u32 *phys_addr)
{
u32 order, size;
unsigned long virt_addr, addr;

size = PAGE_ALIGN(buf_size);
order = get_order(size);
virt_addr = __get_free_pages(GFP_KERNEL, order);
addr = virt_addr;

if (virt_addr) {
while (size > 0) {
SetPageReserved(virt_to_page((void *)addr));
addr += PAGE_SIZE;
size -= PAGE_SIZE;
}
}
*phys_addr = (u32) virt_to_phys((void *) virt_addr);
return virt_addr;
}