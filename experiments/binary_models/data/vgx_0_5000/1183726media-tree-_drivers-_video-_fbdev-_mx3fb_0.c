static int mx3fb_map_video_memory(struct fb_info *fbi, unsigned int mem_len,
bool lock)
{
int retval = 0;
dma_addr_t addr;

fbi->screen_base = dma_alloc_wc(fbi->device, mem_len, &addr,
GFP_DMA | GFP_KERNEL);

if (!fbi->screen_base) {
dev_err(fbi->device, "Cannot allocate %u bytes framebuffer memory\n",
mem_len);
retval = -EBUSY;
goto err0;
}

if (lock)
mutex_lock(&fbi->mm_lock);
fbi->fix.smem_start = addr;
fbi->fix.smem_len = mem_len;
if (lock)
mutex_unlock(&fbi->mm_lock);

dev_dbg(fbi->device, "allocated fb @ p=0x%08x, v=0x%p, size=%d.\n",
(uint32_t) fbi->fix.smem_start, fbi->screen_base, fbi->fix.smem_len);

fbi->screen_size = fbi->fix.smem_len;


memset((char *)fbi->screen_base, 0, fbi->fix.smem_len);

return 0;

err0:
fbi->fix.smem_len = 0;
fbi->fix.smem_start = 0;
fbi->screen_base = NULL;
return retval;
}