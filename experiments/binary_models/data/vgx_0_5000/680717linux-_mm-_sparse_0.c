static struct page * __meminit section_activate(int nid, unsigned long pfn,
unsigned long nr_pages, struct vmem_altmap *altmap,
struct dev_pagemap *pgmap)
{
struct mem_section *ms = __pfn_to_section(pfn);
struct mem_section_usage *usage = NULL;
struct page *memmap;
int rc = 0;

if (!ms->usage) {
usage = kzalloc(mem_section_usage_size(), GFP_KERNEL);
if (!usage)
return ERR_PTR(-ENOMEM);
ms->usage = usage;
}

rc = fill_subsection_map(pfn, nr_pages);
if (rc) {
if (usage)
ms->usage = NULL;
kfree(usage);
return ERR_PTR(rc);
}


if (nr_pages < PAGES_PER_SECTION && early_section(ms))
return pfn_to_page(pfn);

memmap = populate_section_memmap(pfn, nr_pages, nid, altmap, pgmap);
if (!memmap) {
section_deactivate(pfn, nr_pages, altmap);
return ERR_PTR(-ENOMEM);
}

return memmap;
}