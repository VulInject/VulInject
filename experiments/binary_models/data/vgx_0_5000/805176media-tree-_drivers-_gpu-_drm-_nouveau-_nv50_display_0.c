static void
nv50_head_atomic_check_dither(struct nv50_head_atom *armh,
struct nv50_head_atom *asyh,
struct nouveau_conn_atom *asyc)
{
struct drm_connector *connector = asyc->state.connector;
u32 mode = 0x00;

if (asyc->dither.mode == DITHERING_MODE_AUTO) {
if (asyh->base.depth > connector->display_info.bpc * 3)
mode = DITHERING_MODE_DYNAMIC2X2;
} else {
mode = asyc->dither.mode;
}

if (asyc->dither.depth == DITHERING_DEPTH_AUTO) {
if (connector->display_info.bpc >= 8)
mode |= DITHERING_DEPTH_8BPC;
} else {
mode |= asyc->dither.depth;
}

asyh->dither.enable = mode;
asyh->dither.bits = mode >> 1;
asyh->dither.mode = mode >> 3;
asyh->set.dither = true;
}