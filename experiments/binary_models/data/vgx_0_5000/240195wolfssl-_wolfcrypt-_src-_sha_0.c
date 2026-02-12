int wc_InitSha_ex(wc_Sha* sha, void* heap, int devId)
{
int ret = 0;

if (sha == NULL)
return BAD_FUNC_ARG;

sha->heap = heap;
sha->devId = devId;
sha->devCtx = NULL;

!defined(NO_WOLFSSL_ESP32WROOM32_CRYPT_HASH)
sha->ctx.mode = ESP32_SHA_INIT;
sha->ctx.isfirstblock = 1;
sha->ctx.lockDepth = 0; 
ret = InitSha(sha);
if (ret != 0)
return ret;

ret = wolfAsync_DevCtxInit(&sha->asyncDev, WOLFSSL_ASYNC_MARKER_SHA,
sha->heap, devId);
(void)devId;
ret = wc_CAAM_HashInit(&sha->hndl, &sha->ctx, WC_HASH_TYPE_SHA);

return ret;
}