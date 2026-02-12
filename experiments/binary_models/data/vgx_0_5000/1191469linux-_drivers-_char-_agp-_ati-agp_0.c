static int ati_create_page_map(struct ati_page_map *page_map)
{
int i, err;

page_map->real = (unsigned long *) __get_free_page(GFP_KERNEL);
if (page_map->real == NULL)
return -ENOMEM;

set_memory_uc((unsigned long)page_map->real, 1);
err = map_page_into_agp(virt_to_page(page_map->real));
if (err) {
free_page((unsigned long)page_map->real);
return err;
}
page_map->remapped = page_map->real;

for (i = 0; i < PAGE_SIZE / sizeof(unsigned long); i++) {
writel(agp_bridge->scratch_page, page_map->remapped+i);
readl(page_map->remapped+i);	
}

return 0;
}