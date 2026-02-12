int usx2y_hwdep_new(struct snd_card *card, struct usb_device *device)
{
int err;
struct snd_hwdep *hw;
struct usx2ydev	*us428 = usx2y(card);

err = snd_hwdep_new(card, SND_USX2Y_LOADER_ID, 0, &hw);
if (err < 0)
return err;

hw->iface = SNDRV_HWDEP_IFACE_USX2Y;
hw->private_data = us428;
hw->ops.dsp_status = snd_usx2y_hwdep_dsp_status;
hw->ops.dsp_load = snd_usx2y_hwdep_dsp_load;
hw->ops.mmap = snd_us428ctls_mmap;
hw->ops.poll = snd_us428ctls_poll;
hw->exclusive = 1;
sprintf(hw->name, "/dev/bus/usb/%03d/%03d", device->bus->busnum, device->devnum);

us428->us428ctls_sharedmem = alloc_pages_exact(US428_SHAREDMEM_PAGES, GFP_KERNEL);
if (!us428->us428ctls_sharedmem)
return -ENOMEM;
memset(us428->us428ctls_sharedmem, -1, US428_SHAREDMEM_PAGES);
us428->us428ctls_sharedmem->ctl_snapshot_last = -2;

return 0;
}