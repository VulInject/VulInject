static int pcxhr_audio_src_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
{
struct snd_pcxhr *chip = snd_kcontrol_chip(kcontrol);
int ret = 0;
int i = 2;		
if (chip->mgr->board_has_aes1) {
i = 3;		
if (chip->mgr->board_has_mic)
i = 5;	
}
if (ucontrol->value.enumerated.item[0] >= i)
return -EINVAL;
mutex_lock(&chip->mgr->mixer_mutex);
if (chip->audio_capture_source != ucontrol->value.enumerated.item[0]) {
chip->audio_capture_source = ucontrol->value.enumerated.item[0];
if (chip->mgr->is_hr_stereo)
hr222_set_audio_source(chip);
else
pcxhr_set_audio_source(chip);
ret = 1;
}
mutex_unlock(&chip->mgr->mixer_mutex);
return ret;
}

static const struct snd_kcontrol_new pcxhr_control_audio_src = {
.iface =	SNDRV_CTL_ELEM_IFACE_MIXER,
.name =		"Capture Source",
.info =		pcxhr_audio_src_info,
.get =		pcxhr_audio_src_get,
.put =		pcxhr_audio_src_put,
};




static int pcxhr_clock_type_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
{
static const char *textsPCXHR[7] = {
"Internal", "WordClock", "AES Sync",
"AES 1", "AES 2", "AES 3", "AES 4"
};
static const char *textsHR22[3] = {
"Internal", "AES Sync", "AES 1"
};
const char **texts;
struct pcxhr_mgr *mgr = snd_kcontrol_chip(kcontrol);
int clock_items = 2;	
if (mgr->board_has_aes1) {
clock_items += mgr->capture_chips;	
if (!mgr->is_hr_stereo)
clock_items += 1;		
}
if (mgr->is_hr_stereo) {
texts = textsHR22;
snd_BUG_ON(clock_items > (HR22_CLOCK_TYPE_MAX+1));
} else {
texts = textsPCXHR;
snd_BUG_ON(clock_items > (PCXHR_CLOCK_TYPE_MAX+1));
}
return snd_ctl_enum_info(uinfo, 1, clock_items, texts);
}