static int ak4375_mute(struct snd_soc_dai *dai, int mute, int direction)
{
struct snd_soc_component *component = dai->component;
struct ak4375_priv *ak4375 = snd_soc_component_get_drvdata(component);
u8 val = snd_soc_component_read(component, AK4375_07_DAC_MONO_MIXING);

dev_dbg(ak4375->dev, "mute=%d val=%d\n", mute, val);

if (mute) {
ak4375->mute_save = val & DACMUTE_MASK;
val &= ~DACMUTE_MASK;
} else {
val |= ak4375->mute_save;
}

snd_soc_component_write(component, AK4375_07_DAC_MONO_MIXING, val);

return 0;
}