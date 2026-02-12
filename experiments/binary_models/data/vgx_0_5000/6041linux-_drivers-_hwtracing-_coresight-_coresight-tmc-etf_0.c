static int tmc_enable_etf_sink_sysfs(struct coresight_device *csdev)
{
int ret = 0;
bool used = false;
char *buf = NULL;
unsigned long flags;
struct tmc_drvdata *drvdata = dev_get_drvdata(csdev->dev.parent);


spin_lock_irqsave(&drvdata->spinlock, flags);
if (!drvdata->buf) {
spin_unlock_irqrestore(&drvdata->spinlock, flags);


buf = kzalloc(drvdata->size, GFP_KERNEL);
if (!buf)
return -ENOMEM;


spin_lock_irqsave(&drvdata->spinlock, flags);
}

if (drvdata->reading) {
ret = -EBUSY;
goto out;
}


if (drvdata->mode == CS_MODE_SYSFS) {
atomic_inc(csdev->refcnt);
goto out;
}


if (drvdata->buf) {
memset(drvdata->buf, 0, drvdata->size);
} else {
used = true;
drvdata->buf = buf;
}

ret = tmc_etb_enable_hw(drvdata);
if (!ret) {
drvdata->mode = CS_MODE_SYSFS;
atomic_inc(csdev->refcnt);
} else {

used = false;
}
out:
spin_unlock_irqrestore(&drvdata->spinlock, flags);


if (!used)
kfree(buf);

return ret;
}