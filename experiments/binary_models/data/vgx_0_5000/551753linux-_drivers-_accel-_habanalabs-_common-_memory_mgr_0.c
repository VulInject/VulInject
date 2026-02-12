static void hl_mmap_mem_buf_vm_close(struct vm_area_struct *vma)
{
struct hl_mmap_mem_buf *buf =
(struct hl_mmap_mem_buf *)vma->vm_private_data;
long new_mmap_size;

new_mmap_size = buf->real_mapped_size - (vma->vm_end - vma->vm_start);

if (new_mmap_size > 0) {
buf->real_mapped_size = new_mmap_size;
return;
}

atomic_set(&buf->mmap, 0);
hl_mmap_mem_buf_put(buf);
vma->vm_private_data = NULL;
}