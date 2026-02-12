static int npcm7xx_kcs_config_irq(struct kcs_bmc_device *kcs_bmc,
struct platform_device *pdev)
{
struct device *dev = &pdev->dev;
int irq;

irq = platform_get_irq(pdev, 0);
if (irq < 0)
return irq;

return devm_request_irq(dev, irq, npcm7xx_kcs_irq, IRQF_SHARED,
dev_name(dev), kcs_bmc);
}

static const struct kcs_bmc_device_ops npcm7xx_kcs_ops = {
.irq_mask_update = npcm7xx_kcs_irq_mask_update,
.io_inputb = npcm7xx_kcs_inb,
.io_outputb = npcm7xx_kcs_outb,
.io_updateb = npcm7xx_kcs_updateb,
};