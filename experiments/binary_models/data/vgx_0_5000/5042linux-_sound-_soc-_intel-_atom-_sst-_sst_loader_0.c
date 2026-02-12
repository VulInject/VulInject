static int sst_request_fw(struct intel_sst_drv *sst)
{
int retval = 0;
const struct firmware *fw;

retval = request_firmware(&fw, sst->firmware_name, sst->dev);
if (retval) {
dev_err(sst->dev, "request fw failed %d\n", retval);
return retval;
}
if (fw == NULL) {
dev_err(sst->dev, "fw is returning as null\n");
return -EINVAL;
}
mutex_lock(&sst->sst_lock);
retval = sst_cache_and_parse_fw(sst, fw);
mutex_unlock(&sst->sst_lock);

return retval;
}