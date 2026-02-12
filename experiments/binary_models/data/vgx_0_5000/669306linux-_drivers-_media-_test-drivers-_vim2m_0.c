static int vim2m_buf_prepare(struct vb2_buffer *vb)
{
struct vim2m_ctx *ctx = vb2_get_drv_priv(vb->vb2_queue);
struct vim2m_q_data *q_data;

dprintk(ctx->dev, 2, "type: %s\n", type_name(vb->vb2_queue->type));

q_data = get_q_data(ctx, vb->vb2_queue->type);
if (!q_data)
return -EINVAL;
if (vb2_plane_size(vb, 0) < q_data->sizeimage) {
dprintk(ctx->dev, 1,
"%s data will not fit into plane (%lu < %lu)\n",
__func__, vb2_plane_size(vb, 0),
(long)q_data->sizeimage);
return -EINVAL;
}

vb2_set_plane_payload(vb, 0, q_data->sizeimage);

return 0;
}