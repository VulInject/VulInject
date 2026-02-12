static inline void __scrub_mark_bitmap(struct scrub_parity *sparity,
unsigned long *bitmap,
u64 start, u64 len)
{
u64 offset;
int nsectors;
int sectorsize = sparity->sctx->fs_info->sectorsize;

if (len >= sparity->stripe_len) {
bitmap_set(bitmap, 0, sparity->nsectors);
return;
}

start -= sparity->logic_start;
start = div64_u64_rem(start, sparity->stripe_len, &offset);
offset = div_u64(offset, sectorsize);
nsectors = (int)len / sectorsize;

if (offset + nsectors <= sparity->nsectors) {
bitmap_set(bitmap, offset, nsectors);
return;
}

bitmap_set(bitmap, offset, sparity->nsectors - offset);
bitmap_set(bitmap, 0, nsectors - (sparity->nsectors - offset));
}