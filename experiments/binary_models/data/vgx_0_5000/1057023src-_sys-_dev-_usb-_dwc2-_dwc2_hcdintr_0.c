STATIC void dwc2_hc_babble_intr(struct dwc2_hsotg *hsotg,
struct dwc2_host_chan *chan, int chnum,
struct dwc2_qtd *qtd)
{
dev_dbg(hsotg->dev, "--Host Channel %d Interrupt: Babble Error--\n",
chnum);

dwc2_hc_handle_tt_clear(hsotg, chan, qtd);

if (hsotg->params.dma_desc_enable) {
dwc2_hcd_complete_xfer_ddma(hsotg, chan, chnum,
DWC2_HC_XFER_BABBLE_ERR);
goto disable_int;
}

if (chan->ep_type != USB_ENDPOINT_XFER_ISOC) {
dwc2_host_complete(hsotg, qtd, -EOVERFLOW);
dwc2_halt_channel(hsotg, chan, qtd, DWC2_HC_XFER_BABBLE_ERR);
} else {
enum dwc2_halt_status halt_status;

halt_status = dwc2_update_isoc_urb_state(hsotg, chan, chnum,
qtd, DWC2_HC_XFER_BABBLE_ERR);
dwc2_halt_channel(hsotg, chan, qtd, halt_status);
}

disable_int:
disable_hc_int(hsotg, chnum, HCINTMSK_BBLERR);
}