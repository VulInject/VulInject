static InspectionBuffer *GetData(DetectEngineThreadCtx *det_ctx,
const DetectEngineTransforms *transforms, Flow *_f,
const uint8_t _flow_flags, void *txv, const int list_id)
{
InspectionBuffer *buffer = InspectionBufferGet(det_ctx, list_id);
if (buffer->inspect == NULL) {
htp_tx_t *tx = (htp_tx_t *)txv;

if (tx->request_hostname == NULL)
return NULL;

const uint32_t data_len = bstr_len(tx->request_hostname);
const uint8_t *data = bstr_ptr(tx->request_hostname);

InspectionBufferSetup(det_ctx, list_id, buffer, data, data_len);
InspectionBufferApplyTransforms(buffer, transforms);
}

return buffer;
}