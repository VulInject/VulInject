static int fir_frame(AudioFIRContext *s, AVFrame *in, AVFilterLink *outlink)
{
AVFilterContext *ctx = outlink->src;
AVFrame *out;

out = ff_get_audio_buffer(outlink, in->nb_samples);
if (!out) {
av_frame_free(&in);
return AVERROR(ENOMEM);
}
av_frame_copy_props(out, in);
out->pts = s->pts = in->pts;

s->in = in;
ff_filter_execute(ctx, fir_channels, out, NULL,
FFMIN(outlink->ch_layout.nb_channels, ff_filter_get_nb_threads(ctx)));

av_frame_free(&in);
s->in = NULL;

return ff_filter_frame(outlink, out);
}