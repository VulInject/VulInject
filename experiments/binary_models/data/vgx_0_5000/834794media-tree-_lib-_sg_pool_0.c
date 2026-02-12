int sg_alloc_table_chained(struct sg_table *table, int nents,
struct scatterlist *first_chunk)
{
int ret;

BUG_ON(!nents);

if (first_chunk) {
if (nents <= SG_CHUNK_SIZE) {
table->nents = table->orig_nents = nents;
sg_init_table(table->sgl, nents);
return 0;
}
}

ret = __sg_alloc_table(table, nents, SG_CHUNK_SIZE,
first_chunk, GFP_ATOMIC, sg_pool_alloc);
if (unlikely(ret))
sg_free_table_chained(table, (bool)first_chunk);
return ret;
}