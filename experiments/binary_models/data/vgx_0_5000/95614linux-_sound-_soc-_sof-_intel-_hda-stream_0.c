irqreturn_t hda_dsp_stream_threaded_handler(int irq, void *context)
{
struct snd_sof_dev *sdev = context;
struct hdac_bus *bus = sof_to_bus(sdev);
bool active;
u32 status;
int i;


for (i = 0, active = true; i < 10 && active; i++) {
spin_lock_irq(&bus->reg_lock);

status = snd_sof_dsp_read(sdev, HDA_DSP_HDA_BAR, SOF_HDA_INTSTS);


active = hda_dsp_stream_check(bus, status);


if (status & AZX_INT_CTRL_EN) {
active |= hda_codec_check_rirb_status(sdev);
}
spin_unlock_irq(&bus->reg_lock);
}

return IRQ_HANDLED;
}