static void null_free_sector(struct nullb *nullb, sector_t sector,
bool is_cache)
{
unsigned int sector_bit;
u64 idx;
struct nullb_page *t_page, *ret;
struct radix_tree_root *root;

root = is_cache ? &nullb->dev->cache : &nullb->dev->data;
idx = sector >> PAGE_SECTORS_SHIFT;
sector_bit = (sector & SECTOR_MASK);

t_page = radix_tree_lookup(root, idx);
if (t_page) {
__clear_bit(sector_bit, t_page->bitmap);

if (null_page_empty(t_page)) {
ret = radix_tree_delete_item(root, idx, t_page);
WARN_ON(ret != t_page);
null_free_page(ret);
if (is_cache)
nullb->dev->curr_cache -= PAGE_SIZE;
}
}
}