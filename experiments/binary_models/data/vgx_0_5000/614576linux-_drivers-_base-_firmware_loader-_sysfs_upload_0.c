int fw_upload_start(struct fw_sysfs *fw_sysfs)
{
struct fw_priv *fw_priv = fw_sysfs->fw_priv;
struct device *fw_dev = &fw_sysfs->dev;
struct fw_upload_priv *fwlp;

if (!fw_sysfs->fw_upload_priv)
return 0;

if (!fw_priv->size) {
fw_free_paged_buf(fw_priv);
fw_state_init(fw_sysfs->fw_priv);
return 0;
}

fwlp = fw_sysfs->fw_upload_priv;
mutex_lock(&fwlp->lock);


if (fwlp->progress != FW_UPLOAD_PROG_IDLE) {
mutex_unlock(&fwlp->lock);
return -EBUSY;
}

get_device(fw_dev->parent); 

fwlp->progress = FW_UPLOAD_PROG_RECEIVING;
fwlp->err_code = 0;
fwlp->remaining_size = fw_priv->size;
fwlp->data = fw_priv->data;

pr_debug("%s: fw-%s fw_priv=%p data=%p size=%u\n",
__func__, fw_priv->fw_name,
fw_priv, fw_priv->data,
(unsigned int)fw_priv->size);

queue_work(system_long_wq, &fwlp->work);
mutex_unlock(&fwlp->lock);

return 0;
}