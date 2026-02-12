static AVFrame *spawn_empty_frame(OpusEncContext *s)
{
AVFrame *f = av_frame_alloc();
int ret;
if (!f)
return NULL;
f->format         = s->avctx->sample_fmt;
f->nb_samples     = s->avctx->frame_size;
ret = av_channel_layout_copy(&f->ch_layout, &s->avctx->ch_layout);
if (ret < 0) {
av_frame_free(&f);
return NULL;
}
if (av_frame_get_buffer(f, 4)) {
av_frame_free(&f);
return NULL;
}
for (int i = 0; i < s->channels; i++) {
size_t bps = av_get_bytes_per_sample(f->format);
memset(f->extended_data[i], 0, bps*f->nb_samples);
}
return f;
}