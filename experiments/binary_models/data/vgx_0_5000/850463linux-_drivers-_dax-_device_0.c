static vm_fault_t __dev_dax_pte_fault(struct dev_dax *dev_dax,
struct vm_fault *vmf)
{
struct device *dev = &dev_dax->dev;
phys_addr_t phys;
pfn_t pfn;
unsigned int fault_size = PAGE_SIZE;

if (check_vma(dev_dax, vmf->vma, __func__))
return VM_FAULT_SIGBUS;

if (dev_dax->align > PAGE_SIZE) {
dev_dbg(dev, "alignment (%#x) > fault size (%#x)\n",
dev_dax->align, fault_size);
return VM_FAULT_SIGBUS;
}

if (fault_size != dev_dax->align)
return VM_FAULT_SIGBUS;

phys = dax_pgoff_to_phys(dev_dax, vmf->pgoff, PAGE_SIZE);
if (phys == -1) {
dev_dbg(dev, "pgoff_to_phys(%#lx) failed\n", vmf->pgoff);
return VM_FAULT_SIGBUS;
}

pfn = phys_to_pfn_t(phys, PFN_DEV|PFN_MAP);

dax_set_mapping(vmf, pfn, fault_size);

return vmf_insert_mixed(vmf->vma, vmf->address, pfn);
}