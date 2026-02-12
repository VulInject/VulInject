void snd_emux_proc_init(struct snd_emux *emu, struct snd_card *card, int device)
{
struct snd_info_entry *entry;
char name[64];

sprintf(name, "wavetableD%d", device);
entry = snd_info_create_card_entry(card, name, card->proc_root);
if (entry == NULL)
return;

entry->content = SNDRV_INFO_CONTENT_TEXT;
entry->private_data = emu;
entry->c.text.read = snd_emux_proc_info_read;
if (snd_info_register(entry) < 0)
snd_info_free_entry(entry);
else
emu->proc = entry;
}