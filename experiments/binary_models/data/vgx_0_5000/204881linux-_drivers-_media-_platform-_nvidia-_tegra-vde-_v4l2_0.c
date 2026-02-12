static int tegra_try_coded_fmt(struct file *file, void *priv,
struct v4l2_format *f)
{
struct v4l2_pix_format_mplane *pix_mp = &f->fmt.pix_mp;
struct tegra_ctx *ctx = fh_to_tegra_ctx(priv);
const struct tegra_vde_soc *soc = ctx->vde->soc;
int size = pix_mp->plane_fmt[0].sizeimage;
const struct tegra_coded_fmt_desc *desc;

desc = tegra_find_coded_fmt_desc(ctx, pix_mp->pixelformat);
if (!desc) {
pix_mp->pixelformat = soc->coded_fmts[0].fourcc;
desc = &soc->coded_fmts[0];
}

v4l2_apply_frmsize_constraints(&pix_mp->width,
&pix_mp->height,
&desc->frmsize);

pix_mp->plane_fmt[0].sizeimage = max(ALIGN(size, SXE_BUFFER), SZ_2M);
pix_mp->field = V4L2_FIELD_NONE;
pix_mp->num_planes = 1;

return 0;
}