static void imx7_csi_dma_stop(struct imx7_csi *csi)
{
unsigned long timeout_jiffies;
unsigned long flags;
int ret;


spin_lock_irqsave(&csi->irqlock, flags);
csi->last_eof = true;
spin_unlock_irqrestore(&csi->irqlock, flags);


timeout_jiffies = msecs_to_jiffies(IMX7_CSI_VIDEO_EOF_TIMEOUT);
ret = wait_for_completion_timeout(&csi->last_eof_completion,
timeout_jiffies);
if (ret == 0)
v4l2_warn(&csi->sd, "wait last EOF timeout\n");

imx7_csi_hw_disable_irq(csi);
}