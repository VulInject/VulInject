int PrefilterGenericMpmRegister(DetectEngineCtx *de_ctx,
SigGroupHead *sgh, MpmCtx *mpm_ctx,
const DetectBufferMpmRegistery *mpm_reg, int list_id)
{
SCEnter();
PrefilterMpmCtx *pectx = SCCalloc(1, sizeof(*pectx));
if (pectx == NULL)
return -1;
pectx->list_id = list_id;
pectx->GetData = mpm_reg->app_v2.GetData;
pectx->mpm_ctx = mpm_ctx;
pectx->transforms = &mpm_reg->transforms;

int r = PrefilterAppendTxEngine(de_ctx, sgh, PrefilterMpm,
mpm_reg->app_v2.alproto, mpm_reg->app_v2.tx_min_progress,
pectx, PrefilterGenericMpmFree, mpm_reg->pname);
if (r != 0) {
SCFree(pectx);
}
return r;
}