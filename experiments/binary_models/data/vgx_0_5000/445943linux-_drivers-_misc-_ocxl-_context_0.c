static vm_fault_t ocxl_mmap_fault(struct vm_fault *vmf)
{
struct vm_area_struct *vma = vmf->vma;
struct ocxl_context *ctx = vma->vm_file->private_data;
u64 offset;
vm_fault_t ret;

offset = vmf->pgoff << PAGE_SHIFT;
pr_debug("%s: pasid %d address 0x%lx offset 0x%llx\n", __func__,
ctx->pasid, vmf->address, offset);

if (offset < ctx->afu->irq_base_offset)
ret = map_pp_mmio(vma, vmf->address, offset, ctx);
else
ret = map_afu_irq(vma, vmf->address, offset, ctx);
return ret;
}