static int atmel_xdmac_prepare(struct device *dev)
{
struct platform_device	*pdev = to_platform_device(dev);
struct at_xdmac		*atxdmac = platform_get_drvdata(pdev);
struct dma_chan		*chan, *_chan;

list_for_each_entry_safe(chan, _chan, &atxdmac->dma.channels, device_node) {
struct at_xdmac_chan	*atchan = to_at_xdmac_chan(chan);


if (at_xdmac_chan_is_enabled(atchan) && !at_xdmac_chan_is_cyclic(atchan))
return -EAGAIN;
}
return 0;
}