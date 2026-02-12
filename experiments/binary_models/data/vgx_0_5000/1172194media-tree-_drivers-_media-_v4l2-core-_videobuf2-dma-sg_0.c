static int vb2_dma_sg_mmap(void *buf_priv, struct vm_area_struct *vma)
{
struct vb2_dma_sg_buf *buf = buf_priv;
unsigned long uaddr = vma->vm_start;
unsigned long usize = vma->vm_end - vma->vm_start;
int i = 0;

if (!buf) {
printk(KERN_ERR "No memory to map\n");
return -EINVAL;
}

do {
int ret;

ret = vm_insert_page(vma, uaddr, buf->pages[i++]);
if (ret) {
printk(KERN_ERR "Remapping memory, error: %d\n", ret);
return ret;
}

uaddr += PAGE_SIZE;
usize -= PAGE_SIZE;
} while (usize > 0);



vma->vm_private_data	= &buf->handler;
vma->vm_ops		= &vb2_common_vm_ops;

vma->vm_ops->open(vma);

return 0;
}





struct vb2_dma_sg_attachment {
struct sg_table sgt;
enum dma_data_direction dma_dir;
};