int TLSX_ConnectionID_Use(WOLFSSL* ssl)
{
CIDInfo* info;
WOLFSSL** ext;
int ret;

ext = (WOLFSSL**)TLSX_Find(ssl->extensions, TLSX_CONNECTION_ID);
if (ext != NULL)
return 0;

info = (CIDInfo*)XMALLOC(sizeof(CIDInfo), ssl->heap, DYNAMIC_TYPE_TLSX);
if (info == NULL)
return MEMORY_ERROR;
ext = (WOLFSSL**)XMALLOC(sizeof(WOLFSSL**), ssl->heap, DYNAMIC_TYPE_TLSX);
if (ext == NULL) {
XFREE(info, ssl->heap, DYNAMIC_TYPE_TLSX);
return MEMORY_ERROR;
}
XMEMSET(info, 0, sizeof(CIDInfo));

ssl->dtlsCidInfo = info;
*ext = ssl;
ret =
TLSX_Push(&ssl->extensions, TLSX_CONNECTION_ID, (void*)ext, ssl->heap);
if (ret != 0) {
XFREE(info, ssl->heap, DYNAMIC_TYPE_TLSX);
XFREE(ext, ssl->heap, DYNAMIC_TYPE_TLSX);
ssl->dtlsCidInfo = NULL;
return ret;
}

return 0;
}