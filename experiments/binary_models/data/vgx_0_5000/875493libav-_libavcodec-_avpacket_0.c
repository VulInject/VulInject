int av_packet_from_data(AVPacket *pkt, uint8_t *data, int size)
{
if (size >= INT_MAX - AV_INPUT_BUFFER_PADDING_SIZE)
return AVERROR(EINVAL);

pkt->buf = av_buffer_create(data, size + AV_INPUT_BUFFER_PADDING_SIZE,
av_buffer_default_free, NULL, 0);
if (!pkt->buf)
return AVERROR(ENOMEM);

pkt->data = data;
pkt->size = size;

return 0;
}

FF_DISABLE_DEPRECATION_WARNINGS
do {                                         \
av_buffer_realloc(&pkt->buf, size);      \
data = pkt->buf ? pkt->buf->data : NULL; \
} while (0)