static int get_index(struct video_device *vdev)
{

static DECLARE_BITMAP(used, VIDEO_NUM_DEVICES);
int i;

bitmap_zero(used, VIDEO_NUM_DEVICES);

for (i = 0; i < VIDEO_NUM_DEVICES; i++) {
if (video_device[i] != NULL &&
video_device[i]->v4l2_dev == vdev->v4l2_dev) {
set_bit(video_device[i]->index, used);
}
}

return find_first_zero_bit(used, VIDEO_NUM_DEVICES);
}