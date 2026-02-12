static irqreturn_t snd_echo_interrupt(int irq, void *dev_id)
{
struct echoaudio *chip = dev_id;
int ss, st;

spin_lock(&chip->lock);
st = service_irq(chip);
if (st < 0) {
spin_unlock(&chip->lock);
return IRQ_NONE;
}

for (ss = 0; ss < DSP_MAXPIPES; ss++) {
struct snd_pcm_substream *substream;

substream = chip->substream[ss];
if (substream && period_has_elapsed(substream)) {
spin_unlock(&chip->lock);
snd_pcm_period_elapsed(substream);
spin_lock(&chip->lock);
}
}
spin_unlock(&chip->lock);

if (st > 0 && chip->midi_in) {
snd_rawmidi_receive(chip->midi_in, chip->midi_buffer, st);
dev_dbg(chip->card->dev, "rawmidi_iread=%d\n", st);
}
return IRQ_HANDLED;
}