static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
{
AudioNEqualizerContext *s = ctx->priv;
AVFilterLink *inlink = ctx->inputs[0];
int ret = AVERROR(ENOSYS);

if (!strcmp(cmd, "change")) {
double freq, width, gain;
int filter;

if (sscanf(args, "%d|f=%lf|w=%lf|g=%lf", &filter, &freq, &width, &gain) != 4)
return AVERROR(EINVAL);

if (filter < 0 || filter >= s->nb_filters)
return AVERROR(EINVAL);

if (freq < 0 || freq > inlink->sample_rate / 2.0)
return AVERROR(EINVAL);

s->filters[filter].freq  = freq;
s->filters[filter].width = width;
s->filters[filter].gain  = gain;
equalizer(&s->filters[filter], inlink->sample_rate);
if (s->draw_curves)
draw_curves(ctx, inlink, s->video);

ret = 0;
}

return ret;
}