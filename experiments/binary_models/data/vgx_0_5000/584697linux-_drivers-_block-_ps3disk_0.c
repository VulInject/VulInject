static blk_status_t ps3disk_submit_flush_request(struct ps3_storage_device *dev,
struct request *req)
{
struct ps3disk_private *priv = ps3_system_bus_get_drvdata(&dev->sbd);
u64 res;

dev_dbg(&dev->sbd.core, "%s:%u: flush request\n", __func__, __LINE__);

res = lv1_storage_send_device_command(dev->sbd.dev_id,
LV1_STORAGE_ATA_HDDOUT, 0, 0, 0,
0, &dev->tag);
if (res) {
dev_err(&dev->sbd.core, "%s:%u: sync cache failed 0x%llx\n",
__func__, __LINE__, res);
return BLK_STS_IOERR;
}

priv->req = req;
return BLK_STS_OK;
}