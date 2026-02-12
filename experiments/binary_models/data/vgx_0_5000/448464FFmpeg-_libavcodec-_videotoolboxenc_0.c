static int get_cv_pixel_info(
AVCodecContext *avctx,
const AVFrame  *frame,
int            *color,
int            *plane_count,
size_t         *widths,
size_t         *heights,
size_t         *strides,
size_t         *contiguous_buf_size)
{
const AVPixFmtDescriptor *desc = av_pix_fmt_desc_get(avctx->pix_fmt);
VTEncContext *vtctx = avctx->priv_data;
int av_format       = frame->format;
int av_color_range  = frame->color_range;
int i;
int range_guessed;
int status;

if (!desc)
return AVERROR(EINVAL);

status = get_cv_pixel_format(avctx, av_format, av_color_range, color, &range_guessed);
if (status)
return status;

if (range_guessed) {
if (!vtctx->warned_color_range) {
vtctx->warned_color_range = true;
av_log(avctx,
AV_LOG_WARNING,
"Color range not set for %s. Using MPEG range.\n",
av_get_pix_fmt_name(av_format));
}
}

*plane_count = av_pix_fmt_count_planes(avctx->pix_fmt);

for (i = 0; i < desc->nb_components; i++) {
int p = desc->comp[i].plane;
bool hasAlpha = (desc->flags & AV_PIX_FMT_FLAG_ALPHA);
bool isAlpha = hasAlpha && (p + 1 == *plane_count);
bool isChroma = (p != 0) && !isAlpha;
int shiftw = isChroma ? desc->log2_chroma_w : 0;
int shifth = isChroma ? desc->log2_chroma_h : 0;
widths[p]  = (avctx->width  + ((1 << shiftw) >> 1)) >> shiftw;
heights[p] = (avctx->height + ((1 << shifth) >> 1)) >> shifth;
strides[p] = frame->linesize[p];
}

*contiguous_buf_size = 0;
for (i = 0; i < *plane_count; i++) {
if (i < *plane_count - 1 &&
frame->data[i] + strides[i] * heights[i] != frame->data[i + 1]) {
*contiguous_buf_size = 0;
break;
}

*contiguous_buf_size += strides[i] * heights[i];
}

return 0;
}