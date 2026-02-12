static int tracing_buffers_release(struct inode *inode, struct file *file);
static ssize_t tracing_buffers_splice_read(struct file *file, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len, unsigned int flags);

static int snapshot_raw_open(struct inode *inode, struct file *filp)
{
struct ftrace_buffer_info *info;
int ret;


ret = tracing_buffers_open(inode, filp);
if (ret < 0)
return ret;

info = filp->private_data;

if (info->iter.trace->use_max_tr) {
tracing_buffers_release(inode, filp);
return -EBUSY;
}

info->iter.snapshot = true;
info->iter.array_buffer = &info->iter.tr->max_buffer;

return ret;
}