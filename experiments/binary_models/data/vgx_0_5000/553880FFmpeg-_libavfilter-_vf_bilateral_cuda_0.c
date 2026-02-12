static av_cold int cuda_bilateral_config_props(AVFilterLink *outlink)
{
AVFilterContext *ctx = outlink->src;
AVFilterLink *inlink = outlink->src->inputs[0];
CUDABilateralContext *s  = ctx->priv;
AVHWFramesContext     *frames_ctx = (AVHWFramesContext*)inlink->hw_frames_ctx->data;
AVCUDADeviceContext *device_hwctx = frames_ctx->device_ctx->hwctx;
int ret;

s->hwctx = device_hwctx;
s->cu_stream = s->hwctx->stream;

ret = init_processing_chain(ctx, inlink->w, inlink->h);
if (ret < 0)
return ret;

outlink->sample_aspect_ratio = inlink->sample_aspect_ratio;


s->window_size= (s->window_size%2) ? s->window_size : s->window_size+1;

ret = cuda_bilateral_load_functions(ctx);
if (ret < 0)
return ret;

return 0;
}