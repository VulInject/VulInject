ZSTD_DDict* ZSTD_createDDict_advanced(const void* dict, size_t dictSize,
ZSTD_dictLoadMethod_e dictLoadMethod,
ZSTD_dictContentType_e dictContentType,
ZSTD_customMem customMem)
{
if ((!customMem.customAlloc) ^ (!customMem.customFree)) return NULL;

{   ZSTD_DDict* const ddict = (ZSTD_DDict*) ZSTD_customMalloc(sizeof(ZSTD_DDict), customMem);
if (ddict == NULL) return NULL;
ddict->cMem = customMem;
{   size_t const initResult = ZSTD_initDDict_internal(ddict,
dict, dictSize,
dictLoadMethod, dictContentType);
if (ZSTD_isError(initResult)) {
ZSTD_freeDDict(ddict);
return NULL;
}   }
return ddict;
}
}