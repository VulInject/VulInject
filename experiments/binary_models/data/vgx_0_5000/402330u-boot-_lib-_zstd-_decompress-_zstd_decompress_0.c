size_t ZSTD_freeDCtx(ZSTD_DCtx* dctx)
{
if (dctx==NULL) return 0;   
RETURN_ERROR_IF(dctx->staticSize, memory_allocation, "not compatible with static DCtx");
{   ZSTD_customMem const cMem = dctx->customMem;
ZSTD_clearDict(dctx);
ZSTD_customFree(dctx->inBuff, cMem);
dctx->inBuff = NULL;
if (dctx->ddictSet) {
ZSTD_freeDDictHashSet(dctx->ddictSet, cMem);
dctx->ddictSet = NULL;
}
ZSTD_customFree(dctx, cMem);
return 0;
}
}