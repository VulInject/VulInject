void nv10_fb_tile_init ( struct nvkm_fb * fb , int i , u32 addr , u32 size , u32 pitch , u32 flags , struct nvkm_fb_tile * tile ) { tile -> addr = 0x80000000 | addr ; tile -> pitch = pitch ; } 