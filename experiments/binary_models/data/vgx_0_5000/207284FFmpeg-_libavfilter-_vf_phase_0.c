static int config_input(AVFilterLink *inlink)
{
PhaseContext *s = inlink->dst->priv;
const AVPixFmtDescriptor *desc = av_pix_fmt_desc_get(inlink->format);
int ret;

switch (desc->comp[0].depth) {
case  8: s->analyze_plane = analyze_plane_8;  break;
case  9: s->analyze_plane = analyze_plane_9;  break;
case 10: s->analyze_plane = analyze_plane_10; break;
case 12: s->analyze_plane = analyze_plane_12; break;
case 14: s->analyze_plane = analyze_plane_14; break;
case 16: s->analyze_plane = analyze_plane_16; break;
default: av_assert0(0);
};

if ((ret = av_image_fill_linesizes(s->linesize, inlink->format, inlink->w)) < 0)
return ret;

s->planeheight[1] = s->planeheight[2] = AV_CEIL_RSHIFT(inlink->h, desc->log2_chroma_h);
s->planeheight[0] = s->planeheight[3] = inlink->h;

s->nb_planes = av_pix_fmt_count_planes(inlink->format);

return 0;
}