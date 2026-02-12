static void cxlflash_async_reset_host(void *data, async_cookie_t cookie)
{
struct cxlflash_cfg *cfg = data;
struct device *dev = &cfg->dev->dev;
int rc = 0;

if (cfg->state != STATE_RESET) {
dev_dbg(dev, "%s: Not performing a reset, state=%d\n",
__func__, cfg->state);
goto out;
}

drain_ioctls(cfg);
cxlflash_mark_contexts_error(cfg);
rc = afu_reset(cfg);
if (rc)
cfg->state = STATE_FAILTERM;
else
cfg->state = STATE_NORMAL;
wake_up_all(&cfg->reset_waitq);

out:
scsi_unblock_requests(cfg->host);
}