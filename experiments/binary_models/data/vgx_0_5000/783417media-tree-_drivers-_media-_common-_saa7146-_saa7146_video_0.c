static ssize_t video_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
{
struct saa7146_fh *fh = file->private_data;
struct saa7146_dev *dev = fh->dev;
struct saa7146_vv *vv = dev->vv_data;
ssize_t ret = 0;

DEB_EE("called\n");

if ((vv->video_status & STATUS_CAPTURE) != 0) {

if (vv->video_fh == fh) {
DEB_S("already capturing\n");
return -EBUSY;
}
DEB_S("already capturing in another open\n");
return -EBUSY;
}

ret = video_begin(fh);
if( 0 != ret) {
goto out;
}

ret = videobuf_read_one(&fh->video_q , data, count, ppos,
file->f_flags & O_NONBLOCK);
if (ret != 0) {
video_end(fh, file);
} else {
ret = video_end(fh, file);
}
out:

if (vv->ov_suspend != NULL) {
saa7146_start_preview(vv->ov_suspend);
vv->ov_suspend = NULL;
}

return ret;
}