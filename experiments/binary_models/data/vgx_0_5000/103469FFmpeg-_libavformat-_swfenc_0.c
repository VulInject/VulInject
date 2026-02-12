static void put_swf_end_tag(AVFormatContext *s)
{
SWFEncContext *swf = s->priv_data;
AVIOContext *pb = s->pb;
int64_t pos;
int tag_len, tag;

pos = avio_tell(pb);
tag_len = pos - swf->tag_pos - 2;
tag = swf->tag;
avio_seek(pb, swf->tag_pos, SEEK_SET);
if (tag & TAG_LONG) {
tag &= ~TAG_LONG;
avio_wl16(pb, (tag << 6) | 0x3f);
avio_wl32(pb, tag_len - 4);
} else {
av_assert0(tag_len < 0x3f);
avio_wl16(pb, (tag << 6) | tag_len);
}
avio_seek(pb, pos, SEEK_SET);
}