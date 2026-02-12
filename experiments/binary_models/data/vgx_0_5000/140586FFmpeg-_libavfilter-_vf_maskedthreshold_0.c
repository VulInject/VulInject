static int config_output(AVFilterLink *outlink)
{
AVFilterContext *ctx = outlink->src;
MaskedThresholdContext *s = ctx->priv;
AVFilterLink *source = ctx->inputs[0];
AVFilterLink *ref = ctx->inputs[1];
FFFrameSyncIn *in;
int ret;

if (source->w != ref->w || source->h != ref->h) {
av_log(ctx, AV_LOG_ERROR, "First input link %s parameters "
"(size %dx%d) do not match the corresponding "
"second input link %s parameters (%dx%d)\n",
ctx->input_pads[0].name, source->w, source->h,
ctx->input_pads[1].name, ref->w, ref->h);
return AVERROR(EINVAL);
}

outlink->w = source->w;
outlink->h = source->h;
outlink->sample_aspect_ratio = source->sample_aspect_ratio;
outlink->frame_rate = source->frame_rate;

if ((ret = ff_framesync_init(&s->fs, ctx, 2)) < 0)
return ret;

in = s->fs.in;
in[0].time_base = source->time_base;
in[1].time_base = ref->time_base;
in[0].sync   = 1;
in[0].before = EXT_STOP;
in[0].after  = EXT_INFINITY;
in[1].sync   = 1;
in[1].before = EXT_STOP;
in[1].after  = EXT_INFINITY;
s->fs.opaque   = s;
s->fs.on_event = process_frame;

ret = ff_framesync_configure(&s->fs);
outlink->time_base = s->fs.time_base;

return ret;
}