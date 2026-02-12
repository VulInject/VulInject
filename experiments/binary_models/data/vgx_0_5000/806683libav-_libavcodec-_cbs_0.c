int ff_cbs_alloc_unit_data(CodedBitstreamContext *ctx,
CodedBitstreamUnit *unit,
size_t size)
{
av_assert0(!unit->data && !unit->data_ref);

unit->data_ref = av_buffer_alloc(size + AV_INPUT_BUFFER_PADDING_SIZE);
if (!unit->data_ref)
return AVERROR(ENOMEM);

unit->data      = unit->data_ref->data;
unit->data_size = size;

memset(unit->data + size, 0, AV_INPUT_BUFFER_PADDING_SIZE);

return 0;
}