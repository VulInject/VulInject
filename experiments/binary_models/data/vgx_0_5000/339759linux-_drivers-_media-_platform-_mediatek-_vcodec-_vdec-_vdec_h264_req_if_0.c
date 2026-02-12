static int alloc_mv_buf(struct vdec_h264_slice_inst *inst,
struct vdec_pic_info *pic)
{
int i;
int err;
struct mtk_vcodec_mem *mem = NULL;
unsigned int buf_sz = mtk_vdec_h264_get_mv_buf_size(pic->buf_w, pic->buf_h);

mtk_v4l2_debug(3, "size = 0x%x", buf_sz);
for (i = 0; i < H264_MAX_MV_NUM; i++) {
mem = &inst->mv_buf[i];
if (mem->va)
mtk_vcodec_mem_free(inst->ctx, mem);
mem->size = buf_sz;
err = mtk_vcodec_mem_alloc(inst->ctx, mem);
if (err) {
mtk_vcodec_err(inst, "failed to allocate mv buf");
return err;
}
inst->vsi_ctx.mv_buf_dma[i] = mem->dma_addr;
}

return 0;
}