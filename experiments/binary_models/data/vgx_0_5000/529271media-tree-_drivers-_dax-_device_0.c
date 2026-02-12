static int __dev_dax_pte_fault(struct dev_dax *dev_dax, struct vm_fault *vmf)
{
struct device *dev = &dev_dax->dev;
struct dax_region *dax_region;
int rc = VM_FAULT_SIGBUS;
phys_addr_t phys;
pfn_t pfn;
unsigned int fault_size = PAGE_SIZE;

if (check_vma(dev_dax, vmf->vma, __func__))
return VM_FAULT_SIGBUS;

dax_region = dev_dax->region;
if (dax_region->align > PAGE_SIZE) {
dev_dbg(dev, "%s: alignment (%#x) > fault size (%#x)\n",
__func__, dax_region->align, fault_size);
return VM_FAULT_SIGBUS;
}

if (fault_size != dax_region->align)
return VM_FAULT_SIGBUS;

phys = dax_pgoff_to_phys(dev_dax, vmf->pgoff, PAGE_SIZE);
if (phys == -1) {
dev_dbg(dev, "%s: pgoff_to_phys(%#lx) failed\n", __func__,
vmf->pgoff);
return VM_FAULT_SIGBUS;
}

pfn = phys_to_pfn_t(phys, dax_region->pfn_flags);

rc = vm_insert_mixed(vmf->vma, vmf->address, pfn);

if (rc == -ENOMEM)
return VM_FAULT_OOM;
if (rc < 0 && rc != -EBUSY)
return VM_FAULT_SIGBUS;

return VM_FAULT_NOPAGE;
}