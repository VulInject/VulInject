static SpmCtx *HSInitCtx(const uint8_t *needle, uint16_t needle_len, int nocase,
SpmGlobalThreadCtx *global_thread_ctx)
{
SpmCtx *ctx = SCMalloc(sizeof(SpmCtx));
if (ctx == NULL) {
SCLogDebug("Unable to alloc SpmCtx.");
return NULL;
}
memset(ctx, 0, sizeof(SpmCtx));
ctx->matcher = SPM_HS;

SpmHsCtx *sctx = SCMalloc(sizeof(SpmHsCtx));
if (sctx == NULL) {
SCLogDebug("Unable to alloc SpmHsCtx.");
SCFree(ctx);
return NULL;
}
ctx->ctx = sctx;

memset(sctx, 0, sizeof(SpmHsCtx));
if (HSBuildDatabase(needle, needle_len, nocase, sctx,
global_thread_ctx) != 0) {
SCLogDebug("HSBuildDatabase failed.");
HSDestroyCtx(ctx);
return NULL;
}

return ctx;
}