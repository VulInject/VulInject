}
EXPORT_SYMBOL_GPL(gnttab_foreach_grant_in_range);

void gnttab_foreach_grant(struct page **pages,
unsigned int nr_grefs,
xen_grant_fn_t fn,
void *data)
{
unsigned int goffset = 0;
unsigned long xen_pfn = 0;
unsigned int i;

for (i = 0; i < nr_grefs; i++) {
if ((i % XEN_PFN_PER_PAGE) == 0) {
xen_pfn = page_to_xen_pfn(pages[i / XEN_PFN_PER_PAGE]);
goffset = 0;
}

fn(pfn_to_gfn(xen_pfn), goffset, XEN_PAGE_SIZE, data);

goffset += XEN_PAGE_SIZE;
xen_pfn++;
}
}