static int on_new_vbd(struct udevice *parent, unsigned int devid)
{
struct driver_info info;
struct udevice *udev;
struct blkfront_plat *plat;
int ret;

debug("New " DRV_NAME_BLK ", device ID %d\n", devid);

plat = malloc(sizeof(struct blkfront_plat));
if (!plat) {
printf("Failed to allocate platform data\n");
return -ENOMEM;
}

plat->devid = devid;

info.name = DRV_NAME_BLK;
info.plat = plat;

ret = device_bind_by_name(parent, false, &info, &udev);
if (ret < 0) {
printf("Failed to bind " DRV_NAME_BLK " to device with ID %d, ret: %d\n",
devid, ret);
free(plat);
}
return ret;
}