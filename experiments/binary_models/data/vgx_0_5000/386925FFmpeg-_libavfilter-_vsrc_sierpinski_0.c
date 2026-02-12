static void draw_sierpinski(AVFilterContext *ctx, AVFrame *frame)
{
SierpinskiContext *s = ctx->priv;
AVFilterLink *outlink = ctx->outputs[0];

if (s->pos_x == s->dest_x && s->pos_y == s->dest_y) {
unsigned int rnd = av_lfg_get(&s->lfg);
int mod = 2 * s->jump + 1;

s->dest_x += (int)((rnd & 0xffff) % mod) - s->jump;
s->dest_y += (int)((rnd >>    16) % mod) - s->jump;
} else {
if (s->pos_x < s->dest_x)
s->pos_x++;
else if (s->pos_x > s->dest_x)
s->pos_x--;

if (s->pos_y < s->dest_y)
s->pos_y++;
else if (s->pos_y > s->dest_y)
s->pos_y--;
}

ff_filter_execute(ctx, s->draw_slice, frame, NULL,
FFMIN(outlink->h, ff_filter_get_nb_threads(ctx)));
}