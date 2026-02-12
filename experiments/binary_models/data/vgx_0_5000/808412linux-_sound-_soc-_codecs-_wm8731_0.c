static SOC_ENUM_SINGLE_DECL(wm8731_insel_enum,
WM8731_APANA, 2, wm8731_input_select);

static int wm8731_deemph[] = { 0, 32000, 44100, 48000 };

static int wm8731_set_deemph(struct snd_soc_component *component)
{
struct wm8731_priv *wm8731 = snd_soc_component_get_drvdata(component);
int val, i, best;


if (wm8731->deemph) {
best = 1;
for (i = 2; i < ARRAY_SIZE(wm8731_deemph); i++) {
if (abs(wm8731_deemph[i] - wm8731->playback_fs) <
abs(wm8731_deemph[best] - wm8731->playback_fs))
best = i;
}

val = best << 1;
} else {
best = 0;
val = 0;
}

dev_dbg(component->dev, "Set deemphasis %d (%dHz)\n",
best, wm8731_deemph[best]);

return snd_soc_component_update_bits(component, WM8731_APDIGI, 0x6, val);
}