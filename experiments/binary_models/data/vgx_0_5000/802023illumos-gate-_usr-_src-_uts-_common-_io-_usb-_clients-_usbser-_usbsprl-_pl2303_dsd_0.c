static void
pl2303_destroy_pm_components(pl2303_state_t *plp)
{
pl2303_pm_t	*pm = plp->pl_pm;
dev_info_t	*dip = plp->pl_dip;
int		rval;

if (!pm)

return;

if (plp->pl_dev_state != USB_DEV_DISCONNECTED) {
if (pm->pm_wakeup_enabled) {
rval = pm_raise_power(dip, 0, USB_DEV_OS_FULL_PWR);
if (rval != DDI_SUCCESS) {
USB_DPRINTF_L2(DPRINT_PM, plp->pl_lh,
"pl2303_destroy_pm_components:"
"raising power failed, rval=%d", rval);
}

rval = usb_handle_remote_wakeup(dip,
USB_REMOTE_WAKEUP_DISABLE);
if (rval != USB_SUCCESS) {
USB_DPRINTF_L2(DPRINT_PM, plp->pl_lh,
"pl2303_destroy_pm_components: disable "
"remote wakeup failed, rval=%d", rval);
}
}

(void) pm_lower_power(dip, 0, USB_DEV_OS_PWR_OFF);
}
kmem_free(pm, sizeof (pl2303_pm_t));
plp->pl_pm = NULL;
}