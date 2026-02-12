
AVFILTER_DEFINE_CLASS(showpalette);

static int query_formats(AVFilterContext *ctx)
{
static const enum AVPixelFormat in_fmts[]  = {AV_PIX_FMT_PAL8,  AV_PIX_FMT_NONE};
static const enum AVPixelFormat out_fmts[] = {AV_PIX_FMT_RGB32, AV_PIX_FMT_NONE};
int ret = ff_formats_ref(ff_make_format_list(in_fmts),
&ctx->inputs[0]->outcfg.formats);
if (ret < 0)
return ret;

return ff_formats_ref(ff_make_format_list(out_fmts),
&ctx->outputs[0]->incfg.formats);
}