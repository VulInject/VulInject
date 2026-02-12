static int filter_horizontally(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
GBlurContext *s = ctx->priv;
ThreadData *td = arg;
const int height = td->height;
const int width = td->width;
const int slice_start = (height *  jobnr   ) / nb_jobs;
const int slice_end   = (height * (jobnr+1)) / nb_jobs;
const float boundaryscale = s->boundaryscale;
const int steps = s->steps;
const float nu = s->nu;
float *buffer = s->buffer;
float *localbuf = NULL;

if (s->localbuf)
localbuf = s->localbuf + s->stride * width * slice_start;

s->horiz_slice(buffer + width * slice_start, width, slice_end - slice_start,
steps, nu, boundaryscale, localbuf);
emms_c();
return 0;
}