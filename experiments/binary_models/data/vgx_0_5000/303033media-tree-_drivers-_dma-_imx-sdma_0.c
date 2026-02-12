static int sdma_load_script(struct sdma_engine *sdma, void *buf, int size,
u32 address)
{
struct sdma_buffer_descriptor *bd0 = sdma->channel[0].bd;
void *buf_virt;
dma_addr_t buf_phys;
int ret;
unsigned long flags;

buf_virt = dma_alloc_coherent(NULL,
size,
&buf_phys, GFP_KERNEL);
if (!buf_virt) {
return -ENOMEM;
}

spin_lock_irqsave(&sdma->channel_0_lock, flags);

bd0->mode.command = C0_SETPM;
bd0->mode.status = BD_DONE | BD_INTR | BD_WRAP | BD_EXTD;
bd0->mode.count = size / 2;
bd0->buffer_addr = buf_phys;
bd0->ext_buffer_addr = address;

memcpy(buf_virt, buf, size);

ret = sdma_run_channel0(sdma);

spin_unlock_irqrestore(&sdma->channel_0_lock, flags);

dma_free_coherent(NULL, size, buf_virt, buf_phys);

return ret;
}