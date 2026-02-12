bool littlefury_power_on(struct cgpu_info * const dev)
{
struct thr_info * const master_thr = dev->thr[0];
struct littlefury_state * const lfstate = master_thr->cgpu_data;

applog(LOG_DEBUG, "%s: Turning power on", dev->dev_repr);
if (!littlefury_set_power(LOG_WARNING, dev->dev_repr, dev->device_fd, true))
{
applog(LOG_ERR, "%s: Unable to power on chip(s)", dev->dev_repr);
littlefury_common_error(dev, REASON_THREAD_FAIL_INIT);
serial_close(dev->device_fd);
dev->device_fd = -1;
lfstate->powered = false;
return false;
}

lfstate->powered = true;
return true;
}