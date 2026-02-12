static int fsl_otg_set_peripheral(struct usb_otg *otg,
struct usb_gadget *gadget)
{
struct fsl_otg *otg_dev;

if (!otg)
return -ENODEV;

otg_dev = container_of(otg->usb_phy, struct fsl_otg, phy);
VDBG("otg_dev 0x%x\n", (int)otg_dev);
VDBG("fsl_otg_dev 0x%x\n", (int)fsl_otg_dev);
if (otg_dev != fsl_otg_dev)
return -ENODEV;

if (!gadget) {
if (!otg->default_a)
otg->gadget->ops->vbus_draw(otg->gadget, 0);
usb_gadget_vbus_disconnect(otg->gadget);
otg->gadget = 0;
otg_dev->fsm.b_bus_req = 0;
otg_statemachine(&otg_dev->fsm);
return 0;
}

otg->gadget = gadget;
otg->gadget->is_a_peripheral = !otg_dev->fsm.id;

otg_dev->fsm.b_bus_req = 1;


pr_debug("ID pin=%d\n", otg_dev->fsm.id);
if (otg_dev->fsm.id == 1) {
fsl_otg_start_host(&otg_dev->fsm, 0);
otg_drv_vbus(&otg_dev->fsm, 0);
fsl_otg_start_gadget(&otg_dev->fsm, 1);
}

return 0;
}