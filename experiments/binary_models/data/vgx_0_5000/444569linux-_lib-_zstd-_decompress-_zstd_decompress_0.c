size_t ZSTD_decompressBegin_usingDDict(ZSTD_DCtx* dctx, const ZSTD_DDict* ddict)
{
DEBUGLOG(4, "ZSTD_decompressBegin_usingDDict");
assert(dctx != NULL);
if (ddict) {
const char* const dictStart = (const char*)ZSTD_DDict_dictContent(ddict);
size_t const dictSize = ZSTD_DDict_dictSize(ddict);
const void* const dictEnd = dictStart + dictSize;
dctx->ddictIsCold = (dctx->dictEnd != dictEnd);
DEBUGLOG(4, "DDict is %s",
dctx->ddictIsCold ? "~cold~" : "hot!");
}
FORWARD_IF_ERROR( ZSTD_decompressBegin(dctx) , "");
if (ddict) {   
ZSTD_copyDDictParameters(dctx, ddict);
}
return 0;
}