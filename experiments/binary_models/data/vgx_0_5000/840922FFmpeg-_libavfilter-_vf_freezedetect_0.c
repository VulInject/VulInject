static int config_input(AVFilterLink *inlink)
{
AVFilterContext *ctx = inlink->dst;
FreezeDetectContext *s = ctx->priv;
const AVPixFmtDescriptor *pix_desc = av_pix_fmt_desc_get(inlink->format);

s->bitdepth = pix_desc->comp[0].depth;

for (int plane = 0; plane < 4; plane++) {
ptrdiff_t line_size = av_image_get_linesize(inlink->format, inlink->w, plane);
s->width[plane] = line_size >> (s->bitdepth > 8);
s->height[plane] = inlink->h >> ((plane == 1 || plane == 2) ? pix_desc->log2_chroma_h : 0);
}

s->sad = ff_scene_sad_get_fn(s->bitdepth == 8 ? 8 : 16);
if (!s->sad)
return AVERROR(EINVAL);

return 0;
}