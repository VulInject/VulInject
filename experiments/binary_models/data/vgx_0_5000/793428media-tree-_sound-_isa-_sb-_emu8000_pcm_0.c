static int emu8k_pcm_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw_params)
{
struct snd_emu8k_pcm *rec = subs->runtime->private_data;

if (rec->block) {

snd_util_mem_free(rec->emu->memhdr, rec->block);
rec->block = NULL;
}

rec->allocated_bytes = params_buffer_bytes(hw_params) + LOOP_BLANK_SIZE * 4;
rec->block = snd_util_mem_alloc(rec->emu->memhdr, rec->allocated_bytes);
if (! rec->block)
return -ENOMEM;
rec->offset = EMU8000_DRAM_OFFSET + (rec->block->offset >> 1); 

subs->dma_buffer.bytes = params_buffer_bytes(hw_params);

return 0;
}