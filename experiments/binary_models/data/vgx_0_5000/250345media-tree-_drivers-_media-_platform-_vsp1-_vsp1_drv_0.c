static irqreturn_t vsp1_irq_handler(int irq, void *data)
{
u32 mask = VI6_WFP_IRQ_STA_DFE | VI6_WFP_IRQ_STA_FRE;
struct vsp1_device *vsp1 = data;
irqreturn_t ret = IRQ_NONE;
unsigned int i;
u32 status;

for (i = 0; i < vsp1->info->wpf_count; ++i) {
struct vsp1_rwpf *wpf = vsp1->wpf[i];

if (wpf == NULL)
continue;

status = vsp1_read(vsp1, VI6_WPF_IRQ_STA(i));
vsp1_write(vsp1, VI6_WPF_IRQ_STA(i), ~status & mask);

if (status & VI6_WFP_IRQ_STA_DFE) {
vsp1_pipeline_frame_end(wpf->pipe);
ret = IRQ_HANDLED;
}
}

status = vsp1_read(vsp1, VI6_DISP_IRQ_STA);
vsp1_write(vsp1, VI6_DISP_IRQ_STA, ~status & VI6_DISP_IRQ_STA_DST);

if (status & VI6_DISP_IRQ_STA_DST) {
vsp1_drm_display_start(vsp1);
ret = IRQ_HANDLED;
}

return ret;
}