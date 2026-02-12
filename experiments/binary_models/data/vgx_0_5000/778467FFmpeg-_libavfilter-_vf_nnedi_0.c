static int get_frame(AVFilterContext *ctx, int is_second)
{
NNEDIContext *s = ctx->priv;
AVFilterLink *outlink = ctx->outputs[0];
AVFrame *dst;

dst = ff_get_video_buffer(outlink, outlink->w, outlink->h);
if (!dst)
return AVERROR(ENOMEM);
av_frame_copy_props(dst, s->prev);
dst->interlaced_frame = 0;
dst->pts = s->pts;

ff_filter_execute(ctx, filter_slice, dst, NULL,
FFMIN(s->planeheight[1] / 2, s->nb_threads));

if (s->field == -2 || s->field > 1)
s->field_n = !s->field_n;

return ff_filter_frame(outlink, dst);
}