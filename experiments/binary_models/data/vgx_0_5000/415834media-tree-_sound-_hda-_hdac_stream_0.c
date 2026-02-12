struct hdac_stream *snd_hdac_stream_assign(struct hdac_bus *bus,
struct snd_pcm_substream *substream)
{
struct hdac_stream *azx_dev;
struct hdac_stream *res = NULL;


int key = (substream->pcm->device << 16) | (substream->number << 2) |
(substream->stream + 1);

list_for_each_entry(azx_dev, &bus->stream_list, list) {
if (azx_dev->direction != substream->stream)
continue;
if (azx_dev->opened)
continue;
if (azx_dev->assigned_key == key) {
res = azx_dev;
break;
}
if (!res || bus->reverse_assign)
res = azx_dev;
}
if (res) {
spin_lock_irq(&bus->reg_lock);
res->opened = 1;
res->running = 0;
res->assigned_key = key;
res->substream = substream;
spin_unlock_irq(&bus->reg_lock);
}
return res;
}