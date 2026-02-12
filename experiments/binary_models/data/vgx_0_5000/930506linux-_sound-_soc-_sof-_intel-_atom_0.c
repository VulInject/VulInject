irqreturn_t atom_irq_handler(int irq, void *context)
{
struct snd_sof_dev *sdev = context;
u64 ipcx, ipcd;
int ret = IRQ_NONE;

ipcx = snd_sof_dsp_read64(sdev, DSP_BAR, SHIM_IPCX);
ipcd = snd_sof_dsp_read64(sdev, DSP_BAR, SHIM_IPCD);

if (ipcx & SHIM_BYT_IPCX_DONE) {


snd_sof_dsp_update_bits64_unlocked(sdev, DSP_BAR,
SHIM_IMRX,
SHIM_IMRX_DONE,
SHIM_IMRX_DONE);
ret = IRQ_WAKE_THREAD;
}

if (ipcd & SHIM_BYT_IPCD_BUSY) {


snd_sof_dsp_update_bits64_unlocked(sdev, DSP_BAR,
SHIM_IMRX,
SHIM_IMRX_BUSY,
SHIM_IMRX_BUSY);
ret = IRQ_WAKE_THREAD;
}

return ret;
}