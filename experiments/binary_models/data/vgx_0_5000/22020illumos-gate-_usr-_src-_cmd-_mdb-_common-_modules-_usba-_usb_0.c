static int
find_dip(uintptr_t dip_addr, const void *local_dip, void *cb_arg)
{
uintptr_t			cur_usb_dev;
usba_device2devinfo_cbdata_t	*cb_data =
(usba_device2devinfo_cbdata_t *)cb_arg;

if ((cur_usb_dev = mdb_usba_get_usba_device(dip_addr)) == 0) {


return (WALK_NEXT);
}

if (cur_usb_dev == cb_data->u2d_target_usb_dev_p) {
*cb_data->u2d_dip_addr = dip_addr;
cb_data->u2d_found = TRUE;

return (WALK_DONE);
}

return (WALK_NEXT);
}