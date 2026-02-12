static int flac_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags) {
AVStream *const st  = s->streams[0];
FFStream *const sti = ffstream(st);
int index;
int64_t pos;
AVIndexEntry e;
FLACDecContext *flac = s->priv_data;

if (!flac->found_seektable || !(s->flags&AVFMT_FLAG_FAST_SEEK)) {
return -1;
}

index = av_index_search_timestamp(st, timestamp, flags);
if (index < 0 || index >= sti->nb_index_entries)
return -1;

e   = sti->index_entries[index];
pos = avio_seek(s->pb, e.pos, SEEK_SET);
if (pos >= 0) {
return 0;
}
return -1;
}

const AVInputFormat ff_flac_demuxer = {
.name           = "flac",
.long_name      = NULL_IF_CONFIG_SMALL("raw FLAC"),
.read_probe     = flac_probe,
.read_header    = flac_read_header,
.read_packet    = ff_raw_read_partial_packet,
.read_seek      = flac_seek,
.read_timestamp = flac_read_timestamp,
.flags          = AVFMT_GENERIC_INDEX,
.extensions     = "flac",
.raw_codec_id   = AV_CODEC_ID_FLAC,
.priv_data_size = sizeof(FLACDecContext),
.priv_class     = &ff_raw_demuxer_class,
};