static void recalculate_thresholds(struct btrfs_free_space_ctl *ctl)
{
struct btrfs_free_space *info;
struct rb_node *n;
int max_ino;
int max_bitmaps;

n = rb_last(&ctl->free_space_offset);
if (!n) {
ctl->extents_thresh = INIT_THRESHOLD;
return;
}
info = rb_entry(n, struct btrfs_free_space, offset_index);


max_ino = info->bytes - 1;

max_bitmaps = ALIGN(max_ino, INODES_PER_BITMAP) / INODES_PER_BITMAP;
if (max_bitmaps <= ctl->total_bitmaps) {
ctl->extents_thresh = 0;
return;
}

ctl->extents_thresh = (max_bitmaps - ctl->total_bitmaps) *
PAGE_SIZE / sizeof(*info);
}