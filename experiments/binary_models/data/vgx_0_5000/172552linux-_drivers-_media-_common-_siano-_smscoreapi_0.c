int smscore_start_device(struct smscore_device_t *coredev)
{
int rc;
int board_id = smscore_get_board_id(coredev);
int mode = smscore_registry_getmode(coredev->devpath);


if (board_id != SMS_BOARD_UNKNOWN && mode == DEVICE_MODE_NONE)
mode = sms_get_board(board_id)->default_mode;

rc = smscore_set_device_mode(coredev, mode);
if (rc < 0) {
pr_info("set device mode failed , rc %d\n", rc);
return rc;
}
rc = smscore_configure_board(coredev);
if (rc < 0) {
pr_info("configure board failed , rc %d\n", rc);
return rc;
}

mutex_lock(&g_smscore_deviceslock);

rc = smscore_notify_callbacks(coredev, coredev->device, 1);
smscore_init_ir(coredev);

pr_debug("device %p started, rc %d\n", coredev, rc);

mutex_unlock(&g_smscore_deviceslock);

return rc;
}