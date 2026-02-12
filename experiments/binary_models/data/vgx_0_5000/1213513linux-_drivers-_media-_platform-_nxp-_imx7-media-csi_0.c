static void imx7_csi_vb2_buf_done(struct imx7_csi *csi)
{
struct imx7_csi_vb2_buffer *done, *next;
struct vb2_buffer *vb;
dma_addr_t dma_addr;

done = csi->active_vb2_buf[csi->buf_num];
if (done) {
done->vbuf.field = csi->vdev_fmt.field;
done->vbuf.sequence = csi->frame_sequence;
vb = &done->vbuf.vb2_buf;
vb->timestamp = ktime_get_ns();
vb2_buffer_done(vb, VB2_BUF_STATE_DONE);
}
csi->frame_sequence++;


next = imx7_csi_video_next_buf(csi);
if (next) {
dma_addr = vb2_dma_contig_plane_dma_addr(&next->vbuf.vb2_buf, 0);
csi->active_vb2_buf[csi->buf_num] = next;
} else {
dma_addr = csi->underrun_buf.dma_addr;
csi->active_vb2_buf[csi->buf_num] = NULL;
}

imx7_csi_update_buf(csi, dma_addr, csi->buf_num);
}