static int
usbprn_info(dev_info_t *dip, ddi_info_cmd_t infocmd,
void *arg, void **result)
{
usbprn_state_t	*usbprnp;
int		error = DDI_FAILURE;
minor_t		minor = getminor((dev_t)arg);
int		instance = USBPRN_MINOR_TO_INSTANCE(minor);

switch (infocmd) {
case DDI_INFO_DEVT2DEVINFO:
if ((usbprnp = ddi_get_soft_state(usbprn_statep,
instance)) != NULL) {
*result = usbprnp->usbprn_dip;
if (*result != NULL) {
error = DDI_SUCCESS;
}
} else {
*result = NULL;
}

break;
case DDI_INFO_DEVT2INSTANCE:
*result = (void *)(uintptr_t)instance;
error = DDI_SUCCESS;

break;
default:

break;
}

return (error);
}