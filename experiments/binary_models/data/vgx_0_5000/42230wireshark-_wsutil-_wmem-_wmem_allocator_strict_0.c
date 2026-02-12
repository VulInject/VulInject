static void *
wmem_strict_alloc(void *private_data, const size_t size)
{
wmem_strict_allocator_t       *allocator;
wmem_strict_allocator_block_t *block;
guint   i;
guint8 *canary;

allocator = (wmem_strict_allocator_t*) private_data;

block = (wmem_strict_allocator_block_t *)wmem_alloc(NULL, WMEM_FULL_SIZE(size));
block->data_len = size;

memset(WMEM_BLOCK_TO_DATA(block), WMEM_PREFILL, block->data_len);

canary = WMEM_BLOCK_TO_PRE_CANARY(block);
for (i=0; i<WMEM_CANARY_SIZE; i++) canary[i] = WMEM_CANARY_VALUE;

canary = WMEM_BLOCK_TO_POST_CANARY(block);
for (i=0; i<WMEM_CANARY_SIZE; i++) canary[i] = WMEM_CANARY_VALUE;

if (allocator->blocks) {
allocator->blocks->prev = block;
}
block->next = allocator->blocks;
block->prev = NULL;
allocator->blocks = block;

return WMEM_BLOCK_TO_DATA(block);
}