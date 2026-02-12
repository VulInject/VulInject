static int read_header(AVFormatContext *s)
{
ACTContext* ctx = s->priv_data;
AVIOContext *pb = s->pb;
int size;
AVStream* st;
int ret;

int min,sec,msec;

st = avformat_new_stream(s, NULL);
if (!st)
return AVERROR(ENOMEM);

avio_skip(pb, 16);
size=avio_rl32(pb);
ret = ff_get_wav_header(s, pb, st->codecpar, size, 0);
if (ret < 0)
return ret;


if (st->codecpar->sample_rate != 8000) {
av_log(s, AV_LOG_ERROR, "Sample rate %d is not supported.\n", st->codecpar->sample_rate);
return AVERROR_INVALIDDATA;
}

st->codecpar->frame_size=80;
st->codecpar->ch_layout.nb_channels = 1;
avpriv_set_pts_info(st, 64, 1, 100);

st->codecpar->codec_id=AV_CODEC_ID_G729;

avio_seek(pb, 257, SEEK_SET);
msec=avio_rl16(pb);
sec=avio_r8(pb);
min=avio_rl32(pb);

st->duration = av_rescale(1000*(min*60+sec)+msec, st->codecpar->sample_rate, 1000 * st->codecpar->frame_size);

ctx->bytes_left_in_chunk=CHUNK_SIZE;

avio_seek(pb, 512, SEEK_SET);

return 0;
}