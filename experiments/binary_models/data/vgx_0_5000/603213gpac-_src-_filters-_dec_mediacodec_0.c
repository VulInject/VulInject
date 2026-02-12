static void mcdec_hw_del(GF_Filter *filter, GF_FilterPid *pid, GF_FilterPacket *pck)
{
GF_FilterFrameInterface *frame_ifce = (GF_FilterFrameInterface *) gf_filter_pck_get_frame_interface(pck);
GF_MCDecFrame *f = frame_ifce ? frame_ifce->user_data : NULL;
if (!f) return;

if (f->ctx->codec && !f->flushed)  {
if ( AMediaCodec_releaseOutputBuffer(f->ctx->codec, f->outIndex, GF_FALSE) != AMEDIA_OK) {
GF_LOG(GF_LOG_ERROR, GF_LOG_CODEC, ("[MCDec] NOT Release Output Buffer Index: %d\n", f->outIndex));
}
}
f->ctx->decoded_frames_pending--;
gf_list_add(f->ctx->frames_res, f);
}