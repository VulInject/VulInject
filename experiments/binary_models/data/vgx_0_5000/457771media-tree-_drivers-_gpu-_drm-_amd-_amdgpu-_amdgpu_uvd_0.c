static int amdgpu_uvd_cs_pass1(struct amdgpu_uvd_cs_ctx *ctx)
{
struct amdgpu_bo_va_mapping *mapping;
struct amdgpu_bo *bo;
uint32_t cmd;
uint64_t addr = amdgpu_uvd_get_addr_from_ctx(ctx);
int r = 0;

mapping = amdgpu_cs_find_mapping(ctx->parser, addr, &bo);
if (mapping == NULL) {
DRM_ERROR("Can't find BO for addr 0x%08Lx\n", addr);
return -EINVAL;
}

if (!ctx->parser->adev->uvd.address_64_bit) {

cmd = amdgpu_get_ib_value(ctx->parser, ctx->ib_idx, ctx->idx) >> 1;
if (cmd == 0x0 || cmd == 0x3) {

uint32_t domain = AMDGPU_GEM_DOMAIN_VRAM;
amdgpu_ttm_placement_from_domain(bo, domain);
}
amdgpu_uvd_force_into_uvd_segment(bo);

r = ttm_bo_validate(&bo->tbo, &bo->placement, false, false);
}

return r;
}