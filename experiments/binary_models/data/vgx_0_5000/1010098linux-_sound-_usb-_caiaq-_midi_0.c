static void snd_usb_caiaq_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
{
struct snd_usb_caiaqdev *cdev = substream->rmidi->private_data;

if (up) {
cdev->midi_out_substream = substream;
if (!cdev->midi_out_active)
snd_usb_caiaq_midi_send(cdev, substream);
} else {
cdev->midi_out_substream = NULL;
}
}


static const struct snd_rawmidi_ops snd_usb_caiaq_midi_output =
{
.open =		snd_usb_caiaq_midi_output_open,
.close =	snd_usb_caiaq_midi_output_close,
.trigger =      snd_usb_caiaq_midi_output_trigger,
};