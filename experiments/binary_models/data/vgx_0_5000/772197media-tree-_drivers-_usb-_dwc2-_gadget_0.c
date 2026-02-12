static int dwc2_hsotg_pullup(struct usb_gadget *gadget, int is_on)
{
struct dwc2_hsotg *hsotg = to_hsotg(gadget);
unsigned long flags = 0;

dev_dbg(hsotg->dev, "%s: is_on: %d op_state: %d\n", __func__, is_on,
hsotg->op_state);


if (hsotg->op_state != OTG_STATE_B_PERIPHERAL) {
hsotg->enabled = is_on;
return 0;
}

spin_lock_irqsave(&hsotg->lock, flags);
if (is_on) {
hsotg->enabled = 1;
dwc2_hsotg_core_init_disconnected(hsotg, false);
dwc2_hsotg_core_connect(hsotg);
} else {
dwc2_hsotg_core_disconnect(hsotg);
dwc2_hsotg_disconnect(hsotg);
hsotg->enabled = 0;
}

hsotg->gadget.speed = USB_SPEED_UNKNOWN;
spin_unlock_irqrestore(&hsotg->lock, flags);

return 0;
}