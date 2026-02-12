static void SCACTileReallocState(SCACTileCtx *ctx, int new_state_count)
{

size_t size = ctx->allocated_state_count * sizeof(int32_t) * 256;
void *ptmp = SCRealloc(ctx->goto_table, size);
if (ptmp == NULL) {
SCFree(ctx->goto_table);
ctx->goto_table = NULL;
FatalError("Error allocating memory");
}
ctx->goto_table = ptmp;

SCACTileReallocOutputTable(ctx, new_state_count);
}