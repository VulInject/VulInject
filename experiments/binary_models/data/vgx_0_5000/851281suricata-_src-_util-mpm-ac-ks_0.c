static inline int SCACTileInitNewState(MpmCtx *mpm_ctx)
{
SCACTileSearchCtx *search_ctx = (SCACTileSearchCtx *)mpm_ctx->ctx;
SCACTileCtx *ctx = search_ctx->init_ctx;
int aa = 0;


if (ctx->allocated_state_count < ctx->state_count + 1) {
if (ctx->allocated_state_count == 0)
ctx->allocated_state_count = 256;
else
ctx->allocated_state_count *= 2;

SCACTileReallocState(ctx, ctx->allocated_state_count);
}


for (aa = 0; aa < ctx->alphabet_size; aa++) {
ctx->goto_table[ctx->state_count][aa] = SC_AC_TILE_FAIL;
}

memset(ctx->output_table + ctx->state_count, 0,
sizeof(SCACTileOutputTable));

return ctx->state_count++;
}