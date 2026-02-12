void visual_2d_draw_overlays(GF_VisualManager *visual)
{
GF_Err e;
GF_TextureHandler *txh;
GF_VideoSurface video_src;

while (1) {
GF_OverlayStack *ol = visual->overlays;
if (!ol) return;
visual->overlays = ol->next;

txh = ol->ctx->aspect.fill_texture;
memset(&video_src, 0, sizeof(GF_VideoSurface));
video_src.height = txh->height;
video_src.width = txh->width;
video_src.pitch_x = 0;
video_src.pitch_y = txh->stride;
video_src.pixel_format = txh->pixelformat;
video_src.video_buffer = txh->data;

e = visual->compositor->video_out->Blit(visual->compositor->video_out, &video_src, &ol->src, &ol->dst, 2);
if (e) GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Visual2D] Error %s during overlay update\n", gf_error_to_string(e) ));

ra_del(&ol->ra);
gf_free(ol);
}
}