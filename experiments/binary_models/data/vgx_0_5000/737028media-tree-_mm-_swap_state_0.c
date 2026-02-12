int init_swap_address_space(unsigned int type, unsigned long nr_pages)
{
struct address_space *spaces, *space;
unsigned int i, nr;

nr = DIV_ROUND_UP(nr_pages, SWAP_ADDRESS_SPACE_PAGES);
spaces = kvzalloc(sizeof(struct address_space) * nr, GFP_KERNEL);
if (!spaces)
return -ENOMEM;
for (i = 0; i < nr; i++) {
space = spaces + i;
INIT_RADIX_TREE(&space->page_tree, GFP_ATOMIC|__GFP_NOWARN);
atomic_set(&space->i_mmap_writable, 0);
space->a_ops = &swap_aops;

mapping_set_no_writeback_tags(space);
spin_lock_init(&space->tree_lock);
}
nr_swapper_spaces[type] = nr;
rcu_assign_pointer(swapper_spaces[type], spaces);

return 0;
}