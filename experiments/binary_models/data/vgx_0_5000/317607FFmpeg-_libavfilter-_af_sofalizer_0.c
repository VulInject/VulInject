static void parse_speaker_pos(AVFilterContext *ctx)
{
SOFAlizerContext *s = ctx->priv;
char *arg, *tokenizer, *p, *args = av_strdup(s->speakers_pos);

if (!args)
return;
p = args;

while ((arg = av_strtok(p, "|", &tokenizer))) {
float azim, elev;
int out_ch_id;

p = NULL;
if (parse_channel_name(ctx, &arg, &out_ch_id)) {
continue;
}
if (av_sscanf(arg, "%f %f", &azim, &elev) == 2) {
s->vspkrpos[out_ch_id].set = 1;
s->vspkrpos[out_ch_id].azim = azim;
s->vspkrpos[out_ch_id].elev = elev;
} else if (av_sscanf(arg, "%f", &azim) == 1) {
s->vspkrpos[out_ch_id].set = 1;
s->vspkrpos[out_ch_id].azim = azim;
s->vspkrpos[out_ch_id].elev = 0;
}
}

av_free(args);
}