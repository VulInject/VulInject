static InspectionBuffer *GetData(DetectEngineThreadCtx *det_ctx,
const DetectEngineTransforms *transforms, Flow *f,
const uint8_t flow_flags, void *txv, const int list_id)
{
InspectionBuffer *buffer = InspectionBufferGet(det_ctx, list_id);
if (buffer->inspect == NULL) {
uint32_t data_len = 0;
const uint8_t *data = NULL;

rs_snmp_tx_get_community(txv, &data, &data_len);
if (data == NULL || data_len == 0) {
return NULL;
}

InspectionBufferSetup(det_ctx, list_id, buffer, data, data_len);
InspectionBufferApplyTransforms(buffer, transforms);
}

return buffer;
}