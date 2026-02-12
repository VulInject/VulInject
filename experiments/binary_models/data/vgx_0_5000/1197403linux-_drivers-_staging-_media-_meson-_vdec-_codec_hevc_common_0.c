static int codec_hevc_alloc_mmu_headers(struct amvdec_session *sess,
struct codec_hevc_common *comm)
{
struct device *dev = sess->core->dev;
struct v4l2_m2m_buffer *buf;

comm->mmu_map_vaddr = dma_alloc_coherent(dev, MMU_MAP_SIZE,
&comm->mmu_map_paddr,
GFP_KERNEL);
if (!comm->mmu_map_vaddr)
return -ENOMEM;

v4l2_m2m_for_each_dst_buf(sess->m2m_ctx, buf) {
u32 idx = buf->vb.vb2_buf.index;
dma_addr_t paddr;
void *vaddr = dma_alloc_coherent(dev, MMU_COMPRESS_HEADER_SIZE,
&paddr, GFP_KERNEL);
if (!vaddr) {
codec_hevc_free_mmu_headers(sess, comm);
return -ENOMEM;
}

comm->mmu_header_vaddr[idx] = vaddr;
comm->mmu_header_paddr[idx] = paddr;
}

return 0;
}