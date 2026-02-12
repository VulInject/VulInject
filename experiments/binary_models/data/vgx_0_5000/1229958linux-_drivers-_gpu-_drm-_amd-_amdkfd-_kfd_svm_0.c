static int
svm_range_is_valid(struct kfd_process *p, uint64_t start, uint64_t size)
{
const unsigned long device_vma = VM_IO | VM_PFNMAP | VM_MIXEDMAP;
struct vm_area_struct *vma;
unsigned long end;
unsigned long start_unchg = start;

start <<= PAGE_SHIFT;
end = start + (size << PAGE_SHIFT);
do {
vma = vma_lookup(p->mm, start);
if (!vma || (vma->vm_flags & device_vma))
return -EFAULT;
start = min(end, vma->vm_end);
} while (start < end);

return svm_range_check_vm(p, start_unchg, (end - 1) >> PAGE_SHIFT, NULL,
NULL);
}