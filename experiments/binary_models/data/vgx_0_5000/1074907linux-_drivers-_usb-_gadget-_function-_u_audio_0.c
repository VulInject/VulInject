static int u_audio_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
{
const int *srates;
struct uac_rtd_params *prm = snd_kcontrol_chip(kcontrol);
struct snd_uac_chip *uac = prm->uac;
struct g_audio *audio_dev = uac->audio_dev;
struct uac_params *params = &audio_dev->params;

uinfo->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
uinfo->count = 1;

if (prm == &uac->c_prm)
srates = params->c_srates;
else
srates = params->p_srates;
uinfo->value.integer.min = get_min_srate(srates);
uinfo->value.integer.max = get_max_srate(srates);
return 0;
}