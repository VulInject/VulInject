static int vdpau_init_pixmfts(AVHWDeviceContext *ctx)
{
AVVDPAUDeviceContext *hwctx = ctx->hwctx;
VDPAUDeviceContext    *priv = ctx->internal->priv;
int i;

for (i = 0; i < FF_ARRAY_ELEMS(priv->pix_fmts); i++) {
const VDPAUPixFmtMap *map = vdpau_pix_fmts[i].map;
int nb_pix_fmts;

nb_pix_fmts = count_pixfmts(map);
priv->pix_fmts[i] = av_malloc_array(nb_pix_fmts + 1, sizeof(*priv->pix_fmts[i]));
if (!priv->pix_fmts[i])
return AVERROR(ENOMEM);

nb_pix_fmts = 0;
while (map->pix_fmt != AV_PIX_FMT_NONE) {
VdpBool supported;
VdpStatus err = priv->get_transfer_caps(hwctx->device, vdpau_pix_fmts[i].chroma_type,
map->vdpau_fmt, &supported);
if (err == VDP_STATUS_OK && supported)
priv->pix_fmts[i][nb_pix_fmts++] = map->pix_fmt;
map++;
}
priv->pix_fmts[i][nb_pix_fmts++] = AV_PIX_FMT_NONE;
priv->nb_pix_fmts[i]             = nb_pix_fmts;
}

return 0;
}