}
DEFINE_SPUFS_ATTRIBUTE(spufs_decr_status_ops, spufs_decr_status_get,
spufs_decr_status_set, "0x%llx\n",
SPU_ATTR_ACQUIRE_SAVED);

static int spufs_event_mask_set(void *data, u64 val)
{
struct spu_context *ctx = data;
struct spu_lscsa *lscsa = ctx->csa.lscsa;
int ret;

ret = spu_acquire_saved(ctx);
if (ret)
return ret;
lscsa->event_mask.slot[0] = (u32) val;
spu_release_saved(ctx);

return 0;
}