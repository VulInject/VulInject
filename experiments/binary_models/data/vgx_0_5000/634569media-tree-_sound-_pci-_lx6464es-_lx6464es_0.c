static int lx_pcm_create(struct lx6464es *chip)
{
int err;
struct snd_pcm *pcm;

u32 size = 64 *		     
3 *		     
MAX_STREAM_BUFFER *  
MICROBLAZE_IBL_MAX * 
2;		     

size = PAGE_ALIGN(size);


err = snd_pcm_new(chip->card, (char *)card_name, 0,
1, 1, &pcm);
if (err < 0)
return err;

pcm->private_data = chip;

snd_pcm_set_ops(pcm, SNDRV_PCM_STREAM_PLAYBACK, &lx_ops_playback);
snd_pcm_set_ops(pcm, SNDRV_PCM_STREAM_CAPTURE, &lx_ops_capture);

pcm->info_flags = 0;
pcm->nonatomic = true;
strcpy(pcm->name, card_name);

err = snd_pcm_lib_preallocate_pages_for_all(pcm, SNDRV_DMA_TYPE_DEV,
snd_dma_pci_data(chip->pci),
size, size);
if (err < 0)
return err;

chip->pcm = pcm;
chip->capture_stream.is_capture = 1;

return 0;
}