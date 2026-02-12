int
snd_emu8000_load_reverb_fx(struct snd_emu8000 *emu, int mode, const void __user *buf, long len)
{
struct soundfont_reverb_fx rec;

if (mode < SNDRV_EMU8000_REVERB_PREDEFINED || mode >= SNDRV_EMU8000_REVERB_NUMBERS) {
snd_printk(KERN_WARNING "invalid reverb mode %d for uploading\n", mode);
return -EINVAL;
}
if (len < (long)sizeof(rec) || copy_from_user(&rec, buf, sizeof(rec)))
return -EFAULT;
reverb_parm[mode] = rec;
reverb_defined[mode] = 1;
return 0;
}