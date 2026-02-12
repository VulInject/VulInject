bool kvm_set_spte_gfn(struct kvm *kvm, struct kvm_gfn_range *range)
{
int ret;
kvm_pfn_t pfn = pte_pfn(range->pte);

if (!kvm->arch.pgd)
return false;

WARN_ON(range->end - range->start != 1);

ret = gstage_map_page(kvm, NULL, range->start << PAGE_SHIFT,
__pfn_to_phys(pfn), PAGE_SIZE, true, true);
if (ret) {
kvm_debug("Failed to map G-stage page (error %d)\n", ret);
return true;
}

return false;
}