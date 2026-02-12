static int filter_frame(AVFilterLink *inlink, AVFrame *in)
{
AVFilterContext *ctx = inlink->dst;
MedianContext *s = ctx->priv;
AVFilterLink *outlink = ctx->outputs[0];
ThreadData td;
AVFrame *out;

out = ff_get_video_buffer(outlink, outlink->w, outlink->h);
if (!out) {
av_frame_free(&in);
return AVERROR(ENOMEM);
}
av_frame_copy_props(out, in);

td.in = in; td.out = out;
ff_filter_execute(ctx, filter_slice, &td, NULL, s->nb_threads);

av_frame_free(&in);
return ff_filter_frame(outlink, out);
}