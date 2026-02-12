size_t ZSTD_compress2(ZSTD_CCtx* cctx,
void* dst, size_t dstCapacity,
const void* src, size_t srcSize)
{
ZSTD_bufferMode_e const originalInBufferMode = cctx->requestedParams.inBufferMode;
ZSTD_bufferMode_e const originalOutBufferMode = cctx->requestedParams.outBufferMode;
DEBUGLOG(4, "ZSTD_compress2 (srcSize=%u)", (unsigned)srcSize);
ZSTD_CCtx_reset(cctx, ZSTD_reset_session_only);

cctx->requestedParams.inBufferMode = ZSTD_bm_stable;
cctx->requestedParams.outBufferMode = ZSTD_bm_stable;
{   size_t oPos = 0;
size_t iPos = 0;
size_t const result = ZSTD_compressStream2_simpleArgs(cctx,
dst, dstCapacity, &oPos,
src, srcSize, &iPos,
ZSTD_e_end);

cctx->requestedParams.inBufferMode = originalInBufferMode;
cctx->requestedParams.outBufferMode = originalOutBufferMode;
FORWARD_IF_ERROR(result, "ZSTD_compressStream2_simpleArgs failed");
if (result != 0) {  
assert(oPos == dstCapacity);
RETURN_ERROR(dstSize_tooSmall, "");
}
assert(iPos == srcSize);   
return oPos;
}
}