static irqreturn_t snd_echo_interrupt(int irq, void *dev_id)
{
struct echoaudio *chip = dev_id;
struct snd_pcm_substream *substream;
int period, ss, st;

spin_lock(&chip->lock);
st = service_irq(chip);
if (st < 0) {
spin_unlock(&chip->lock);
return IRQ_NONE;
}

for (ss = 0; ss < DSP_MAXPIPES; ss++) {
substream = chip->substream[ss];
if (substream && ((struct audiopipe *)substream->runtime->
private_data)->state == PIPE_STATE_STARTED) {
period = pcm_pointer(substream) /
substream->runtime->period_size;
if (period != chip->last_period[ss]) {
chip->last_period[ss] = period;
spin_unlock(&chip->lock);
snd_pcm_period_elapsed(substream);
spin_lock(&chip->lock);
}
}
}
spin_unlock(&chip->lock);

if (st > 0 && chip->midi_in) {
snd_rawmidi_receive(chip->midi_in, chip->midi_buffer, st);
dev_dbg(chip->card->dev, "rawmidi_iread=%d\n", st);
}
return IRQ_HANDLED;
}