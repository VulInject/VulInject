int __init efi_create_mapping(struct mm_struct *mm, efi_memory_desc_t *md)
{
pteval_t prot_val = create_mapping_protection(md);
bool page_mappings_only = (md->type == EFI_RUNTIME_SERVICES_CODE ||
md->type == EFI_RUNTIME_SERVICES_DATA);


if (region_is_misaligned(md))
page_mappings_only = true;

create_pgd_mapping(mm, md->phys_addr, md->virt_addr,
md->num_pages << EFI_PAGE_SHIFT,
__pgprot(prot_val | PTE_NG), page_mappings_only);
return 0;
}