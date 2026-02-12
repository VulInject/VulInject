static int lola_dest_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
{
struct lola *chip = snd_kcontrol_chip(kcontrol);
unsigned int src_ofs = kcontrol->private_value & 0xff;
unsigned int src_num = (kcontrol->private_value >> 8) & 0xff;
unsigned int dst_ofs = (kcontrol->private_value >> 16) & 0xff;
unsigned int dst, mask;
unsigned short gains[MAX_STREAM_COUNT];
int i, num;

mask = 0;
num = 0;
for (i = 0; i < src_num; i++) {
unsigned short val = ucontrol->value.integer.value[i];
if (val) {
gains[num++] = val - 1;
mask |= 1 << i;
}
}
mask <<= src_ofs;
dst = snd_ctl_get_ioffidx(kcontrol, &ucontrol->id) + dst_ofs;
return lola_mixer_set_dest_gains(chip, dst, mask, gains);
}