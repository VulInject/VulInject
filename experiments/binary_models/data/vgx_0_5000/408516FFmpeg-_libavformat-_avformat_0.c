int ff_stream_side_data_copy(AVStream *dst, const AVStream *src)
{

for (int i = 0; i < dst->nb_side_data; i++)
av_free(dst->side_data[i].data);
av_freep(&dst->side_data);
dst->nb_side_data = 0;


if (src->nb_side_data) {
dst->side_data = av_calloc(src->nb_side_data,
sizeof(*dst->side_data));
if (!dst->side_data)
return AVERROR(ENOMEM);
dst->nb_side_data = src->nb_side_data;

for (int i = 0; i < src->nb_side_data; i++) {
uint8_t *data = av_memdup(src->side_data[i].data,
src->side_data[i].size);
if (!data)
return AVERROR(ENOMEM);
dst->side_data[i].type = src->side_data[i].type;
dst->side_data[i].size = src->side_data[i].size;
dst->side_data[i].data = data;
}
}

return 0;
}