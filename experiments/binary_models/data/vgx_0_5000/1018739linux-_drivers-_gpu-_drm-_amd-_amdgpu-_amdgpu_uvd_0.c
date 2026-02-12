static int amdgpu_uvd_cs_pass1(struct amdgpu_uvd_cs_ctx *ctx)
{
struct ttm_operation_ctx tctx = { false, false };
struct amdgpu_bo_va_mapping *mapping;
struct amdgpu_bo *bo;
uint32_t cmd;
uint64_t addr = amdgpu_uvd_get_addr_from_ctx(ctx);
int r = 0;

r = amdgpu_cs_find_mapping(ctx->parser, addr, &bo, &mapping);
if (r) {
DRM_ERROR("Can't find BO for addr 0x%08Lx\n", addr);
return r;
}

if (!ctx->parser->adev->uvd.address_64_bit) {

cmd = amdgpu_ib_get_value(ctx->ib, ctx->idx) >> 1;
if (cmd == 0x0 || cmd == 0x3) {

uint32_t domain = AMDGPU_GEM_DOMAIN_VRAM;
amdgpu_bo_placement_from_domain(bo, domain);
}
amdgpu_uvd_force_into_uvd_segment(bo);

r = ttm_bo_validate(&bo->tbo, &bo->placement, &tctx);
}

return r;
}