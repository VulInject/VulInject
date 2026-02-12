static int ohci_da8xx_register_notify(struct usb_hcd *hcd)
{
struct da8xx_ohci_hcd *da8xx_ohci = to_da8xx_ohci(hcd);
struct device *dev		= hcd->self.controller;
struct da8xx_ohci_root_hub *hub	= dev_get_platdata(dev);
int ret = 0;

if (hub && hub->ocic_notify) {
ret = hub->ocic_notify(ohci_da8xx_ocic_handler);
} else if (da8xx_ohci->vbus_reg) {
da8xx_ohci->nb.notifier_call = ohci_da8xx_regulator_event;
ret = devm_regulator_register_notifier(da8xx_ohci->vbus_reg,
&da8xx_ohci->nb);
}

if (ret)
dev_err(dev, "Failed to register notifier: %d\n", ret);

return ret;
}