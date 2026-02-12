static InspectionBuffer *FilenameGetDataCallback(DetectEngineThreadCtx *det_ctx,
const DetectEngineTransforms *transforms, Flow *f, uint8_t flow_flags, File *cur_file,
int list_id, int local_file_id)
{
SCEnter();

InspectionBuffer *buffer = InspectionBufferMultipleForListGet(det_ctx, list_id, local_file_id);
if (buffer == NULL)
return NULL;
if (buffer->initialized)
return buffer;

const uint8_t *data = cur_file->name;
uint32_t data_len = cur_file->name_len;

InspectionBufferSetupMulti(buffer, transforms, data, data_len);

SCReturnPtr(buffer, "InspectionBuffer");
}