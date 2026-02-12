}
EXPORT_SYMBOL_GPL(vb2_core_streamoff);


static int __find_plane_by_offset(struct vb2_queue *q, unsigned long off,
unsigned int *_buffer, unsigned int *_plane)
{
struct vb2_buffer *vb;
unsigned int buffer, plane;


lockdep_assert_held(&q->mmap_lock);

if (q->memory != VB2_MEMORY_MMAP) {
dprintk(q, 1, "queue is not currently set up for mmap\n");
return -EINVAL;
}

if (vb2_fileio_is_active(q)) {
dprintk(q, 1, "file io in progress\n");
return -EBUSY;
}


for (buffer = 0; buffer < q->num_buffers; ++buffer) {
vb = q->bufs[buffer];

for (plane = 0; plane < vb->num_planes; ++plane) {
if (vb->planes[plane].m.offset == off) {
*_buffer = buffer;
*_plane = plane;
return 0;
}
}
}

return -EINVAL;
}