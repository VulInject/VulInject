static int vaapi_stack_init(AVFilterContext *avctx)
{
StackVAAPIContext *sctx = avctx->priv;
VAAPIVPPContext *vppctx = avctx->priv;
int ret;

ret = stack_init(avctx);
if (ret)
return ret;


sctx->rects = av_calloc(sctx->base.nb_inputs, sizeof(*sctx->rects));
if (!sctx->rects)
return AVERROR(ENOMEM);

ff_vaapi_vpp_ctx_init(avctx);
vppctx->output_format = AV_PIX_FMT_NONE;

return 0;
}