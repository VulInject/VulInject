static int tegra_adma_alloc_chan_resources(struct dma_chan *dc)
{
struct tegra_adma_chan *tdc = to_tegra_adma_chan(dc);
int ret;

ret = request_irq(tdc->irq, tegra_adma_isr, 0, dma_chan_name(dc), tdc);
if (ret) {
dev_err(tdc2dev(tdc), "failed to get interrupt for %s\n",
dma_chan_name(dc));
return ret;
}

ret = pm_runtime_get_sync(tdc2dev(tdc));
if (ret < 0) {
free_irq(tdc->irq, tdc);
return ret;
}

dma_cookie_init(&tdc->vc.chan);

return 0;
}