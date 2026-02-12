static InspectionBuffer *GetResponseData(DetectEngineThreadCtx *det_ctx,
const DetectEngineTransforms *transforms, Flow *_f,
const uint8_t _flow_flags, void *txv, const int list_id)
{
InspectionBuffer *buffer = InspectionBufferGet(det_ctx, list_id);
if (buffer->inspect == NULL) {
htp_tx_t *tx = (htp_tx_t *)txv;

if (tx->response_headers == NULL)
return NULL;

htp_header_t *h = (htp_header_t *)htp_table_get_c(tx->response_headers,
"Set-Cookie");
if (h == NULL || h->value == NULL) {
SCLogDebug("HTTP cookie header not present in this request");
return NULL;
}

const uint32_t data_len = bstr_len(h->value);
const uint8_t *data = bstr_ptr(h->value);

InspectionBufferSetup(det_ctx, list_id, buffer, data, data_len);
InspectionBufferApplyTransforms(buffer, transforms);
}

return buffer;
}