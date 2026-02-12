int i915_deps_sync(const struct i915_deps *deps, const struct ttm_operation_ctx *ctx)
{
struct dma_fence **fences = deps->fences;
unsigned int i;
int ret = 0;

for (i = 0; i < deps->num_deps; ++i, ++fences) {
if (ctx->no_wait_gpu && !dma_fence_is_signaled(*fences)) {
ret = -EBUSY;
break;
}

ret = dma_fence_wait(*fences, ctx->interruptible);
if (!ret)
ret = (*fences)->error;
if (ret)
break;
}

return ret;
}