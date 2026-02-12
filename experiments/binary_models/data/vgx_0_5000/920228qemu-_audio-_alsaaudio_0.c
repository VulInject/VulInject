static void alsa_enable_out(HWVoiceOut *hw, bool enable)
{
ALSAVoiceOut *alsa = (ALSAVoiceOut *) hw;
AudiodevAlsaPerDirectionOptions *apdo = alsa->dev->u.alsa.out;

if (enable) {
bool poll_mode = apdo->try_poll;

ldebug("enabling voice\n");
if (poll_mode && alsa_poll_out(hw)) {
poll_mode = 0;
}
hw->poll_mode = poll_mode;
alsa_voice_ctl(alsa->handle, "playback", VOICE_CTL_PREPARE);
} else {
ldebug("disabling voice\n");
if (hw->poll_mode) {
hw->poll_mode = 0;
alsa_fini_poll(&alsa->pollhlp);
}
alsa_voice_ctl(alsa->handle, "playback", VOICE_CTL_PAUSE);
}
}