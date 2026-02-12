static InspectionBuffer *GetData(DetectEngineThreadCtx *det_ctx,
const DetectEngineTransforms *transforms,
Flow *_f, const uint8_t _flow_flags,
void *txv, const int list_id)
{
InspectionBuffer *buffer = InspectionBufferGet(det_ctx, list_id);
if (buffer->inspect == NULL) {
const uint8_t *b = NULL;
uint32_t b_len = 0;

if (rs_mqtt_tx_get_connect_password(txv, &b, &b_len) != 1)
return NULL;
if (b == NULL || b_len == 0)
return NULL;

InspectionBufferSetup(det_ctx, list_id, buffer, b, b_len);
InspectionBufferApplyTransforms(buffer, transforms);
}
return buffer;
}