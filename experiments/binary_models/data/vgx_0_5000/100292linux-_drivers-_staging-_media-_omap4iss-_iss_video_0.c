static unsigned int iss_video_mbus_to_pix(const struct iss_video *video,
const struct v4l2_mbus_framefmt *mbus,
struct v4l2_pix_format *pix)
{
unsigned int bpl = pix->bytesperline;
unsigned int min_bpl;
unsigned int i;

memset(pix, 0, sizeof(*pix));
pix->width = mbus->width;
pix->height = mbus->height;


for (i = 0; i < ARRAY_SIZE(formats) - 1; ++i) {
if (formats[i].code == mbus->code)
break;
}

min_bpl = pix->width * ALIGN(formats[i].bpp, 8) / 8;


if (video->bpl_max)
bpl = clamp(bpl, min_bpl, video->bpl_max);
else
bpl = min_bpl;

if (!video->bpl_zero_padding || bpl != min_bpl)
bpl = ALIGN(bpl, video->bpl_alignment);

pix->pixelformat = formats[i].pixelformat;
pix->bytesperline = bpl;
pix->sizeimage = pix->bytesperline * pix->height;
pix->colorspace = mbus->colorspace;
pix->field = mbus->field;


if (pix->pixelformat == V4L2_PIX_FMT_NV12)
pix->sizeimage += (pix->bytesperline * pix->height) / 2;

return bpl - min_bpl;
}