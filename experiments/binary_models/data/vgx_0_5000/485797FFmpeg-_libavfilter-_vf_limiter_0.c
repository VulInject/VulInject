static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
LimiterContext *s = ctx->priv;
ThreadData *td = arg;
AVFrame *in = td->in;
AVFrame *out = td->out;
int p;

for (p = 0; p < s->nb_planes; p++) {
const int h = s->height[p];
const int slice_start = (h * jobnr) / nb_jobs;
const int slice_end = (h * (jobnr+1)) / nb_jobs;

if (!((1 << p) & s->planes)) {
if (out != in)
av_image_copy_plane(out->data[p] + slice_start * out->linesize[p],
out->linesize[p],
in->data[p] + slice_start * in->linesize[p],
in->linesize[p],
s->linesize[p], slice_end - slice_start);
continue;
}

s->dsp.limiter(in->data[p] + slice_start * in->linesize[p],
out->data[p] + slice_start * out->linesize[p],
in->linesize[p], out->linesize[p],
s->width[p], slice_end - slice_start,
s->min, s->max);
}

return 0;
}