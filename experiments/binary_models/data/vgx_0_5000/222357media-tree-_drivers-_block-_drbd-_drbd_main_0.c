void drbd_print_uuids(struct drbd_device *device, const char *text)
{
if (get_ldev_if_state(device, D_NEGOTIATING)) {
u64 *uuid = device->ldev->md.uuid;
drbd_info(device, "%s %016llX:%016llX:%016llX:%016llX\n",
text,
(unsigned long long)uuid[UI_CURRENT],
(unsigned long long)uuid[UI_BITMAP],
(unsigned long long)uuid[UI_HISTORY_START],
(unsigned long long)uuid[UI_HISTORY_END]);
put_ldev(device);
} else {
drbd_info(device, "%s effective data uuid: %016llX\n",
text,
(unsigned long long)device->ed_uuid);
}
}