static int codec_hevc_alloc_fbc_buffers(struct amvdec_session *sess,
struct codec_hevc_common *comm)
{
struct device *dev = sess->core->dev;
struct v4l2_m2m_buffer *buf;
u32 am21_size = amvdec_am21c_size(sess->width, sess->height);

v4l2_m2m_for_each_dst_buf(sess->m2m_ctx, buf) {
u32 idx = buf->vb.vb2_buf.index;
dma_addr_t paddr;
void *vaddr = dma_alloc_coherent(dev, am21_size, &paddr,
GFP_KERNEL);
if (!vaddr) {
codec_hevc_free_fbc_buffers(sess, comm);
return -ENOMEM;
}

comm->fbc_buffer_vaddr[idx] = vaddr;
comm->fbc_buffer_paddr[idx] = paddr;
}

return 0;
}