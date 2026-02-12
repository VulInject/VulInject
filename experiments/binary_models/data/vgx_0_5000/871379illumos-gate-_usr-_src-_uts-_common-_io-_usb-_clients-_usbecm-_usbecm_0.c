static int
usbecm_ctrl_write(usbecm_state_t *ecmp, uchar_t request,
uint16_t value, mblk_t **data)
{
usb_ctrl_setup_t setup;
usb_cb_flags_t	cb_flags;
usb_cr_t	cr;
int		rval;

USB_DPRINTF_L4(PRINT_MASK_ALL, ecmp->ecm_lh,
"usbecm_ctrl_write: ");


setup.bmRequestType = USB_DEV_REQ_HOST_TO_DEV |
USB_DEV_REQ_TYPE_CLASS | USB_DEV_REQ_RCPT_IF;
setup.bRequest = request;
setup.wValue = value;
setup.wIndex = ecmp->ecm_ctrl_if_no;
setup.wLength = ((data != NULL) && (*data != NULL)) ? MBLKL(*data) : 0;
setup.attrs = 0;

rval = usb_pipe_ctrl_xfer_wait(ecmp->ecm_def_ph, &setup, data,
&cr, &cb_flags, 0);

USB_DPRINTF_L4(PRINT_MASK_ALL, ecmp->ecm_lh,
"usbecm_ctrl_write: rval = %d", rval);

return (rval);
}