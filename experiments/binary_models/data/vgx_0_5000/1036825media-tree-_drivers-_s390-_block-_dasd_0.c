static int dasd_state_basic_to_known(struct dasd_device *device)
{
int rc;

if (device->discipline->basic_to_known) {
rc = device->discipline->basic_to_known(device);
if (rc)
return rc;
}

if (device->block) {
dasd_profile_exit(&device->block->profile);
debugfs_remove(device->block->debugfs_dentry);
dasd_gendisk_free(device->block);
dasd_block_clear_timer(device->block);
}
rc = dasd_flush_device_queue(device);
if (rc)
return rc;
dasd_device_clear_timer(device);
dasd_profile_exit(&device->profile);
dasd_hosts_exit(device);
debugfs_remove(device->debugfs_dentry);
DBF_DEV_EVENT(DBF_EMERG, device, "%p debug area deleted", device);
if (device->debug_area != NULL) {
debug_unregister(device->debug_area);
device->debug_area = NULL;
}
device->state = DASD_STATE_KNOWN;
return 0;
}