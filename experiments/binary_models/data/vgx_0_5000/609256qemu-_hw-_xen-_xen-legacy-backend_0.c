static int xen_be_try_initialise(struct XenLegacyDevice *xendev)
{
int rc = 0;

if (xendev->fe_state != XenbusStateInitialised  &&
xendev->fe_state != XenbusStateConnected) {
if (xendev->ops->flags & DEVOPS_FLAG_IGNORE_STATE) {
xen_pv_printf(xendev, 2, "frontend not ready, ignoring\n");
} else {
xen_pv_printf(xendev, 2, "frontend not ready (yet)\n");
return -1;
}
}

if (xendev->ops->flags & DEVOPS_FLAG_NEED_GNTDEV) {
xendev->gnttabdev = xengnttab_open(NULL, 0);
if (xendev->gnttabdev == NULL) {
xen_pv_printf(NULL, 0, "can't open gnttab device\n");
return -1;
}
} else {
xendev->gnttabdev = NULL;
}

if (xendev->ops->initialise) {
rc = xendev->ops->initialise(xendev);
}
if (rc != 0) {
xen_pv_printf(xendev, 0, "initialise() failed\n");
return rc;
}

xen_be_set_state(xendev, XenbusStateConnected);
return 0;
}