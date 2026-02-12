static int vfio_fsl_mc_mmap_mmio(struct vfio_fsl_mc_region region,
struct vm_area_struct *vma)
{
u64 size = vma->vm_end - vma->vm_start;
u64 pgoff, base;
u8 region_cacheable;

pgoff = vma->vm_pgoff &
((1U << (VFIO_FSL_MC_OFFSET_SHIFT - PAGE_SHIFT)) - 1);
base = pgoff << PAGE_SHIFT;

if (region.size < PAGE_SIZE || base + size > region.size)
return -EINVAL;

region_cacheable = (region.type & FSL_MC_REGION_CACHEABLE) &&
(region.type & FSL_MC_REGION_SHAREABLE);
if (!region_cacheable)
vma->vm_page_prot = pgprot_noncached(vma->vm_page_prot);

vma->vm_pgoff = (region.addr >> PAGE_SHIFT) + pgoff;

return remap_pfn_range(vma, vma->vm_start, vma->vm_pgoff,
size, vma->vm_page_prot);
}