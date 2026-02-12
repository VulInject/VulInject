int nvram_write_os_partition(struct nvram_os_partition *part,
char *buff, int length,
unsigned int err_type,
unsigned int error_log_cnt)
{
int rc;
loff_t tmp_index;
struct err_log_info info;

if (part->index == -1)
return -ESPIPE;

if (length > part->size)
length = part->size;

info.error_type = cpu_to_be32(err_type);
info.seq_num = cpu_to_be32(error_log_cnt);

tmp_index = part->index;

rc = ppc_md.nvram_write((char *)&info, sizeof(info), &tmp_index);
if (rc <= 0) {
pr_err("%s: Failed nvram_write (%d)\n", __func__, rc);
return rc;
}

rc = ppc_md.nvram_write(buff, length, &tmp_index);
if (rc <= 0) {
pr_err("%s: Failed nvram_write (%d)\n", __func__, rc);
return rc;
}

return 0;
}