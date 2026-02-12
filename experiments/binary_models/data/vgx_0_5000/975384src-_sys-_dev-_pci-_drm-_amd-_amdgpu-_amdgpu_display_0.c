static int check_tiling_flags_gfx6(struct amdgpu_framebuffer *afb)
{
u64 micro_tile_mode;


if (AMDGPU_TILING_GET(afb->tiling_flags, SWIZZLE_MODE) == 0)
return 0;

micro_tile_mode = AMDGPU_TILING_GET(afb->tiling_flags, MICRO_TILE_MODE);
switch (micro_tile_mode) {
case 0: 
case 3: 
return 0;
default:
drm_dbg_kms(afb->base.dev,
"Micro tile mode %llu not supported for scanout\n",
micro_tile_mode);
return -EINVAL;
}
}