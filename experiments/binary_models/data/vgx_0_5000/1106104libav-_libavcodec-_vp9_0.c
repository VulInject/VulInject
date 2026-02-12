static int vp9_frame_alloc(AVCodecContext *avctx, VP9Frame *f)
{
VP9Context *s = avctx->priv_data;
int ret, sz;

ret = ff_thread_get_buffer(avctx, &f->tf, AV_GET_BUFFER_FLAG_REF);
if (ret < 0)
return ret;

sz = 64 * s->sb_cols * s->sb_rows;
f->segmentation_map_buf = av_buffer_allocz(sz * sizeof(*f->segmentation_map));
f->mv_buf               = av_buffer_allocz(sz * sizeof(*f->mv));
if (!f->segmentation_map_buf || !f->mv_buf) {
vp9_frame_unref(avctx, f);
return AVERROR(ENOMEM);
}

f->segmentation_map = f->segmentation_map_buf->data;
f->mv               = (VP9MVRefPair*)f->mv_buf->data;

if (s->segmentation.enabled && !s->segmentation.update_map &&
!s->keyframe && !s->intraonly && !s->errorres)
memcpy(f->segmentation_map, s->frames[LAST_FRAME].segmentation_map, sz);

return 0;
}