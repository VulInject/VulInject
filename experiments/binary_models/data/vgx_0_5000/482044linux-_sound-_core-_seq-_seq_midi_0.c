static int midisynth_subscribe(void *private_data, struct snd_seq_port_subscribe *info)
{
int err;
struct seq_midisynth *msynth = private_data;
struct snd_rawmidi_runtime *runtime;
struct snd_rawmidi_params params;


err = snd_rawmidi_kernel_open(msynth->card, msynth->device,
msynth->subdevice,
SNDRV_RAWMIDI_LFLG_INPUT,
&msynth->input_rfile);
if (err < 0) {
pr_debug("ALSA: seq_midi: midi input open failed!!!\n");
return err;
}
runtime = msynth->input_rfile.input->runtime;
memset(&params, 0, sizeof(params));
params.avail_min = 1;
params.buffer_size = input_buffer_size;
err = snd_rawmidi_input_params(msynth->input_rfile.input, &params);
if (err < 0) {
snd_rawmidi_kernel_release(&msynth->input_rfile);
return err;
}
snd_midi_event_reset_encode(msynth->parser);
runtime->event = snd_midi_input_event;
runtime->private_data = msynth;
snd_rawmidi_kernel_read(msynth->input_rfile.input, NULL, 0);
return 0;
}