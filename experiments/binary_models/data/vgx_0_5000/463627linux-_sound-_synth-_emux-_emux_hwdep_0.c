int
snd_emux_init_hwdep(struct snd_emux *emu)
{
struct snd_hwdep *hw;
int err;

err = snd_hwdep_new(emu->card, SNDRV_EMUX_HWDEP_NAME, emu->hwdep_idx, &hw);
if (err < 0)
return err;
emu->hwdep = hw;
strcpy(hw->name, SNDRV_EMUX_HWDEP_NAME);
hw->iface = SNDRV_HWDEP_IFACE_EMUX_WAVETABLE;
hw->ops.ioctl = snd_emux_hwdep_ioctl;

hw->ops.ioctl_compat = snd_emux_hwdep_ioctl;
hw->exclusive = 1;
hw->private_data = emu;
err = snd_card_register(emu->card);
if (err < 0)
return err;

return 0;
}