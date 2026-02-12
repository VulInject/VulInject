int wnd_init(struct wnd_bitmap *wnd, struct super_block *sb, size_t nbits)
{
int err;
u32 blocksize = sb->s_blocksize;
u32 wbits = blocksize * 8;

init_rwsem(&wnd->rw_lock);

wnd->sb = sb;
wnd->nbits = nbits;
wnd->total_zeroes = nbits;
wnd->extent_max = MINUS_ONE_T;
wnd->zone_bit = wnd->zone_end = 0;
wnd->nwnd = bytes_to_block(sb, bitmap_size(nbits));
wnd->bits_last = nbits & (wbits - 1);
if (!wnd->bits_last)
wnd->bits_last = wbits;

wnd->free_bits = kcalloc(wnd->nwnd, sizeof(u16), GFP_NOFS | __GFP_NOWARN);
if (!wnd->free_bits)
return -ENOMEM;

err = wnd_rescan(wnd);
if (err)
return err;

wnd->inited = true;

return 0;
}