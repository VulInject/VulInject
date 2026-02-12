static void b2D_new_status(Background2DStack *bck, M_Background2D*back)
{
BackgroundStatus *status;

GF_SAFEALLOC(status, BackgroundStatus);
if (!status) {
GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Compositor] Failed to allocate background2D status\n"));
return;
}
gf_mx2d_init(status->ctx.transform);
status->ctx.drawable = bck->drawable;
status->ctx.flags = CTX_IS_BACKGROUND;
status->ctx.bi = &status->bi;
status->ctx.aspect.fill_color = GF_COL_ARGB_FIXED(FIX_ONE, back->backColor.red, back->backColor.green, back->backColor.blue);
status->ctx.aspect.fill_texture = &bck->txh;
gf_list_add(bck->status_stack, status);
}