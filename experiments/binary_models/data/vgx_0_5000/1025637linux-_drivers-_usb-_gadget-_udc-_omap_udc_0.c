static void nuke(struct omap_ep *ep, int status)
{
struct omap_req	*req;

ep->stopped = 1;

if (use_dma && ep->dma_channel)
dma_channel_release(ep);

use_ep(ep, 0);
omap_writew(UDC_CLR_EP, UDC_CTRL);
if (ep->bEndpointAddress && ep->bmAttributes != USB_ENDPOINT_XFER_ISOC)
omap_writew(UDC_SET_HALT, UDC_CTRL);

while (!list_empty(&ep->queue)) {
req = list_entry(ep->queue.next, struct omap_req, queue);
done(ep, req, status);
}
}