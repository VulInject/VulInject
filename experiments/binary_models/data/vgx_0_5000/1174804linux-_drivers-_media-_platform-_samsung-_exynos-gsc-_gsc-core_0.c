int gsc_g_fmt_mplane(struct gsc_ctx *ctx, struct v4l2_format *f)
{
struct gsc_frame *frame;
struct v4l2_pix_format_mplane *pix_mp;
int i;

frame = ctx_get_frame(ctx, f->type);
if (IS_ERR(frame))
return PTR_ERR(frame);

pix_mp = &f->fmt.pix_mp;

pix_mp->width		= frame->f_width;
pix_mp->height		= frame->f_height;
pix_mp->field		= V4L2_FIELD_NONE;
pix_mp->pixelformat	= frame->fmt->pixelformat;
pix_mp->num_planes	= frame->fmt->num_planes;
pix_mp->colorspace = ctx->out_colorspace;

for (i = 0; i < pix_mp->num_planes; ++i) {
pix_mp->plane_fmt[i].bytesperline = (frame->f_width *
frame->fmt->depth[i]) / 8;
pix_mp->plane_fmt[i].sizeimage =
pix_mp->plane_fmt[i].bytesperline * frame->f_height;
}

return 0;
}