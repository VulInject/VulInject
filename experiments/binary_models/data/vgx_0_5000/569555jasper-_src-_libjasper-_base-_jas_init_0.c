static int jas_init_codecs(jas_ctx_t *ctx)
{
int ret = 0;
int i;
const jas_image_fmt_t *fmt;
for (fmt = jas_global.conf.image_formats, i = 0;
i < jas_global.conf.num_image_formats; ++fmt, ++i) {
JAS_LOGDEBUGF(10, "adding image format %s %s\n", fmt->name, fmt->exts);
if (jas_image_addfmt_internal(ctx->image_fmtinfos, &ctx->image_numfmts,
i, fmt->name, fmt->exts, fmt->desc, &fmt->ops)) {
ret = -1;
break;
}
assert(ctx->image_fmtinfos[i].id == i);
ctx->image_fmtinfos[i].enabled = fmt->enabled;
}
if (ret) {
jas_image_clearfmts_internal(ctx->image_fmtinfos, &ctx->image_numfmts);
}
return ret;
}