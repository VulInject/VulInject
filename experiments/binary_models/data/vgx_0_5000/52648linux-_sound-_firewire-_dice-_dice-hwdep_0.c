int snd_dice_create_hwdep(struct snd_dice *dice)
{
static const struct snd_hwdep_ops ops = {
.read         = hwdep_read,
.release      = hwdep_release,
.poll         = hwdep_poll,
.ioctl        = hwdep_ioctl,
.ioctl_compat = hwdep_compat_ioctl,
};
struct snd_hwdep *hwdep;
int err;

err = snd_hwdep_new(dice->card, "DICE", 0, &hwdep);
if (err < 0)
return err;
strcpy(hwdep->name, "DICE");
hwdep->iface = SNDRV_HWDEP_IFACE_FW_DICE;
hwdep->ops = ops;
hwdep->private_data = dice;
hwdep->exclusive = true;

return 0;
}