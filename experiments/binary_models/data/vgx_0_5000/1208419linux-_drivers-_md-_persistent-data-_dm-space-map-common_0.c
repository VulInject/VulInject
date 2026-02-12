static inline int shadow_bitmap(struct ll_disk *ll, struct inc_context *ic)
{
int r, inc;

r = dm_tm_shadow_block(ll->tm, le64_to_cpu(ic->ie_disk.blocknr),
&dm_sm_bitmap_validator, &ic->bitmap_block, &inc);
if (r < 0) {
DMERR("dm_tm_shadow_block() failed");
return r;
}
ic->ie_disk.blocknr = cpu_to_le64(dm_block_location(ic->bitmap_block));
ic->bitmap = dm_bitmap_data(ic->bitmap_block);
return 0;
}