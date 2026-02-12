static int config_output(AVFilterLink *outlink)
{
AVFilterContext *ctx = outlink->src;
SierpinskiContext *s = ctx->priv;

if (av_image_check_size(s->w, s->h, 0, ctx) < 0)
return AVERROR(EINVAL);

outlink->w = s->w;
outlink->h = s->h;
outlink->time_base = av_inv_q(s->frame_rate);
outlink->sample_aspect_ratio = (AVRational) {1, 1};
outlink->frame_rate = s->frame_rate;
if (s->seed == -1)
s->seed = av_get_random_seed();
av_lfg_init(&s->lfg, s->seed);

s->draw_slice = s->type ? draw_triangle_slice : draw_carpet_slice;

return 0;
}