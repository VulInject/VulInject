static int snd_virmidi_output_open(struct snd_rawmidi_substream *substream)
{
struct snd_virmidi_dev *rdev = substream->rmidi->private_data;
struct snd_rawmidi_runtime *runtime = substream->runtime;
struct snd_virmidi *vmidi;

vmidi = kzalloc(sizeof(*vmidi), GFP_KERNEL);
if (vmidi == NULL)
return -ENOMEM;
vmidi->substream = substream;
if (snd_midi_event_new(MAX_MIDI_EVENT_BUF, &vmidi->parser) < 0) {
kfree(vmidi);
return -ENOMEM;
}
vmidi->seq_mode = rdev->seq_mode;
vmidi->client = rdev->client;
vmidi->port = rdev->port;
snd_virmidi_init_event(vmidi, &vmidi->event);
vmidi->rdev = rdev;
runtime->private_data = vmidi;
return 0;
}