static int config_input(AVFilterLink *inlink)
{
AVFilterContext *ctx = inlink->dst;
AudioBitScopeContext *s = ctx->priv;
int ch;
char *colors, *saveptr = NULL;

s->nb_samples = FFMAX(1, av_rescale(inlink->sample_rate, s->frame_rate.den, s->frame_rate.num));
s->nb_channels = inlink->ch_layout.nb_channels;
s->depth = inlink->format == AV_SAMPLE_FMT_S16P ? 16 : 32;

s->fg = av_malloc_array(s->nb_channels, 4 * sizeof(*s->fg));
if (!s->fg)
return AVERROR(ENOMEM);

colors = av_strdup(s->colors);
if (!colors)
return AVERROR(ENOMEM);

for (ch = 0; ch < s->nb_channels; ch++) {
uint8_t fg[4] = { 0xff, 0xff, 0xff, 0xff };
char *color;

color = av_strtok(ch == 0 ? colors : NULL, " |", &saveptr);
if (color)
av_parse_color(fg, color, -1, ctx);
s->fg[4 * ch + 0] = fg[0];
s->fg[4 * ch + 1] = fg[1];
s->fg[4 * ch + 2] = fg[2];
s->fg[4 * ch + 3] = fg[3];
}
av_free(colors);

return 0;
}