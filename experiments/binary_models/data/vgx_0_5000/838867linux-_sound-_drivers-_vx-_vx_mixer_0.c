int vx_set_monitor_level(struct vx_core *chip, int audio, int level, int active)
{
struct vx_audio_level info;

memset(&info, 0, sizeof(info));
info.has_monitor_level = 1;
info.monitor_level = level;
info.has_monitor_mute = 1;
info.monitor_mute = !active;
chip->audio_monitor[audio] = level;
chip->audio_monitor_active[audio] = active;
return vx_adjust_audio_level(chip, audio, 0, &info); 
}