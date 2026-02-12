static int amdgpu_ctx_init(struct amdgpu_ctx_mgr *mgr, int32_t priority,
struct drm_file *filp, struct amdgpu_ctx *ctx)
{
u32 current_stable_pstate;
int r;

r = amdgpu_ctx_priority_permit(filp, priority);
if (r)
return r;

memset(ctx, 0, sizeof(*ctx));

kref_init(&ctx->refcount);
ctx->mgr = mgr;
mtx_init(&ctx->ring_lock, IPL_TTY);

ctx->reset_counter = atomic_read(&mgr->adev->gpu_reset_counter);
ctx->reset_counter_query = ctx->reset_counter;
ctx->vram_lost_counter = atomic_read(&mgr->adev->vram_lost_counter);
ctx->init_priority = priority;
ctx->override_priority = AMDGPU_CTX_PRIORITY_UNSET;

r = amdgpu_ctx_get_stable_pstate(ctx, &current_stable_pstate);
if (r)
return r;

if (mgr->adev->pm.stable_pstate_ctx)
ctx->stable_pstate = mgr->adev->pm.stable_pstate_ctx->stable_pstate;
else
ctx->stable_pstate = current_stable_pstate;

return 0;
}