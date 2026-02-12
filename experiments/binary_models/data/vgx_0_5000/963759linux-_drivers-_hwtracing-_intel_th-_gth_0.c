static void intel_th_gth_switch(struct intel_th_device *thdev,
struct intel_th_output *output)
{
struct gth_device *gth = dev_get_drvdata(&thdev->dev);
unsigned long count;
u32 reg;


iowrite32(0, gth->base + REG_CTS_CTL);
iowrite32(CTS_CTL_SEQUENCER_ENABLE, gth->base + REG_CTS_CTL);

for (reg = 0, count = CTS_TRIG_WAITLOOP_DEPTH;
count && !(reg & BIT(4)); count--) {
reg = ioread32(gth->base + REG_CTS_STAT);
cpu_relax();
}
if (!count)
dev_dbg(&thdev->dev, "timeout waiting for CTS Trigger\n");


iowrite32(0, gth->base + REG_CTS_CTL);

intel_th_gth_stop(gth, output, false);
intel_th_gth_start(gth, output);
}