}
EXPORT_SYMBOL(drm_prime_pages_to_sg);


int drm_prime_sg_to_page_addr_arrays(struct sg_table *sgt, struct page **pages,
dma_addr_t *addrs, int max_pages)
{
unsigned count;
struct scatterlist *sg;
struct page *page;
u32 len;
int pg_index;
dma_addr_t addr;

pg_index = 0;
for_each_sg(sgt->sgl, sg, sgt->nents, count) {
len = sg->length;
page = sg_page(sg);
addr = sg_dma_address(sg);

while (len > 0) {
if (WARN_ON(pg_index >= max_pages))
return -1;
pages[pg_index] = page;
if (addrs)
addrs[pg_index] = addr;

page++;
addr += PAGE_SIZE;
len -= PAGE_SIZE;
pg_index++;
}
}
return 0;
}