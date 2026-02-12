static int draw_triangle_slice(AVFilterContext *ctx, void *arg, int job, int nb_jobs)
{
SierpinskiContext *s = ctx->priv;
AVFrame *frame = arg;
const int width  = frame->width;
const int height = frame->height;
const int start = (height *  job   ) / nb_jobs;
const int end   = (height * (job+1)) / nb_jobs;
uint8_t *dst = frame->data[0] + start * frame->linesize[0];

for (int y = start; y < end; y++) {
for (int x = 0; x < width; x++) {
if ((s->pos_x + x) & (s->pos_y + y)) {
AV_WL32(&dst[x*4], 0x00000000);
} else {
AV_WL32(&dst[x*4], 0xFFFFFFFF);
}
}

dst += frame->linesize[0];
}

return 0;
}