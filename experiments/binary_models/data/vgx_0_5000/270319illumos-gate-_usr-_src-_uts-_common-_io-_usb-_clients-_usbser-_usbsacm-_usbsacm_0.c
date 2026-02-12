static int
usbsacm_ds_resume(ds_hdl_t hdl)
{
usbsacm_state_t	*acmp = (usbsacm_state_t *)hdl;
int		current_state;
int		ret;

USB_DPRINTF_L4(PRINT_MASK_PM, acmp->acm_lh,
"usbsacm_ds_resume: ");

mutex_enter(&acmp->acm_mutex);
current_state = acmp->acm_dev_state;
mutex_exit(&acmp->acm_mutex);


if (current_state != USB_DEV_ONLINE) {
ret = usbsacm_restore_device_state(acmp);
} else {
ret = USB_DEV_ONLINE;
}

return (ret);
}