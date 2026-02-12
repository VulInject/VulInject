static inline InspectionBuffer *HttpServerBodyXformsGetDataCallback(DetectEngineThreadCtx *det_ctx,
const DetectEngineTransforms *transforms, const int list_id, InspectionBuffer *base_buffer)
{
InspectionBuffer *buffer = InspectionBufferGet(det_ctx, list_id);
if (buffer->inspect != NULL)
return buffer;

InspectionBufferSetup(det_ctx, list_id, buffer, base_buffer->inspect, base_buffer->inspect_len);
buffer->inspect_offset = base_buffer->inspect_offset;
InspectionBufferApplyTransforms(buffer, transforms);
SCLogDebug("xformed buffer %p size %u", buffer, buffer->inspect_len);
SCReturnPtr(buffer, "InspectionBuffer");
}