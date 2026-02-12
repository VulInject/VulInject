static int rso_write_trailer(AVFormatContext *s)
{
AVIOContext *pb = s->pb;
int64_t file_size;
uint16_t coded_file_size;

file_size = avio_tell(pb);

if (file_size < 0)
return file_size;

if (file_size > 0xffff + RSO_HEADER_SIZE) {
av_log(s, AV_LOG_WARNING,
"Output file is too big (%"PRId64" bytes >= 64kB)\n", file_size);
coded_file_size = 0xffff;
} else {
coded_file_size = file_size - RSO_HEADER_SIZE;
}


avio_seek(pb, 2, SEEK_SET);
avio_wb16(pb, coded_file_size);
avio_seek(pb, file_size, SEEK_SET);

return 0;
}

const FFOutputFormat ff_rso_muxer = {
.p.name         =   "rso",
.p.long_name    =   NULL_IF_CONFIG_SMALL("Lego Mindstorms RSO"),
.p.extensions   =   "rso",
.p.audio_codec  =   AV_CODEC_ID_PCM_U8,
.p.video_codec  =   AV_CODEC_ID_NONE,
.write_header   =   rso_write_header,
.write_packet   =   ff_raw_write_packet,
.write_trailer  =   rso_write_trailer,
.p.codec_tag    =   ff_rso_codec_tags_list,
.p.flags        =   AVFMT_NOTIMESTAMPS,
};