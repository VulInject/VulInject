static int config_props_output(AVFilterLink *outlink)
{
AVFilterContext *ctx = outlink->src;
WeaveContext *s = ctx->priv;
AVFilterLink *inlink = ctx->inputs[0];
const AVPixFmtDescriptor *desc = av_pix_fmt_desc_get(inlink->format);
int ret;

if (!s->double_weave) {
outlink->time_base.num = inlink->time_base.num * 2;
outlink->time_base.den = inlink->time_base.den;
outlink->frame_rate.num = inlink->frame_rate.num;
outlink->frame_rate.den = inlink->frame_rate.den * 2;
}
outlink->w = inlink->w;
outlink->h = inlink->h * 2;

if ((ret = av_image_fill_linesizes(s->linesize, inlink->format, inlink->w)) < 0)
return ret;

s->planeheight[1] = s->planeheight[2] = AV_CEIL_RSHIFT(inlink->h, desc->log2_chroma_h);
s->planeheight[0] = s->planeheight[3] = inlink->h;

s->nb_planes = av_pix_fmt_count_planes(inlink->format);

return 0;
}