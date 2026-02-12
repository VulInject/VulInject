int ff_tak_decode_frame_header(AVCodecContext *avctx, BitstreamContext *bc,
TAKStreamInfo *ti, int log_level_offset)
{
if (bitstream_read(bc, TAK_FRAME_HEADER_SYNC_ID_BITS) != TAK_FRAME_HEADER_SYNC_ID) {
av_log(avctx, AV_LOG_ERROR + log_level_offset, "missing sync id\n");
return AVERROR_INVALIDDATA;
}

ti->flags     = bitstream_read(bc, TAK_FRAME_HEADER_FLAGS_BITS);
ti->frame_num = bitstream_read(bc, TAK_FRAME_HEADER_NO_BITS);

if (ti->flags & TAK_FRAME_FLAG_IS_LAST) {
ti->last_frame_samples = bitstream_read(bc, TAK_FRAME_HEADER_SAMPLE_COUNT_BITS) + 1;
bitstream_skip(bc, 2);
} else {
ti->last_frame_samples = 0;
}

if (ti->flags & TAK_FRAME_FLAG_HAS_INFO) {
avpriv_tak_parse_streaminfo(bc, ti);

if (bitstream_read(bc, 6))
bitstream_skip(bc, 25);
bitstream_align(bc);
}

bitstream_skip(bc, 24);

return 0;
}