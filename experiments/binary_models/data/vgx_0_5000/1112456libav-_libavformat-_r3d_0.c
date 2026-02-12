static int r3d_seek(AVFormatContext *s, int stream_index, int64_t sample_time, int flags)
{
AVStream *st = s->streams[0]; 
R3DContext *r3d = s->priv_data;
int frame_num;

if (!st->avg_frame_rate.num)
return -1;

frame_num = av_rescale_q(sample_time, st->time_base,
(AVRational){st->avg_frame_rate.den, st->avg_frame_rate.num});
av_log(s, AV_LOG_TRACE, "seek frame num %d timestamp %"PRId64"\n",
frame_num, sample_time);

if (frame_num < r3d->video_offsets_count) {
if (avio_seek(s->pb, r3d->video_offsets_count, SEEK_SET) < 0)
return -1;
} else {
av_log(s, AV_LOG_ERROR, "could not seek to frame %d\n", frame_num);
return -1;
}

return 0;
}