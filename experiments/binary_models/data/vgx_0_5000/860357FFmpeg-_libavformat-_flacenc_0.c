static int flac_write_trailer(struct AVFormatContext *s)
{
AVIOContext *pb = s->pb;
int64_t file_size;
FlacMuxerContext *c = s->priv_data;

if (c->waiting_pics) {
av_log(s, AV_LOG_WARNING, "No packets were sent for some of the "
"attached pictures.\n");
flac_queue_flush(s);
}

if (!c->write_header || !c->updated_streaminfo)
return 0;

if (pb->seekable & AVIO_SEEKABLE_NORMAL) {

file_size = avio_tell(pb);
avio_seek(pb, 8, SEEK_SET);
avio_write(pb, c->streaminfo, FLAC_STREAMINFO_SIZE);
avio_seek(pb, file_size, SEEK_SET);
} else {
av_log(s, AV_LOG_WARNING, "unable to rewrite FLAC header.\n");
}

return 0;
}