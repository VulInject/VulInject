static irqreturn_t skeleton_irq(int irq, void *dev_id)
{
struct skeleton *skel = dev_id;




if (captured_new_frame) {
...
spin_lock(&skel->qlock);
list_del(&new_buf->list);
spin_unlock(&skel->qlock);
v4l2_get_timestamp(&new_buf->vb.v4l2_buf.timestamp);
new_buf->vb.v4l2_buf.sequence = skel->sequence++;
new_buf->vb.v4l2_buf.field = skel->field;
if (skel->format.field == V4L2_FIELD_ALTERNATE) {
if (skel->field == V4L2_FIELD_BOTTOM)
skel->field = V4L2_FIELD_TOP;
else if (skel->field == V4L2_FIELD_TOP)
skel->field = V4L2_FIELD_BOTTOM;
}
vb2_buffer_done(&new_buf->vb, VB2_BUF_STATE_DONE);
}
return IRQ_HANDLED;
}