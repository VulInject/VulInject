void
wmem_block_verify(wmem_allocator_t *allocator)
{
wmem_block_hdr_t       *cur;
wmem_block_allocator_t *private_allocator;
int                     master_free, recycler_free, chunk_free = 0;


g_assert_true(allocator->type == WMEM_ALLOCATOR_BLOCK);

private_allocator = (wmem_block_allocator_t*) allocator->private_data;

if (private_allocator->block_list == NULL) {
g_assert_true(! private_allocator->master_head);
g_assert_true(! private_allocator->recycler_head);
return;
}

master_free   = wmem_block_verify_master_list(private_allocator);
recycler_free = wmem_block_verify_recycler(private_allocator);

cur = private_allocator->block_list;
g_assert_true(cur->prev == NULL);
while (cur) {
if (cur->next) {
g_assert_true(cur->next->prev == cur);
}
chunk_free += wmem_block_verify_block(cur);
cur = cur->next;
}

g_assert_true(chunk_free == master_free + recycler_free);
}