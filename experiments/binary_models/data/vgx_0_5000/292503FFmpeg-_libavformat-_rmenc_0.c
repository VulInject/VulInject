static int rm_write_audio(AVFormatContext *s, const uint8_t *buf, int size, int flags)
{
RMMuxContext *rm = s->priv_data;
AVIOContext *pb = s->pb;
StreamInfo *stream = rm->audio_stream;
int i;

write_packet_header(s, stream, size, !!(flags & AV_PKT_FLAG_KEY));

if (stream->par->codec_id == AV_CODEC_ID_AC3) {

for (i = 0; i < size; i += 2) {
avio_w8(pb, buf[i + 1]);
avio_w8(pb, buf[i]);
}
} else {
avio_write(pb, buf, size);
}
stream->nb_frames++;
return 0;
}