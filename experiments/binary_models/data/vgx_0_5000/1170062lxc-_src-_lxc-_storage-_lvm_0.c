bool lvm_create_snapshot(struct lxc_conf *conf, struct lxc_storage *orig,
struct lxc_storage *new, uint64_t newsize)
{
int ret;
const char *newsrc;
uint64_t size = newsize;

if (is_blktype(orig)) {
if (!newsize && blk_getsize(orig, &size) < 0) {
ERROR("Failed to detect size of logical volume \"%s\"",
orig->src);
return -1;
}
} else if (!newsize) {
size = DEFAULT_FS_SIZE;
}

newsrc = lxc_storage_get_path(new->src, "lvm");

ret = lvm_snapshot(orig, newsrc, size);
if (ret < 0) {
ERROR("Failed to create lvm \"%s\" snapshot of \"%s\"",
new->src, orig->src);
return false;
}

TRACE("Created lvm snapshot \"%s\" from \"%s\"", new->dest, orig->dest);
return true;
}