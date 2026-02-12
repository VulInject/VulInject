static int set_up_temporary_mappings(void)
{
struct x86_mapping_info info = {
.alloc_pgt_page	= alloc_pgt_page,
.page_flag	= __PAGE_KERNEL_LARGE_EXEC,
.offset		= __PAGE_OFFSET,
};
unsigned long mstart, mend;
pgd_t *pgd;
int result;
int i;

pgd = (pgd_t *)get_safe_page(GFP_ATOMIC);
if (!pgd)
return -ENOMEM;


result = set_up_temporary_text_mapping(pgd);
if (result)
return result;


for (i = 0; i < nr_pfn_mapped; i++) {
mstart = pfn_mapped[i].start << PAGE_SHIFT;
mend   = pfn_mapped[i].end << PAGE_SHIFT;

result = kernel_ident_mapping_init(&info, pgd, mstart, mend);
if (result)
return result;
}

temp_pgt = __pa(pgd);
return 0;
}