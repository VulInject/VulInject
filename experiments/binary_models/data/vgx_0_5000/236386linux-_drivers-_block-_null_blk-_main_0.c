static struct nullb_page *null_radix_tree_insert(struct nullb *nullb, u64 idx,
struct nullb_page *t_page, bool is_cache)
{
struct radix_tree_root *root;

root = is_cache ? &nullb->dev->cache : &nullb->dev->data;

if (radix_tree_insert(root, idx, t_page)) {
null_free_page(t_page);
t_page = radix_tree_lookup(root, idx);
WARN_ON(!t_page || t_page->page->index != idx);
} else if (is_cache)
nullb->dev->curr_cache += PAGE_SIZE;

return t_page;
}