static AVBufferRef *qsv_create_mids(AVBufferRef *hw_frames_ref)
{
AVHWFramesContext    *frames_ctx = (AVHWFramesContext*)hw_frames_ref->data;
AVQSVFramesContext *frames_hwctx = frames_ctx->hwctx;
int                  nb_surfaces = frames_hwctx->nb_surfaces;

AVBufferRef *mids_buf, *hw_frames_ref1;
QSVMid *mids;
int i;

hw_frames_ref1 = av_buffer_ref(hw_frames_ref);
if (!hw_frames_ref1)
return NULL;

mids = av_mallocz_array(nb_surfaces, sizeof(*mids));
if (!mids) {
av_buffer_unref(&hw_frames_ref1);
return NULL;
}

mids_buf = av_buffer_create((uint8_t*)mids, nb_surfaces * sizeof(*mids),
mids_buf_free, hw_frames_ref1, 0);
if (!mids_buf) {
av_buffer_unref(&hw_frames_ref1);
av_freep(&mids);
return NULL;
}

for (i = 0; i < nb_surfaces; i++) {
QSVMid *mid = &mids[i];
mid->handle        = frames_hwctx->surfaces[i].Data.MemId;
mid->hw_frames_ref = hw_frames_ref1;
}

return mids_buf;
}