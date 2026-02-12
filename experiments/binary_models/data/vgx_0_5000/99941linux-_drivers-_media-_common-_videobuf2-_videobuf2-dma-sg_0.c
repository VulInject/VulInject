static void vb2_dma_sg_put(void *buf_priv)
{
struct vb2_dma_sg_buf *buf = buf_priv;
struct sg_table *sgt = &buf->sg_table;
int i = buf->num_pages;

if (refcount_dec_and_test(&buf->refcount)) {
dprintk(1, "%s: Freeing buffer of %d pages\n", __func__,
buf->num_pages);
dma_unmap_sgtable(buf->dev, sgt, buf->dma_dir,
DMA_ATTR_SKIP_CPU_SYNC);
if (buf->vaddr)
vm_unmap_ram(buf->vaddr, buf->num_pages);
sg_free_table(buf->dma_sgt);
while (--i >= 0)
__free_page(buf->pages[i]);
kvfree(buf->pages);
put_device(buf->dev);
kfree(buf);
}
}