static void PrefilterMpmHttpHeaderRaw(DetectEngineThreadCtx *det_ctx, const void *pectx, Packet *p,
Flow *f, void *txv, const uint64_t idx, const AppLayerTxData *_txd, const uint8_t flags)
{
SCEnter();

const PrefilterMpmHttpHeaderRawCtx *ctx = pectx;
const MpmCtx *mpm_ctx = ctx->mpm_ctx;
SCLogDebug("running on list %d", ctx->list_id);

const int list_id = ctx->list_id;

InspectionBuffer *buffer = GetData(det_ctx, ctx->transforms, f,
flags, txv, list_id);
if (buffer == NULL)
return;

const uint32_t data_len = buffer->inspect_len;
const uint8_t *data = buffer->inspect;

SCLogDebug("mpm'ing buffer:");


if (data != NULL && data_len >= mpm_ctx->minlen) {
(void)mpm_table[mpm_ctx->mpm_type].Search(mpm_ctx,
&det_ctx->mtcu, &det_ctx->pmq, data, data_len);
PREFILTER_PROFILING_ADD_BYTES(det_ctx, data_len);
}
}