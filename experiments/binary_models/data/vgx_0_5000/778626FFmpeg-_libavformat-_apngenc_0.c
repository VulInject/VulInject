static int apng_write_trailer(AVFormatContext *format_context)
{
APNGMuxContext *apng = format_context->priv_data;
AVIOContext *io_context = format_context->pb;
uint8_t buf[8];
int ret;

if (apng->prev_packet) {
ret = flush_packet(format_context, NULL);
if (ret < 0)
return ret;
}

apng_write_chunk(io_context, MKBETAG('I', 'E', 'N', 'D'), NULL, 0);

if (apng->acTL_offset && (io_context->seekable & AVIO_SEEKABLE_NORMAL)) {
avio_seek(io_context, apng->acTL_offset, SEEK_SET);

AV_WB32(buf, apng->frame_number);
AV_WB32(buf + 4, apng->plays);
apng_write_chunk(io_context, MKBETAG('a', 'c', 'T', 'L'), buf, 8);
}

return 0;
}