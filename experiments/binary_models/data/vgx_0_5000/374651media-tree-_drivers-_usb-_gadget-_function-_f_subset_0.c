static int geth_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
{
struct f_gether		*geth = func_to_geth(f);
struct usb_composite_dev *cdev = f->config->cdev;
struct net_device	*net;



if (geth->port.in_ep->enabled) {
DBG(cdev, "reset cdc subset\n");
gether_disconnect(&geth->port);
}

DBG(cdev, "init + activate cdc subset\n");
if (config_ep_by_speed(cdev->gadget, f, geth->port.in_ep) ||
config_ep_by_speed(cdev->gadget, f, geth->port.out_ep)) {
geth->port.in_ep->desc = NULL;
geth->port.out_ep->desc = NULL;
return -EINVAL;
}

net = gether_connect(&geth->port);
return PTR_ERR_OR_ZERO(net);
}