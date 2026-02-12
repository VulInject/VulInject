static int wm8766_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
{
struct snd_ice1712 *ice = snd_kcontrol_chip(kcontrol);
struct prodigy_hifi_spec *spec = ice->spec;
int i, idx, ofs, voices;
int change = 0;

voices = kcontrol->private_value >> 8;
ofs = kcontrol->private_value & 0xff;
mutex_lock(&ice->gpio_mutex);
for (i = 0; i < voices; i++) {
if (ucontrol->value.integer.value[i] != spec->vol[ofs + i]) {
idx = WM8766_LDA1 + ofs + i;
spec->vol[ofs + i] &= WM_VOL_MUTE;
spec->vol[ofs + i] |= ucontrol->value.integer.value[i];
wm8766_set_vol(ice, idx,
spec->vol[ofs + i], spec->master[i]);
change = 1;
}
}
mutex_unlock(&ice->gpio_mutex);
return change;
}