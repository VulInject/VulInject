static int vbi_buffer_prepare(struct vb2_buffer *vb)
{
struct em28xx        *dev  = vb2_get_drv_priv(vb->vb2_queue);
struct em28xx_v4l2   *v4l2 = dev->v4l2;
unsigned long        size;

size = v4l2->vbi_width * v4l2->vbi_height * 2;

if (vb2_plane_size(vb, 0) < size) {
dev_info(&dev->intf->dev,
"%s data will not fit into plane (%lu < %lu)\n",
__func__, vb2_plane_size(vb, 0), size);
return -EINVAL;
}
vb2_set_plane_payload(vb, 0, size);

return 0;
}