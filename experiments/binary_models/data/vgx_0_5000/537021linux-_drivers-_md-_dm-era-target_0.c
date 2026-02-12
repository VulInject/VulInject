static int metadata_get_stats(struct era_metadata *md, void *ptr)
{
int r;
struct metadata_stats *s = ptr;
dm_block_t nr_free, nr_total;

r = dm_sm_get_nr_free(md->sm, &nr_free);
if (r) {
DMERR("dm_sm_get_nr_free returned %d", r);
return r;
}

r = dm_sm_get_nr_blocks(md->sm, &nr_total);
if (r) {
DMERR("dm_pool_get_metadata_dev_size returned %d", r);
return r;
}

s->used = nr_total - nr_free;
s->total = nr_total;
s->snap = md->metadata_snap;
s->era = md->current_era;

return 0;
}