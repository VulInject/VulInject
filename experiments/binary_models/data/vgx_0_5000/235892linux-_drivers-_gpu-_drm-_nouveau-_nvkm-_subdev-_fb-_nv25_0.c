static void
nv25_fb_tile_comp(struct nvkm_fb *fb, int i, u32 size, u32 flags,
struct nvkm_fb_tile *tile)
{
u32 tiles = DIV_ROUND_UP(size, 0x40);
u32 tags  = round_up(tiles / fb->ram->parts, 0x40);
if (!nvkm_mm_head(&fb->tags.mm, 0, 1, tags, tags, 1, &tile->tag)) {
if (!(flags & 2)) tile->zcomp = 0x00100000; 
else              tile->zcomp = 0x00200000; 
tile->zcomp |= tile->tag->offset;
tile->zcomp |= 0x01000000;
}
}