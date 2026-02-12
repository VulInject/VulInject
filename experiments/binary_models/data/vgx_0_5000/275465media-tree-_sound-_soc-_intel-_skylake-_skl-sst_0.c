int skl_sst_dsp_init(struct device *dev, void __iomem *mmio_base, int irq,
const char *fw_name, struct skl_dsp_loader_ops dsp_ops, struct skl_sst **dsp)
{
struct skl_sst *skl;
struct sst_dsp *sst;
int ret;

ret = skl_sst_ctx_init(dev, irq, fw_name, dsp_ops, dsp, &skl_dev);
if (ret < 0) {
dev_err(dev, "%s: no device\n", __func__);
return ret;
}

skl = *dsp;
sst = skl->dsp;
sst->addr.lpe = mmio_base;
sst->addr.shim = mmio_base;
sst_dsp_mailbox_init(sst, (SKL_ADSP_SRAM0_BASE + SKL_ADSP_W0_STAT_SZ),
SKL_ADSP_W0_UP_SZ, SKL_ADSP_SRAM1_BASE, SKL_ADSP_W1_SZ);

sst->fw_ops = skl_fw_ops;

skl->cores.count = 2;

return 0;
}