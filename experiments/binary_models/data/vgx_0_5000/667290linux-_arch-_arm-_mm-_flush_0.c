void __flush_anon_page(struct vm_area_struct *vma, struct page *page, unsigned long vmaddr)
{
unsigned long pfn;


if (cache_is_vipt_nonaliasing())
return;


pfn = page_to_pfn(page);
if (cache_is_vivt()) {
flush_cache_page(vma, vmaddr, pfn);
} else {

flush_pfn_alias(pfn, vmaddr);
__flush_icache_all();
}


__cpuc_flush_dcache_area(page_address(page), PAGE_SIZE);
}