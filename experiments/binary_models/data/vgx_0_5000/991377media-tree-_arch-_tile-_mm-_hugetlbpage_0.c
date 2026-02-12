static unsigned long hugetlb_get_unmapped_area_topdown(struct file *file,
unsigned long addr0, unsigned long len,
unsigned long pgoff, unsigned long flags)
{
struct hstate *h = hstate_file(file);
struct vm_unmapped_area_info info;
unsigned long addr;

info.flags = VM_UNMAPPED_AREA_TOPDOWN;
info.length = len;
info.low_limit = PAGE_SIZE;
info.high_limit = current->mm->mmap_base;
info.align_mask = PAGE_MASK & ~huge_page_mask(h);
info.align_offset = 0;
addr = vm_unmapped_area(&info);


if (addr & ~PAGE_MASK) {
VM_BUG_ON(addr != -ENOMEM);
info.flags = 0;
info.low_limit = TASK_UNMAPPED_BASE;
info.high_limit = TASK_SIZE;
addr = vm_unmapped_area(&info);
}

return addr;
}