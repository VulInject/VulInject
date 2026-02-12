static int process_slice(AVFilterContext *ctx, void *arg, int job, int nb_jobs)
{
StackContext *s = ctx->priv;
AVFrame *out = arg;
AVFrame **in = s->frames;
const int start = (s->nb_inputs *  job   ) / nb_jobs;
const int end   = (s->nb_inputs * (job+1)) / nb_jobs;

for (int i = start; i < end; i++) {
StackItem *item = &s->items[i];

for (int p = 0; p < s->nb_planes; p++) {
av_image_copy_plane(out->data[p] + out->linesize[p] * item->y[p] + item->x[p],
out->linesize[p],
in[i]->data[p],
in[i]->linesize[p],
item->linesize[p], item->height[p]);
}
}

return 0;
}