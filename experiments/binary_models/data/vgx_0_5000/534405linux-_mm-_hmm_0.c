static int hmm_vma_fault(unsigned long addr, unsigned long end,
unsigned int required_fault, struct mm_walk *walk)
{
struct hmm_vma_walk *hmm_vma_walk = walk->private;
struct vm_area_struct *vma = walk->vma;
unsigned int fault_flags = FAULT_FLAG_REMOTE;

WARN_ON_ONCE(!required_fault);
hmm_vma_walk->last = addr;

if (required_fault & HMM_NEED_WRITE_FAULT) {
if (!(vma->vm_flags & VM_WRITE))
return -EPERM;
fault_flags |= FAULT_FLAG_WRITE;
}

for (; addr < end; addr += PAGE_SIZE)
if (handle_mm_fault(vma, addr, fault_flags, NULL) &
VM_FAULT_ERROR)
return -EFAULT;
return -EBUSY;
}