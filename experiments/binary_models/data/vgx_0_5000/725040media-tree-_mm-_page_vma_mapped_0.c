int page_mapped_in_vma(struct page *page, struct vm_area_struct *vma)
{
struct page_vma_mapped_walk pvmw = {
.page = page,
.vma = vma,
.flags = PVMW_SYNC,
};
unsigned long start, end;

start = __vma_address(page, vma);
end = start + PAGE_SIZE * (hpage_nr_pages(page) - 1);

if (unlikely(end < vma->vm_start || start >= vma->vm_end))
return 0;
pvmw.address = max(start, vma->vm_start);
if (!page_vma_mapped_walk(&pvmw))
return 0;
page_vma_mapped_walk_done(&pvmw);
return 1;
}