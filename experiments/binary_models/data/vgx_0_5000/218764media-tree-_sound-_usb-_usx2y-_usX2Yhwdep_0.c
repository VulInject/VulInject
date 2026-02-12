static unsigned int snd_us428ctls_poll(struct snd_hwdep *hw, struct file *file, poll_table *wait)
{
unsigned int	mask = 0;
struct usX2Ydev	*us428 = hw->private_data;
struct us428ctls_sharedmem *shm = us428->us428ctls_sharedmem;
if (us428->chip_status & USX2Y_STAT_CHIP_HUP)
return POLLHUP;

poll_wait(file, &us428->us428ctls_wait_queue_head, wait);

if (shm != NULL && shm->CtlSnapShotLast != shm->CtlSnapShotRed)
mask |= POLLIN;

return mask;
}