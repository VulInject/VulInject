static int
usb_ia_power(dev_info_t *dip, int comp, int level)
{
usb_ia_t		*usb_ia;
usb_common_power_t	*pm;
int			rval = DDI_FAILURE;

usb_ia = usb_ia_obtain_state(dip);

USB_DPRINTF_L4(DPRINT_MASK_PM, usb_ia->ia_log_handle,
"usb_ia_power: Begin: usb_ia = %p, level = %d",
(void *)usb_ia, level);

mutex_enter(&usb_ia->ia_mutex);
pm = usb_ia->ia_pm;


if (USB_DEV_PWRSTATE_OK(pm->uc_pwr_states, level)) {
USB_DPRINTF_L2(DPRINT_MASK_PM, usb_ia->ia_log_handle,
"usb_ia_power: illegal power level = %d "
"uc_pwr_states = %x", level, pm->uc_pwr_states);

mutex_exit(&usb_ia->ia_mutex);

return (rval);
}

rval = usba_common_power(dip, &(pm->uc_current_power),
&(usb_ia->ia_dev_state), level);

mutex_exit(&usb_ia->ia_mutex);

return (rval);
}