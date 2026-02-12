static int parse_video_info(AVFormatContext *avfmt, AVIOContext *pb, AVStream *st)
{
uint16_t size_asf; 
uint32_t size_bmp; 
unsigned int tag;

st->codecpar->width  = avio_rl32(pb);
st->codecpar->height = avio_rl32(pb);
avio_skip(pb, 1); 
size_asf = avio_rl16(pb);
tag = ff_get_bmp_header(pb, st, &size_bmp);
st->codecpar->codec_tag = tag;
st->codecpar->codec_id  = ff_codec_get_id(ff_codec_bmp_tags, tag);
size_bmp = FFMAX(size_asf, size_bmp);

if (size_bmp > BMP_HEADER_SIZE) {
int ret = ff_get_extradata(avfmt, st->codecpar, pb, size_bmp - BMP_HEADER_SIZE);

if (ret < 0)
return ret;
}
return 0;
}