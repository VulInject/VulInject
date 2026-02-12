static int smsm_get_size_info(struct qcom_smsm *smsm)
{
size_t size;
struct {
u32 num_hosts;
u32 num_entries;
u32 reserved0;
u32 reserved1;
} *info;

info = qcom_smem_get(QCOM_SMEM_HOST_ANY, SMEM_SMSM_SIZE_INFO, &size);
if (IS_ERR(info) && PTR_ERR(info) != -ENOENT) {
if (PTR_ERR(info) != -EPROBE_DEFER)
dev_err(smsm->dev, "unable to retrieve smsm size info\n");
return PTR_ERR(info);
} else if (IS_ERR(info) || size != sizeof(*info)) {
dev_warn(smsm->dev, "no smsm size info, using defaults\n");
smsm->num_entries = SMSM_DEFAULT_NUM_ENTRIES;
smsm->num_hosts = SMSM_DEFAULT_NUM_HOSTS;
return 0;
}

smsm->num_entries = info->num_entries;
smsm->num_hosts = info->num_hosts;

dev_dbg(smsm->dev,
"found custom size of smsm: %d entries %d hosts\n",
smsm->num_entries, smsm->num_hosts);

return 0;
}