static Bool gf_m2ts_adjust_next_stream_time_for_pcr(GF_M2TS_Mux *muxer, GF_M2TS_Mux_Stream *stream)
{
u32 pck_diff;
s32 us_diff;
GF_M2TS_Time next_pcr_time, stream_time;

if (!muxer->enable_forced_pcr) return 1;

if (!muxer->bit_rate) return 1;

next_pcr_time = stream->program->ts_time_at_pcr_init;
pck_diff = (u32) (stream->program->nb_pck_last_pcr - stream->program->num_pck_at_pcr_init);
gf_m2ts_time_inc(&next_pcr_time, pck_diff*1504, stream->program->mux->bit_rate);
gf_m2ts_time_inc(&next_pcr_time, stream->program->mux->pcr_update_ms, 1000);

stream_time = stream->pcr_only_mode ? stream->next_time : stream->time;

us_diff = gf_m2ts_time_diff_us(&next_pcr_time, &stream_time);
if (us_diff > 0) {
if (!stream->pcr_only_mode) {
stream->pcr_only_mode = GF_TRUE;
stream->next_time = stream->time;
}
stream->time = next_pcr_time;

us_diff = gf_m2ts_time_diff_us(&stream->program->mux->time, &stream->time);
if (us_diff>1000)
return 0;
} else if (stream->pcr_only_mode) {
stream->pcr_only_mode = GF_FALSE;
stream->time = stream->next_time;
}
return 1;
}