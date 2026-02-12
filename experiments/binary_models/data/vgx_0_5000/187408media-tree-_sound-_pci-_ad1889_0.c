static int
snd_ad1889_pcm_init(struct snd_ad1889 *chip, int device)
{
int err;
struct snd_pcm *pcm;

err = snd_pcm_new(chip->card, chip->card->driver, device, 1, 1, &pcm);
if (err < 0)
return err;

snd_pcm_set_ops(pcm, SNDRV_PCM_STREAM_PLAYBACK, 
&snd_ad1889_playback_ops);
snd_pcm_set_ops(pcm, SNDRV_PCM_STREAM_CAPTURE,
&snd_ad1889_capture_ops);

pcm->private_data = chip;
pcm->info_flags = 0;
strcpy(pcm->name, chip->card->shortname);

chip->pcm = pcm;
chip->psubs = NULL;
chip->csubs = NULL;

err = snd_pcm_lib_preallocate_pages_for_all(pcm, SNDRV_DMA_TYPE_DEV,
snd_dma_pci_data(chip->pci),
BUFFER_BYTES_MAX / 2,
BUFFER_BYTES_MAX);

if (err < 0) {
dev_err(chip->card->dev, "buffer allocation error: %d\n", err);
return err;
}

return 0;
}