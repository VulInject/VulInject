int snd_soc_info_volsw_range(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
{
struct soc_mixer_control *mc =
(struct soc_mixer_control *)kcontrol->private_value;
int platform_max;
int min = mc->min;

if (!mc->platform_max)
mc->platform_max = mc->max;
platform_max = mc->platform_max;

uinfo->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
uinfo->count = snd_soc_volsw_is_stereo(mc) ? 2 : 1;
uinfo->value.integer.min = 0;
uinfo->value.integer.max = platform_max - min;

return 0;
}