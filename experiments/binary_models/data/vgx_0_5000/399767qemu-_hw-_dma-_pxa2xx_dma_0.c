static void pxa2xx_dma_realize(DeviceState *dev, Error **errp)
{
PXA2xxDMAState *s = PXA2XX_DMA(dev);
int i;

if (s->channels <= 0) {
error_setg(errp, "channels value invalid");
return;
}

s->chan = g_new0(PXA2xxDMAChannel, s->channels);

for (i = 0; i < s->channels; i ++)
s->chan[i].state = DCSR_STOPINTR;
}