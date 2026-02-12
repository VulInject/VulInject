static void vx2_dma_write(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
{
unsigned long port = vx2_reg_addr(chip, VX_DMA);
int offset = pipe->hw_ptr;
u32 *addr = (u32 *)(runtime->dma_area + offset);

if (snd_BUG_ON(count % 4))
return;

vx2_setup_pseudo_dma(chip, 1);


if (offset + count >= pipe->buffer_bytes) {
int length = pipe->buffer_bytes - offset;
count -= length;
length >>= 2; 

for (; length > 0; length--) {
outl(*addr, port);
addr++;
}
addr = (u32 *)runtime->dma_area;
pipe->hw_ptr = 0;
}
pipe->hw_ptr += count;
count >>= 2; 

for (; count > 0; count--) {
outl(*addr, port);
addr++;
}

vx2_release_pseudo_dma(chip);
}